


## Score: 80/90 (88.89%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0

```
cs225/make/cs225.mk:99: [0;33m Looks like you are not on EWS. Be sure to test on EWS before the deadline. [0m

```
```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor circle.cpp -o .objs/circle.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor flower.cpp -o .objs/flower.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor line.cpp -o .objs/line.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor rectangle.cpp -o .objs/rectangle.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor shape.cpp -o .objs/shape.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor triangle.cpp -o .objs/triangle.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor truck.cpp -o .objs/truck.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor vector2.cpp -o .objs/vector2.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor tests/tests.cpp -o .objs/tests/tests.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/circle.o .objs/flower.o .objs/line.o .objs/rectangle.o .objs/shape.o .objs/triangle.o .objs/truck.o .objs/vector2.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [10/10] - test_virtual_perim

- **Points**: 10 / 10





### ✓ - [10/10] - test_virtual_area

- **Points**: 10 / 10





### ✓ - [20/20] - test_destructor

- **Points**: 20 / 20

```
==21381== Memcheck, a memory error detector
==21381== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==21381== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==21381== Command: ./test -r xml "test_destructor"
==21381== 
==21381== 
==21381== HEAP SUMMARY:
==21381==     in use at exit: 0 bytes in 0 blocks
==21381==   total heap usage: 1,667 allocs, 1,667 frees, 216,576 bytes allocated
==21381== 
==21381== All heap blocks were freed -- no leaks are possible
==21381== 
==21381== For counts of detected and suppressed errors, rerun with: -v
==21381== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_destructor" tags="[valgrind][weight=20]" filename="tests/tests.cpp" line="92">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [20/20] - test_constructor

- **Points**: 20 / 20





### ✗ - [0/10] - test_pure_virtual

- **Points**: 0 / 10

```
==21384== Memcheck, a memory error detector
==21384== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==21384== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==21384== Command: ./test -r xml "test_pure_virtual"
==21384== 
==21384== 
==21384== HEAP SUMMARY:
==21384==     in use at exit: 616 bytes in 10 blocks
==21384==   total heap usage: 1,728 allocs, 1,718 frees, 1,757,183 bytes allocated
==21384== 
==21384== 64 bytes in 1 blocks are definitely lost in loss record 6 of 10
==21384==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==21384==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==21384==    by 0x40C6C0: Truck::Truck(Vector2 const&) (truck.cpp:37)
==21384==    by 0x42B9C1: ____C_A_T_C_H____T_E_S_T____8() (tests.cpp:115)
==21384==    by 0x460BE2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==21384==    by 0x451336: Catch::TestCase::invoke() const (catch.hpp:10793)
==21384==    by 0x45126C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==21384==    by 0x44D7C6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==21384==    by 0x44BD9E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==21384==    by 0x455136: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==21384==    by 0x453DD2: Catch::Session::runInternal() (catch.hpp:10149)
==21384==    by 0x453A9A: Catch::Session::run() (catch.hpp:10106)
==21384== 
==21384== 64 bytes in 1 blocks are definitely lost in loss record 7 of 10
==21384==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==21384==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==21384==    by 0x40C7AA: Truck::Truck(Vector2 const&) (truck.cpp:39)
==21384==    by 0x42B9C1: ____C_A_T_C_H____T_E_S_T____8() (tests.cpp:115)
==21384==    by 0x460BE2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==21384==    by 0x451336: Catch::TestCase::invoke() const (catch.hpp:10793)
==21384==    by 0x45126C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==21384==    by 0x44D7C6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==21384==    by 0x44BD9E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==21384==    by 0x455136: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==21384==    by 0x453DD2: Catch::Session::runInternal() (catch.hpp:10149)
==21384==    by 0x453A9A: Catch::Session::run() (catch.hpp:10106)
==21384== 
==21384== 64 bytes in 1 blocks are definitely lost in loss record 8 of 10
==21384==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==21384==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==21384==    by 0x40C8AC: Truck::Truck(Vector2 const&) (truck.cpp:43)
==21384==    by 0x42B9C1: ____C_A_T_C_H____T_E_S_T____8() (tests.cpp:115)
==21384==    by 0x460BE2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==21384==    by 0x451336: Catch::TestCase::invoke() const (catch.hpp:10793)
==21384==    by 0x45126C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==21384==    by 0x44D7C6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==21384==    by 0x44BD9E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==21384==    by 0x455136: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==21384==    by 0x453DD2: Catch::Session::runInternal() (catch.hpp:10149)
==21384==    by 0x453A9A: Catch::Session::run() (catch.hpp:10106)
==21384== 
==21384== 64 bytes in 1 blocks are definitely lost in loss record 9 of 10
==21384==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==21384==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==21384==    by 0x40C9EF: Truck::Truck(Vector2 const&) (truck.cpp:46)
==21384==    by 0x42B9C1: ____C_A_T_C_H____T_E_S_T____8() (tests.cpp:115)
==21384==    by 0x460BE2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==21384==    by 0x451336: Catch::TestCase::invoke() const (catch.hpp:10793)
==21384==    by 0x45126C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==21384==    by 0x44D7C6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==21384==    by 0x44BD9E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==21384==    by 0x455136: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==21384==    by 0x453DD2: Catch::Session::runInternal() (catch.hpp:10149)
==21384==    by 0x453A9A: Catch::Session::run() (catch.hpp:10106)
==21384== 
==21384== 360 (40 direct, 320 indirect) bytes in 1 blocks are definitely lost in loss record 10 of 10
==21384==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==21384==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==21384==    by 0x40C685: Truck::Truck(Vector2 const&) (truck.cpp:35)
==21384==    by 0x42B9C1: ____C_A_T_C_H____T_E_S_T____8() (tests.cpp:115)
==21384==    by 0x460BE2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==21384==    by 0x451336: Catch::TestCase::invoke() const (catch.hpp:10793)
==21384==    by 0x45126C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==21384==    by 0x44D7C6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==21384==    by 0x44BD9E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==21384==    by 0x455136: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==21384==    by 0x453DD2: Catch::Session::runInternal() (catch.hpp:10149)
==21384==    by 0x453A9A: Catch::Session::run() (catch.hpp:10106)
==21384== 
==21384== LEAK SUMMARY:
==21384==    definitely lost: 296 bytes in 5 blocks
==21384==    indirectly lost: 320 bytes in 5 blocks
==21384==      possibly lost: 0 bytes in 0 blocks
==21384==    still reachable: 0 bytes in 0 blocks
==21384==         suppressed: 0 bytes in 0 blocks
==21384== 
==21384== For counts of detected and suppressed errors, rerun with: -v
==21384== ERROR SUMMARY: 5 errors from 5 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_pure_virtual" tags="[valgrind][weight=10]" filename="tests/tests.cpp" line="108">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [20/20] - test_slicing

- **Points**: 20 / 20

```
==21386== Memcheck, a memory error detector
==21386== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==21386== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==21386== Command: ./test -r xml "test_slicing"
==21386== 
==21386== 
==21386== HEAP SUMMARY:
==21386==     in use at exit: 0 bytes in 0 blocks
==21386==   total heap usage: 1,794 allocs, 1,794 frees, 1,759,556 bytes allocated
==21386== 
==21386== All heap blocks were freed -- no leaks are possible
==21386== 
==21386== For counts of detected and suppressed errors, rerun with: -v
==21386== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_slicing" tags="[valgrind][weight=20]" filename="tests/tests.cpp" line="125">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **tlee95** using **f2ec65449f5ec8703b22860c67b3411a18e07c96** (from **September 23rd 2019, 12:15:00 am**)
