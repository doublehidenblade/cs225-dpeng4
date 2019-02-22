


## Score: 57/57 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c tests/tests_part2.cpp -o .objs/tests/tests_part2.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c tests/tests_part1.cpp -o .objs/tests/tests_part1.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c tests/tests_part1_extra.cpp -o .objs/tests/tests_part1_extra.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests_part2.o .objs/tests/tests_part1.o .objs/tests/tests_part1_extra.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -o test

```


### ✓ - [1/1] - List::insertFront size

- **Points**: 1 / 1

```
==12494== Memcheck, a memory error detector
==12494== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12494== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==12494== Command: ./test -r xml "List::insertFront\ size"
==12494== 
==12494== 
==12494== HEAP SUMMARY:
==12494==     in use at exit: 0 bytes in 0 blocks
==12494==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==12494== 
==12494== All heap blocks were freed -- no leaks are possible
==12494== 
==12494== For counts of detected and suppressed errors, rerun with: -v
==12494== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12499== Memcheck, a memory error detector
==12499== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12499== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==12499== Command: ./test -r xml "List::insertBack\ size"
==12499== 
==12499== 
==12499== HEAP SUMMARY:
==12499==     in use at exit: 0 bytes in 0 blocks
==12499==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==12499== 
==12499== All heap blocks were freed -- no leaks are possible
==12499== 
==12499== For counts of detected and suppressed errors, rerun with: -v
==12499== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12507== Memcheck, a memory error detector
==12507== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12507== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==12507== Command: ./test -r xml "List::insert\ contents"
==12507== 
==12507== 
==12507== HEAP SUMMARY:
==12507==     in use at exit: 0 bytes in 0 blocks
==12507==   total heap usage: 2,109 allocs, 2,109 frees, 251,400 bytes allocated
==12507== 
==12507== All heap blocks were freed -- no leaks are possible
==12507== 
==12507== For counts of detected and suppressed errors, rerun with: -v
==12507== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12521== Memcheck, a memory error detector
==12521== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12521== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==12521== Command: ./test -r xml "List::split\ simple"
==12521== 
==12521== 
==12521== HEAP SUMMARY:
==12521==     in use at exit: 0 bytes in 0 blocks
==12521==   total heap usage: 1,971 allocs, 1,971 frees, 246,968 bytes allocated
==12521== 
==12521== All heap blocks were freed -- no leaks are possible
==12521== 
==12521== For counts of detected and suppressed errors, rerun with: -v
==12521== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12527== Memcheck, a memory error detector
==12527== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12527== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==12527== Command: ./test -r xml "List::_destroy\ empty\ list"
==12527== 
==12527== 
==12527== HEAP SUMMARY:
==12527==     in use at exit: 0 bytes in 0 blocks
==12527==   total heap usage: 2,121 allocs, 2,121 frees, 252,328 bytes allocated
==12527== 
==12527== All heap blocks were freed -- no leaks are possible
==12527== 
==12527== For counts of detected and suppressed errors, rerun with: -v
==12527== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12539== Memcheck, a memory error detector
==12539== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12539== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==12539== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==12539== 
==12539== 
==12539== HEAP SUMMARY:
==12539==     in use at exit: 0 bytes in 0 blocks
==12539==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==12539== 
==12539== All heap blocks were freed -- no leaks are possible
==12539== 
==12539== For counts of detected and suppressed errors, rerun with: -v
==12539== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12560== Memcheck, a memory error detector
==12560== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12560== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==12560== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==12560== 
==12560== 
==12560== HEAP SUMMARY:
==12560==     in use at exit: 0 bytes in 0 blocks
==12560==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==12560== 
==12560== All heap blocks were freed -- no leaks are possible
==12560== 
==12560== For counts of detected and suppressed errors, rerun with: -v
==12560== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12576== Memcheck, a memory error detector
==12576== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12576== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==12576== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==12576== 
==12576== 
==12576== HEAP SUMMARY:
==12576==     in use at exit: 0 bytes in 0 blocks
==12576==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==12576== 
==12576== All heap blocks were freed -- no leaks are possible
==12576== 
==12576== For counts of detected and suppressed errors, rerun with: -v
==12576== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12581== Memcheck, a memory error detector
==12581== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12581== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==12581== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==12581== 
==12581== 
==12581== HEAP SUMMARY:
==12581==     in use at exit: 0 bytes in 0 blocks
==12581==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==12581== 
==12581== All heap blocks were freed -- no leaks are possible
==12581== 
==12581== For counts of detected and suppressed errors, rerun with: -v
==12581== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12602== Memcheck, a memory error detector
==12602== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12602== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==12602== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==12602== 
==12602== 
==12602== HEAP SUMMARY:
==12602==     in use at exit: 0 bytes in 0 blocks
==12602==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==12602== 
==12602== All heap blocks were freed -- no leaks are possible
==12602== 
==12602== For counts of detected and suppressed errors, rerun with: -v
==12602== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12610== Memcheck, a memory error detector
==12610== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12610== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==12610== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==12610== 
==12610== 
==12610== HEAP SUMMARY:
==12610==     in use at exit: 0 bytes in 0 blocks
==12610==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==12610== 
==12610== All heap blocks were freed -- no leaks are possible
==12610== 
==12610== For counts of detected and suppressed errors, rerun with: -v
==12610== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12617== Memcheck, a memory error detector
==12617== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12617== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==12617== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==12617== 
==12617== 
==12617== HEAP SUMMARY:
==12617==     in use at exit: 0 bytes in 0 blocks
==12617==   total heap usage: 2,118 allocs, 2,118 frees, 254,096 bytes allocated
==12617== 
==12617== All heap blocks were freed -- no leaks are possible
==12617== 
==12617== For counts of detected and suppressed errors, rerun with: -v
==12617== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12630== Memcheck, a memory error detector
==12630== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12630== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==12630== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==12630== 
==12630== 
==12630== HEAP SUMMARY:
==12630==     in use at exit: 0 bytes in 0 blocks
==12630==   total heap usage: 2,118 allocs, 2,118 frees, 256,496 bytes allocated
==12630== 
==12630== All heap blocks were freed -- no leaks are possible
==12630== 
==12630== For counts of detected and suppressed errors, rerun with: -v
==12630== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✓ - [4/4] - List::insert contents #2

- **Points**: 4 / 4

```
==12636== Memcheck, a memory error detector
==12636== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12636== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==12636== Command: ./test -r xml "List::insert\ contents\ #2"
==12636== 
==12636== 
==12636== HEAP SUMMARY:
==12636==     in use at exit: 0 bytes in 0 blocks
==12636==   total heap usage: 2,124 allocs, 2,124 frees, 251,896 bytes allocated
==12636== 
==12636== All heap blocks were freed -- no leaks are possible
==12636== 
==12636== For counts of detected and suppressed errors, rerun with: -v
==12636== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12645== Memcheck, a memory error detector
==12645== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12645== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==12645== Command: ./test -r xml "List::split\ edge\ cases"
==12645== 
==12645== 
==12645== HEAP SUMMARY:
==12645==     in use at exit: 0 bytes in 0 blocks
==12645==   total heap usage: 2,114 allocs, 2,114 frees, 251,560 bytes allocated
==12645== 
==12645== All heap blocks were freed -- no leaks are possible
==12645== 
==12645== For counts of detected and suppressed errors, rerun with: -v
==12645== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12653== Memcheck, a memory error detector
==12653== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12653== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==12653== Command: ./test -r xml "List::waterfall\ simple"
==12653== 
==12653== 
==12653== HEAP SUMMARY:
==12653==     in use at exit: 0 bytes in 0 blocks
==12653==   total heap usage: 2,114 allocs, 2,114 frees, 251,560 bytes allocated
==12653== 
==12653== All heap blocks were freed -- no leaks are possible
==12653== 
==12653== For counts of detected and suppressed errors, rerun with: -v
==12653== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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

This report was generated for **dpeng4** using **ade5ad0e00b8b860bc91fa159c4ce1360c9cdfde** (from **February 22nd 2019, 12:05:00 am**)
