


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
==3733== Memcheck, a memory error detector
==3733== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3733== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==3733== Command: ./test -r xml "List::merge"
==3733== 
==3733== 
==3733== HEAP SUMMARY:
==3733==     in use at exit: 0 bytes in 0 blocks
==3733==   total heap usage: 243,290 allocs, 243,290 frees, 79,504,233 bytes allocated
==3733== 
==3733== All heap blocks were freed -- no leaks are possible
==3733== 
==3733== For counts of detected and suppressed errors, rerun with: -v
==3733== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==3745== Memcheck, a memory error detector
==3745== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3745== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==3745== Command: ./test -r xml "List::sort\ simple\ #1"
==3745== 
==3745== 
==3745== HEAP SUMMARY:
==3745==     in use at exit: 0 bytes in 0 blocks
==3745==   total heap usage: 2,183 allocs, 2,183 frees, 262,768 bytes allocated
==3745== 
==3745== All heap blocks were freed -- no leaks are possible
==3745== 
==3745== For counts of detected and suppressed errors, rerun with: -v
==3745== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==3750== Memcheck, a memory error detector
==3750== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3750== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==3750== Command: ./test -r xml "List::sort\ simple\ #2"
==3750== 
==3750== 
==3750== HEAP SUMMARY:
==3750==     in use at exit: 0 bytes in 0 blocks
==3750==   total heap usage: 2,183 allocs, 2,183 frees, 262,816 bytes allocated
==3750== 
==3750== All heap blocks were freed -- no leaks are possible
==3750== 
==3750== For counts of detected and suppressed errors, rerun with: -v
==3750== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==3780== Memcheck, a memory error detector
==3780== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3780== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==3780== Command: ./test -r xml "List::insertFront\ size"
==3780== 
==3780== 
==3780== HEAP SUMMARY:
==3780==     in use at exit: 0 bytes in 0 blocks
==3780==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==3780== 
==3780== All heap blocks were freed -- no leaks are possible
==3780== 
==3780== For counts of detected and suppressed errors, rerun with: -v
==3780== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==3784== Memcheck, a memory error detector
==3784== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3784== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==3784== Command: ./test -r xml "List::insertBack\ size"
==3784== 
==3784== 
==3784== HEAP SUMMARY:
==3784==     in use at exit: 0 bytes in 0 blocks
==3784==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==3784== 
==3784== All heap blocks were freed -- no leaks are possible
==3784== 
==3784== For counts of detected and suppressed errors, rerun with: -v
==3784== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==3788== Memcheck, a memory error detector
==3788== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3788== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==3788== Command: ./test -r xml "List::insert\ contents"
==3788== 
==3788== 
==3788== HEAP SUMMARY:
==3788==     in use at exit: 0 bytes in 0 blocks
==3788==   total heap usage: 2,324 allocs, 2,324 frees, 267,272 bytes allocated
==3788== 
==3788== All heap blocks were freed -- no leaks are possible
==3788== 
==3788== For counts of detected and suppressed errors, rerun with: -v
==3788== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==3791== Memcheck, a memory error detector
==3791== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3791== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==3791== Command: ./test -r xml "List::split\ simple"
==3791== 
==3791== 
==3791== HEAP SUMMARY:
==3791==     in use at exit: 0 bytes in 0 blocks
==3791==   total heap usage: 2,186 allocs, 2,186 frees, 262,840 bytes allocated
==3791== 
==3791== All heap blocks were freed -- no leaks are possible
==3791== 
==3791== For counts of detected and suppressed errors, rerun with: -v
==3791== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==3794== Memcheck, a memory error detector
==3794== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3794== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==3794== Command: ./test -r xml "List::_destroy\ empty\ list"
==3794== 
==3794== 
==3794== HEAP SUMMARY:
==3794==     in use at exit: 0 bytes in 0 blocks
==3794==   total heap usage: 2,336 allocs, 2,336 frees, 268,200 bytes allocated
==3794== 
==3794== All heap blocks were freed -- no leaks are possible
==3794== 
==3794== For counts of detected and suppressed errors, rerun with: -v
==3794== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==3796== Memcheck, a memory error detector
==3796== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3796== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==3796== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==3796== 
==3796== 
==3796== HEAP SUMMARY:
==3796==     in use at exit: 0 bytes in 0 blocks
==3796==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==3796== 
==3796== All heap blocks were freed -- no leaks are possible
==3796== 
==3796== For counts of detected and suppressed errors, rerun with: -v
==3796== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==3798== Memcheck, a memory error detector
==3798== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3798== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==3798== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==3798== 
==3798== 
==3798== HEAP SUMMARY:
==3798==     in use at exit: 0 bytes in 0 blocks
==3798==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==3798== 
==3798== All heap blocks were freed -- no leaks are possible
==3798== 
==3798== For counts of detected and suppressed errors, rerun with: -v
==3798== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==3823== Memcheck, a memory error detector
==3823== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3823== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==3823== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==3823== 
==3823== 
==3823== HEAP SUMMARY:
==3823==     in use at exit: 0 bytes in 0 blocks
==3823==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==3823== 
==3823== All heap blocks were freed -- no leaks are possible
==3823== 
==3823== For counts of detected and suppressed errors, rerun with: -v
==3823== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==3828== Memcheck, a memory error detector
==3828== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3828== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==3828== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==3828== 
==3828== 
==3828== HEAP SUMMARY:
==3828==     in use at exit: 0 bytes in 0 blocks
==3828==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==3828== 
==3828== All heap blocks were freed -- no leaks are possible
==3828== 
==3828== For counts of detected and suppressed errors, rerun with: -v
==3828== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==3834== Memcheck, a memory error detector
==3834== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3834== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==3834== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==3834== 
==3834== 
==3834== HEAP SUMMARY:
==3834==     in use at exit: 0 bytes in 0 blocks
==3834==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==3834== 
==3834== All heap blocks were freed -- no leaks are possible
==3834== 
==3834== For counts of detected and suppressed errors, rerun with: -v
==3834== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==3866== Memcheck, a memory error detector
==3866== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3866== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==3866== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==3866== 
==3866== 
==3866== HEAP SUMMARY:
==3866==     in use at exit: 0 bytes in 0 blocks
==3866==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==3866== 
==3866== All heap blocks were freed -- no leaks are possible
==3866== 
==3866== For counts of detected and suppressed errors, rerun with: -v
==3866== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==3872== Memcheck, a memory error detector
==3872== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3872== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==3872== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==3872== 
==3872== 
==3872== HEAP SUMMARY:
==3872==     in use at exit: 0 bytes in 0 blocks
==3872==   total heap usage: 2,333 allocs, 2,333 frees, 269,968 bytes allocated
==3872== 
==3872== All heap blocks were freed -- no leaks are possible
==3872== 
==3872== For counts of detected and suppressed errors, rerun with: -v
==3872== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==3879== Memcheck, a memory error detector
==3879== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3879== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==3879== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==3879== 
==3879== 
==3879== HEAP SUMMARY:
==3879==     in use at exit: 0 bytes in 0 blocks
==3879==   total heap usage: 2,333 allocs, 2,333 frees, 272,368 bytes allocated
==3879== 
==3879== All heap blocks were freed -- no leaks are possible
==3879== 
==3879== For counts of detected and suppressed errors, rerun with: -v
==3879== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==3910== Memcheck, a memory error detector
==3910== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3910== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==3910== Command: ./test -r xml "List::reverse\ simple"
==3910== 
==3910== 
==3910== HEAP SUMMARY:
==3910==     in use at exit: 0 bytes in 0 blocks
==3910==   total heap usage: 2,189 allocs, 2,189 frees, 262,948 bytes allocated
==3910== 
==3910== All heap blocks were freed -- no leaks are possible
==3910== 
==3910== For counts of detected and suppressed errors, rerun with: -v
==3910== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==3947== Memcheck, a memory error detector
==3947== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3947== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==3947== Command: ./test -r xml "List::reverse\ edge\ cases"
==3947== 
==3947== 
==3947== HEAP SUMMARY:
==3947==     in use at exit: 0 bytes in 0 blocks
==3947==   total heap usage: 2,334 allocs, 2,334 frees, 267,648 bytes allocated
==3947== 
==3947== All heap blocks were freed -- no leaks are possible
==3947== 
==3947== For counts of detected and suppressed errors, rerun with: -v
==3947== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==3966== Memcheck, a memory error detector
==3966== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3966== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==3966== Command: ./test -r xml "List::reverseNth\ #3"
==3966== 
==3966== 
==3966== HEAP SUMMARY:
==3966==     in use at exit: 0 bytes in 0 blocks
==3966==   total heap usage: 2,195 allocs, 2,195 frees, 263,128 bytes allocated
==3966== 
==3966== All heap blocks were freed -- no leaks are possible
==3966== 
==3966== For counts of detected and suppressed errors, rerun with: -v
==3966== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==3995== Memcheck, a memory error detector
==3995== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3995== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==3995== Command: ./test -r xml "List::merge\ #2"
==3995== 
==3995== 
==3995== HEAP SUMMARY:
==3995==     in use at exit: 0 bytes in 0 blocks
==3995==   total heap usage: 2,225 allocs, 2,225 frees, 265,096 bytes allocated
==3995== 
==3995== All heap blocks were freed -- no leaks are possible
==3995== 
==3995== For counts of detected and suppressed errors, rerun with: -v
==3995== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==4033== Memcheck, a memory error detector
==4033== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==4033== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==4033== Command: ./test -r xml "List::sort\ simple\ #3"
==4033== 
==4033== 
==4033== HEAP SUMMARY:
==4033==     in use at exit: 0 bytes in 0 blocks
==4033==   total heap usage: 2,186 allocs, 2,186 frees, 262,880 bytes allocated
==4033== 
==4033== All heap blocks were freed -- no leaks are possible
==4033== 
==4033== For counts of detected and suppressed errors, rerun with: -v
==4033== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==4048== Memcheck, a memory error detector
==4048== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==4048== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==4048== Command: ./test -r xml "List::insert\ contents\ #2"
==4048== 
==4048== 
==4048== HEAP SUMMARY:
==4048==     in use at exit: 0 bytes in 0 blocks
==4048==   total heap usage: 2,339 allocs, 2,339 frees, 267,768 bytes allocated
==4048== 
==4048== All heap blocks were freed -- no leaks are possible
==4048== 
==4048== For counts of detected and suppressed errors, rerun with: -v
==4048== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==4050== Memcheck, a memory error detector
==4050== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==4050== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==4050== Command: ./test -r xml "List::split\ edge\ cases"
==4050== 
==4050== 
==4050== HEAP SUMMARY:
==4050==     in use at exit: 0 bytes in 0 blocks
==4050==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==4050== 
==4050== All heap blocks were freed -- no leaks are possible
==4050== 
==4050== For counts of detected and suppressed errors, rerun with: -v
==4050== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==4081== Memcheck, a memory error detector
==4081== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==4081== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==4081== Command: ./test -r xml "List::waterfall\ simple"
==4081== 
==4081== 
==4081== HEAP SUMMARY:
==4081==     in use at exit: 0 bytes in 0 blocks
==4081==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==4081== 
==4081== All heap blocks were freed -- no leaks are possible
==4081== 
==4081== For counts of detected and suppressed errors, rerun with: -v
==4081== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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

This report was generated for **dpeng4** using **6b3b464c848a93dd771ad5b0ef95cbc5f5f7a421** (from **February 21st 2019, 12:05:00 am**)
