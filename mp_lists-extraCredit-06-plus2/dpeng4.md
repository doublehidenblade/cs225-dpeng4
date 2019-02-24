


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
==6815== Memcheck, a memory error detector
==6815== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==6815== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==6815== Command: ./test -r xml "List::insertFront\ size"
==6815== 
==6815== 
==6815== HEAP SUMMARY:
==6815==     in use at exit: 0 bytes in 0 blocks
==6815==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==6815== 
==6815== All heap blocks were freed -- no leaks are possible
==6815== 
==6815== For counts of detected and suppressed errors, rerun with: -v
==6815== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==6818== Memcheck, a memory error detector
==6818== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==6818== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==6818== Command: ./test -r xml "List::insertBack\ size"
==6818== 
==6818== 
==6818== HEAP SUMMARY:
==6818==     in use at exit: 0 bytes in 0 blocks
==6818==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==6818== 
==6818== All heap blocks were freed -- no leaks are possible
==6818== 
==6818== For counts of detected and suppressed errors, rerun with: -v
==6818== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==6822== Memcheck, a memory error detector
==6822== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==6822== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==6822== Command: ./test -r xml "List::insert\ contents"
==6822== 
==6822== 
==6822== HEAP SUMMARY:
==6822==     in use at exit: 0 bytes in 0 blocks
==6822==   total heap usage: 2,109 allocs, 2,109 frees, 251,400 bytes allocated
==6822== 
==6822== All heap blocks were freed -- no leaks are possible
==6822== 
==6822== For counts of detected and suppressed errors, rerun with: -v
==6822== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==6829== Memcheck, a memory error detector
==6829== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==6829== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==6829== Command: ./test -r xml "List::split\ simple"
==6829== 
==6829== 
==6829== HEAP SUMMARY:
==6829==     in use at exit: 0 bytes in 0 blocks
==6829==   total heap usage: 1,971 allocs, 1,971 frees, 246,968 bytes allocated
==6829== 
==6829== All heap blocks were freed -- no leaks are possible
==6829== 
==6829== For counts of detected and suppressed errors, rerun with: -v
==6829== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==6837== Memcheck, a memory error detector
==6837== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==6837== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==6837== Command: ./test -r xml "List::_destroy\ empty\ list"
==6837== 
==6837== 
==6837== HEAP SUMMARY:
==6837==     in use at exit: 0 bytes in 0 blocks
==6837==   total heap usage: 2,121 allocs, 2,121 frees, 252,328 bytes allocated
==6837== 
==6837== All heap blocks were freed -- no leaks are possible
==6837== 
==6837== For counts of detected and suppressed errors, rerun with: -v
==6837== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==6841== Memcheck, a memory error detector
==6841== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==6841== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==6841== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==6841== 
==6841== 
==6841== HEAP SUMMARY:
==6841==     in use at exit: 0 bytes in 0 blocks
==6841==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==6841== 
==6841== All heap blocks were freed -- no leaks are possible
==6841== 
==6841== For counts of detected and suppressed errors, rerun with: -v
==6841== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==6846== Memcheck, a memory error detector
==6846== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==6846== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==6846== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==6846== 
==6846== 
==6846== HEAP SUMMARY:
==6846==     in use at exit: 0 bytes in 0 blocks
==6846==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==6846== 
==6846== All heap blocks were freed -- no leaks are possible
==6846== 
==6846== For counts of detected and suppressed errors, rerun with: -v
==6846== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==6851== Memcheck, a memory error detector
==6851== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==6851== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==6851== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==6851== 
==6851== 
==6851== HEAP SUMMARY:
==6851==     in use at exit: 0 bytes in 0 blocks
==6851==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==6851== 
==6851== All heap blocks were freed -- no leaks are possible
==6851== 
==6851== For counts of detected and suppressed errors, rerun with: -v
==6851== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==6855== Memcheck, a memory error detector
==6855== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==6855== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==6855== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==6855== 
==6855== 
==6855== HEAP SUMMARY:
==6855==     in use at exit: 0 bytes in 0 blocks
==6855==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==6855== 
==6855== All heap blocks were freed -- no leaks are possible
==6855== 
==6855== For counts of detected and suppressed errors, rerun with: -v
==6855== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==6859== Memcheck, a memory error detector
==6859== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==6859== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==6859== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==6859== 
==6859== 
==6859== HEAP SUMMARY:
==6859==     in use at exit: 0 bytes in 0 blocks
==6859==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==6859== 
==6859== All heap blocks were freed -- no leaks are possible
==6859== 
==6859== For counts of detected and suppressed errors, rerun with: -v
==6859== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==6863== Memcheck, a memory error detector
==6863== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==6863== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==6863== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==6863== 
==6863== 
==6863== HEAP SUMMARY:
==6863==     in use at exit: 0 bytes in 0 blocks
==6863==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==6863== 
==6863== All heap blocks were freed -- no leaks are possible
==6863== 
==6863== For counts of detected and suppressed errors, rerun with: -v
==6863== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==6867== Memcheck, a memory error detector
==6867== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==6867== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==6867== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==6867== 
==6867== 
==6867== HEAP SUMMARY:
==6867==     in use at exit: 0 bytes in 0 blocks
==6867==   total heap usage: 2,118 allocs, 2,118 frees, 254,096 bytes allocated
==6867== 
==6867== All heap blocks were freed -- no leaks are possible
==6867== 
==6867== For counts of detected and suppressed errors, rerun with: -v
==6867== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==6871== Memcheck, a memory error detector
==6871== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==6871== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==6871== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==6871== 
==6871== 
==6871== HEAP SUMMARY:
==6871==     in use at exit: 0 bytes in 0 blocks
==6871==   total heap usage: 2,118 allocs, 2,118 frees, 256,496 bytes allocated
==6871== 
==6871== All heap blocks were freed -- no leaks are possible
==6871== 
==6871== For counts of detected and suppressed errors, rerun with: -v
==6871== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==6875== Memcheck, a memory error detector
==6875== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==6875== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==6875== Command: ./test -r xml "List::insert\ contents\ #2"
==6875== 
==6875== 
==6875== HEAP SUMMARY:
==6875==     in use at exit: 0 bytes in 0 blocks
==6875==   total heap usage: 2,124 allocs, 2,124 frees, 251,896 bytes allocated
==6875== 
==6875== All heap blocks were freed -- no leaks are possible
==6875== 
==6875== For counts of detected and suppressed errors, rerun with: -v
==6875== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==6879== Memcheck, a memory error detector
==6879== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==6879== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==6879== Command: ./test -r xml "List::split\ edge\ cases"
==6879== 
==6879== 
==6879== HEAP SUMMARY:
==6879==     in use at exit: 0 bytes in 0 blocks
==6879==   total heap usage: 2,114 allocs, 2,114 frees, 251,560 bytes allocated
==6879== 
==6879== All heap blocks were freed -- no leaks are possible
==6879== 
==6879== For counts of detected and suppressed errors, rerun with: -v
==6879== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==6883== Memcheck, a memory error detector
==6883== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==6883== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==6883== Command: ./test -r xml "List::waterfall\ simple"
==6883== 
==6883== 
==6883== HEAP SUMMARY:
==6883==     in use at exit: 0 bytes in 0 blocks
==6883==   total heap usage: 2,114 allocs, 2,114 frees, 251,560 bytes allocated
==6883== 
==6883== All heap blocks were freed -- no leaks are possible
==6883== 
==6883== For counts of detected and suppressed errors, rerun with: -v
==6883== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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

This report was generated for **dpeng4** using **ade5ad0e00b8b860bc91fa159c4ce1360c9cdfde** (from **February 24th 2019, 12:05:00 am**)
