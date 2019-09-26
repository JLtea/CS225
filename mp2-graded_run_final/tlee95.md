


## Score: 48/61 (78.69%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0

```
cs225/make/cs225.mk:99: [0;33m Looks like you are not on EWS. Be sure to test on EWS before the deadline. [0m

```
```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c Image.cpp -o .objs/Image.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c StickerSheet.cpp -o .objs/StickerSheet.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests-part1.cpp -o .objs/tests/tests-part1.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests-part2.cpp -o .objs/tests/tests-part2.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/Image.o .objs/StickerSheet.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests-part1.o .objs/tests/tests-part2.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [1/1] - Image lighten() lightens pixels by 0.1

- **Points**: 1 / 1





### ✓ - [1/1] - Image lighten() does not lighten a pixel above 1.0

- **Points**: 1 / 1





### ✓ - [1/1] - Image darken(0.2) darkens pixels by 0.2

- **Points**: 1 / 1





### ✓ - [1/1] - Image darken(0.2) does not darken a pixel below 0.0

- **Points**: 1 / 1





### ✓ - [1/1] - Image saturate() saturates a pixels by 0.1

- **Points**: 1 / 1





### ✓ - [1/1] - Image rotateColor(double) rotates the color

- **Points**: 1 / 1





### ✓ - [1/1] - Image rotateColor(double) keeps the hue in the range 0..360

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(2.0) results in the correct width/height

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(0.5) results in the correct width/height

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(2) scales pixel data in a reasonable way

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(0.5) scales pixel data in a reasonable way

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(10000\, 200) results in the correct width/height

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(720\, 10000) results in the correct width/height

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(240\, 50) results in the correct width/height

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(180\, 80) results in the correct width/height

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(10000\, 200) scales pixel data in a reasonable way

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(720\, 10000) scales pixel data in a reasonable way

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(240\, 50) scales pixel data in a reasonable way

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(180\, 80) scales pixel data in a reasonable way

- **Points**: 1 / 1





### ✓ - [3/3] - Image doesn't have any memory erorrs

- **Points**: 3 / 3

```
==3955== Memcheck, a memory error detector
==3955== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==3955== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==3955== Command: ./test -r xml "Image\ doesn't\ have\ any\ memory\ erorrs"
==3955== 
==3955== 
==3955== HEAP SUMMARY:
==3955==     in use at exit: 0 bytes in 0 blocks
==3955==   total heap usage: 2,589 allocs, 2,589 frees, 333,480 bytes allocated
==3955== 
==3955== All heap blocks were freed -- no leaks are possible
==3955== 
==3955== For counts of detected and suppressed errors, rerun with: -v
==3955== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Image doesn't have any memory erorrs" tags="[part=1][valgrind][weight=3]" filename="tests/tests-part1.cpp" line="231">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - A basic StickerSheet works

- **Points**: 5 / 5





### ✓ - [1/1] - StickerSheet::changeMaxStickers() does not discard stickers when resized larger

- **Points**: 1 / 1





### ✓ - [1/1] - StickerSheet::changeMaxStickers() does not discard original stickers when resized smaller

- **Points**: 1 / 1





### ✓ - [1/1] - StickerSheet::changeMaxStickers() can increase the number of stickers on an image

- **Points**: 1 / 1





### ✓ - [1/1] - StickerSheet::changeMaxStickers() discards stickers beyond the end of a smaller StickerSheet

- **Points**: 1 / 1





### ✓ - [1/1] - StickerSheet::removeSticker() can remove the last sticker

- **Points**: 1 / 1





### ✓ - [1/1] - StickerSheet::removeSticker() can remove the first sticker

- **Points**: 1 / 1





### ✓ - [1/1] - StickerSheet::removeSticker() can remove all stickers

- **Points**: 1 / 1





### ✓ - [1/1] - StickerSheet::getSticker() returns the sticker

- **Points**: 1 / 1





### ✓ - [1/1] - StickerSheet::getSticker() returns NULL for a non-existant sticker

- **Points**: 1 / 1





### ✓ - [1/1] - StickerSheet::getSticker() returns NULL for a removed sticker

- **Points**: 1 / 1





### ✓ - [1/1] - StickerSheet::translate() translates a sticker's location

- **Points**: 1 / 1





### ✓ - [1/1] - StickerSheet::translate() returns false for a non-existant sticker

- **Points**: 1 / 1





### ✓ - [5/5] - A complex StickerSheet is correct

- **Points**: 5 / 5





### ✓ - [2/2] - StickerSheet's copy constructor makes an independent copy

- **Points**: 2 / 2





### ✓ - [2/2] - StickerSheet's assignment operator makes an independent copy

- **Points**: 2 / 2





### ✗ - [0/3] - StickerSheet doesn't have any memory errors

- **Points**: 0 / 3

```
==3973== Memcheck, a memory error detector
==3973== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==3973== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==3973== Command: ./test -r xml "StickerSheet\ doesn't\ have\ any\ memory\ errors"
==3973== 
==3973== Conditional jump or move depends on uninitialised value(s)
==3973==    at 0x409773: StickerSheet::addSticker(Image&, unsigned int, unsigned int) (StickerSheet.cpp:58)
==3973==    by 0x4096B6: StickerSheet::StickerSheet(StickerSheet const&) (StickerSheet.cpp:25)
==3973==    by 0x43336C: ____C_A_T_C_H____T_E_S_T____32() (tests-part2.cpp:288)
==3973==    by 0x46B162: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==3973==    by 0x45B8B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==3973==    by 0x45B7EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==3973==    by 0x457D46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==3973==    by 0x45631E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==3973==    by 0x45F6B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==3973==    by 0x45E352: Catch::Session::runInternal() (catch.hpp:10149)
==3973==    by 0x45E01A: Catch::Session::run() (catch.hpp:10106)
==3973==    by 0x45DF99: Catch::Session::run(int, char**) (catch.hpp:10074)
==3973== 
==3973== Use of uninitialised value of size 8
==3973==    at 0x409789: StickerSheet::addSticker(Image&, unsigned int, unsigned int) (StickerSheet.cpp:59)
==3973==    by 0x4096B6: StickerSheet::StickerSheet(StickerSheet const&) (StickerSheet.cpp:25)
==3973==    by 0x43336C: ____C_A_T_C_H____T_E_S_T____32() (tests-part2.cpp:288)
==3973==    by 0x46B162: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==3973==    by 0x45B8B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==3973==    by 0x45B7EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==3973==    by 0x457D46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==3973==    by 0x45631E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==3973==    by 0x45F6B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==3973==    by 0x45E352: Catch::Session::runInternal() (catch.hpp:10149)
==3973==    by 0x45E01A: Catch::Session::run() (catch.hpp:10106)
==3973==    by 0x45DF99: Catch::Session::run(int, char**) (catch.hpp:10074)
==3973== 
==3973== Use of uninitialised value of size 8
==3973==    at 0x409798: StickerSheet::addSticker(Image&, unsigned int, unsigned int) (StickerSheet.cpp:60)
==3973==    by 0x4096B6: StickerSheet::StickerSheet(StickerSheet const&) (StickerSheet.cpp:25)
==3973==    by 0x43336C: ____C_A_T_C_H____T_E_S_T____32() (tests-part2.cpp:288)
==3973==    by 0x46B162: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==3973==    by 0x45B8B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==3973==    by 0x45B7EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==3973==    by 0x457D46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==3973==    by 0x45631E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==3973==    by 0x45F6B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==3973==    by 0x45E352: Catch::Session::runInternal() (catch.hpp:10149)
==3973==    by 0x45E01A: Catch::Session::run() (catch.hpp:10106)
==3973==    by 0x45DF99: Catch::Session::run(int, char**) (catch.hpp:10074)
==3973== 
==3973== Use of uninitialised value of size 8
==3973==    at 0x4097A6: StickerSheet::addSticker(Image&, unsigned int, unsigned int) (StickerSheet.cpp:61)
==3973==    by 0x4096B6: StickerSheet::StickerSheet(StickerSheet const&) (StickerSheet.cpp:25)
==3973==    by 0x43336C: ____C_A_T_C_H____T_E_S_T____32() (tests-part2.cpp:288)
==3973==    by 0x46B162: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==3973==    by 0x45B8B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==3973==    by 0x45B7EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==3973==    by 0x457D46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==3973==    by 0x45631E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==3973==    by 0x45F6B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==3973==    by 0x45E352: Catch::Session::runInternal() (catch.hpp:10149)
==3973==    by 0x45E01A: Catch::Session::run() (catch.hpp:10106)
==3973==    by 0x45DF99: Catch::Session::run(int, char**) (catch.hpp:10074)
==3973== 
==3973== Conditional jump or move depends on uninitialised value(s)
==3973==    at 0x409C71: StickerSheet::changeMaxStickers(unsigned int) (StickerSheet.cpp:96)
==3973==    by 0x4330B8: stickersheetStressTest(StickerSheet&) (tests-part2.cpp:266)
==3973==    by 0x4333F7: ____C_A_T_C_H____T_E_S_T____32() (tests-part2.cpp:299)
==3973==    by 0x46B162: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==3973==    by 0x45B8B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==3973==    by 0x45B7EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==3973==    by 0x457D46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==3973==    by 0x45631E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==3973==    by 0x45F6B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==3973==    by 0x45E352: Catch::Session::runInternal() (catch.hpp:10149)
==3973==    by 0x45E01A: Catch::Session::run() (catch.hpp:10106)
==3973==    by 0x45DF99: Catch::Session::run(int, char**) (catch.hpp:10074)
==3973== 
==3973== Conditional jump or move depends on uninitialised value(s)
==3973==    at 0x409E1B: StickerSheet::changeMaxStickers(unsigned int) (StickerSheet.cpp:111)
==3973==    by 0x4330B8: stickersheetStressTest(StickerSheet&) (tests-part2.cpp:266)
==3973==    by 0x4333F7: ____C_A_T_C_H____T_E_S_T____32() (tests-part2.cpp:299)
==3973==    by 0x46B162: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==3973==    by 0x45B8B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==3973==    by 0x45B7EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==3973==    by 0x457D46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==3973==    by 0x45631E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==3973==    by 0x45F6B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==3973==    by 0x45E352: Catch::Session::runInternal() (catch.hpp:10149)
==3973==    by 0x45E01A: Catch::Session::run() (catch.hpp:10106)
==3973==    by 0x45DF99: Catch::Session::run(int, char**) (catch.hpp:10074)
==3973== 
==3973== Conditional jump or move depends on uninitialised value(s)
==3973==    at 0x409A18: StickerSheet::removeSticker(unsigned int) (StickerSheet.cpp:129)
==3973==    by 0x4330C8: stickersheetStressTest(StickerSheet&) (tests-part2.cpp:269)
==3973==    by 0x4333F7: ____C_A_T_C_H____T_E_S_T____32() (tests-part2.cpp:299)
==3973==    by 0x46B162: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==3973==    by 0x45B8B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==3973==    by 0x45B7EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==3973==    by 0x457D46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==3973==    by 0x45631E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==3973==    by 0x45F6B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==3973==    by 0x45E352: Catch::Session::runInternal() (catch.hpp:10149)
==3973==    by 0x45E01A: Catch::Session::run() (catch.hpp:10106)
==3973==    by 0x45DF99: Catch::Session::run(int, char**) (catch.hpp:10074)
==3973== 
==3973== Conditional jump or move depends on uninitialised value(s)
==3973==    at 0x409A69: StickerSheet::removeSticker(unsigned int) (StickerSheet.cpp:131)
==3973==    by 0x4330C8: stickersheetStressTest(StickerSheet&) (tests-part2.cpp:269)
==3973==    by 0x4333F7: ____C_A_T_C_H____T_E_S_T____32() (tests-part2.cpp:299)
==3973==    by 0x46B162: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==3973==    by 0x45B8B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==3973==    by 0x45B7EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==3973==    by 0x457D46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==3973==    by 0x45631E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==3973==    by 0x45F6B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==3973==    by
```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="StickerSheet doesn't have any memory errors" tags="[part=2][timeout=20000][valgrind][weight=3]" filename="tests/tests-part2.cpp" line="279">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/10] - myImage.png exists and contains stickers

- **Points**: 0 / 10


```
Original: stickers >= 1
Expanded: 0 >= 1
```


---

This report was generated for **tlee95** using **0ad89cded4b0f78ad3a1250723bfd7d4b4866aea** (from **September 25th 2019, 12:15:00 am**)
