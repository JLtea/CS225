


## Score: 3/57 (5.26%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0

```
cs225/make/cs225.mk:99: [0;33m Looks like you are not on EWS. Be sure to test on EWS before the deadline. [0m

```
```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part2.cpp -o .objs/tests/tests_part2.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part1.cpp -o .objs/tests/tests_part1.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part1_extra.cpp -o .objs/tests/tests_part1_extra.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests_part2.o .objs/tests/tests_part1.o .objs/tests/tests_part1_extra.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✗ - [0/1] - List::insertFront size

- **Points**: 0 / 1

```
==15564== Memcheck, a memory error detector
==15564== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==15564== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==15564== Command: ./test -r xml "List::insertFront\ size"
==15564== 
==15564== 
==15564== HEAP SUMMARY:
==15564==     in use at exit: 24 bytes in 1 blocks
==15564==   total heap usage: 2,113 allocs, 2,112 frees, 251,496 bytes allocated
==15564== 
==15564== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==15564==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==15564==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==15564==    by 0x427BE3: List<int>::insertFront(int const&) (List.hpp:60)
==15564==    by 0x421F97: ____C_A_T_C_H____T_E_S_T____0() (tests_part1.cpp:23)
==15564==    by 0x462E62: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==15564==    by 0x4535B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==15564==    by 0x4534EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==15564==    by 0x44FA46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==15564==    by 0x44E01E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==15564==    by 0x4573B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==15564==    by 0x456052: Catch::Session::runInternal() (catch.hpp:10149)
==15564==    by 0x455D1A: Catch::Session::run() (catch.hpp:10106)
==15564== 
==15564== LEAK SUMMARY:
==15564==    definitely lost: 24 bytes in 1 blocks
==15564==    indirectly lost: 0 bytes in 0 blocks
==15564==      possibly lost: 0 bytes in 0 blocks
==15564==    still reachable: 0 bytes in 0 blocks
==15564==         suppressed: 0 bytes in 0 blocks
==15564== 
==15564== For counts of detected and suppressed errors, rerun with: -v
==15564== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insertFront size" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="20">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/2] - List::insertBack size

- **Points**: 0 / 2


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insertBack size" tags="[part=1][valgrind][weight=2]" filename="tests/tests_part1.cpp" line="28">
      <Expression success="false" filename="tests/tests_part1.cpp" line="33">
        <Original>
          {Unknown expression after the reported line}
        </Original>
        <Expanded>
          {Unknown expression after the reported line}
        </Expanded>
        <FatalErrorCondition filename="tests/tests_part1.cpp" line="33">
          SIGSEGV - Segmentation violation signal
        </FatalErrorCondition>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="1" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/4] - List::insert contents

- **Points**: 0 / 4

```
==15570== Memcheck, a memory error detector
==15570== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==15570== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==15570== Command: ./test -r xml "List::insert\ contents"
==15570== 
==15570== 
==15570== HEAP SUMMARY:
==15570==     in use at exit: 24 bytes in 1 blocks
==15570==   total heap usage: 2,109 allocs, 2,108 frees, 251,400 bytes allocated
==15570== 
==15570== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==15570==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==15570==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==15570==    by 0x4282B3: List<int>::insertBack(int const&) (List.hpp:85)
==15570==    by 0x42251F: ____C_A_T_C_H____T_E_S_T____4() (tests_part1.cpp:40)
==15570==    by 0x462E62: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==15570==    by 0x4535B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==15570==    by 0x4534EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==15570==    by 0x44FA46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==15570==    by 0x44E01E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==15570==    by 0x4573B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==15570==    by 0x456052: Catch::Session::runInternal() (catch.hpp:10149)
==15570==    by 0x455D1A: Catch::Session::run() (catch.hpp:10106)
==15570== 
==15570== LEAK SUMMARY:
==15570==    definitely lost: 24 bytes in 1 blocks
==15570==    indirectly lost: 0 bytes in 0 blocks
==15570==      possibly lost: 0 bytes in 0 blocks
==15570==    still reachable: 0 bytes in 0 blocks
==15570==         suppressed: 0 bytes in 0 blocks
==15570== 
==15570== For counts of detected and suppressed errors, rerun with: -v
==15570== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insert contents" tags="[part=1][valgrind][weight=4]" filename="tests/tests_part1.cpp" line="36">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/15] - List::waterfall

- **Points**: 0 / 15


```
Fatal Error: SIGSEGV - Segmentation violation signal
```


### ✗ - [0/5] - List::split simple

- **Points**: 0 / 5

```
==15575== Memcheck, a memory error detector
==15575== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==15575== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==15575== Command: ./test -r xml "List::split\ simple"
==15575== 
==15575== Invalid read of size 8
==15575==    at 0x42824C: List<int>::_destroy() (List.hpp:46)
==15575==    by 0x427EA4: List<int>::~List() (List-given.hpp:68)
==15575==    by 0x4240C2: ____C_A_T_C_H____T_E_S_T____9() (tests_part1.cpp:84)
==15575==    by 0x462E62: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==15575==    by 0x4535B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==15575==    by 0x4534EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==15575==    by 0x44FA46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==15575==    by 0x44E01E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==15575==    by 0x4573B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==15575==    by 0x456052: Catch::Session::runInternal() (catch.hpp:10149)
==15575==    by 0x455D1A: Catch::Session::run() (catch.hpp:10106)
==15575==    by 0x455C99: Catch::Session::run(int, char**) (catch.hpp:10074)
==15575==  Address 0x609a070 is 0 bytes inside a block of size 24 free'd
==15575==    at 0x4C2ACDD: free (vg_replace_malloc.c:530)
==15575==    by 0x428242: List<int>::_destroy() (List.hpp:44)
==15575==    by 0x427EA4: List<int>::~List() (List-given.hpp:68)
==15575==    by 0x4240C2: ____C_A_T_C_H____T_E_S_T____9() (tests_part1.cpp:84)
==15575==    by 0x462E62: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==15575==    by 0x4535B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==15575==    by 0x4534EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==15575==    by 0x44FA46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==15575==    by 0x44E01E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==15575==    by 0x4573B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==15575==    by 0x456052: Catch::Session::runInternal() (catch.hpp:10149)
==15575==    by 0x455D1A: Catch::Session::run() (catch.hpp:10106)
==15575==  Block was alloc'd at
==15575==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==15575==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==15575==    by 0x4282B3: List<int>::insertBack(int const&) (List.hpp:85)
==15575==    by 0x4233AD: ____C_A_T_C_H____T_E_S_T____9() (tests_part1.cpp:71)
==15575==    by 0x462E62: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==15575==    by 0x4535B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==15575==    by 0x4534EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==15575==    by 0x44FA46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==15575==    by 0x44E01E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==15575==    by 0x4573B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==15575==    by 0x456052: Catch::Session::runInternal() (catch.hpp:10149)
==15575==    by 0x455D1A: Catch::Session::run() (catch.hpp:10106)
==15575== 
==15575== 
==15575== HEAP SUMMARY:
==15575==     in use at exit: 48 bytes in 2 blocks
==15575==   total heap usage: 1,971 allocs, 1,969 frees, 246,968 bytes allocated
==15575== 
==15575== 24 bytes in 1 blocks are definitely lost in loss record 1 of 2
==15575==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==15575==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==15575==    by 0x4282B3: List<int>::insertBack(int const&) (List.hpp:85)
==15575==    by 0x4233F1: ____C_A_T_C_H____T_E_S_T____9() (tests_part1.cpp:73)
==15575==    by 0x462E62: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==15575==    by 0x4535B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==15575==    by 0x4534EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==15575==    by 0x44FA46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==15575==    by 0x44E01E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==15575==    by 0x4573B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==15575==    by 0x456052: Catch::Session::runInternal() (catch.hpp:10149)
==15575==    by 0x455D1A: Catch::Session::run() (catch.hpp:10106)
==15575== 
==15575== 24 bytes in 1 blocks are definitely lost in loss record 2 of 2
==15575==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==15575==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==15575==    by 0x42C368: List<int>::_copy(List<int> const&) (List-given.hpp:38)
==15575==    by 0x42C2EC: List<int>::List(List<int> const&) (List-given.hpp:8)
==15575==    by 0x42C0D7: List<int>::split(int) (List-given.hpp:110)
==15575==    by 0x423430: ____C_A_T_C_H____T_E_S_T____9() (tests_part1.cpp:76)
==15575==    by 0x462E62: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==15575==    by 0x4535B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==15575==    by 0x4534EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==15575==    by 0x44FA46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==15575==    by 0x44E01E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==15575==    by 0x4573B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==15575== 
==15575== LEAK SUMMARY:
==15575==    definitely lost: 48 bytes in 2 blocks
==15575==    indirectly lost: 0 bytes in 0 blocks
==15575==      possibly lost: 0 bytes in 0 blocks
==15575==    still reachable: 0 bytes in 0 blocks
==15575==         suppressed: 0 bytes in 0 blocks
==15575== 
==15575== For counts of detected and suppressed errors, rerun with: -v
==15575== ERROR SUMMARY: 3 errors from 3 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::split simple" tags="[part=1][valgrind][weight=5]" filename="tests/tests_part1.cpp" line="68">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - List::split images

- **Points**: 0 / 5


```
Original: out1 == expected_1
Expanded: PNG(w=400, h=240, hash=8ad517ae866eb9)
==
PNG(w=400, h=240, hash=7f399ca10baeec7f)
```


### ✓ - [3/3] - List::_destroy empty list

- **Points**: 3 / 3

```
==15579== Memcheck, a memory error detector
==15579== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==15579== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==15579== Command: ./test -r xml "List::_destroy\ empty\ list"
==15579== 
==15579== 
==15579== HEAP SUMMARY:
==15579==     in use at exit: 0 bytes in 0 blocks
==15579==   total heap usage: 2,121 allocs, 2,121 frees, 252,328 bytes allocated
==15579== 
==15579== All heap blocks were freed -- no leaks are possible
==15579== 
==15579== For counts of detected and suppressed errors, rerun with: -v
==15579== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::_destroy empty list" tags="[part=1][valgrind][weight=3]" filename="tests/tests_part1.cpp" line="145">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - List::begin() returns an iterator to the front of the list

- **Points**: 0 / 1

```
==15583== Memcheck, a memory error detector
==15583== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==15583== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==15583== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==15583== 
==15583== 
==15583== HEAP SUMMARY:
==15583==     in use at exit: 24 bytes in 1 blocks
==15583==   total heap usage: 2,125 allocs, 2,124 frees, 256,664 bytes allocated
==15583== 
==15583== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==15583==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==15583==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==15583==    by 0x427BE3: List<int>::insertFront(int const&) (List.hpp:60)
==15583==    by 0x425CF7: ____C_A_T_C_H____T_E_S_T____18() (tests_part1.cpp:158)
==15583==    by 0x462E62: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==15583==    by 0x4535B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==15583==    by 0x4534EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==15583==    by 0x44FA46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==15583==    by 0x44E01E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==15583==    by 0x4573B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==15583==    by 0x456052: Catch::Session::runInternal() (catch.hpp:10149)
==15583==    by 0x455D1A: Catch::Session::run() (catch.hpp:10106)
==15583== 
==15583== LEAK SUMMARY:
==15583==    definitely lost: 24 bytes in 1 blocks
==15583==    indirectly lost: 0 bytes in 0 blocks
==15583==      possibly lost: 0 bytes in 0 blocks
==15583==    still reachable: 0 bytes in 0 blocks
==15583==         suppressed: 0 bytes in 0 blocks
==15583== 
==15583== For counts of detected and suppressed errors, rerun with: -v
==15583== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::begin() returns an iterator to the front of the list" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="156">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - List::ListIterator::operator++ advances the iterator (pre-increment)

- **Points**: 0 / 1

```
==15587== Memcheck, a memory error detector
==15587== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==15587== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==15587== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==15587== 
==15587== 
==15587== HEAP SUMMARY:
==15587==     in use at exit: 24 bytes in 1 blocks
==15587==   total heap usage: 2,125 allocs, 2,124 frees, 259,064 bytes allocated
==15587== 
==15587== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==15587==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==15587==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==15587==    by 0x42D083: List<unsigned int>::insertFront(unsigned int const&) (List.hpp:60)
==15587==    by 0x425FB1: ____C_A_T_C_H____T_E_S_T____20() (tests_part1.cpp:166)
==15587==    by 0x462E62: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==15587==    by 0x4535B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==15587==    by 0x4534EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==15587==    by 0x44FA46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==15587==    by 0x44E01E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==15587==    by 0x4573B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==15587==    by 0x456052: Catch::Session::runInternal() (catch.hpp:10149)
==15587==    by 0x455D1A: Catch::Session::run() (catch.hpp:10106)
==15587== 
==15587== LEAK SUMMARY:
==15587==    definitely lost: 24 bytes in 1 blocks
==15587==    indirectly lost: 0 bytes in 0 blocks
==15587==      possibly lost: 0 bytes in 0 blocks
==15587==    still reachable: 0 bytes in 0 blocks
==15587==         suppressed: 0 bytes in 0 blocks
==15587== 
==15587== For counts of detected and suppressed errors, rerun with: -v
==15587== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator++ advances the iterator (pre-increment)" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="164">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - List::ListIterator::operator++ advances the iterator (post-increment)

- **Points**: 0 / 1

```
==15591== Memcheck, a memory error detector
==15591== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==15591== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==15591== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==15591== 
==15591== 
==15591== HEAP SUMMARY:
==15591==     in use at exit: 24 bytes in 1 blocks
==15591==   total heap usage: 2,125 allocs, 2,124 frees, 259,064 bytes allocated
==15591== 
==15591== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==15591==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==15591==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==15591==    by 0x42D083: List<unsigned int>::insertFront(unsigned int const&) (List.hpp:60)
==15591==    by 0x426281: ____C_A_T_C_H____T_E_S_T____22() (tests_part1.cpp:175)
==15591==    by 0x462E62: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==15591==    by 0x4535B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==15591==    by 0x4534EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==15591==    by 0x44FA46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==15591==    by 0x44E01E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==15591==    by 0x4573B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==15591==    by 0x456052: Catch::Session::runInternal() (catch.hpp:10149)
==15591==    by 0x455D1A: Catch::Session::run() (catch.hpp:10106)
==15591== 
==15591== LEAK SUMMARY:
==15591==    definitely lost: 24 bytes in 1 blocks
==15591==    indirectly lost: 0 bytes in 0 blocks
==15591==      possibly lost: 0 bytes in 0 blocks
==15591==    still reachable: 0 bytes in 0 blocks
==15591==         suppressed: 0 bytes in 0 blocks
==15591== 
==15591== For counts of detected and suppressed errors, rerun with: -v
==15591== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator++ advances the iterator (post-increment)" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="173">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - List::ListIterator::operator++ (post-increment) returns an un-incremented iterator

- **Points**: 0 / 1

```
==15593== Memcheck, a memory error detector
==15593== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==15593== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==15593== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==15593== 
==15593== 
==15593== HEAP SUMMARY:
==15593==     in use at exit: 24 bytes in 1 blocks
==15593==   total heap usage: 2,125 allocs, 2,124 frees, 261,464 bytes allocated
==15593== 
==15593== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==15593==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==15593==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==15593==    by 0x42D083: List<unsigned int>::insertFront(unsigned int const&) (List.hpp:60)
==15593==    by 0x426581: ____C_A_T_C_H____T_E_S_T____24() (tests_part1.cpp:185)
==15593==    by 0x462E62: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==15593==    by 0x4535B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==15593==    by 0x4534EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==15593==    by 0x44FA46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==15593==    by 0x44E01E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==15593==    by 0x4573B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==15593==    by 0x456052: Catch::Session::runInternal() (catch.hpp:10149)
==15593==    by 0x455D1A: Catch::Session::run() (catch.hpp:10106)
==15593== 
==15593== LEAK SUMMARY:
==15593==    definitely lost: 24 bytes in 1 blocks
==15593==    indirectly lost: 0 bytes in 0 blocks
==15593==      possibly lost: 0 bytes in 0 blocks
==15593==    still reachable: 0 bytes in 0 blocks
==15593==         suppressed: 0 bytes in 0 blocks
==15593== 
==15593== For counts of detected and suppressed errors, rerun with: -v
==15593== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator++ (post-increment) returns an un-incremented iterator" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="183">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - List::ListIterator::operator-- moves the iterator backwards

- **Points**: 0 / 1

```
==15597== Memcheck, a memory error detector
==15597== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==15597== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==15597== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==15597== 
==15597== 
==15597== HEAP SUMMARY:
==15597==     in use at exit: 24 bytes in 1 blocks
==15597==   total heap usage: 2,125 allocs, 2,124 frees, 256,664 bytes allocated
==15597== 
==15597== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==15597==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==15597==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==15597==    by 0x42D083: List<unsigned int>::insertFront(unsigned int const&) (List.hpp:60)
==15597==    by 0x426861: ____C_A_T_C_H____T_E_S_T____26() (tests_part1.cpp:195)
==15597==    by 0x462E62: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==15597==    by 0x4535B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==15597==    by 0x4534EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==15597==    by 0x44FA46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==15597==    by 0x44E01E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==15597==    by 0x4573B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==15597==    by 0x456052: Catch::Session::runInternal() (catch.hpp:10149)
==15597==    by 0x455D1A: Catch::Session::run() (catch.hpp:10106)
==15597== 
==15597== LEAK SUMMARY:
==15597==    definitely lost: 24 bytes in 1 blocks
==15597==    indirectly lost: 0 bytes in 0 blocks
==15597==      possibly lost: 0 bytes in 0 blocks
==15597==    still reachable: 0 bytes in 0 blocks
==15597==         suppressed: 0 bytes in 0 blocks
==15597== 
==15597== For counts of detected and suppressed errors, rerun with: -v
==15597== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator-- moves the iterator backwards" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="193">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="4" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - List::ListIterator::operator-- (post-increment) returns an un-incremented iterator

- **Points**: 0 / 1

```
==15601== Memcheck, a memory error detector
==15601== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==15601== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==15601== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==15601== 
==15601== 
==15601== HEAP SUMMARY:
==15601==     in use at exit: 24 bytes in 1 blocks
==15601==   total heap usage: 2,125 allocs, 2,124 frees, 261,464 bytes allocated
==15601== 
==15601== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==15601==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==15601==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==15601==    by 0x42D083: List<unsigned int>::insertFront(unsigned int const&) (List.hpp:60)
==15601==    by 0x4271E1: ____C_A_T_C_H____T_E_S_T____28() (tests_part1.cpp:207)
==15601==    by 0x462E62: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==15601==    by 0x4535B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==15601==    by 0x4534EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==15601==    by 0x44FA46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==15601==    by 0x44E01E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==15601==    by 0x4573B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==15601==    by 0x456052: Catch::Session::runInternal() (catch.hpp:10149)
==15601==    by 0x455D1A: Catch::Session::run() (catch.hpp:10106)
==15601== 
==15601== LEAK SUMMARY:
==15601==    definitely lost: 24 bytes in 1 blocks
==15601==    indirectly lost: 0 bytes in 0 blocks
==15601==      possibly lost: 0 bytes in 0 blocks
==15601==    still reachable: 0 bytes in 0 blocks
==15601==         suppressed: 0 bytes in 0 blocks
==15601== 
==15601== For counts of detected and suppressed errors, rerun with: -v
==15601== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator-- (post-increment) returns an un-incremented iterator" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="205">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - List::ListIterator::end is reached

- **Points**: 0 / 1

```
==15605== Memcheck, a memory error detector
==15605== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==15605== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==15605== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==15605== 
==15605== 
==15605== HEAP SUMMARY:
==15605==     in use at exit: 24 bytes in 1 blocks
==15605==   total heap usage: 2,118 allocs, 2,117 frees, 254,096 bytes allocated
==15605== 
==15605== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==15605==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==15605==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==15605==    by 0x42D083: List<unsigned int>::insertFront(unsigned int const&) (List.hpp:60)
==15605==    by 0x42751D: ____C_A_T_C_H____T_E_S_T____30() (tests_part1.cpp:221)
==15605==    by 0x462E62: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==15605==    by 0x4535B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==15605==    by 0x4534EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==15605==    by 0x44FA46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==15605==    by 0x44E01E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==15605==    by 0x4573B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==15605==    by 0x456052: Catch::Session::runInternal() (catch.hpp:10149)
==15605==    by 0x455D1A: Catch::Session::run() (catch.hpp:10106)
==15605== 
==15605== LEAK SUMMARY:
==15605==    definitely lost: 24 bytes in 1 blocks
==15605==    indirectly lost: 0 bytes in 0 blocks
==15605==      possibly lost: 0 bytes in 0 blocks
==15605==    still reachable: 0 bytes in 0 blocks
==15605==         suppressed: 0 bytes in 0 blocks
==15605== 
==15605== For counts of detected and suppressed errors, rerun with: -v
==15605== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::end is reached" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="218">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - List::ListIterator::end is not ::begin in a non-empty list

- **Points**: 0 / 1

```
==15608== Memcheck, a memory error detector
==15608== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==15608== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==15608== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==15608== 
==15608== 
==15608== HEAP SUMMARY:
==15608==     in use at exit: 24 bytes in 1 blocks
==15608==   total heap usage: 2,118 allocs, 2,117 frees, 256,496 bytes allocated
==15608== 
==15608== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==15608==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==15608==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==15608==    by 0x42D083: List<unsigned int>::insertFront(unsigned int const&) (List.hpp:60)
==15608==    by 0x42783D: ____C_A_T_C_H____T_E_S_T____32() (tests_part1.cpp:235)
==15608==    by 0x462E62: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==15608==    by 0x4535B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==15608==    by 0x4534EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==15608==    by 0x44FA46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==15608==    by 0x44E01E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==15608==    by 0x4573B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==15608==    by 0x456052: Catch::Session::runInternal() (catch.hpp:10149)
==15608==    by 0x455D1A: Catch::Session::run() (catch.hpp:10106)
==15608== 
==15608== LEAK SUMMARY:
==15608==    definitely lost: 24 bytes in 1 blocks
==15608==    indirectly lost: 0 bytes in 0 blocks
==15608==      possibly lost: 0 bytes in 0 blocks
==15608==    still reachable: 0 bytes in 0 blocks
==15608==         suppressed: 0 bytes in 0 blocks
==15608== 
==15608== For counts of detected and suppressed errors, rerun with: -v
==15608== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::end is not ::begin in a non-empty list" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="232">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/4] - List::insert contents #2

- **Points**: 0 / 4

```
==15612== Memcheck, a memory error detector
==15612== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==15612== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==15612== Command: ./test -r xml "List::insert\ contents\ #2"
==15612== 
==15612== 
==15612== HEAP SUMMARY:
==15612==     in use at exit: 24 bytes in 1 blocks
==15612==   total heap usage: 2,124 allocs, 2,123 frees, 251,896 bytes allocated
==15612== 
==15612== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==15612==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==15612==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==15612==    by 0x4282B3: List<int>::insertBack(int const&) (List.hpp:85)
==15612==    by 0x42DA55: ____C_A_T_C_H____T_E_S_T____0() (tests_part1_extra.cpp:21)
==15612==    by 0x462E62: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==15612==    by 0x4535B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==15612==    by 0x4534EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==15612==    by 0x44FA46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==15612==    by 0x44E01E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==15612==    by 0x4573B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==15612==    by 0x456052: Catch::Session::runInternal() (catch.hpp:10149)
==15612==    by 0x455D1A: Catch::Session::run() (catch.hpp:10106)
==15612== 
==15612== LEAK SUMMARY:
==15612==    definitely lost: 24 bytes in 1 blocks
==15612==    indirectly lost: 0 bytes in 0 blocks
==15612==      possibly lost: 0 bytes in 0 blocks
==15612==    still reachable: 0 bytes in 0 blocks
==15612==         suppressed: 0 bytes in 0 blocks
==15612== 
==15612== For counts of detected and suppressed errors, rerun with: -v
==15612== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insert contents #2" tags="[part=1][valgrind][weight=4]" filename="tests/tests_part1_extra.cpp" line="14">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - List::split edge cases

- **Points**: 0 / 5


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::split edge cases" tags="[part=1][valgrind][weight=5]" filename="tests/tests_part1_extra.cpp" line="30">
      <FatalErrorCondition filename="tests/tests_part1_extra.cpp" line="30">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - List::waterfall simple

- **Points**: 0 / 5


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::waterfall simple" tags="[part=1][valgrind][weight=5]" filename="tests/tests_part1_extra.cpp" line="50">
      <FatalErrorCondition filename="tests/tests_part1_extra.cpp" line="50">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **tlee95** using **fff5e51ee3d33979147d265ea353cd3957d71ee5** (from **October 7th 2019, 12:15:00 am**)
