#include "../cs225/catch/catch.hpp"
#include "tests_helper.h"

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

#include "../cs225/PNG.h"
#include "../cs225/HSLAPixel.h"

#include "../List.h"

using namespace cs225;


TEST_CASE("List::reverse", "[weight=5][part=2]") {
  PNG in;        in.readFromFile("tests/alma.png");
  PNG expected;  expected.readFromFile("tests/expected-reverse.png");

  List<HSLAPixel> list = imageToList(in);
  list.reverse();
  PNG out = listToImage(list, in.width(), in.height());
  out.writeToFile("actual-reverse.png");
  INFO("Output image `out` saved as actual-reverse.png");

  REQUIRE( out == expected );
}

TEST_CASE("List::reverseNth #1", "[weight=5][part=2]") {
  PNG in;        in.readFromFile("tests/alma.png");
  PNG expected;  expected.readFromFile("tests/expected-reverseN_1.png");

  List<HSLAPixel> list = imageToList(in);
  list.reverseNth(in.height() * 20);

  PNG out = listToImage(list, in.width(), in.height());
  out.writeToFile("actual-reverseN_1.png");
  INFO("Output image `out` saved as actual-reverseN_1.png");

  REQUIRE( out == expected );
}

TEST_CASE("List::reverseNth #2", "[weight=5][part=2]") {
  PNG in;        in.readFromFile("tests/alma.png");
  PNG expected;  expected.readFromFile("tests/expected-reverseN_2.png");

  List<HSLAPixel> list = imageToList(in);
  list.reverseNth(in.height() * 61);

  PNG out = listToImage(list, in.width(), in.height());
  out.writeToFile("actual-reverseN_2.png");
  INFO("Output image `out` saved as actual-reverseN_2.png");

  REQUIRE( out == expected );
}


TEST_CASE("List::merge", "[weight=10][part=2][valgrind]") {
  PNG im1;       im1.readFromFile("tests/merge1.png");
  PNG im2;       im2.readFromFile("tests/merge2.png");
  PNG expected;  expected.readFromFile("tests/expected-merge.png");

  PNG out(600, 400);

  vector<HSLAPixel> v1;
  for (unsigned i = 0; i < im1.width(); i++)
      for (unsigned j = 0; j < im1.height(); j++)
          v1.push_back(im1.getPixel(i, j));
  vector<HSLAPixel> v2;
  for (unsigned i = 0; i < im2.width(); i++)
      for (unsigned j = 0; j < im2.height(); j++)
          v2.push_back(im2.getPixel(i, j));
  List<HSLAPixel> l1(v1.begin(), v1.end());
  List<HSLAPixel> l2(v2.begin(), v2.end());
  l1.mergeWith(l2);
  REQUIRE(l1.size() == 600*400);
  vector<HSLAPixel> merged(l1.begin(), l1.end());
  unsigned x = 0;
  for (unsigned i = 0; i < merged.size(); i++) {
      int y = i % 400;
      out.getPixel(x, y) = merged[i];
      if (y == 399)
          x++;
  }

  out.writeToFile("actual-merge.png");
  INFO("Output image `out` saved as actual-merge.png");

  REQUIRE( out == expected );
}

TEST_CASE("List::sort simple #1", "[weight=2][part=2][valgrind]") {
    List<int> list;

    list.insertBack(2);
    list.insertBack(5);
    list.insertBack(2);

    list.sort();

    stringstream s;
    list.print(s);

    REQUIRE(s.str() == "< 2 2 5 >");
}

TEST_CASE("List::sort simple #2", "[weight=2][part=2][valgrind]") {
    List<std::string> list;

    list.insertBack("c");
    list.insertBack("b");
    list.insertBack("a");

    list.sort();

    stringstream s;
    list.print(s);

    REQUIRE(s.str() == "< a b c >");

}

TEST_CASE("List::sort #1", "[weight=5][part=2]") {
  PNG expected;  expected.readFromFile("tests/expected-sort_1.png");

  srand(225);

  BlockPNG b;
  b.readFromFile("tests/alma.png");

  int d = 60;
  vector<int> v = buildVector(b, d);
  random_shuffle(v.begin(), v.end());

  List<int> img_srt(v.begin(), v.end());
  img_srt.sort();
  vector<int> v2(img_srt.begin(), img_srt.end());

  PNG b3 = b.genImg(v2, d);
  b3.writeToFile("actual-sort_1.png");
  INFO("Output image `b3` saved as actual-sort_1.png");

  REQUIRE( b3 == expected );
}

TEST_CASE("List::sort #2", "[weight=5][part=2]") {
  PNG expected;  expected.readFromFile("tests/expected-sort_2.png");

  srand(225);

  BlockPNG b;
  b.readFromFile("tests/alma.png");

  int d = 1;
  vector<int> v = buildVector(b, d);
  random_shuffle(v.begin(), v.end());

  List<int> img_srt(v.begin(), v.end());
  img_srt.sort();
  vector<int> v2(img_srt.begin(), img_srt.end());

  PNG b3 = b.genImg(v2, d);
  b3.writeToFile("actual-sort_2.png");
  INFO("Output image `b3` saved as actual-sort_2.png");

  REQUIRE( b3 == expected );
}
TEST_CASE("custom merge", "[weight=10][part=2]") {
  List<unsigned> firstList;
  firstList.insertBack(1);
  firstList.insertBack(5);
  firstList.insertBack(6);
  firstList.insertBack(8);



  List<unsigned> secondList;
  secondList.insertBack(2);
  secondList.insertBack(3);
  secondList.insertBack(4);
  secondList.insertBack(7);
  secondList.insertBack(9);



  cout << firstList << endl;
  cout << secondList << endl;
  firstList.mergeWith(secondList);
  cout << firstList << endl;
  cout << secondList << endl;
}

TEST_CASE("custom sort", "[weight=10][part=2]") {
  List<unsigned> firstList;
  firstList.insertBack(6);
  firstList.insertBack(1);
  firstList.insertBack(5);
  firstList.insertBack(8);
  firstList.insertBack(4);
  firstList.insertBack(3);
  firstList.insertBack(7);
  firstList.insertBack(2);
  firstList.insertBack(9);

  cout << firstList << endl;
  firstList.sort();
  cout << firstList << endl;
}

TEST_CASE("f this", "[weight=2][part=2][valgrind]") {
    List<int> list;
    List<int> list2;
    List<int> list3;
    list.insertBack(2);
    list.insertBack(5);
    list.insertBack(2);

    stringstream s;
    list.print(s);

    cout<<"initial list" <<s.str()<<endl;
    s.str("");
    list2 = list.split(1);
    s.str("");
    list.print(s);
    cout<<"1st split list1"<< s.str()<<endl;
    s.str("");
    list2.print(s);
    cout<<"1st split list2"<< s.str()<<endl;

    list3 = list2.split(1);
    s.str("");
    list2.print(s);
    cout<<"2nd split list2"<< s.str()<<endl;
    s.str("");
    list3.print(s);
    cout<<"2nd split list3"<< s.str()<<endl;

    list2.mergeWith(list3);
    s.str("");
    list2.print(s);
    cout<<"1st merge"<< s.str()<<endl;

    list.mergeWith(list2);
    s.str("");
    list.print(s);
    cout<<"2nd merge (result)"<< s.str()<<endl;

    

}