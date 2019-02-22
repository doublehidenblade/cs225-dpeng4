


## Score: 114/114 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c tests/tests_part2.cpp -o .objs/tests/tests_part2.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c tests/tests_part1.cpp -o .objs/tests/tests_part1.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c tests/test_part2_extra.cpp -o .objs/tests/test_part2_extra.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c tests/tests_part1_extra.cpp -o .objs/tests/tests_part1_extra.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests_part2.o .objs/tests/tests_part1.o .objs/tests/test_part2_extra.o .objs/tests/tests_part1_extra.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -o test

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
==29684== Memcheck, a memory error detector
==29684== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29684== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29684== Command: ./test -r xml "List::merge"
==29684== 
==29684== 
==29684== HEAP SUMMARY:
==29684==     in use at exit: 0 bytes in 0 blocks
==29684==   total heap usage: 243,290 allocs, 243,290 frees, 79,504,233 bytes allocated
==29684== 
==29684== All heap blocks were freed -- no leaks are possible
==29684== 
==29684== For counts of detected and suppressed errors, rerun with: -v
==29684== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::merge" tags="[part=2][valgrind][weight=10]" filename="tests/tests_part2.cpp" line="59">
      <OverallResult success="true">
        <StdOut>
done merge
        </StdOut>
      </OverallResult>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::sort simple #1

- **Points**: 2 / 2

```
==29716== Memcheck, a memory error detector
==29716== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29716== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29716== Command: ./test -r xml "List::sort\ simple\ #1"
==29716== 
==29716== 
==29716== HEAP SUMMARY:
==29716==     in use at exit: 0 bytes in 0 blocks
==29716==   total heap usage: 2,183 allocs, 2,183 frees, 262,768 bytes allocated
==29716== 
==29716== All heap blocks were freed -- no leaks are possible
==29716== 
==29716== For counts of detected and suppressed errors, rerun with: -v
==29716== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==29736== Memcheck, a memory error detector
==29736== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29736== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29736== Command: ./test -r xml "List::sort\ simple\ #2"
==29736== 
==29736== 
==29736== HEAP SUMMARY:
==29736==     in use at exit: 0 bytes in 0 blocks
==29736==   total heap usage: 2,183 allocs, 2,183 frees, 262,816 bytes allocated
==29736== 
==29736== All heap blocks were freed -- no leaks are possible
==29736== 
==29736== For counts of detected and suppressed errors, rerun with: -v
==29736== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==29750== Memcheck, a memory error detector
==29750== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29750== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29750== Command: ./test -r xml "List::insertFront\ size"
==29750== 
==29750== 
==29750== HEAP SUMMARY:
==29750==     in use at exit: 0 bytes in 0 blocks
==29750==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==29750== 
==29750== All heap blocks were freed -- no leaks are possible
==29750== 
==29750== For counts of detected and suppressed errors, rerun with: -v
==29750== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==29754== Memcheck, a memory error detector
==29754== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29754== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29754== Command: ./test -r xml "List::insertBack\ size"
==29754== 
==29754== 
==29754== HEAP SUMMARY:
==29754==     in use at exit: 0 bytes in 0 blocks
==29754==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==29754== 
==29754== All heap blocks were freed -- no leaks are possible
==29754== 
==29754== For counts of detected and suppressed errors, rerun with: -v
==29754== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==29759== Memcheck, a memory error detector
==29759== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29759== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29759== Command: ./test -r xml "List::insert\ contents"
==29759== 
==29759== 
==29759== HEAP SUMMARY:
==29759==     in use at exit: 0 bytes in 0 blocks
==29759==   total heap usage: 2,324 allocs, 2,324 frees, 267,272 bytes allocated
==29759== 
==29759== All heap blocks were freed -- no leaks are possible
==29759== 
==29759== For counts of detected and suppressed errors, rerun with: -v
==29759== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==29762== Memcheck, a memory error detector
==29762== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29762== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29762== Command: ./test -r xml "List::split\ simple"
==29762== 
==29762== 
==29762== HEAP SUMMARY:
==29762==     in use at exit: 0 bytes in 0 blocks
==29762==   total heap usage: 2,186 allocs, 2,186 frees, 262,840 bytes allocated
==29762== 
==29762== All heap blocks were freed -- no leaks are possible
==29762== 
==29762== For counts of detected and suppressed errors, rerun with: -v
==29762== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==29765== Memcheck, a memory error detector
==29765== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29765== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29765== Command: ./test -r xml "List::_destroy\ empty\ list"
==29765== 
==29765== 
==29765== HEAP SUMMARY:
==29765==     in use at exit: 0 bytes in 0 blocks
==29765==   total heap usage: 2,336 allocs, 2,336 frees, 268,200 bytes allocated
==29765== 
==29765== All heap blocks were freed -- no leaks are possible
==29765== 
==29765== For counts of detected and suppressed errors, rerun with: -v
==29765== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==29767== Memcheck, a memory error detector
==29767== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29767== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29767== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==29767== 
==29767== 
==29767== HEAP SUMMARY:
==29767==     in use at exit: 0 bytes in 0 blocks
==29767==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==29767== 
==29767== All heap blocks were freed -- no leaks are possible
==29767== 
==29767== For counts of detected and suppressed errors, rerun with: -v
==29767== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==29792== Memcheck, a memory error detector
==29792== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29792== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29792== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==29792== 
==29792== 
==29792== HEAP SUMMARY:
==29792==     in use at exit: 0 bytes in 0 blocks
==29792==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==29792== 
==29792== All heap blocks were freed -- no leaks are possible
==29792== 
==29792== For counts of detected and suppressed errors, rerun with: -v
==29792== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==29796== Memcheck, a memory error detector
==29796== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29796== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29796== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==29796== 
==29796== 
==29796== HEAP SUMMARY:
==29796==     in use at exit: 0 bytes in 0 blocks
==29796==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==29796== 
==29796== All heap blocks were freed -- no leaks are possible
==29796== 
==29796== For counts of detected and suppressed errors, rerun with: -v
==29796== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==29800== Memcheck, a memory error detector
==29800== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29800== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29800== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==29800== 
==29800== 
==29800== HEAP SUMMARY:
==29800==     in use at exit: 0 bytes in 0 blocks
==29800==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==29800== 
==29800== All heap blocks were freed -- no leaks are possible
==29800== 
==29800== For counts of detected and suppressed errors, rerun with: -v
==29800== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==29808== Memcheck, a memory error detector
==29808== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29808== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29808== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==29808== 
==29808== 
==29808== HEAP SUMMARY:
==29808==     in use at exit: 0 bytes in 0 blocks
==29808==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==29808== 
==29808== All heap blocks were freed -- no leaks are possible
==29808== 
==29808== For counts of detected and suppressed errors, rerun with: -v
==29808== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==29812== Memcheck, a memory error detector
==29812== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29812== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29812== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==29812== 
==29812== 
==29812== HEAP SUMMARY:
==29812==     in use at exit: 0 bytes in 0 blocks
==29812==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==29812== 
==29812== All heap blocks were freed -- no leaks are possible
==29812== 
==29812== For counts of detected and suppressed errors, rerun with: -v
==29812== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==29815== Memcheck, a memory error detector
==29815== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29815== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29815== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==29815== 
==29815== 
==29815== HEAP SUMMARY:
==29815==     in use at exit: 0 bytes in 0 blocks
==29815==   total heap usage: 2,333 allocs, 2,333 frees, 269,968 bytes allocated
==29815== 
==29815== All heap blocks were freed -- no leaks are possible
==29815== 
==29815== For counts of detected and suppressed errors, rerun with: -v
==29815== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==29819== Memcheck, a memory error detector
==29819== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29819== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29819== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==29819== 
==29819== 
==29819== HEAP SUMMARY:
==29819==     in use at exit: 0 bytes in 0 blocks
==29819==   total heap usage: 2,333 allocs, 2,333 frees, 272,368 bytes allocated
==29819== 
==29819== All heap blocks were freed -- no leaks are possible
==29819== 
==29819== For counts of detected and suppressed errors, rerun with: -v
==29819== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==29823== Memcheck, a memory error detector
==29823== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29823== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29823== Command: ./test -r xml "List::reverse\ simple"
==29823== 
==29823== 
==29823== HEAP SUMMARY:
==29823==     in use at exit: 0 bytes in 0 blocks
==29823==   total heap usage: 2,189 allocs, 2,189 frees, 262,948 bytes allocated
==29823== 
==29823== All heap blocks were freed -- no leaks are possible
==29823== 
==29823== For counts of detected and suppressed errors, rerun with: -v
==29823== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==29827== Memcheck, a memory error detector
==29827== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29827== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29827== Command: ./test -r xml "List::reverse\ edge\ cases"
==29827== 
==29827== 
==29827== HEAP SUMMARY:
==29827==     in use at exit: 0 bytes in 0 blocks
==29827==   total heap usage: 2,334 allocs, 2,334 frees, 267,648 bytes allocated
==29827== 
==29827== All heap blocks were freed -- no leaks are possible
==29827== 
==29827== For counts of detected and suppressed errors, rerun with: -v
==29827== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==29832== Memcheck, a memory error detector
==29832== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29832== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29832== Command: ./test -r xml "List::reverseNth\ #3"
==29832== 
==29832== 
==29832== HEAP SUMMARY:
==29832==     in use at exit: 0 bytes in 0 blocks
==29832==   total heap usage: 2,195 allocs, 2,195 frees, 263,128 bytes allocated
==29832== 
==29832== All heap blocks were freed -- no leaks are possible
==29832== 
==29832== For counts of detected and suppressed errors, rerun with: -v
==29832== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==29836== Memcheck, a memory error detector
==29836== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29836== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29836== Command: ./test -r xml "List::merge\ #2"
==29836== 
==29836== 
==29836== HEAP SUMMARY:
==29836==     in use at exit: 0 bytes in 0 blocks
==29836==   total heap usage: 2,225 allocs, 2,225 frees, 265,096 bytes allocated
==29836== 
==29836== All heap blocks were freed -- no leaks are possible
==29836== 
==29836== For counts of detected and suppressed errors, rerun with: -v
==29836== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::merge #2" tags="[part=2][valgrind][weight=5]" filename="tests/test_part2_extra.cpp" line="62">
      <OverallResult success="true">
        <StdOut>
done merge
        </StdOut>
      </OverallResult>
    </TestCase>
    <OverallResults successes="3" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="3" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::sort simple #3

- **Points**: 2 / 2

```
==29850== Memcheck, a memory error detector
==29850== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29850== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29850== Command: ./test -r xml "List::sort\ simple\ #3"
==29850== 
==29850== 
==29850== HEAP SUMMARY:
==29850==     in use at exit: 0 bytes in 0 blocks
==29850==   total heap usage: 2,186 allocs, 2,186 frees, 262,880 bytes allocated
==29850== 
==29850== All heap blocks were freed -- no leaks are possible
==29850== 
==29850== For counts of detected and suppressed errors, rerun with: -v
==29850== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==29854== Memcheck, a memory error detector
==29854== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29854== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29854== Command: ./test -r xml "List::insert\ contents\ #2"
==29854== 
==29854== 
==29854== HEAP SUMMARY:
==29854==     in use at exit: 0 bytes in 0 blocks
==29854==   total heap usage: 2,339 allocs, 2,339 frees, 267,768 bytes allocated
==29854== 
==29854== All heap blocks were freed -- no leaks are possible
==29854== 
==29854== For counts of detected and suppressed errors, rerun with: -v
==29854== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==29858== Memcheck, a memory error detector
==29858== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29858== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29858== Command: ./test -r xml "List::split\ edge\ cases"
==29858== 
==29858== 
==29858== HEAP SUMMARY:
==29858==     in use at exit: 0 bytes in 0 blocks
==29858==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==29858== 
==29858== All heap blocks were freed -- no leaks are possible
==29858== 
==29858== For counts of detected and suppressed errors, rerun with: -v
==29858== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==29862== Memcheck, a memory error detector
==29862== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29862== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29862== Command: ./test -r xml "List::waterfall\ simple"
==29862== 
==29862== 
==29862== HEAP SUMMARY:
==29862==     in use at exit: 0 bytes in 0 blocks
==29862==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==29862== 
==29862== All heap blocks were freed -- no leaks are possible
==29862== 
==29862== For counts of detected and suppressed errors, rerun with: -v
==29862== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
