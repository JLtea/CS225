


## Score: 70/100 (70.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0

```
cs225/make/cs225.mk:99: [0;33m Looks like you are not on EWS. Be sure to test on EWS before the deadline. [0m

```
```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c letter.cpp -o .objs/letter.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c room.cpp -o .objs/room.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c allocator.cpp -o .objs/allocator.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c fileio.cpp -o .objs/fileio.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests.cpp -o .objs/tests/tests.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/letter.o .objs/room.o .objs/allocator.o .objs/fileio.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✗ - [0/5] - Test the constructor (valgrind)

- **Points**: 0 / 5

```
==23101== Memcheck, a memory error detector
==23101== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==23101== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==23101== Command: ./test -r xml "Test\ the\ constructor\ (valgrind)"
==23101== 
==23101== 
==23101== HEAP SUMMARY:
==23101==     in use at exit: 2,592 bytes in 11 blocks
==23101==   total heap usage: 2,492 allocs, 2,481 frees, 278,680 bytes allocated
==23101== 
==23101== 208 bytes in 1 blocks are definitely lost in loss record 1 of 3
==23101==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==23101==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==23101==    by 0x4077F2: Allocator::createLetterGroups() (allocator.cpp:29)
==23101==    by 0x4077A3: Allocator::Allocator(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (allocator.cpp:16)
==23101==    by 0x4402AD: ____C_A_T_C_H____T_E_S_T____0() (tests.cpp:13)
==23101==    by 0x476962: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==23101==    by 0x4670B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==23101==    by 0x466FEC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==23101==    by 0x463546: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==23101==    by 0x461B1E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==23101==    by 0x46AEB6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==23101==    by 0x469B52: Catch::Session::runInternal() (catch.hpp:10149)
==23101== 
==23101== 2,384 (512 direct, 1,872 indirect) bytes in 1 blocks are definitely lost in loss record 3 of 3
==23101==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==23101==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==23101==    by 0x407ADA: Allocator::loadRooms(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (allocator.cpp:53)
==23101==    by 0x4077BD: Allocator::Allocator(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (allocator.cpp:18)
==23101==    by 0x4402AD: ____C_A_T_C_H____T_E_S_T____0() (tests.cpp:13)
==23101==    by 0x476962: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==23101==    by 0x4670B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==23101==    by 0x466FEC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==23101==    by 0x463546: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==23101==    by 0x461B1E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==23101==    by 0x46AEB6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==23101==    by 0x469B52: Catch::Session::runInternal() (catch.hpp:10149)
==23101== 
==23101== LEAK SUMMARY:
==23101==    definitely lost: 720 bytes in 2 blocks
==23101==    indirectly lost: 1,872 bytes in 9 blocks
==23101==      possibly lost: 0 bytes in 0 blocks
==23101==    still reachable: 0 bytes in 0 blocks
==23101==         suppressed: 0 bytes in 0 blocks
==23101== 
==23101== For counts of detected and suppressed errors, rerun with: -v
==23101== ERROR SUMMARY: 2 errors from 2 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Test the constructor (valgrind)" tags="[valgrind][weight=5]" filename="tests/tests.cpp" line="10">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="0" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - Test allocate() (valgrind)

- **Points**: 0 / 5

```
==23103== Memcheck, a memory error detector
==23103== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==23103== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==23103== Command: ./test -r xml "Test\ allocate()\ (valgrind)"
==23103== 
==23103== 
==23103== HEAP SUMMARY:
==23103==     in use at exit: 2,592 bytes in 11 blocks
==23103==   total heap usage: 2,492 allocs, 2,481 frees, 276,488 bytes allocated
==23103== 
==23103== 208 bytes in 1 blocks are definitely lost in loss record 1 of 3
==23103==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==23103==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==23103==    by 0x4077F2: Allocator::createLetterGroups() (allocator.cpp:29)
==23103==    by 0x4077A3: Allocator::Allocator(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (allocator.cpp:16)
==23103==    by 0x44043D: ____C_A_T_C_H____T_E_S_T____2() (tests.cpp:20)
==23103==    by 0x476962: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==23103==    by 0x4670B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==23103==    by 0x466FEC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==23103==    by 0x463546: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==23103==    by 0x461B1E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==23103==    by 0x46AEB6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==23103==    by 0x469B52: Catch::Session::runInternal() (catch.hpp:10149)
==23103== 
==23103== 2,384 (512 direct, 1,872 indirect) bytes in 1 blocks are definitely lost in loss record 3 of 3
==23103==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==23103==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==23103==    by 0x407ADA: Allocator::loadRooms(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (allocator.cpp:53)
==23103==    by 0x4077BD: Allocator::Allocator(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (allocator.cpp:18)
==23103==    by 0x44043D: ____C_A_T_C_H____T_E_S_T____2() (tests.cpp:20)
==23103==    by 0x476962: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==23103==    by 0x4670B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==23103==    by 0x466FEC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==23103==    by 0x463546: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==23103==    by 0x461B1E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==23103==    by 0x46AEB6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==23103==    by 0x469B52: Catch::Session::runInternal() (catch.hpp:10149)
==23103== 
==23103== LEAK SUMMARY:
==23103==    definitely lost: 720 bytes in 2 blocks
==23103==    indirectly lost: 1,872 bytes in 9 blocks
==23103==      possibly lost: 0 bytes in 0 blocks
==23103==    still reachable: 0 bytes in 0 blocks
==23103==         suppressed: 0 bytes in 0 blocks
==23103== 
==23103== For counts of detected and suppressed errors, rerun with: -v
==23103== ERROR SUMMARY: 2 errors from 2 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Test allocate() (valgrind)" tags="[valgrind][weight=5]" filename="tests/tests.cpp" line="17">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="0" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/20] - Test printRooms() (valgrind)

- **Points**: 0 / 20

```
==23105== Memcheck, a memory error detector
==23105== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==23105== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==23105== Command: ./test -r xml "Test\ printRooms()\ (valgrind)"
==23105== 
==23105== 
==23105== HEAP SUMMARY:
==23105==     in use at exit: 2,592 bytes in 11 blocks
==23105==   total heap usage: 2,496 allocs, 2,485 frees, 277,208 bytes allocated
==23105== 
==23105== 208 bytes in 1 blocks are definitely lost in loss record 1 of 3
==23105==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==23105==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==23105==    by 0x4077F2: Allocator::createLetterGroups() (allocator.cpp:29)
==23105==    by 0x4077A3: Allocator::Allocator(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (allocator.cpp:16)
==23105==    by 0x440622: ____C_A_T_C_H____T_E_S_T____4() (tests.cpp:28)
==23105==    by 0x476962: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==23105==    by 0x4670B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==23105==    by 0x466FEC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==23105==    by 0x463546: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==23105==    by 0x461B1E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==23105==    by 0x46AEB6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==23105==    by 0x469B52: Catch::Session::runInternal() (catch.hpp:10149)
==23105== 
==23105== 2,384 (512 direct, 1,872 indirect) bytes in 1 blocks are definitely lost in loss record 3 of 3
==23105==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==23105==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==23105==    by 0x407ADA: Allocator::loadRooms(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (allocator.cpp:53)
==23105==    by 0x4077BD: Allocator::Allocator(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (allocator.cpp:18)
==23105==    by 0x440622: ____C_A_T_C_H____T_E_S_T____4() (tests.cpp:28)
==23105==    by 0x476962: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==23105==    by 0x4670B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==23105==    by 0x466FEC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==23105==    by 0x463546: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==23105==    by 0x461B1E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==23105==    by 0x46AEB6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==23105==    by 0x469B52: Catch::Session::runInternal() (catch.hpp:10149)
==23105== 
==23105== LEAK SUMMARY:
==23105==    definitely lost: 720 bytes in 2 blocks
==23105==    indirectly lost: 1,872 bytes in 9 blocks
==23105==      possibly lost: 0 bytes in 0 blocks
==23105==    still reachable: 0 bytes in 0 blocks
==23105==         suppressed: 0 bytes in 0 blocks
==23105== 
==23105== For counts of detected and suppressed errors, rerun with: -v
==23105== ERROR SUMMARY: 2 errors from 2 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Test printRooms() (valgrind)" tags="[valgrind][weight=20]" filename="tests/tests.cpp" line="25">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="0" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [30/30] - Test printRooms() for overall output

- **Points**: 30 / 30





### ✓ - [40/40] - Test printRooms() for individual output

- **Points**: 40 / 40





---

This report was generated for **tlee95** using **7a853368b56b32d9b3587837f3b88788317daac6** (from **September 16th 2019, 12:15:00 am**)
