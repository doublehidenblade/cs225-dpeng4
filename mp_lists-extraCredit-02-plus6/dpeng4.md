


## Score: 52/57 (91.23%)


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
==22828== Memcheck, a memory error detector
==22828== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==22828== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==22828== Command: ./test -r xml "List::insertFront\ size"
==22828== 
==22828== 
==22828== HEAP SUMMARY:
==22828==     in use at exit: 0 bytes in 0 blocks
==22828==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==22828== 
==22828== All heap blocks were freed -- no leaks are possible
==22828== 
==22828== For counts of detected and suppressed errors, rerun with: -v
==22828== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==22835== Memcheck, a memory error detector
==22835== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==22835== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==22835== Command: ./test -r xml "List::insertBack\ size"
==22835== 
==22835== 
==22835== HEAP SUMMARY:
==22835==     in use at exit: 0 bytes in 0 blocks
==22835==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==22835== 
==22835== All heap blocks were freed -- no leaks are possible
==22835== 
==22835== For counts of detected and suppressed errors, rerun with: -v
==22835== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==22837== Memcheck, a memory error detector
==22837== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==22837== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==22837== Command: ./test -r xml "List::insert\ contents"
==22837== 
==22837== 
==22837== HEAP SUMMARY:
==22837==     in use at exit: 0 bytes in 0 blocks
==22837==   total heap usage: 2,109 allocs, 2,109 frees, 251,400 bytes allocated
==22837== 
==22837== All heap blocks were freed -- no leaks are possible
==22837== 
==22837== For counts of detected and suppressed errors, rerun with: -v
==22837== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==22849== Memcheck, a memory error detector
==22849== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==22849== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==22849== Command: ./test -r xml "List::split\ simple"
==22849== 
==22849== 
==22849== HEAP SUMMARY:
==22849==     in use at exit: 0 bytes in 0 blocks
==22849==   total heap usage: 1,971 allocs, 1,971 frees, 246,968 bytes allocated
==22849== 
==22849== All heap blocks were freed -- no leaks are possible
==22849== 
==22849== For counts of detected and suppressed errors, rerun with: -v
==22849== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==22856== Memcheck, a memory error detector
==22856== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==22856== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==22856== Command: ./test -r xml "List::_destroy\ empty\ list"
==22856== 
==22856== 
==22856== HEAP SUMMARY:
==22856==     in use at exit: 0 bytes in 0 blocks
==22856==   total heap usage: 2,121 allocs, 2,121 frees, 252,328 bytes allocated
==22856== 
==22856== All heap blocks were freed -- no leaks are possible
==22856== 
==22856== For counts of detected and suppressed errors, rerun with: -v
==22856== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==22862== Memcheck, a memory error detector
==22862== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==22862== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==22862== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==22862== 
==22862== 
==22862== HEAP SUMMARY:
==22862==     in use at exit: 0 bytes in 0 blocks
==22862==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==22862== 
==22862== All heap blocks were freed -- no leaks are possible
==22862== 
==22862== For counts of detected and suppressed errors, rerun with: -v
==22862== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==22868== Memcheck, a memory error detector
==22868== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==22868== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==22868== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==22868== 
==22868== 
==22868== HEAP SUMMARY:
==22868==     in use at exit: 0 bytes in 0 blocks
==22868==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==22868== 
==22868== All heap blocks were freed -- no leaks are possible
==22868== 
==22868== For counts of detected and suppressed errors, rerun with: -v
==22868== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==22874== Memcheck, a memory error detector
==22874== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==22874== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==22874== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==22874== 
==22874== 
==22874== HEAP SUMMARY:
==22874==     in use at exit: 0 bytes in 0 blocks
==22874==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==22874== 
==22874== All heap blocks were freed -- no leaks are possible
==22874== 
==22874== For counts of detected and suppressed errors, rerun with: -v
==22874== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==22876== Memcheck, a memory error detector
==22876== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==22876== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==22876== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==22876== 
==22876== 
==22876== HEAP SUMMARY:
==22876==     in use at exit: 0 bytes in 0 blocks
==22876==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==22876== 
==22876== All heap blocks were freed -- no leaks are possible
==22876== 
==22876== For counts of detected and suppressed errors, rerun with: -v
==22876== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==22882== Memcheck, a memory error detector
==22882== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==22882== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==22882== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==22882== 
==22882== 
==22882== HEAP SUMMARY:
==22882==     in use at exit: 0 bytes in 0 blocks
==22882==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==22882== 
==22882== All heap blocks were freed -- no leaks are possible
==22882== 
==22882== For counts of detected and suppressed errors, rerun with: -v
==22882== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==22889== Memcheck, a memory error detector
==22889== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==22889== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==22889== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==22889== 
==22889== 
==22889== HEAP SUMMARY:
==22889==     in use at exit: 0 bytes in 0 blocks
==22889==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==22889== 
==22889== All heap blocks were freed -- no leaks are possible
==22889== 
==22889== For counts of detected and suppressed errors, rerun with: -v
==22889== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==22893== Memcheck, a memory error detector
==22893== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==22893== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==22893== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==22893== 
==22893== 
==22893== HEAP SUMMARY:
==22893==     in use at exit: 0 bytes in 0 blocks
==22893==   total heap usage: 2,118 allocs, 2,118 frees, 254,096 bytes allocated
==22893== 
==22893== All heap blocks were freed -- no leaks are possible
==22893== 
==22893== For counts of detected and suppressed errors, rerun with: -v
==22893== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==22899== Memcheck, a memory error detector
==22899== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==22899== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==22899== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==22899== 
==22899== 
==22899== HEAP SUMMARY:
==22899==     in use at exit: 0 bytes in 0 blocks
==22899==   total heap usage: 2,118 allocs, 2,118 frees, 256,496 bytes allocated
==22899== 
==22899== All heap blocks were freed -- no leaks are possible
==22899== 
==22899== For counts of detected and suppressed errors, rerun with: -v
==22899== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==22903== Memcheck, a memory error detector
==22903== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==22903== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==22903== Command: ./test -r xml "List::insert\ contents\ #2"
==22903== 
==22903== 
==22903== HEAP SUMMARY:
==22903==     in use at exit: 0 bytes in 0 blocks
==22903==   total heap usage: 2,124 allocs, 2,124 frees, 251,896 bytes allocated
==22903== 
==22903== All heap blocks were freed -- no leaks are possible
==22903== 
==22903== For counts of detected and suppressed errors, rerun with: -v
==22903== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==22910== Memcheck, a memory error detector
==22910== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==22910== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==22910== Command: ./test -r xml "List::waterfall\ simple"
==22910== 
==22910== 
==22910== HEAP SUMMARY:
==22910==     in use at exit: 0 bytes in 0 blocks
==22910==   total heap usage: 2,114 allocs, 2,114 frees, 251,560 bytes allocated
==22910== 
==22910== All heap blocks were freed -- no leaks are possible
==22910== 
==22910== For counts of detected and suppressed errors, rerun with: -v
==22910== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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

This report was generated for **dpeng4** using **c0548f6ecf6b6f86a7de1f6aaf6e9d6145fd6e9d** (from **February 20th 2019, 12:05:00 am**)
