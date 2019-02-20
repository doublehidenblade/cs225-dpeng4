


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
==12937== Memcheck, a memory error detector
==12937== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12937== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==12937== Command: ./test -r xml "List::insertFront\ size"
==12937== 
==12937== 
==12937== HEAP SUMMARY:
==12937==     in use at exit: 0 bytes in 0 blocks
==12937==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==12937== 
==12937== All heap blocks were freed -- no leaks are possible
==12937== 
==12937== For counts of detected and suppressed errors, rerun with: -v
==12937== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12944== Memcheck, a memory error detector
==12944== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12944== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==12944== Command: ./test -r xml "List::insertBack\ size"
==12944== 
==12944== 
==12944== HEAP SUMMARY:
==12944==     in use at exit: 0 bytes in 0 blocks
==12944==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==12944== 
==12944== All heap blocks were freed -- no leaks are possible
==12944== 
==12944== For counts of detected and suppressed errors, rerun with: -v
==12944== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12946== Memcheck, a memory error detector
==12946== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12946== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==12946== Command: ./test -r xml "List::insert\ contents"
==12946== 
==12946== 
==12946== HEAP SUMMARY:
==12946==     in use at exit: 0 bytes in 0 blocks
==12946==   total heap usage: 2,109 allocs, 2,109 frees, 251,400 bytes allocated
==12946== 
==12946== All heap blocks were freed -- no leaks are possible
==12946== 
==12946== For counts of detected and suppressed errors, rerun with: -v
==12946== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12949== Memcheck, a memory error detector
==12949== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12949== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==12949== Command: ./test -r xml "List::split\ simple"
==12949== 
==12949== 
==12949== HEAP SUMMARY:
==12949==     in use at exit: 0 bytes in 0 blocks
==12949==   total heap usage: 1,971 allocs, 1,971 frees, 246,968 bytes allocated
==12949== 
==12949== All heap blocks were freed -- no leaks are possible
==12949== 
==12949== For counts of detected and suppressed errors, rerun with: -v
==12949== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12952== Memcheck, a memory error detector
==12952== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12952== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==12952== Command: ./test -r xml "List::_destroy\ empty\ list"
==12952== 
==12952== 
==12952== HEAP SUMMARY:
==12952==     in use at exit: 0 bytes in 0 blocks
==12952==   total heap usage: 2,121 allocs, 2,121 frees, 252,328 bytes allocated
==12952== 
==12952== All heap blocks were freed -- no leaks are possible
==12952== 
==12952== For counts of detected and suppressed errors, rerun with: -v
==12952== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12954== Memcheck, a memory error detector
==12954== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12954== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==12954== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==12954== 
==12954== 
==12954== HEAP SUMMARY:
==12954==     in use at exit: 0 bytes in 0 blocks
==12954==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==12954== 
==12954== All heap blocks were freed -- no leaks are possible
==12954== 
==12954== For counts of detected and suppressed errors, rerun with: -v
==12954== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12956== Memcheck, a memory error detector
==12956== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12956== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==12956== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==12956== 
==12956== 
==12956== HEAP SUMMARY:
==12956==     in use at exit: 0 bytes in 0 blocks
==12956==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==12956== 
==12956== All heap blocks were freed -- no leaks are possible
==12956== 
==12956== For counts of detected and suppressed errors, rerun with: -v
==12956== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12958== Memcheck, a memory error detector
==12958== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12958== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==12958== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==12958== 
==12958== 
==12958== HEAP SUMMARY:
==12958==     in use at exit: 0 bytes in 0 blocks
==12958==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==12958== 
==12958== All heap blocks were freed -- no leaks are possible
==12958== 
==12958== For counts of detected and suppressed errors, rerun with: -v
==12958== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12960== Memcheck, a memory error detector
==12960== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12960== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==12960== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==12960== 
==12960== 
==12960== HEAP SUMMARY:
==12960==     in use at exit: 0 bytes in 0 blocks
==12960==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==12960== 
==12960== All heap blocks were freed -- no leaks are possible
==12960== 
==12960== For counts of detected and suppressed errors, rerun with: -v
==12960== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12962== Memcheck, a memory error detector
==12962== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12962== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==12962== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==12962== 
==12962== 
==12962== HEAP SUMMARY:
==12962==     in use at exit: 0 bytes in 0 blocks
==12962==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==12962== 
==12962== All heap blocks were freed -- no leaks are possible
==12962== 
==12962== For counts of detected and suppressed errors, rerun with: -v
==12962== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12964== Memcheck, a memory error detector
==12964== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12964== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==12964== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==12964== 
==12964== 
==12964== HEAP SUMMARY:
==12964==     in use at exit: 0 bytes in 0 blocks
==12964==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==12964== 
==12964== All heap blocks were freed -- no leaks are possible
==12964== 
==12964== For counts of detected and suppressed errors, rerun with: -v
==12964== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12966== Memcheck, a memory error detector
==12966== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12966== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==12966== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==12966== 
==12966== 
==12966== HEAP SUMMARY:
==12966==     in use at exit: 0 bytes in 0 blocks
==12966==   total heap usage: 2,118 allocs, 2,118 frees, 254,096 bytes allocated
==12966== 
==12966== All heap blocks were freed -- no leaks are possible
==12966== 
==12966== For counts of detected and suppressed errors, rerun with: -v
==12966== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12968== Memcheck, a memory error detector
==12968== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12968== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==12968== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==12968== 
==12968== 
==12968== HEAP SUMMARY:
==12968==     in use at exit: 0 bytes in 0 blocks
==12968==   total heap usage: 2,118 allocs, 2,118 frees, 256,496 bytes allocated
==12968== 
==12968== All heap blocks were freed -- no leaks are possible
==12968== 
==12968== For counts of detected and suppressed errors, rerun with: -v
==12968== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12970== Memcheck, a memory error detector
==12970== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12970== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==12970== Command: ./test -r xml "List::insert\ contents\ #2"
==12970== 
==12970== 
==12970== HEAP SUMMARY:
==12970==     in use at exit: 0 bytes in 0 blocks
==12970==   total heap usage: 2,124 allocs, 2,124 frees, 251,896 bytes allocated
==12970== 
==12970== All heap blocks were freed -- no leaks are possible
==12970== 
==12970== For counts of detected and suppressed errors, rerun with: -v
==12970== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12973== Memcheck, a memory error detector
==12973== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12973== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==12973== Command: ./test -r xml "List::waterfall\ simple"
==12973== 
==12973== 
==12973== HEAP SUMMARY:
==12973==     in use at exit: 0 bytes in 0 blocks
==12973==   total heap usage: 2,114 allocs, 2,114 frees, 251,560 bytes allocated
==12973== 
==12973== All heap blocks were freed -- no leaks are possible
==12973== 
==12973== For counts of detected and suppressed errors, rerun with: -v
==12973== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
