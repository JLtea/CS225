


## Score: 114/114 (100.00%)


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


### ✓ - [5/5] - List::reverse

- **Points**: 5 / 5





### ✓ - [5/5] - List::reverseNth #1

- **Points**: 5 / 5





### ✓ - [5/5] - List::reverseNth #2

- **Points**: 5 / 5





### ✓ - [10/10] - List::merge

- **Points**: 10 / 10

```
==30219== Memcheck, a memory error detector
==30219== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==30219== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==30219== Command: ./test -r xml "List::merge"
==30219== 
==30219== 
==30219== HEAP SUMMARY:
==30219==     in use at exit: 0 bytes in 0 blocks
==30219==   total heap usage: 243,289 allocs, 243,289 frees, 79,504,041 bytes allocated
==30219== 
==30219== All heap blocks were freed -- no leaks are possible
==30219== 
==30219== For counts of detected and suppressed errors, rerun with: -v
==30219== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::merge" tags="[part=2][valgrind][weight=10]" filename="tests/tests_part2.cpp" line="59">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::sort simple #1

- **Points**: 2 / 2

```
==30221== Memcheck, a memory error detector
==30221== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==30221== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==30221== Command: ./test -r xml "List::sort\ simple\ #1"
==30221== 
==30221== 
==30221== HEAP SUMMARY:
==30221==     in use at exit: 0 bytes in 0 blocks
==30221==   total heap usage: 2,183 allocs, 2,183 frees, 262,768 bytes allocated
==30221== 
==30221== All heap blocks were freed -- no leaks are possible
==30221== 
==30221== For counts of detected and suppressed errors, rerun with: -v
==30221== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #1" tags="[part=2][valgrind][weight=2]" filename="tests/tests_part2.cpp" line="93">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::sort simple #2

- **Points**: 2 / 2

```
==30223== Memcheck, a memory error detector
==30223== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==30223== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==30223== Command: ./test -r xml "List::sort\ simple\ #2"
==30223== 
==30223== 
==30223== HEAP SUMMARY:
==30223==     in use at exit: 0 bytes in 0 blocks
==30223==   total heap usage: 2,183 allocs, 2,183 frees, 262,816 bytes allocated
==30223== 
==30223== All heap blocks were freed -- no leaks are possible
==30223== 
==30223== For counts of detected and suppressed errors, rerun with: -v
==30223== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #2" tags="[part=2][valgrind][weight=2]" filename="tests/tests_part2.cpp" line="108">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::sort #1

- **Points**: 5 / 5





### ✓ - [5/5] - List::sort #2

- **Points**: 5 / 5





### ✓ - [1/1] - List::insertFront size

- **Points**: 1 / 1

```
==30227== Memcheck, a memory error detector
==30227== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==30227== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==30227== Command: ./test -r xml "List::insertFront\ size"
==30227== 
==30227== 
==30227== HEAP SUMMARY:
==30227==     in use at exit: 0 bytes in 0 blocks
==30227==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==30227== 
==30227== All heap blocks were freed -- no leaks are possible
==30227== 
==30227== For counts of detected and suppressed errors, rerun with: -v
==30227== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✓ - [2/2] - List::insertBack size

- **Points**: 2 / 2

```
==30229== Memcheck, a memory error detector
==30229== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==30229== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==30229== Command: ./test -r xml "List::insertBack\ size"
==30229== 
==30229== 
==30229== HEAP SUMMARY:
==30229==     in use at exit: 0 bytes in 0 blocks
==30229==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==30229== 
==30229== All heap blocks were freed -- no leaks are possible
==30229== 
==30229== For counts of detected and suppressed errors, rerun with: -v
==30229== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insertBack size" tags="[part=1][valgrind][weight=2]" filename="tests/tests_part1.cpp" line="28">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [4/4] - List::insert contents

- **Points**: 4 / 4

```
==30231== Memcheck, a memory error detector
==30231== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==30231== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==30231== Command: ./test -r xml "List::insert\ contents"
==30231== 
==30231== 
==30231== HEAP SUMMARY:
==30231==     in use at exit: 0 bytes in 0 blocks
==30231==   total heap usage: 2,324 allocs, 2,324 frees, 267,272 bytes allocated
==30231== 
==30231== All heap blocks were freed -- no leaks are possible
==30231== 
==30231== For counts of detected and suppressed errors, rerun with: -v
==30231== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✓ - [15/15] - List::waterfall

- **Points**: 15 / 15





### ✓ - [5/5] - List::split simple

- **Points**: 5 / 5

```
==30234== Memcheck, a memory error detector
==30234== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==30234== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==30234== Command: ./test -r xml "List::split\ simple"
==30234== 
==30234== 
==30234== HEAP SUMMARY:
==30234==     in use at exit: 0 bytes in 0 blocks
==30234==   total heap usage: 2,186 allocs, 2,186 frees, 262,840 bytes allocated
==30234== 
==30234== All heap blocks were freed -- no leaks are possible
==30234== 
==30234== For counts of detected and suppressed errors, rerun with: -v
==30234== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✓ - [5/5] - List::split images

- **Points**: 5 / 5





### ✓ - [3/3] - List::_destroy empty list

- **Points**: 3 / 3

```
==30237== Memcheck, a memory error detector
==30237== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==30237== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==30237== Command: ./test -r xml "List::_destroy\ empty\ list"
==30237== 
==30237== 
==30237== HEAP SUMMARY:
==30237==     in use at exit: 0 bytes in 0 blocks
==30237==   total heap usage: 2,336 allocs, 2,336 frees, 268,200 bytes allocated
==30237== 
==30237== All heap blocks were freed -- no leaks are possible
==30237== 
==30237== For counts of detected and suppressed errors, rerun with: -v
==30237== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✓ - [1/1] - List::begin() returns an iterator to the front of the list

- **Points**: 1 / 1

```
==30239== Memcheck, a memory error detector
==30239== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==30239== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==30239== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==30239== 
==30239== 
==30239== HEAP SUMMARY:
==30239==     in use at exit: 0 bytes in 0 blocks
==30239==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==30239== 
==30239== All heap blocks were freed -- no leaks are possible
==30239== 
==30239== For counts of detected and suppressed errors, rerun with: -v
==30239== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✓ - [1/1] - List::ListIterator::operator++ advances the iterator (pre-increment)

- **Points**: 1 / 1

```
==30241== Memcheck, a memory error detector
==30241== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==30241== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==30241== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==30241== 
==30241== 
==30241== HEAP SUMMARY:
==30241==     in use at exit: 0 bytes in 0 blocks
==30241==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==30241== 
==30241== All heap blocks were freed -- no leaks are possible
==30241== 
==30241== For counts of detected and suppressed errors, rerun with: -v
==30241== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✓ - [1/1] - List::ListIterator::operator++ advances the iterator (post-increment)

- **Points**: 1 / 1

```
==30243== Memcheck, a memory error detector
==30243== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==30243== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==30243== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==30243== 
==30243== 
==30243== HEAP SUMMARY:
==30243==     in use at exit: 0 bytes in 0 blocks
==30243==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==30243== 
==30243== All heap blocks were freed -- no leaks are possible
==30243== 
==30243== For counts of detected and suppressed errors, rerun with: -v
==30243== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✓ - [1/1] - List::ListIterator::operator++ (post-increment) returns an un-incremented iterator

- **Points**: 1 / 1

```
==30245== Memcheck, a memory error detector
==30245== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==30245== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==30245== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==30245== 
==30245== 
==30245== HEAP SUMMARY:
==30245==     in use at exit: 0 bytes in 0 blocks
==30245==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==30245== 
==30245== All heap blocks were freed -- no leaks are possible
==30245== 
==30245== For counts of detected and suppressed errors, rerun with: -v
==30245== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✓ - [1/1] - List::ListIterator::operator-- moves the iterator backwards

- **Points**: 1 / 1

```
==30247== Memcheck, a memory error detector
==30247== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==30247== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==30247== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==30247== 
==30247== 
==30247== HEAP SUMMARY:
==30247==     in use at exit: 0 bytes in 0 blocks
==30247==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==30247== 
==30247== All heap blocks were freed -- no leaks are possible
==30247== 
==30247== For counts of detected and suppressed errors, rerun with: -v
==30247== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✓ - [1/1] - List::ListIterator::operator-- (post-increment) returns an un-incremented iterator

- **Points**: 1 / 1

```
==30249== Memcheck, a memory error detector
==30249== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==30249== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==30249== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==30249== 
==30249== 
==30249== HEAP SUMMARY:
==30249==     in use at exit: 0 bytes in 0 blocks
==30249==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==30249== 
==30249== All heap blocks were freed -- no leaks are possible
==30249== 
==30249== For counts of detected and suppressed errors, rerun with: -v
==30249== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✓ - [1/1] - List::ListIterator::end is reached

- **Points**: 1 / 1

```
==30251== Memcheck, a memory error detector
==30251== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==30251== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==30251== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==30251== 
==30251== 
==30251== HEAP SUMMARY:
==30251==     in use at exit: 0 bytes in 0 blocks
==30251==   total heap usage: 2,333 allocs, 2,333 frees, 269,968 bytes allocated
==30251== 
==30251== All heap blocks were freed -- no leaks are possible
==30251== 
==30251== For counts of detected and suppressed errors, rerun with: -v
==30251== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✓ - [1/1] - List::ListIterator::end is not ::begin in a non-empty list

- **Points**: 1 / 1

```
==30253== Memcheck, a memory error detector
==30253== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==30253== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==30253== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==30253== 
==30253== 
==30253== HEAP SUMMARY:
==30253==     in use at exit: 0 bytes in 0 blocks
==30253==   total heap usage: 2,333 allocs, 2,333 frees, 272,368 bytes allocated
==30253== 
==30253== All heap blocks were freed -- no leaks are possible
==30253== 
==30253== For counts of detected and suppressed errors, rerun with: -v
==30253== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✓ - [4/4] - List::reverse simple

- **Points**: 4 / 4

```
==30255== Memcheck, a memory error detector
==30255== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==30255== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==30255== Command: ./test -r xml "List::reverse\ simple"
==30255== 
==30255== 
==30255== HEAP SUMMARY:
==30255==     in use at exit: 0 bytes in 0 blocks
==30255==   total heap usage: 2,189 allocs, 2,189 frees, 262,948 bytes allocated
==30255== 
==30255== All heap blocks were freed -- no leaks are possible
==30255== 
==30255== For counts of detected and suppressed errors, rerun with: -v
==30255== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::reverse simple" tags="[part=2][valgrind][weight=4]" filename="tests/test_part2_extra.cpp" line="15">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::reverse edge cases

- **Points**: 2 / 2

```
==30257== Memcheck, a memory error detector
==30257== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==30257== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==30257== Command: ./test -r xml "List::reverse\ edge\ cases"
==30257== 
==30257== 
==30257== HEAP SUMMARY:
==30257==     in use at exit: 0 bytes in 0 blocks
==30257==   total heap usage: 2,334 allocs, 2,334 frees, 267,648 bytes allocated
==30257== 
==30257== All heap blocks were freed -- no leaks are possible
==30257== 
==30257== For counts of detected and suppressed errors, rerun with: -v
==30257== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::reverse edge cases" tags="[part=2][valgrind][weight=2]" filename="tests/test_part2_extra.cpp" line="31">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::reverseNth #3

- **Points**: 5 / 5

```
==30259== Memcheck, a memory error detector
==30259== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==30259== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==30259== Command: ./test -r xml "List::reverseNth\ #3"
==30259== 
==30259== 
==30259== HEAP SUMMARY:
==30259==     in use at exit: 0 bytes in 0 blocks
==30259==   total heap usage: 2,195 allocs, 2,195 frees, 263,128 bytes allocated
==30259== 
==30259== All heap blocks were freed -- no leaks are possible
==30259== 
==30259== For counts of detected and suppressed errors, rerun with: -v
==30259== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::reverseNth #3" tags="[part=2][valgrind][weight=5]" filename="tests/test_part2_extra.cpp" line="47">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::merge #2

- **Points**: 5 / 5

```
==30261== Memcheck, a memory error detector
==30261== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==30261== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==30261== Command: ./test -r xml "List::merge\ #2"
==30261== 
==30261== 
==30261== HEAP SUMMARY:
==30261==     in use at exit: 0 bytes in 0 blocks
==30261==   total heap usage: 2,224 allocs, 2,224 frees, 264,904 bytes allocated
==30261== 
==30261== All heap blocks were freed -- no leaks are possible
==30261== 
==30261== For counts of detected and suppressed errors, rerun with: -v
==30261== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::merge #2" tags="[part=2][valgrind][weight=5]" filename="tests/test_part2_extra.cpp" line="62">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="3" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="3" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::sort simple #3

- **Points**: 2 / 2

```
==30263== Memcheck, a memory error detector
==30263== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==30263== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==30263== Command: ./test -r xml "List::sort\ simple\ #3"
==30263== 
==30263== 
==30263== HEAP SUMMARY:
==30263==     in use at exit: 0 bytes in 0 blocks
==30263==   total heap usage: 2,186 allocs, 2,186 frees, 262,880 bytes allocated
==30263== 
==30263== All heap blocks were freed -- no leaks are possible
==30263== 
==30263== For counts of detected and suppressed errors, rerun with: -v
==30263== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #3" tags="[part=2][valgrind][weight=2]" filename="tests/test_part2_extra.cpp" line="87">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [4/4] - List::insert contents #2

- **Points**: 4 / 4

```
==30265== Memcheck, a memory error detector
==30265== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==30265== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==30265== Command: ./test -r xml "List::insert\ contents\ #2"
==30265== 
==30265== 
==30265== HEAP SUMMARY:
==30265==     in use at exit: 0 bytes in 0 blocks
==30265==   total heap usage: 2,339 allocs, 2,339 frees, 267,768 bytes allocated
==30265== 
==30265== All heap blocks were freed -- no leaks are possible
==30265== 
==30265== For counts of detected and suppressed errors, rerun with: -v
==30265== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✓ - [5/5] - List::split edge cases

- **Points**: 5 / 5

```
==30267== Memcheck, a memory error detector
==30267== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==30267== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==30267== Command: ./test -r xml "List::split\ edge\ cases"
==30267== 
==30267== 
==30267== HEAP SUMMARY:
==30267==     in use at exit: 0 bytes in 0 blocks
==30267==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==30267== 
==30267== All heap blocks were freed -- no leaks are possible
==30267== 
==30267== For counts of detected and suppressed errors, rerun with: -v
==30267== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::split edge cases" tags="[part=1][valgrind][weight=5]" filename="tests/tests_part1_extra.cpp" line="30">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="4" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::waterfall simple

- **Points**: 5 / 5

```
==30269== Memcheck, a memory error detector
==30269== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==30269== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==30269== Command: ./test -r xml "List::waterfall\ simple"
==30269== 
==30269== 
==30269== HEAP SUMMARY:
==30269==     in use at exit: 0 bytes in 0 blocks
==30269==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==30269== 
==30269== All heap blocks were freed -- no leaks are possible
==30269== 
==30269== For counts of detected and suppressed errors, rerun with: -v
==30269== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::waterfall simple" tags="[part=1][valgrind][weight=5]" filename="tests/tests_part1_extra.cpp" line="50">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **tlee95** using **3977b3afd07f66f8728805a1feb175fc8992af82** (from **October 9th 2019, 12:15:00 am**)
