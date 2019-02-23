


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
==15175== Memcheck, a memory error detector
==15175== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==15175== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==15175== Command: ./test -r xml "List::insertFront\ size"
==15175== 
==15175== 
==15175== HEAP SUMMARY:
==15175==     in use at exit: 0 bytes in 0 blocks
==15175==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==15175== 
==15175== All heap blocks were freed -- no leaks are possible
==15175== 
==15175== For counts of detected and suppressed errors, rerun with: -v
==15175== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15177== Memcheck, a memory error detector
==15177== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==15177== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==15177== Command: ./test -r xml "List::insertBack\ size"
==15177== 
==15177== 
==15177== HEAP SUMMARY:
==15177==     in use at exit: 0 bytes in 0 blocks
==15177==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==15177== 
==15177== All heap blocks were freed -- no leaks are possible
==15177== 
==15177== For counts of detected and suppressed errors, rerun with: -v
==15177== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15179== Memcheck, a memory error detector
==15179== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==15179== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==15179== Command: ./test -r xml "List::insert\ contents"
==15179== 
==15179== 
==15179== HEAP SUMMARY:
==15179==     in use at exit: 0 bytes in 0 blocks
==15179==   total heap usage: 2,109 allocs, 2,109 frees, 251,400 bytes allocated
==15179== 
==15179== All heap blocks were freed -- no leaks are possible
==15179== 
==15179== For counts of detected and suppressed errors, rerun with: -v
==15179== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15184== Memcheck, a memory error detector
==15184== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==15184== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==15184== Command: ./test -r xml "List::split\ simple"
==15184== 
==15184== 
==15184== HEAP SUMMARY:
==15184==     in use at exit: 0 bytes in 0 blocks
==15184==   total heap usage: 1,971 allocs, 1,971 frees, 246,968 bytes allocated
==15184== 
==15184== All heap blocks were freed -- no leaks are possible
==15184== 
==15184== For counts of detected and suppressed errors, rerun with: -v
==15184== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15221== Memcheck, a memory error detector
==15221== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==15221== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==15221== Command: ./test -r xml "List::_destroy\ empty\ list"
==15221== 
==15221== 
==15221== HEAP SUMMARY:
==15221==     in use at exit: 0 bytes in 0 blocks
==15221==   total heap usage: 2,121 allocs, 2,121 frees, 252,328 bytes allocated
==15221== 
==15221== All heap blocks were freed -- no leaks are possible
==15221== 
==15221== For counts of detected and suppressed errors, rerun with: -v
==15221== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15224== Memcheck, a memory error detector
==15224== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==15224== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==15224== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==15224== 
==15224== 
==15224== HEAP SUMMARY:
==15224==     in use at exit: 0 bytes in 0 blocks
==15224==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==15224== 
==15224== All heap blocks were freed -- no leaks are possible
==15224== 
==15224== For counts of detected and suppressed errors, rerun with: -v
==15224== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15235== Memcheck, a memory error detector
==15235== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==15235== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==15235== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==15235== 
==15235== 
==15235== HEAP SUMMARY:
==15235==     in use at exit: 0 bytes in 0 blocks
==15235==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==15235== 
==15235== All heap blocks were freed -- no leaks are possible
==15235== 
==15235== For counts of detected and suppressed errors, rerun with: -v
==15235== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15242== Memcheck, a memory error detector
==15242== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==15242== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==15242== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==15242== 
==15242== 
==15242== HEAP SUMMARY:
==15242==     in use at exit: 0 bytes in 0 blocks
==15242==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==15242== 
==15242== All heap blocks were freed -- no leaks are possible
==15242== 
==15242== For counts of detected and suppressed errors, rerun with: -v
==15242== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15246== Memcheck, a memory error detector
==15246== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==15246== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==15246== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==15246== 
==15246== 
==15246== HEAP SUMMARY:
==15246==     in use at exit: 0 bytes in 0 blocks
==15246==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==15246== 
==15246== All heap blocks were freed -- no leaks are possible
==15246== 
==15246== For counts of detected and suppressed errors, rerun with: -v
==15246== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15250== Memcheck, a memory error detector
==15250== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==15250== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==15250== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==15250== 
==15250== 
==15250== HEAP SUMMARY:
==15250==     in use at exit: 0 bytes in 0 blocks
==15250==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==15250== 
==15250== All heap blocks were freed -- no leaks are possible
==15250== 
==15250== For counts of detected and suppressed errors, rerun with: -v
==15250== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15253== Memcheck, a memory error detector
==15253== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==15253== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==15253== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==15253== 
==15253== 
==15253== HEAP SUMMARY:
==15253==     in use at exit: 0 bytes in 0 blocks
==15253==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==15253== 
==15253== All heap blocks were freed -- no leaks are possible
==15253== 
==15253== For counts of detected and suppressed errors, rerun with: -v
==15253== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15257== Memcheck, a memory error detector
==15257== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==15257== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==15257== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==15257== 
==15257== 
==15257== HEAP SUMMARY:
==15257==     in use at exit: 0 bytes in 0 blocks
==15257==   total heap usage: 2,118 allocs, 2,118 frees, 254,096 bytes allocated
==15257== 
==15257== All heap blocks were freed -- no leaks are possible
==15257== 
==15257== For counts of detected and suppressed errors, rerun with: -v
==15257== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15260== Memcheck, a memory error detector
==15260== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==15260== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==15260== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==15260== 
==15260== 
==15260== HEAP SUMMARY:
==15260==     in use at exit: 0 bytes in 0 blocks
==15260==   total heap usage: 2,118 allocs, 2,118 frees, 256,496 bytes allocated
==15260== 
==15260== All heap blocks were freed -- no leaks are possible
==15260== 
==15260== For counts of detected and suppressed errors, rerun with: -v
==15260== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15264== Memcheck, a memory error detector
==15264== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==15264== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==15264== Command: ./test -r xml "List::insert\ contents\ #2"
==15264== 
==15264== 
==15264== HEAP SUMMARY:
==15264==     in use at exit: 0 bytes in 0 blocks
==15264==   total heap usage: 2,124 allocs, 2,124 frees, 251,896 bytes allocated
==15264== 
==15264== All heap blocks were freed -- no leaks are possible
==15264== 
==15264== For counts of detected and suppressed errors, rerun with: -v
==15264== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15268== Memcheck, a memory error detector
==15268== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==15268== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==15268== Command: ./test -r xml "List::split\ edge\ cases"
==15268== 
==15268== 
==15268== HEAP SUMMARY:
==15268==     in use at exit: 0 bytes in 0 blocks
==15268==   total heap usage: 2,114 allocs, 2,114 frees, 251,560 bytes allocated
==15268== 
==15268== All heap blocks were freed -- no leaks are possible
==15268== 
==15268== For counts of detected and suppressed errors, rerun with: -v
==15268== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15272== Memcheck, a memory error detector
==15272== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==15272== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==15272== Command: ./test -r xml "List::waterfall\ simple"
==15272== 
==15272== 
==15272== HEAP SUMMARY:
==15272==     in use at exit: 0 bytes in 0 blocks
==15272==   total heap usage: 2,114 allocs, 2,114 frees, 251,560 bytes allocated
==15272== 
==15272== All heap blocks were freed -- no leaks are possible
==15272== 
==15272== For counts of detected and suppressed errors, rerun with: -v
==15272== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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

This report was generated for **dpeng4** using **ade5ad0e00b8b860bc91fa159c4ce1360c9cdfde** (from **February 23rd 2019, 12:05:00 am**)
