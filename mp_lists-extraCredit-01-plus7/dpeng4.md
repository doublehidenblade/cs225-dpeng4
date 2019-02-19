


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
==20045== Memcheck, a memory error detector
==20045== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==20045== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==20045== Command: ./test -r xml "List::insertFront\ size"
==20045== 
==20045== 
==20045== HEAP SUMMARY:
==20045==     in use at exit: 0 bytes in 0 blocks
==20045==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==20045== 
==20045== All heap blocks were freed -- no leaks are possible
==20045== 
==20045== For counts of detected and suppressed errors, rerun with: -v
==20045== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==20048== Memcheck, a memory error detector
==20048== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==20048== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==20048== Command: ./test -r xml "List::insertBack\ size"
==20048== 
==20048== 
==20048== HEAP SUMMARY:
==20048==     in use at exit: 0 bytes in 0 blocks
==20048==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==20048== 
==20048== All heap blocks were freed -- no leaks are possible
==20048== 
==20048== For counts of detected and suppressed errors, rerun with: -v
==20048== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==20050== Memcheck, a memory error detector
==20050== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==20050== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==20050== Command: ./test -r xml "List::insert\ contents"
==20050== 
==20050== 
==20050== HEAP SUMMARY:
==20050==     in use at exit: 0 bytes in 0 blocks
==20050==   total heap usage: 2,109 allocs, 2,109 frees, 251,400 bytes allocated
==20050== 
==20050== All heap blocks were freed -- no leaks are possible
==20050== 
==20050== For counts of detected and suppressed errors, rerun with: -v
==20050== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==20055== Memcheck, a memory error detector
==20055== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==20055== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==20055== Command: ./test -r xml "List::split\ simple"
==20055== 
==20055== 
==20055== HEAP SUMMARY:
==20055==     in use at exit: 0 bytes in 0 blocks
==20055==   total heap usage: 1,971 allocs, 1,971 frees, 246,968 bytes allocated
==20055== 
==20055== All heap blocks were freed -- no leaks are possible
==20055== 
==20055== For counts of detected and suppressed errors, rerun with: -v
==20055== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==20059== Memcheck, a memory error detector
==20059== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==20059== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==20059== Command: ./test -r xml "List::_destroy\ empty\ list"
==20059== 
==20059== 
==20059== HEAP SUMMARY:
==20059==     in use at exit: 0 bytes in 0 blocks
==20059==   total heap usage: 2,121 allocs, 2,121 frees, 252,328 bytes allocated
==20059== 
==20059== All heap blocks were freed -- no leaks are possible
==20059== 
==20059== For counts of detected and suppressed errors, rerun with: -v
==20059== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==20062== Memcheck, a memory error detector
==20062== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==20062== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==20062== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==20062== 
==20062== 
==20062== HEAP SUMMARY:
==20062==     in use at exit: 0 bytes in 0 blocks
==20062==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==20062== 
==20062== All heap blocks were freed -- no leaks are possible
==20062== 
==20062== For counts of detected and suppressed errors, rerun with: -v
==20062== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==20065== Memcheck, a memory error detector
==20065== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==20065== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==20065== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==20065== 
==20065== 
==20065== HEAP SUMMARY:
==20065==     in use at exit: 0 bytes in 0 blocks
==20065==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==20065== 
==20065== All heap blocks were freed -- no leaks are possible
==20065== 
==20065== For counts of detected and suppressed errors, rerun with: -v
==20065== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==20067== Memcheck, a memory error detector
==20067== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==20067== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==20067== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==20067== 
==20067== 
==20067== HEAP SUMMARY:
==20067==     in use at exit: 0 bytes in 0 blocks
==20067==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==20067== 
==20067== All heap blocks were freed -- no leaks are possible
==20067== 
==20067== For counts of detected and suppressed errors, rerun with: -v
==20067== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==20071== Memcheck, a memory error detector
==20071== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==20071== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==20071== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==20071== 
==20071== 
==20071== HEAP SUMMARY:
==20071==     in use at exit: 0 bytes in 0 blocks
==20071==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==20071== 
==20071== All heap blocks were freed -- no leaks are possible
==20071== 
==20071== For counts of detected and suppressed errors, rerun with: -v
==20071== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==20073== Memcheck, a memory error detector
==20073== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==20073== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==20073== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==20073== 
==20073== 
==20073== HEAP SUMMARY:
==20073==     in use at exit: 0 bytes in 0 blocks
==20073==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==20073== 
==20073== All heap blocks were freed -- no leaks are possible
==20073== 
==20073== For counts of detected and suppressed errors, rerun with: -v
==20073== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==20083== Memcheck, a memory error detector
==20083== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==20083== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==20083== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==20083== 
==20083== 
==20083== HEAP SUMMARY:
==20083==     in use at exit: 0 bytes in 0 blocks
==20083==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==20083== 
==20083== All heap blocks were freed -- no leaks are possible
==20083== 
==20083== For counts of detected and suppressed errors, rerun with: -v
==20083== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==20085== Memcheck, a memory error detector
==20085== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==20085== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==20085== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==20085== 
==20085== 
==20085== HEAP SUMMARY:
==20085==     in use at exit: 0 bytes in 0 blocks
==20085==   total heap usage: 2,118 allocs, 2,118 frees, 254,096 bytes allocated
==20085== 
==20085== All heap blocks were freed -- no leaks are possible
==20085== 
==20085== For counts of detected and suppressed errors, rerun with: -v
==20085== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==20090== Memcheck, a memory error detector
==20090== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==20090== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==20090== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==20090== 
==20090== 
==20090== HEAP SUMMARY:
==20090==     in use at exit: 0 bytes in 0 blocks
==20090==   total heap usage: 2,118 allocs, 2,118 frees, 256,496 bytes allocated
==20090== 
==20090== All heap blocks were freed -- no leaks are possible
==20090== 
==20090== For counts of detected and suppressed errors, rerun with: -v
==20090== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==20110== Memcheck, a memory error detector
==20110== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==20110== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==20110== Command: ./test -r xml "List::insert\ contents\ #2"
==20110== 
==20110== 
==20110== HEAP SUMMARY:
==20110==     in use at exit: 0 bytes in 0 blocks
==20110==   total heap usage: 2,124 allocs, 2,124 frees, 251,896 bytes allocated
==20110== 
==20110== All heap blocks were freed -- no leaks are possible
==20110== 
==20110== For counts of detected and suppressed errors, rerun with: -v
==20110== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==20113== Memcheck, a memory error detector
==20113== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==20113== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==20113== Command: ./test -r xml "List::waterfall\ simple"
==20113== 
==20113== 
==20113== HEAP SUMMARY:
==20113==     in use at exit: 0 bytes in 0 blocks
==20113==   total heap usage: 2,114 allocs, 2,114 frees, 251,560 bytes allocated
==20113== 
==20113== All heap blocks were freed -- no leaks are possible
==20113== 
==20113== For counts of detected and suppressed errors, rerun with: -v
==20113== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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

This report was generated for **dpeng4** using **bae76e13a71246763550cd6129c5420f3e930541** (from **February 19th 2019, 12:05:00 am**)
