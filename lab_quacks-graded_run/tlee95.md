


## Score: 14/14 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c exercises.cpp -o .objs/exercises.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/basic.cpp -o .objs/tests/basic.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/exercises.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/basic.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [1/1] - sumDigits

- **Points**: 1 / 1

```
==18511== Memcheck, a memory error detector
==18511== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==18511== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==18511== Command: ./test -r xml "sumDigits"
==18511== 
==18511== 
==18511== HEAP SUMMARY:
==18511==     in use at exit: 0 bytes in 0 blocks
==18511==   total heap usage: 1,714 allocs, 1,714 frees, 219,888 bytes allocated
==18511== 
==18511== All heap blocks were freed -- no leaks are possible
==18511== 
==18511== For counts of detected and suppressed errors, rerun with: -v
==18511== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="sumDigits" tags="[valgrind][weight=1]" filename="tests/basic.cpp" line="26">
      <Section name="Base cases work" filename="tests/basic.cpp" line="27">
        <OverallResults successes="2" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Multiple digits sum correctly" filename="tests/basic.cpp" line="31">
        <OverallResults successes="2" failures="0" expectedFailures="0"/>
      </Section>
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="4" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - triangle

- **Points**: 1 / 1

```
==18534== Memcheck, a memory error detector
==18534== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==18534== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==18534== Command: ./test -r xml "triangle"
==18534== 
==18534== 
==18534== HEAP SUMMARY:
==18534==     in use at exit: 0 bytes in 0 blocks
==18534==   total heap usage: 1,700 allocs, 1,700 frees, 219,440 bytes allocated
==18534== 
==18534== All heap blocks were freed -- no leaks are possible
==18534== 
==18534== For counts of detected and suppressed errors, rerun with: -v
==18534== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="triangle" tags="[valgrind][weight=1]" filename="tests/basic.cpp" line="37">
      <Section name="Base cases work" filename="tests/basic.cpp" line="38">
        <OverallResults successes="1" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Recursive cases work" filename="tests/basic.cpp" line="41">
        <OverallResults successes="3" failures="0" expectedFailures="0"/>
      </Section>
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="4" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [3/3] - sum

- **Points**: 3 / 3

```
==18537== Memcheck, a memory error detector
==18537== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==18537== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==18537== Command: ./test -r xml "sum"
==18537== 
==18537== 
==18537== HEAP SUMMARY:
==18537==     in use at exit: 0 bytes in 0 blocks
==18537==   total heap usage: 1,771 allocs, 1,771 frees, 303,392 bytes allocated
==18537== 
==18537== All heap blocks were freed -- no leaks are possible
==18537== 
==18537== For counts of detected and suppressed errors, rerun with: -v
==18537== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="sum" tags="[valgrind][weight=3]" filename="tests/basic.cpp" line="48">
      <Section name="Sum is correct" filename="tests/basic.cpp" line="53">
        <OverallResults successes="1" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Stack is unchanged" filename="tests/basic.cpp" line="56">
        <OverallResults successes="1" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Float sum is correct" filename="tests/basic.cpp" line="69">
        <OverallResults successes="0" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Stack is unchanged" filename="tests/basic.cpp" line="74">
        <OverallResults successes="1" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Did not make any additional stack objects" filename="tests/basic.cpp" line="77">
        <OverallResults successes="1" failures="0" expectedFailures="0"/>
      </Section>
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="4" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [3/3] - isBalanced

- **Points**: 3 / 3

```
==18557== Memcheck, a memory error detector
==18557== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==18557== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==18557== Command: ./test -r xml "isBalanced"
==18557== 
==18557== 
==18557== HEAP SUMMARY:
==18557==     in use at exit: 0 bytes in 0 blocks
==18557==   total heap usage: 1,765 allocs, 1,765 frees, 319,368 bytes allocated
==18557== 
==18557== All heap blocks were freed -- no leaks are possible
==18557== 
==18557== For counts of detected and suppressed errors, rerun with: -v
==18557== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="isBalanced" tags="[valgrind][weight=3]" filename="tests/basic.cpp" line="82">
      <Section name="balanced" filename="tests/basic.cpp" line="85">
        <OverallResults successes="6" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="unbalanced" filename="tests/basic.cpp" line="101">
        <OverallResults successes="6" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Only used 1 stack" filename="tests/basic.cpp" line="117">
        <OverallResults successes="2" failures="0" expectedFailures="0"/>
      </Section>
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="14" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="14" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [3/3] - scramble 17

- **Points**: 3 / 3

```
==18578== Memcheck, a memory error detector
==18578== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==18578== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==18578== Command: ./test -r xml "scramble\ 17"
==18578== 
==18578== 
==18578== HEAP SUMMARY:
==18578==     in use at exit: 0 bytes in 0 blocks
==18578==   total heap usage: 1,712 allocs, 1,712 frees, 232,360 bytes allocated
==18578== 
==18578== All heap blocks were freed -- no leaks are possible
==18578== 
==18578== For counts of detected and suppressed errors, rerun with: -v
==18578== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="scramble 17" tags="[valgrind][weight=3]" filename="tests/basic.cpp" line="130">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="0" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [3/3] - scramble 9

- **Points**: 3 / 3

```
==18597== Memcheck, a memory error detector
==18597== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==18597== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==18597== Command: ./test -r xml "scramble\ 9"
==18597== 
==18597== 
==18597== HEAP SUMMARY:
==18597==     in use at exit: 0 bytes in 0 blocks
==18597==   total heap usage: 1,707 allocs, 1,707 frees, 231,688 bytes allocated
==18597== 
==18597== All heap blocks were freed -- no leaks are possible
==18597== 
==18597== For counts of detected and suppressed errors, rerun with: -v
==18597== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="scramble 9" tags="[valgrind][weight=3]" filename="tests/basic.cpp" line="158">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="0" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [0/0] - verifySame (EXTRA CREDIT)

- **Points**: 0 / 0

```
==18601== Memcheck, a memory error detector
==18601== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==18601== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==18601== Command: ./test -r xml "verifySame\ (EXTRA\ CREDIT)"
==18601== 
==18601== 
==18601== HEAP SUMMARY:
==18601==     in use at exit: 0 bytes in 0 blocks
==18601==   total heap usage: 1,900 allocs, 1,900 frees, 258,976 bytes allocated
==18601== 
==18601== All heap blocks were freed -- no leaks are possible
==18601== 
==18601== For counts of detected and suppressed errors, rerun with: -v
==18601== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="verifySame (EXTRA CREDIT)" tags="[extraCredit=1][valgrind][weight=0]" filename="tests/basic.cpp" line="186">
      <Section name="Result for different stack and queue is different" filename="tests/basic.cpp" line="187">
        <OverallResults successes="1" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Result for same stack and queue is same" filename="tests/basic.cpp" line="224">
        <OverallResults successes="1" failures="0" expectedFailures="0"/>
      </Section>
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **tlee95** using **e236b893eceadaf0dcb235c01f20a9993cb5e9f1** (from **September 30th 2019, 12:15:00 am**)
