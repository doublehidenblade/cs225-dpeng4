


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
==24473== Memcheck, a memory error detector
==24473== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==24473== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==24473== Command: ./test -r xml "List::insertFront\ size"
==24473== 
==24473== 
==24473== HEAP SUMMARY:
==24473==     in use at exit: 0 bytes in 0 blocks
==24473==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==24473== 
==24473== All heap blocks were freed -- no leaks are possible
==24473== 
==24473== For counts of detected and suppressed errors, rerun with: -v
==24473== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24476== Memcheck, a memory error detector
==24476== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==24476== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==24476== Command: ./test -r xml "List::insertBack\ size"
==24476== 
==24476== 
==24476== HEAP SUMMARY:
==24476==     in use at exit: 0 bytes in 0 blocks
==24476==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==24476== 
==24476== All heap blocks were freed -- no leaks are possible
==24476== 
==24476== For counts of detected and suppressed errors, rerun with: -v
==24476== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24479== Memcheck, a memory error detector
==24479== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==24479== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==24479== Command: ./test -r xml "List::insert\ contents"
==24479== 
==24479== 
==24479== HEAP SUMMARY:
==24479==     in use at exit: 0 bytes in 0 blocks
==24479==   total heap usage: 2,109 allocs, 2,109 frees, 251,400 bytes allocated
==24479== 
==24479== All heap blocks were freed -- no leaks are possible
==24479== 
==24479== For counts of detected and suppressed errors, rerun with: -v
==24479== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24482== Memcheck, a memory error detector
==24482== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==24482== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==24482== Command: ./test -r xml "List::split\ simple"
==24482== 
==24482== 
==24482== HEAP SUMMARY:
==24482==     in use at exit: 0 bytes in 0 blocks
==24482==   total heap usage: 1,971 allocs, 1,971 frees, 246,968 bytes allocated
==24482== 
==24482== All heap blocks were freed -- no leaks are possible
==24482== 
==24482== For counts of detected and suppressed errors, rerun with: -v
==24482== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24485== Memcheck, a memory error detector
==24485== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==24485== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==24485== Command: ./test -r xml "List::_destroy\ empty\ list"
==24485== 
==24485== 
==24485== HEAP SUMMARY:
==24485==     in use at exit: 0 bytes in 0 blocks
==24485==   total heap usage: 2,121 allocs, 2,121 frees, 252,328 bytes allocated
==24485== 
==24485== All heap blocks were freed -- no leaks are possible
==24485== 
==24485== For counts of detected and suppressed errors, rerun with: -v
==24485== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24522== Memcheck, a memory error detector
==24522== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==24522== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==24522== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==24522== 
==24522== 
==24522== HEAP SUMMARY:
==24522==     in use at exit: 0 bytes in 0 blocks
==24522==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==24522== 
==24522== All heap blocks were freed -- no leaks are possible
==24522== 
==24522== For counts of detected and suppressed errors, rerun with: -v
==24522== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24525== Memcheck, a memory error detector
==24525== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==24525== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==24525== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==24525== 
==24525== 
==24525== HEAP SUMMARY:
==24525==     in use at exit: 0 bytes in 0 blocks
==24525==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==24525== 
==24525== All heap blocks were freed -- no leaks are possible
==24525== 
==24525== For counts of detected and suppressed errors, rerun with: -v
==24525== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24528== Memcheck, a memory error detector
==24528== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==24528== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==24528== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==24528== 
==24528== 
==24528== HEAP SUMMARY:
==24528==     in use at exit: 0 bytes in 0 blocks
==24528==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==24528== 
==24528== All heap blocks were freed -- no leaks are possible
==24528== 
==24528== For counts of detected and suppressed errors, rerun with: -v
==24528== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24534== Memcheck, a memory error detector
==24534== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==24534== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==24534== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==24534== 
==24534== 
==24534== HEAP SUMMARY:
==24534==     in use at exit: 0 bytes in 0 blocks
==24534==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==24534== 
==24534== All heap blocks were freed -- no leaks are possible
==24534== 
==24534== For counts of detected and suppressed errors, rerun with: -v
==24534== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24539== Memcheck, a memory error detector
==24539== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==24539== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==24539== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==24539== 
==24539== 
==24539== HEAP SUMMARY:
==24539==     in use at exit: 0 bytes in 0 blocks
==24539==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==24539== 
==24539== All heap blocks were freed -- no leaks are possible
==24539== 
==24539== For counts of detected and suppressed errors, rerun with: -v
==24539== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24543== Memcheck, a memory error detector
==24543== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==24543== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==24543== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==24543== 
==24543== 
==24543== HEAP SUMMARY:
==24543==     in use at exit: 0 bytes in 0 blocks
==24543==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==24543== 
==24543== All heap blocks were freed -- no leaks are possible
==24543== 
==24543== For counts of detected and suppressed errors, rerun with: -v
==24543== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24548== Memcheck, a memory error detector
==24548== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==24548== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==24548== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==24548== 
==24548== 
==24548== HEAP SUMMARY:
==24548==     in use at exit: 0 bytes in 0 blocks
==24548==   total heap usage: 2,118 allocs, 2,118 frees, 254,096 bytes allocated
==24548== 
==24548== All heap blocks were freed -- no leaks are possible
==24548== 
==24548== For counts of detected and suppressed errors, rerun with: -v
==24548== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24551== Memcheck, a memory error detector
==24551== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==24551== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==24551== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==24551== 
==24551== 
==24551== HEAP SUMMARY:
==24551==     in use at exit: 0 bytes in 0 blocks
==24551==   total heap usage: 2,118 allocs, 2,118 frees, 256,496 bytes allocated
==24551== 
==24551== All heap blocks were freed -- no leaks are possible
==24551== 
==24551== For counts of detected and suppressed errors, rerun with: -v
==24551== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24555== Memcheck, a memory error detector
==24555== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==24555== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==24555== Command: ./test -r xml "List::insert\ contents\ #2"
==24555== 
==24555== 
==24555== HEAP SUMMARY:
==24555==     in use at exit: 0 bytes in 0 blocks
==24555==   total heap usage: 2,124 allocs, 2,124 frees, 251,896 bytes allocated
==24555== 
==24555== All heap blocks were freed -- no leaks are possible
==24555== 
==24555== For counts of detected and suppressed errors, rerun with: -v
==24555== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24559== Memcheck, a memory error detector
==24559== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==24559== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==24559== Command: ./test -r xml "List::waterfall\ simple"
==24559== 
==24559== 
==24559== HEAP SUMMARY:
==24559==     in use at exit: 0 bytes in 0 blocks
==24559==   total heap usage: 2,114 allocs, 2,114 frees, 251,560 bytes allocated
==24559== 
==24559== All heap blocks were freed -- no leaks are possible
==24559== 
==24559== For counts of detected and suppressed errors, rerun with: -v
==24559== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
