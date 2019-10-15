


## Score: 9/14 (64.29%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c huffman_tree.cpp -o .objs/huffman_tree.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c frequency.cpp -o .objs/frequency.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c encoder.cpp -o .objs/encoder.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c decoder.cpp -o .objs/decoder.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c binary_file_writer.cpp -o .objs/binary_file_writer.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c binary_file_reader.cpp -o .objs/binary_file_reader.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests.cpp -o .objs/tests/tests.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/huffman_tree.o .objs/frequency.o .objs/encoder.o .objs/decoder.o .objs/binary_file_writer.o .objs/binary_file_reader.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [1/1] - test_remove_smallest

- **Points**: 1 / 1





### ✓ - [1/1] - test_encoder_binary

- **Points**: 1 / 1





### ✓ - [1/1] - test_encoder_binary2

- **Points**: 1 / 1





### ✓ - [1/1] - test_encoder_writetree

- **Points**: 1 / 1





### ✓ - [1/1] - test_encoder_writetree2

- **Points**: 1 / 1





### ✓ - [1/1] - test_decode

- **Points**: 1 / 1





### ✓ - [1/1] - test_decode2

- **Points**: 1 / 1





### ✓ - [1/1] - test_decode_readtree

- **Points**: 1 / 1





### ✓ - [1/1] - test_decode_readtree2

- **Points**: 1 / 1





### ✗ - [0/5] - test_the_works

- **Points**: 0 / 5

```
==25586== Memcheck, a memory error detector
==25586== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25586== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==25586== Command: ./test -r xml "test_the_works"
==25586== 
==25586== 
==25586== HEAP SUMMARY:
==25586==     in use at exit: 40 bytes in 5 blocks
==25586==   total heap usage: 1,908 allocs, 1,903 frees, 305,544 bytes allocated
==25586== 
==25586== 40 bytes in 5 blocks are definitely lost in loss record 1 of 1
==25586==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==25586==    by 0x4E53F8B: operator new(unsigned long) (stdlib_new_delete.cpp:33)
==25586==    by 0x407896: HuffmanTree::buildTree(std::__1::vector<Frequency, std::__1::allocator<Frequency> > const&) (huffman_tree.cpp:161)
==25586==    by 0x407157: HuffmanTree::HuffmanTree(std::__1::vector<Frequency, std::__1::allocator<Frequency> >) (huffman_tree.cpp:18)
==25586==    by 0x4203DC: encoder::encodeFile(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (encoder.cpp:52)
==25586==    by 0x44D8B3: ____C_A_T_C_H____T_E_S_T____18() (tests.cpp:164)
==25586==    by 0x482AC2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==25586==    by 0x473216: Catch::TestCase::invoke() const (catch.hpp:10793)
==25586==    by 0x47314C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==25586==    by 0x46F6A6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==25586==    by 0x46DC7E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==25586==    by 0x477016: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==25586== 
==25586== LEAK SUMMARY:
==25586==    definitely lost: 40 bytes in 5 blocks
==25586==    indirectly lost: 0 bytes in 0 blocks
==25586==      possibly lost: 0 bytes in 0 blocks
==25586==    still reachable: 0 bytes in 0 blocks
==25586==         suppressed: 0 bytes in 0 blocks
==25586== 
==25586== For counts of detected and suppressed errors, rerun with: -v
==25586== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_the_works" tags="[valgrind][weight=5]" filename="tests/tests.cpp" line="162">
      <OverallResult success="true">
        <StdOut>
Printing generated HuffmanTree...
                                                ______________ 63 _____________                                                  
                                 ______________/                               \______________                                   
                        ______ 31 _____                                                       e:32                               
                 ______/               \______                                                                                   
            __ 15 _                           d:16                                                                               
         __/       \__                                                                                                           
       7              c:8                                                                                                        
     /   \                                                                                                                       
   3      b:4                                                                                                                    
  / \                                                                                                                            
\n:1a:2                                                                                                                          
Saving HuffmanTree to file...
        </StdOut>
      </OverallResult>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **tlee95** using **e38f5b7d1643729dde4f00f244a2333fa68a0b94** (from **October 14th 2019, 12:15:00 am**)
