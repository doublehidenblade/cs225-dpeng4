


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
==31175== Memcheck, a memory error detector
==31175== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==31175== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==31175== Command: ./test -r xml "List::insertFront\ size"
==31175== 
==31175== 
==31175== HEAP SUMMARY:
==31175==     in use at exit: 0 bytes in 0 blocks
==31175==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==31175== 
==31175== All heap blocks were freed -- no leaks are possible
==31175== 
==31175== For counts of detected and suppressed errors, rerun with: -v
==31175== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31182== Memcheck, a memory error detector
==31182== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==31182== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==31182== Command: ./test -r xml "List::insertBack\ size"
==31182== 
==31182== 
==31182== HEAP SUMMARY:
==31182==     in use at exit: 0 bytes in 0 blocks
==31182==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==31182== 
==31182== All heap blocks were freed -- no leaks are possible
==31182== 
==31182== For counts of detected and suppressed errors, rerun with: -v
==31182== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31191== Memcheck, a memory error detector
==31191== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==31191== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==31191== Command: ./test -r xml "List::insert\ contents"
==31191== 
==31191== 
==31191== HEAP SUMMARY:
==31191==     in use at exit: 0 bytes in 0 blocks
==31191==   total heap usage: 2,109 allocs, 2,109 frees, 251,400 bytes allocated
==31191== 
==31191== All heap blocks were freed -- no leaks are possible
==31191== 
==31191== For counts of detected and suppressed errors, rerun with: -v
==31191== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31203== Memcheck, a memory error detector
==31203== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==31203== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==31203== Command: ./test -r xml "List::split\ simple"
==31203== 
==31203== 
==31203== HEAP SUMMARY:
==31203==     in use at exit: 0 bytes in 0 blocks
==31203==   total heap usage: 1,971 allocs, 1,971 frees, 246,968 bytes allocated
==31203== 
==31203== All heap blocks were freed -- no leaks are possible
==31203== 
==31203== For counts of detected and suppressed errors, rerun with: -v
==31203== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31224== Memcheck, a memory error detector
==31224== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==31224== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==31224== Command: ./test -r xml "List::_destroy\ empty\ list"
==31224== 
==31224== 
==31224== HEAP SUMMARY:
==31224==     in use at exit: 0 bytes in 0 blocks
==31224==   total heap usage: 2,121 allocs, 2,121 frees, 252,328 bytes allocated
==31224== 
==31224== All heap blocks were freed -- no leaks are possible
==31224== 
==31224== For counts of detected and suppressed errors, rerun with: -v
==31224== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31228== Memcheck, a memory error detector
==31228== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==31228== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==31228== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==31228== 
==31228== 
==31228== HEAP SUMMARY:
==31228==     in use at exit: 0 bytes in 0 blocks
==31228==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==31228== 
==31228== All heap blocks were freed -- no leaks are possible
==31228== 
==31228== For counts of detected and suppressed errors, rerun with: -v
==31228== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31230== Memcheck, a memory error detector
==31230== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==31230== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==31230== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==31230== 
==31230== 
==31230== HEAP SUMMARY:
==31230==     in use at exit: 0 bytes in 0 blocks
==31230==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==31230== 
==31230== All heap blocks were freed -- no leaks are possible
==31230== 
==31230== For counts of detected and suppressed errors, rerun with: -v
==31230== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31246== Memcheck, a memory error detector
==31246== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==31246== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==31246== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==31246== 
==31246== 
==31246== HEAP SUMMARY:
==31246==     in use at exit: 0 bytes in 0 blocks
==31246==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==31246== 
==31246== All heap blocks were freed -- no leaks are possible
==31246== 
==31246== For counts of detected and suppressed errors, rerun with: -v
==31246== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31251== Memcheck, a memory error detector
==31251== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==31251== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==31251== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==31251== 
==31251== 
==31251== HEAP SUMMARY:
==31251==     in use at exit: 0 bytes in 0 blocks
==31251==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==31251== 
==31251== All heap blocks were freed -- no leaks are possible
==31251== 
==31251== For counts of detected and suppressed errors, rerun with: -v
==31251== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31303== Memcheck, a memory error detector
==31303== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==31303== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==31303== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==31303== 
==31303== 
==31303== HEAP SUMMARY:
==31303==     in use at exit: 0 bytes in 0 blocks
==31303==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==31303== 
==31303== All heap blocks were freed -- no leaks are possible
==31303== 
==31303== For counts of detected and suppressed errors, rerun with: -v
==31303== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31310== Memcheck, a memory error detector
==31310== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==31310== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==31310== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==31310== 
==31310== 
==31310== HEAP SUMMARY:
==31310==     in use at exit: 0 bytes in 0 blocks
==31310==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==31310== 
==31310== All heap blocks were freed -- no leaks are possible
==31310== 
==31310== For counts of detected and suppressed errors, rerun with: -v
==31310== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31336== Memcheck, a memory error detector
==31336== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==31336== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==31336== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==31336== 
==31336== 
==31336== HEAP SUMMARY:
==31336==     in use at exit: 0 bytes in 0 blocks
==31336==   total heap usage: 2,118 allocs, 2,118 frees, 254,096 bytes allocated
==31336== 
==31336== All heap blocks were freed -- no leaks are possible
==31336== 
==31336== For counts of detected and suppressed errors, rerun with: -v
==31336== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31376== Memcheck, a memory error detector
==31376== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==31376== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==31376== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==31376== 
==31376== 
==31376== HEAP SUMMARY:
==31376==     in use at exit: 0 bytes in 0 blocks
==31376==   total heap usage: 2,118 allocs, 2,118 frees, 256,496 bytes allocated
==31376== 
==31376== All heap blocks were freed -- no leaks are possible
==31376== 
==31376== For counts of detected and suppressed errors, rerun with: -v
==31376== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31384== Memcheck, a memory error detector
==31384== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==31384== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==31384== Command: ./test -r xml "List::insert\ contents\ #2"
==31384== 
==31384== 
==31384== HEAP SUMMARY:
==31384==     in use at exit: 0 bytes in 0 blocks
==31384==   total heap usage: 2,124 allocs, 2,124 frees, 251,896 bytes allocated
==31384== 
==31384== All heap blocks were freed -- no leaks are possible
==31384== 
==31384== For counts of detected and suppressed errors, rerun with: -v
==31384== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31402== Memcheck, a memory error detector
==31402== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==31402== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==31402== Command: ./test -r xml "List::split\ edge\ cases"
==31402== 
==31402== 
==31402== HEAP SUMMARY:
==31402==     in use at exit: 0 bytes in 0 blocks
==31402==   total heap usage: 2,114 allocs, 2,114 frees, 251,560 bytes allocated
==31402== 
==31402== All heap blocks were freed -- no leaks are possible
==31402== 
==31402== For counts of detected and suppressed errors, rerun with: -v
==31402== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31409== Memcheck, a memory error detector
==31409== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==31409== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==31409== Command: ./test -r xml "List::waterfall\ simple"
==31409== 
==31409== 
==31409== HEAP SUMMARY:
==31409==     in use at exit: 0 bytes in 0 blocks
==31409==   total heap usage: 2,114 allocs, 2,114 frees, 251,560 bytes allocated
==31409== 
==31409== All heap blocks were freed -- no leaks are possible
==31409== 
==31409== For counts of detected and suppressed errors, rerun with: -v
==31409== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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

This report was generated for **dpeng4** using **ade5ad0e00b8b860bc91fa159c4ce1360c9cdfde** (from **February 25th 2019, 12:05:00 am**)
