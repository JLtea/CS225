


## Score: 94/114 (82.46%)


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





### ✗ - [0/5] - List::reverseNth #1

- **Points**: 0 / 5


```
Original: out == expected
Expanded: PNG(w=900, h=600, hash=3fa66744920ffb90)
==
PNG(w=900, h=600, hash=3fa66744920ffb90)
```


### ✗ - [0/5] - List::reverseNth #2

- **Points**: 0 / 5


```
Original: out == expected
Expanded: PNG(w=900, h=600, hash=3fa66744920ffb90)
==
PNG(w=900, h=600, hash=3fa66744920ffb90)
```


### ✓ - [10/10] - List::merge

- **Points**: 10 / 10

```
==8314== Memcheck, a memory error detector
==8314== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==8314== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==8314== Command: ./test -r xml "List::merge"
==8314== 
==8314== 
==8314== HEAP SUMMARY:
==8314==     in use at exit: 0 bytes in 0 blocks
==8314==   total heap usage: 243,289 allocs, 243,289 frees, 79,504,041 bytes allocated
==8314== 
==8314== All heap blocks were freed -- no leaks are possible
==8314== 
==8314== For counts of detected and suppressed errors, rerun with: -v
==8314== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==8316== Memcheck, a memory error detector
==8316== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==8316== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==8316== Command: ./test -r xml "List::sort\ simple\ #1"
==8316== 
==8316== 
==8316== HEAP SUMMARY:
==8316==     in use at exit: 0 bytes in 0 blocks
==8316==   total heap usage: 2,183 allocs, 2,183 frees, 262,768 bytes allocated
==8316== 
==8316== All heap blocks were freed -- no leaks are possible
==8316== 
==8316== For counts of detected and suppressed errors, rerun with: -v
==8316== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==8318== Memcheck, a memory error detector
==8318== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==8318== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==8318== Command: ./test -r xml "List::sort\ simple\ #2"
==8318== 
==8318== 
==8318== HEAP SUMMARY:
==8318==     in use at exit: 0 bytes in 0 blocks
==8318==   total heap usage: 2,183 allocs, 2,183 frees, 262,816 bytes allocated
==8318== 
==8318== All heap blocks were freed -- no leaks are possible
==8318== 
==8318== For counts of detected and suppressed errors, rerun with: -v
==8318== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==8322== Memcheck, a memory error detector
==8322== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==8322== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==8322== Command: ./test -r xml "List::insertFront\ size"
==8322== 
==8322== 
==8322== HEAP SUMMARY:
==8322==     in use at exit: 0 bytes in 0 blocks
==8322==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==8322== 
==8322== All heap blocks were freed -- no leaks are possible
==8322== 
==8322== For counts of detected and suppressed errors, rerun with: -v
==8322== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==8324== Memcheck, a memory error detector
==8324== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==8324== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==8324== Command: ./test -r xml "List::insertBack\ size"
==8324== 
==8324== 
==8324== HEAP SUMMARY:
==8324==     in use at exit: 0 bytes in 0 blocks
==8324==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==8324== 
==8324== All heap blocks were freed -- no leaks are possible
==8324== 
==8324== For counts of detected and suppressed errors, rerun with: -v
==8324== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==8326== Memcheck, a memory error detector
==8326== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==8326== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==8326== Command: ./test -r xml "List::insert\ contents"
==8326== 
==8326== 
==8326== HEAP SUMMARY:
==8326==     in use at exit: 0 bytes in 0 blocks
==8326==   total heap usage: 2,324 allocs, 2,324 frees, 267,272 bytes allocated
==8326== 
==8326== All heap blocks were freed -- no leaks are possible
==8326== 
==8326== For counts of detected and suppressed errors, rerun with: -v
==8326== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==8329== Memcheck, a memory error detector
==8329== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==8329== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==8329== Command: ./test -r xml "List::split\ simple"
==8329== 
==8329== 
==8329== HEAP SUMMARY:
==8329==     in use at exit: 0 bytes in 0 blocks
==8329==   total heap usage: 2,186 allocs, 2,186 frees, 262,840 bytes allocated
==8329== 
==8329== All heap blocks were freed -- no leaks are possible
==8329== 
==8329== For counts of detected and suppressed errors, rerun with: -v
==8329== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==8332== Memcheck, a memory error detector
==8332== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==8332== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==8332== Command: ./test -r xml "List::_destroy\ empty\ list"
==8332== 
==8332== 
==8332== HEAP SUMMARY:
==8332==     in use at exit: 0 bytes in 0 blocks
==8332==   total heap usage: 2,336 allocs, 2,336 frees, 268,200 bytes allocated
==8332== 
==8332== All heap blocks were freed -- no leaks are possible
==8332== 
==8332== For counts of detected and suppressed errors, rerun with: -v
==8332== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==8334== Memcheck, a memory error detector
==8334== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==8334== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==8334== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==8334== 
==8334== 
==8334== HEAP SUMMARY:
==8334==     in use at exit: 0 bytes in 0 blocks
==8334==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==8334== 
==8334== All heap blocks were freed -- no leaks are possible
==8334== 
==8334== For counts of detected and suppressed errors, rerun with: -v
==8334== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==8336== Memcheck, a memory error detector
==8336== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==8336== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==8336== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==8336== 
==8336== 
==8336== HEAP SUMMARY:
==8336==     in use at exit: 0 bytes in 0 blocks
==8336==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==8336== 
==8336== All heap blocks were freed -- no leaks are possible
==8336== 
==8336== For counts of detected and suppressed errors, rerun with: -v
==8336== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==8338== Memcheck, a memory error detector
==8338== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==8338== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==8338== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==8338== 
==8338== 
==8338== HEAP SUMMARY:
==8338==     in use at exit: 0 bytes in 0 blocks
==8338==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==8338== 
==8338== All heap blocks were freed -- no leaks are possible
==8338== 
==8338== For counts of detected and suppressed errors, rerun with: -v
==8338== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==8340== Memcheck, a memory error detector
==8340== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==8340== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==8340== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==8340== 
==8340== 
==8340== HEAP SUMMARY:
==8340==     in use at exit: 0 bytes in 0 blocks
==8340==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==8340== 
==8340== All heap blocks were freed -- no leaks are possible
==8340== 
==8340== For counts of detected and suppressed errors, rerun with: -v
==8340== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==8342== Memcheck, a memory error detector
==8342== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==8342== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==8342== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==8342== 
==8342== 
==8342== HEAP SUMMARY:
==8342==     in use at exit: 0 bytes in 0 blocks
==8342==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==8342== 
==8342== All heap blocks were freed -- no leaks are possible
==8342== 
==8342== For counts of detected and suppressed errors, rerun with: -v
==8342== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==8344== Memcheck, a memory error detector
==8344== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==8344== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==8344== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==8344== 
==8344== 
==8344== HEAP SUMMARY:
==8344==     in use at exit: 0 bytes in 0 blocks
==8344==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==8344== 
==8344== All heap blocks were freed -- no leaks are possible
==8344== 
==8344== For counts of detected and suppressed errors, rerun with: -v
==8344== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==8346== Memcheck, a memory error detector
==8346== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==8346== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==8346== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==8346== 
==8346== 
==8346== HEAP SUMMARY:
==8346==     in use at exit: 0 bytes in 0 blocks
==8346==   total heap usage: 2,333 allocs, 2,333 frees, 269,968 bytes allocated
==8346== 
==8346== All heap blocks were freed -- no leaks are possible
==8346== 
==8346== For counts of detected and suppressed errors, rerun with: -v
==8346== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==8348== Memcheck, a memory error detector
==8348== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==8348== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==8348== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==8348== 
==8348== 
==8348== HEAP SUMMARY:
==8348==     in use at exit: 0 bytes in 0 blocks
==8348==   total heap usage: 2,333 allocs, 2,333 frees, 272,368 bytes allocated
==8348== 
==8348== All heap blocks were freed -- no leaks are possible
==8348== 
==8348== For counts of detected and suppressed errors, rerun with: -v
==8348== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==8350== Memcheck, a memory error detector
==8350== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==8350== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==8350== Command: ./test -r xml "List::reverse\ simple"
==8350== 
==8350== 
==8350== HEAP SUMMARY:
==8350==     in use at exit: 0 bytes in 0 blocks
==8350==   total heap usage: 2,189 allocs, 2,189 frees, 262,948 bytes allocated
==8350== 
==8350== All heap blocks were freed -- no leaks are possible
==8350== 
==8350== For counts of detected and suppressed errors, rerun with: -v
==8350== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==8352== Memcheck, a memory error detector
==8352== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==8352== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==8352== Command: ./test -r xml "List::reverse\ edge\ cases"
==8352== 
==8352== 
==8352== HEAP SUMMARY:
==8352==     in use at exit: 0 bytes in 0 blocks
==8352==   total heap usage: 2,334 allocs, 2,334 frees, 267,648 bytes allocated
==8352== 
==8352== All heap blocks were freed -- no leaks are possible
==8352== 
==8352== For counts of detected and suppressed errors, rerun with: -v
==8352== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::merge #2

- **Points**: 5 / 5

```
==8355== Memcheck, a memory error detector
==8355== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==8355== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==8355== Command: ./test -r xml "List::merge\ #2"
==8355== 
==8355== 
==8355== HEAP SUMMARY:
==8355==     in use at exit: 0 bytes in 0 blocks
==8355==   total heap usage: 2,224 allocs, 2,224 frees, 264,904 bytes allocated
==8355== 
==8355== All heap blocks were freed -- no leaks are possible
==8355== 
==8355== For counts of detected and suppressed errors, rerun with: -v
==8355== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==8357== Memcheck, a memory error detector
==8357== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==8357== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==8357== Command: ./test -r xml "List::sort\ simple\ #3"
==8357== 
==8357== 
==8357== HEAP SUMMARY:
==8357==     in use at exit: 0 bytes in 0 blocks
==8357==   total heap usage: 2,186 allocs, 2,186 frees, 262,880 bytes allocated
==8357== 
==8357== All heap blocks were freed -- no leaks are possible
==8357== 
==8357== For counts of detected and suppressed errors, rerun with: -v
==8357== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==8359== Memcheck, a memory error detector
==8359== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==8359== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==8359== Command: ./test -r xml "List::insert\ contents\ #2"
==8359== 
==8359== 
==8359== HEAP SUMMARY:
==8359==     in use at exit: 0 bytes in 0 blocks
==8359==   total heap usage: 2,339 allocs, 2,339 frees, 267,768 bytes allocated
==8359== 
==8359== All heap blocks were freed -- no leaks are possible
==8359== 
==8359== For counts of detected and suppressed errors, rerun with: -v
==8359== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✓ - [5/5] - List::waterfall simple

- **Points**: 5 / 5

```
==8364== Memcheck, a memory error detector
==8364== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==8364== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==8364== Command: ./test -r xml "List::waterfall\ simple"
==8364== 
==8364== 
==8364== HEAP SUMMARY:
==8364==     in use at exit: 0 bytes in 0 blocks
==8364==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==8364== 
==8364== All heap blocks were freed -- no leaks are possible
==8364== 
==8364== For counts of detected and suppressed errors, rerun with: -v
==8364== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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

This report was generated for **tlee95** using **f97b8bbde7736489442aa7c1da8569843f9e3cdc** (from **October 8th 2019, 12:15:00 am**)
