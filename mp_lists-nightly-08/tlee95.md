


## Score: 3/114 (2.63%)


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
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/test_part2_extra.cpp -o .objs/tests/test_part2_extra.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part1_extra.cpp -o .objs/tests/tests_part1_extra.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests_part2.o .objs/tests/tests_part1.o .objs/tests/test_part2_extra.o .objs/tests/tests_part1_extra.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✗ - [0/5] - List::reverse

- **Points**: 0 / 5


```
Original: out == expected
Expanded: PNG(w=900, h=600, hash=40047bc67c3dd6c7)
==
PNG(w=900, h=600, hash=3fa66744920ffb90)
```


### ✗ - [0/5] - List::reverseNth #1

- **Points**: 0 / 5


```
Original: out == expected
Expanded: PNG(w=900, h=600, hash=40047bc67c3dd6c7)
==
PNG(w=900, h=600, hash=3fa66744920ffb90)
```


### ✗ - [0/5] - List::reverseNth #2

- **Points**: 0 / 5


```
Original: out == expected
Expanded: PNG(w=900, h=600, hash=40047bc67c3dd6c7)
==
PNG(w=900, h=600, hash=3fa66744920ffb90)
```


### ✗ - [0/10] - List::merge

- **Points**: 0 / 10


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::merge" tags="[part=2][valgrind][weight=10]" filename="tests/tests_part2.cpp" line="59">
      <Info>
        Output image `out` saved as actual-merge.png
      </Info>
      <Expression success="false" type="REQUIRE" filename="tests/tests_part2.cpp" line="90">
        <Original>
          out == expected
        </Original>
        <Expanded>
          PNG(w=600, h=400, hash=0)
==
PNG(w=600, h=400, hash=0)
        </Expanded>
      </Expression>
      <Info>
        Output image `out` saved as actual-merge.png
      </Info>
      <Expression success="false" filename="tests/tests_part2.cpp" line="90">
        <Original>
          {Unknown expression after the reported line}
        </Original>
        <Expanded>
          {Unknown expression after the reported line}
        </Expanded>
        <FatalErrorCondition filename="tests/tests_part2.cpp" line="90">
          SIGSEGV - Segmentation violation signal
        </FatalErrorCondition>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="1" failures="2" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="2" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/2] - List::sort simple #1

- **Points**: 0 / 2


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #1" tags="[part=2][valgrind][weight=2]" filename="tests/tests_part2.cpp" line="93">
      <FatalErrorCondition filename="tests/tests_part2.cpp" line="93">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/2] - List::sort simple #2

- **Points**: 0 / 2


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #2" tags="[part=2][valgrind][weight=2]" filename="tests/tests_part2.cpp" line="108">
      <FatalErrorCondition filename="tests/tests_part2.cpp" line="108">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - List::sort #1

- **Points**: 0 / 5


```
Fatal Error: SIGSEGV - Segmentation violation signal
```


### ✗ - [0/5] - List::sort #2

- **Points**: 0 / 5


```
Fatal Error: SIGSEGV - Segmentation violation signal
```


### ✗ - [0/1] - List::insertFront size

- **Points**: 0 / 1

```
==9529== Memcheck, a memory error detector
==9529== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==9529== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==9529== Command: ./test -r xml "List::insertFront\ size"
==9529== 
==9529== 
==9529== HEAP SUMMARY:
==9529==     in use at exit: 24 bytes in 1 blocks
==9529==   total heap usage: 2,328 allocs, 2,327 frees, 267,368 bytes allocated
==9529== 
==9529== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==9529==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==9529==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==9529==    by 0x436353: List<int>::insertFront(int const&) (List.hpp:60)
==9529==    by 0x430817: ____C_A_T_C_H____T_E_S_T____0() (tests_part1.cpp:23)
==9529==    by 0x472FD2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==9529==    by 0x463726: Catch::TestCase::invoke() const (catch.hpp:10793)
==9529==    by 0x46365C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==9529==    by 0x45FBB6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==9529==    by 0x45E18E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==9529==    by 0x467526: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==9529==    by 0x4661C2: Catch::Session::runInternal() (catch.hpp:10149)
==9529==    by 0x465E8A: Catch::Session::run() (catch.hpp:10106)
==9529== 
==9529== LEAK SUMMARY:
==9529==    definitely lost: 24 bytes in 1 blocks
==9529==    indirectly lost: 0 bytes in 0 blocks
==9529==      possibly lost: 0 bytes in 0 blocks
==9529==    still reachable: 0 bytes in 0 blocks
==9529==         suppressed: 0 bytes in 0 blocks
==9529== 
==9529== For counts of detected and suppressed errors, rerun with: -v
==9529== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

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
==9533== Memcheck, a memory error detector
==9533== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==9533== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==9533== Command: ./test -r xml "List::insert\ contents"
==9533== 
==9533== 
==9533== HEAP SUMMARY:
==9533==     in use at exit: 24 bytes in 1 blocks
==9533==   total heap usage: 2,324 allocs, 2,323 frees, 267,272 bytes allocated
==9533== 
==9533== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==9533==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==9533==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==9533==    by 0x42AC33: List<int>::insertBack(int const&) (List.hpp:85)
==9533==    by 0x430D9F: ____C_A_T_C_H____T_E_S_T____4() (tests_part1.cpp:40)
==9533==    by 0x472FD2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==9533==    by 0x463726: Catch::TestCase::invoke() const (catch.hpp:10793)
==9533==    by 0x46365C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==9533==    by 0x45FBB6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==9533==    by 0x45E18E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==9533==    by 0x467526: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==9533==    by 0x4661C2: Catch::Session::runInternal() (catch.hpp:10149)
==9533==    by 0x465E8A: Catch::Session::run() (catch.hpp:10106)
==9533== 
==9533== LEAK SUMMARY:
==9533==    definitely lost: 24 bytes in 1 blocks
==9533==    indirectly lost: 0 bytes in 0 blocks
==9533==      possibly lost: 0 bytes in 0 blocks
==9533==    still reachable: 0 bytes in 0 blocks
==9533==         suppressed: 0 bytes in 0 blocks
==9533== 
==9533== For counts of detected and suppressed errors, rerun with: -v
==9533== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

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
==9560== Memcheck, a memory error detector
==9560== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==9560== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==9560== Command: ./test -r xml "List::split\ simple"
==9560== 
==9560== Invalid read of size 8
==9560==    at 0x42D31C: List<int>::_destroy() (List.hpp:46)
==9560==    by 0x42AFA4: List<int>::~List() (List-given.hpp:68)
==9560==    by 0x432942: ____C_A_T_C_H____T_E_S_T____9() (tests_part1.cpp:84)
==9560==    by 0x472FD2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==9560==    by 0x463726: Catch::TestCase::invoke() const (catch.hpp:10793)
==9560==    by 0x46365C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==9560==    by 0x45FBB6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==9560==    by 0x45E18E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==9560==    by 0x467526: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==9560==    by 0x4661C2: Catch::Session::runInternal() (catch.hpp:10149)
==9560==    by 0x465E8A: Catch::Session::run() (catch.hpp:10106)
==9560==    by 0x465E09: Catch::Session::run(int, char**) (catch.hpp:10074)
==9560==  Address 0x60a1600 is 0 bytes inside a block of size 24 free'd
==9560==    at 0x4C2ACDD: free (vg_replace_malloc.c:530)
==9560==    by 0x42D312: List<int>::_destroy() (List.hpp:44)
==9560==    by 0x42AFA4: List<int>::~List() (List-given.hpp:68)
==9560==    by 0x432942: ____C_A_T_C_H____T_E_S_T____9() (tests_part1.cpp:84)
==9560==    by 0x472FD2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==9560==    by 0x463726: Catch::TestCase::invoke() const (catch.hpp:10793)
==9560==    by 0x46365C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==9560==    by 0x45FBB6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==9560==    by 0x45E18E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==9560==    by 0x467526: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==9560==    by 0x4661C2: Catch::Session::runInternal() (catch.hpp:10149)
==9560==    by 0x465E8A: Catch::Session::run() (catch.hpp:10106)
==9560==  Block was alloc'd at
==9560==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==9560==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==9560==    by 0x42AC33: List<int>::insertBack(int const&) (List.hpp:85)
==9560==    by 0x431C2D: ____C_A_T_C_H____T_E_S_T____9() (tests_part1.cpp:71)
==9560==    by 0x472FD2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==9560==    by 0x463726: Catch::TestCase::invoke() const (catch.hpp:10793)
==9560==    by 0x46365C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==9560==    by 0x45FBB6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==9560==    by 0x45E18E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==9560==    by 0x467526: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==9560==    by 0x4661C2: Catch::Session::runInternal() (catch.hpp:10149)
==9560==    by 0x465E8A: Catch::Session::run() (catch.hpp:10106)
==9560== 
==9560== 
==9560== HEAP SUMMARY:
==9560==     in use at exit: 48 bytes in 2 blocks
==9560==   total heap usage: 2,186 allocs, 2,184 frees, 262,840 bytes allocated
==9560== 
==9560== 24 bytes in 1 blocks are definitely lost in loss record 1 of 2
==9560==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==9560==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==9560==    by 0x42AC33: List<int>::insertBack(int const&) (List.hpp:85)
==9560==    by 0x431C71: ____C_A_T_C_H____T_E_S_T____9() (tests_part1.cpp:73)
==9560==    by 0x472FD2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==9560==    by 0x463726: Catch::TestCase::invoke() const (catch.hpp:10793)
==9560==    by 0x46365C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==9560==    by 0x45FBB6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==9560==    by 0x45E18E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==9560==    by 0x467526: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==9560==    by 0x4661C2: Catch::Session::runInternal() (catch.hpp:10149)
==9560==    by 0x465E8A: Catch::Session::run() (catch.hpp:10106)
==9560== 
==9560== 24 bytes in 1 blocks are definitely lost in loss record 2 of 2
==9560==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==9560==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==9560==    by 0x436E78: List<int>::_copy(List<int> const&) (List-given.hpp:38)
==9560==    by 0x436DFC: List<int>::List(List<int> const&) (List-given.hpp:8)
==9560==    by 0x436BE7: List<int>::split(int) (List-given.hpp:110)
==9560==    by 0x431CB0: ____C_A_T_C_H____T_E_S_T____9() (tests_part1.cpp:76)
==9560==    by 0x472FD2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==9560==    by 0x463726: Catch::TestCase::invoke() const (catch.hpp:10793)
==9560==    by 0x46365C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==9560==    by 0x45FBB6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==9560==    by 0x45E18E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==9560==    by 0x467526: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==9560== 
==9560== LEAK SUMMARY:
==9560==    definitely lost: 48 bytes in 2 blocks
==9560==    indirectly lost: 0 bytes in 0 blocks
==9560==      possibly lost: 0 bytes in 0 blocks
==9560==    still reachable: 0 bytes in 0 blocks
==9560==         suppressed: 0 bytes in 0 blocks
==9560== 
==9560== For counts of detected and suppressed errors, rerun with: -v
==9560== ERROR SUMMARY: 3 errors from 3 contexts (suppressed: 0 from 0)

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
==9566== Memcheck, a memory error detector
==9566== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==9566== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==9566== Command: ./test -r xml "List::_destroy\ empty\ list"
==9566== 
==9566== 
==9566== HEAP SUMMARY:
==9566==     in use at exit: 0 bytes in 0 blocks
==9566==   total heap usage: 2,336 allocs, 2,336 frees, 268,200 bytes allocated
==9566== 
==9566== All heap blocks were freed -- no leaks are possible
==9566== 
==9566== For counts of detected and suppressed errors, rerun with: -v
==9566== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==9570== Memcheck, a memory error detector
==9570== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==9570== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==9570== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==9570== 
==9570== 
==9570== HEAP SUMMARY:
==9570==     in use at exit: 24 bytes in 1 blocks
==9570==   total heap usage: 2,340 allocs, 2,339 frees, 272,536 bytes allocated
==9570== 
==9570== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==9570==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==9570==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==9570==    by 0x436353: List<int>::insertFront(int const&) (List.hpp:60)
==9570==    by 0x434577: ____C_A_T_C_H____T_E_S_T____18() (tests_part1.cpp:158)
==9570==    by 0x472FD2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==9570==    by 0x463726: Catch::TestCase::invoke() const (catch.hpp:10793)
==9570==    by 0x46365C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==9570==    by 0x45FBB6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==9570==    by 0x45E18E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==9570==    by 0x467526: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==9570==    by 0x4661C2: Catch::Session::runInternal() (catch.hpp:10149)
==9570==    by 0x465E8A: Catch::Session::run() (catch.hpp:10106)
==9570== 
==9570== LEAK SUMMARY:
==9570==    definitely lost: 24 bytes in 1 blocks
==9570==    indirectly lost: 0 bytes in 0 blocks
==9570==      possibly lost: 0 bytes in 0 blocks
==9570==    still reachable: 0 bytes in 0 blocks
==9570==         suppressed: 0 bytes in 0 blocks
==9570== 
==9570== For counts of detected and suppressed errors, rerun with: -v
==9570== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

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
==9573== Memcheck, a memory error detector
==9573== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==9573== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==9573== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==9573== 
==9573== 
==9573== HEAP SUMMARY:
==9573==     in use at exit: 24 bytes in 1 blocks
==9573==   total heap usage: 2,340 allocs, 2,339 frees, 274,936 bytes allocated
==9573== 
==9573== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==9573==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==9573==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==9573==    by 0x437A33: List<unsigned int>::insertFront(unsigned int const&) (List.hpp:60)
==9573==    by 0x434831: ____C_A_T_C_H____T_E_S_T____20() (tests_part1.cpp:166)
==9573==    by 0x472FD2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==9573==    by 0x463726: Catch::TestCase::invoke() const (catch.hpp:10793)
==9573==    by 0x46365C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==9573==    by 0x45FBB6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==9573==    by 0x45E18E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==9573==    by 0x467526: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==9573==    by 0x4661C2: Catch::Session::runInternal() (catch.hpp:10149)
==9573==    by 0x465E8A: Catch::Session::run() (catch.hpp:10106)
==9573== 
==9573== LEAK SUMMARY:
==9573==    definitely lost: 24 bytes in 1 blocks
==9573==    indirectly lost: 0 bytes in 0 blocks
==9573==      possibly lost: 0 bytes in 0 blocks
==9573==    still reachable: 0 bytes in 0 blocks
==9573==         suppressed: 0 bytes in 0 blocks
==9573== 
==9573== For counts of detected and suppressed errors, rerun with: -v
==9573== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

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
==9577== Memcheck, a memory error detector
==9577== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==9577== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==9577== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==9577== 
==9577== 
==9577== HEAP SUMMARY:
==9577==     in use at exit: 24 bytes in 1 blocks
==9577==   total heap usage: 2,340 allocs, 2,339 frees, 274,936 bytes allocated
==9577== 
==9577== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==9577==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==9577==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==9577==    by 0x437A33: List<unsigned int>::insertFront(unsigned int const&) (List.hpp:60)
==9577==    by 0x434B01: ____C_A_T_C_H____T_E_S_T____22() (tests_part1.cpp:175)
==9577==    by 0x472FD2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==9577==    by 0x463726: Catch::TestCase::invoke() const (catch.hpp:10793)
==9577==    by 0x46365C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==9577==    by 0x45FBB6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==9577==    by 0x45E18E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==9577==    by 0x467526: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==9577==    by 0x4661C2: Catch::Session::runInternal() (catch.hpp:10149)
==9577==    by 0x465E8A: Catch::Session::run() (catch.hpp:10106)
==9577== 
==9577== LEAK SUMMARY:
==9577==    definitely lost: 24 bytes in 1 blocks
==9577==    indirectly lost: 0 bytes in 0 blocks
==9577==      possibly lost: 0 bytes in 0 blocks
==9577==    still reachable: 0 bytes in 0 blocks
==9577==         suppressed: 0 bytes in 0 blocks
==9577== 
==9577== For counts of detected and suppressed errors, rerun with: -v
==9577== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

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
==9582== Memcheck, a memory error detector
==9582== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==9582== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==9582== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==9582== 
==9582== 
==9582== HEAP SUMMARY:
==9582==     in use at exit: 24 bytes in 1 blocks
==9582==   total heap usage: 2,340 allocs, 2,339 frees, 277,336 bytes allocated
==9582== 
==9582== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==9582==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==9582==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==9582==    by 0x437A33: List<unsigned int>::insertFront(unsigned int const&) (List.hpp:60)
==9582==    by 0x434E01: ____C_A_T_C_H____T_E_S_T____24() (tests_part1.cpp:185)
==9582==    by 0x472FD2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==9582==    by 0x463726: Catch::TestCase::invoke() const (catch.hpp:10793)
==9582==    by 0x46365C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==9582==    by 0x45FBB6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==9582==    by 0x45E18E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==9582==    by 0x467526: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==9582==    by 0x4661C2: Catch::Session::runInternal() (catch.hpp:10149)
==9582==    by 0x465E8A: Catch::Session::run() (catch.hpp:10106)
==9582== 
==9582== LEAK SUMMARY:
==9582==    definitely lost: 24 bytes in 1 blocks
==9582==    indirectly lost: 0 bytes in 0 blocks
==9582==      possibly lost: 0 bytes in 0 blocks
==9582==    still reachable: 0 bytes in 0 blocks
==9582==         suppressed: 0 bytes in 0 blocks
==9582== 
==9582== For counts of detected and suppressed errors, rerun with: -v
==9582== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

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
==9586== Memcheck, a memory error detector
==9586== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==9586== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==9586== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==9586== 
==9586== 
==9586== HEAP SUMMARY:
==9586==     in use at exit: 24 bytes in 1 blocks
==9586==   total heap usage: 2,340 allocs, 2,339 frees, 272,536 bytes allocated
==9586== 
==9586== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==9586==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==9586==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==9586==    by 0x437A33: List<unsigned int>::insertFront(unsigned int const&) (List.hpp:60)
==9586==    by 0x4350E1: ____C_A_T_C_H____T_E_S_T____26() (tests_part1.cpp:195)
==9586==    by 0x472FD2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==9586==    by 0x463726: Catch::TestCase::invoke() const (catch.hpp:10793)
==9586==    by 0x46365C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==9586==    by 0x45FBB6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==9586==    by 0x45E18E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==9586==    by 0x467526: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==9586==    by 0x4661C2: Catch::Session::runInternal() (catch.hpp:10149)
==9586==    by 0x465E8A: Catch::Session::run() (catch.hpp:10106)
==9586== 
==9586== LEAK SUMMARY:
==9586==    definitely lost: 24 bytes in 1 blocks
==9586==    indirectly lost: 0 bytes in 0 blocks
==9586==      possibly lost: 0 bytes in 0 blocks
==9586==    still reachable: 0 bytes in 0 blocks
==9586==         suppressed: 0 bytes in 0 blocks
==9586== 
==9586== For counts of detected and suppressed errors, rerun with: -v
==9586== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

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
==9590== Memcheck, a memory error detector
==9590== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==9590== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==9590== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==9590== 
==9590== 
==9590== HEAP SUMMARY:
==9590==     in use at exit: 24 bytes in 1 blocks
==9590==   total heap usage: 2,340 allocs, 2,339 frees, 277,336 bytes allocated
==9590== 
==9590== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==9590==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==9590==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==9590==    by 0x437A33: List<unsigned int>::insertFront(unsigned int const&) (List.hpp:60)
==9590==    by 0x435A61: ____C_A_T_C_H____T_E_S_T____28() (tests_part1.cpp:207)
==9590==    by 0x472FD2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==9590==    by 0x463726: Catch::TestCase::invoke() const (catch.hpp:10793)
==9590==    by 0x46365C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==9590==    by 0x45FBB6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==9590==    by 0x45E18E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==9590==    by 0x467526: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==9590==    by 0x4661C2: Catch::Session::runInternal() (catch.hpp:10149)
==9590==    by 0x465E8A: Catch::Session::run() (catch.hpp:10106)
==9590== 
==9590== LEAK SUMMARY:
==9590==    definitely lost: 24 bytes in 1 blocks
==9590==    indirectly lost: 0 bytes in 0 blocks
==9590==      possibly lost: 0 bytes in 0 blocks
==9590==    still reachable: 0 bytes in 0 blocks
==9590==         suppressed: 0 bytes in 0 blocks
==9590== 
==9590== For counts of detected and suppressed errors, rerun with: -v
==9590== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

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
==9594== Memcheck, a memory error detector
==9594== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==9594== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==9594== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==9594== 
==9594== 
==9594== HEAP SUMMARY:
==9594==     in use at exit: 24 bytes in 1 blocks
==9594==   total heap usage: 2,333 allocs, 2,332 frees, 269,968 bytes allocated
==9594== 
==9594== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==9594==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==9594==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==9594==    by 0x437A33: List<unsigned int>::insertFront(unsigned int const&) (List.hpp:60)
==9594==    by 0x435D9D: ____C_A_T_C_H____T_E_S_T____30() (tests_part1.cpp:221)
==9594==    by 0x472FD2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==9594==    by 0x463726: Catch::TestCase::invoke() const (catch.hpp:10793)
==9594==    by 0x46365C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==9594==    by 0x45FBB6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==9594==    by 0x45E18E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==9594==    by 0x467526: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==9594==    by 0x4661C2: Catch::Session::runInternal() (catch.hpp:10149)
==9594==    by 0x465E8A: Catch::Session::run() (catch.hpp:10106)
==9594== 
==9594== LEAK SUMMARY:
==9594==    definitely lost: 24 bytes in 1 blocks
==9594==    indirectly lost: 0 bytes in 0 blocks
==9594==      possibly lost: 0 bytes in 0 blocks
==9594==    still reachable: 0 bytes in 0 blocks
==9594==         suppressed: 0 bytes in 0 blocks
==9594== 
==9594== For counts of detected and suppressed errors, rerun with: -v
==9594== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

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
==9598== Memcheck, a memory error detector
==9598== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==9598== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==9598== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==9598== 
==9598== 
==9598== HEAP SUMMARY:
==9598==     in use at exit: 24 bytes in 1 blocks
==9598==   total heap usage: 2,333 allocs, 2,332 frees, 272,368 bytes allocated
==9598== 
==9598== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==9598==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==9598==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==9598==    by 0x437A33: List<unsigned int>::insertFront(unsigned int const&) (List.hpp:60)
==9598==    by 0x4360BD: ____C_A_T_C_H____T_E_S_T____32() (tests_part1.cpp:235)
==9598==    by 0x472FD2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==9598==    by 0x463726: Catch::TestCase::invoke() const (catch.hpp:10793)
==9598==    by 0x46365C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==9598==    by 0x45FBB6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==9598==    by 0x45E18E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==9598==    by 0x467526: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==9598==    by 0x4661C2: Catch::Session::runInternal() (catch.hpp:10149)
==9598==    by 0x465E8A: Catch::Session::run() (catch.hpp:10106)
==9598== 
==9598== LEAK SUMMARY:
==9598==    definitely lost: 24 bytes in 1 blocks
==9598==    indirectly lost: 0 bytes in 0 blocks
==9598==      possibly lost: 0 bytes in 0 blocks
==9598==    still reachable: 0 bytes in 0 blocks
==9598==         suppressed: 0 bytes in 0 blocks
==9598== 
==9598== For counts of detected and suppressed errors, rerun with: -v
==9598== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

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


### ✗ - [0/4] - List::reverse simple

- **Points**: 0 / 4


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::reverse simple" tags="[part=2][valgrind][weight=4]" filename="tests/test_part2_extra.cpp" line="15">
      <Expression success="false" type="REQUIRE" filename="tests/test_part2_extra.cpp" line="28">
        <Original>
          "&lt; 4 12 -1 99 3 >" == s.str()
        </Original>
        <Expanded>
          "&lt; 4 12 -1 99 3 >" == "&lt; 3 99 -1 12 4 >"
        </Expanded>
      </Expression>
      <Expression success="false" filename="tests/test_part2_extra.cpp" line="28">
        <Original>
          {Unknown expression after the reported line}
        </Original>
        <Expanded>
          {Unknown expression after the reported line}
        </Expanded>
        <FatalErrorCondition filename="tests/test_part2_extra.cpp" line="28">
          SIGSEGV - Segmentation violation signal
        </FatalErrorCondition>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="2" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="2" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/2] - List::reverse edge cases

- **Points**: 0 / 2

```
[Process timed out]
```
```
[Process timed out]
```


### ✗ - [0/5] - List::reverseNth #3

- **Points**: 0 / 5


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::reverseNth #3" tags="[part=2][valgrind][weight=5]" filename="tests/test_part2_extra.cpp" line="47">
      <Expression success="false" type="REQUIRE" filename="tests/test_part2_extra.cpp" line="59">
        <Original>
          "&lt; 4 3 2 1 8 7 6 5 10 9 >" == s.str()
        </Original>
        <Expanded>
          "&lt; 4 3 2 1 8 7 6 5 10 9 >"
==
"&lt; 1 2 3 4 5 6 7 8 9 10 >"
        </Expanded>
      </Expression>
      <Expression success="false" filename="tests/test_part2_extra.cpp" line="59">
        <Original>
          {Unknown expression after the reported line}
        </Original>
        <Expanded>
          {Unknown expression after the reported line}
        </Expanded>
        <FatalErrorCondition filename="tests/test_part2_extra.cpp" line="59">
          SIGSEGV - Segmentation violation signal
        </FatalErrorCondition>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="2" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="2" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - List::merge #2

- **Points**: 0 / 5


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::merge #2" tags="[part=2][valgrind][weight=5]" filename="tests/test_part2_extra.cpp" line="62">
      <Info>
        Does not empty out the parameter list
      </Info>
      <Info>
        Does not empty out the parameter list
      </Info>
      <Expression success="false" type="REQUIRE" filename="tests/test_part2_extra.cpp" line="84">
        <Original>
          "&lt; 1 2 10 15 20 30 35 40 45 50 55 65 75 100 200 300 400 500 >" == s1.str()
        </Original>
        <Expanded>
          "&lt; 1 2 10 15 20 30 35 40 45 50 55 65 75 100 200 300 400 500 >"
==
"&lt; >"
        </Expanded>
      </Expression>
      <Info>
        Does not empty out the parameter list
      </Info>
      <Info>
        Does not empty out the parameter list
      </Info>
      <Expression success="false" filename="tests/test_part2_extra.cpp" line="84">
        <Original>
          {Unknown expression after the reported line}
        </Original>
        <Expanded>
          {Unknown expression after the reported line}
        </Expanded>
        <FatalErrorCondition filename="tests/test_part2_extra.cpp" line="84">
          SIGSEGV - Segmentation violation signal
        </FatalErrorCondition>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="2" failures="2" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="2" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/2] - List::sort simple #3

- **Points**: 0 / 2


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #3" tags="[part=2][valgrind][weight=2]" filename="tests/test_part2_extra.cpp" line="87">
      <FatalErrorCondition filename="tests/test_part2_extra.cpp" line="87">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/4] - List::insert contents #2

- **Points**: 0 / 4

```
==9662== Memcheck, a memory error detector
==9662== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==9662== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==9662== Command: ./test -r xml "List::insert\ contents\ #2"
==9662== 
==9662== 
==9662== HEAP SUMMARY:
==9662==     in use at exit: 24 bytes in 1 blocks
==9662==   total heap usage: 2,339 allocs, 2,338 frees, 267,768 bytes allocated
==9662== 
==9662== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==9662==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==9662==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==9662==    by 0x42AC33: List<int>::insertBack(int const&) (List.hpp:85)
==9662==    by 0x43E205: ____C_A_T_C_H____T_E_S_T____0() (tests_part1_extra.cpp:21)
==9662==    by 0x472FD2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==9662==    by 0x463726: Catch::TestCase::invoke() const (catch.hpp:10793)
==9662==    by 0x46365C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==9662==    by 0x45FBB6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==9662==    by 0x45E18E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==9662==    by 0x467526: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==9662==    by 0x4661C2: Catch::Session::runInternal() (catch.hpp:10149)
==9662==    by 0x465E8A: Catch::Session::run() (catch.hpp:10106)
==9662== 
==9662== LEAK SUMMARY:
==9662==    definitely lost: 24 bytes in 1 blocks
==9662==    indirectly lost: 0 bytes in 0 blocks
==9662==      possibly lost: 0 bytes in 0 blocks
==9662==    still reachable: 0 bytes in 0 blocks
==9662==         suppressed: 0 bytes in 0 blocks
==9662== 
==9662== For counts of detected and suppressed errors, rerun with: -v
==9662== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

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
