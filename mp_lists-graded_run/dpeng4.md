


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
==18844== Memcheck, a memory error detector
==18844== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==18844== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==18844== Command: ./test -r xml "List::merge"
==18844== 
==18844== 
==18844== HEAP SUMMARY:
==18844==     in use at exit: 0 bytes in 0 blocks
==18844==   total heap usage: 243,290 allocs, 243,290 frees, 79,504,233 bytes allocated
==18844== 
==18844== All heap blocks were freed -- no leaks are possible
==18844== 
==18844== For counts of detected and suppressed errors, rerun with: -v
==18844== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==18906== Memcheck, a memory error detector
==18906== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==18906== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==18906== Command: ./test -r xml "List::sort\ simple\ #1"
==18906== 
==18906== 
==18906== HEAP SUMMARY:
==18906==     in use at exit: 0 bytes in 0 blocks
==18906==   total heap usage: 2,183 allocs, 2,183 frees, 262,768 bytes allocated
==18906== 
==18906== All heap blocks were freed -- no leaks are possible
==18906== 
==18906== For counts of detected and suppressed errors, rerun with: -v
==18906== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==18908== Memcheck, a memory error detector
==18908== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==18908== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==18908== Command: ./test -r xml "List::sort\ simple\ #2"
==18908== 
==18908== 
==18908== HEAP SUMMARY:
==18908==     in use at exit: 0 bytes in 0 blocks
==18908==   total heap usage: 2,183 allocs, 2,183 frees, 262,816 bytes allocated
==18908== 
==18908== All heap blocks were freed -- no leaks are possible
==18908== 
==18908== For counts of detected and suppressed errors, rerun with: -v
==18908== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==18922== Memcheck, a memory error detector
==18922== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==18922== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==18922== Command: ./test -r xml "List::insertFront\ size"
==18922== 
==18922== 
==18922== HEAP SUMMARY:
==18922==     in use at exit: 0 bytes in 0 blocks
==18922==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==18922== 
==18922== All heap blocks were freed -- no leaks are possible
==18922== 
==18922== For counts of detected and suppressed errors, rerun with: -v
==18922== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==18937== Memcheck, a memory error detector
==18937== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==18937== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==18937== Command: ./test -r xml "List::insertBack\ size"
==18937== 
==18937== 
==18937== HEAP SUMMARY:
==18937==     in use at exit: 0 bytes in 0 blocks
==18937==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==18937== 
==18937== All heap blocks were freed -- no leaks are possible
==18937== 
==18937== For counts of detected and suppressed errors, rerun with: -v
==18937== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==18940== Memcheck, a memory error detector
==18940== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==18940== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==18940== Command: ./test -r xml "List::insert\ contents"
==18940== 
==18940== 
==18940== HEAP SUMMARY:
==18940==     in use at exit: 0 bytes in 0 blocks
==18940==   total heap usage: 2,324 allocs, 2,324 frees, 267,272 bytes allocated
==18940== 
==18940== All heap blocks were freed -- no leaks are possible
==18940== 
==18940== For counts of detected and suppressed errors, rerun with: -v
==18940== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==18944== Memcheck, a memory error detector
==18944== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==18944== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==18944== Command: ./test -r xml "List::split\ simple"
==18944== 
==18944== 
==18944== HEAP SUMMARY:
==18944==     in use at exit: 0 bytes in 0 blocks
==18944==   total heap usage: 2,186 allocs, 2,186 frees, 262,840 bytes allocated
==18944== 
==18944== All heap blocks were freed -- no leaks are possible
==18944== 
==18944== For counts of detected and suppressed errors, rerun with: -v
==18944== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==18947== Memcheck, a memory error detector
==18947== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==18947== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==18947== Command: ./test -r xml "List::_destroy\ empty\ list"
==18947== 
==18947== 
==18947== HEAP SUMMARY:
==18947==     in use at exit: 0 bytes in 0 blocks
==18947==   total heap usage: 2,336 allocs, 2,336 frees, 268,200 bytes allocated
==18947== 
==18947== All heap blocks were freed -- no leaks are possible
==18947== 
==18947== For counts of detected and suppressed errors, rerun with: -v
==18947== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==18963== Memcheck, a memory error detector
==18963== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==18963== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==18963== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==18963== 
==18963== 
==18963== HEAP SUMMARY:
==18963==     in use at exit: 0 bytes in 0 blocks
==18963==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==18963== 
==18963== All heap blocks were freed -- no leaks are possible
==18963== 
==18963== For counts of detected and suppressed errors, rerun with: -v
==18963== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==18967== Memcheck, a memory error detector
==18967== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==18967== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==18967== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==18967== 
==18967== 
==18967== HEAP SUMMARY:
==18967==     in use at exit: 0 bytes in 0 blocks
==18967==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==18967== 
==18967== All heap blocks were freed -- no leaks are possible
==18967== 
==18967== For counts of detected and suppressed errors, rerun with: -v
==18967== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==18977== Memcheck, a memory error detector
==18977== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==18977== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==18977== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==18977== 
==18977== 
==18977== HEAP SUMMARY:
==18977==     in use at exit: 0 bytes in 0 blocks
==18977==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==18977== 
==18977== All heap blocks were freed -- no leaks are possible
==18977== 
==18977== For counts of detected and suppressed errors, rerun with: -v
==18977== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==18985== Memcheck, a memory error detector
==18985== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==18985== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==18985== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==18985== 
==18985== 
==18985== HEAP SUMMARY:
==18985==     in use at exit: 0 bytes in 0 blocks
==18985==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==18985== 
==18985== All heap blocks were freed -- no leaks are possible
==18985== 
==18985== For counts of detected and suppressed errors, rerun with: -v
==18985== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==18987== Memcheck, a memory error detector
==18987== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==18987== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==18987== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==18987== 
==18987== 
==18987== HEAP SUMMARY:
==18987==     in use at exit: 0 bytes in 0 blocks
==18987==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==18987== 
==18987== All heap blocks were freed -- no leaks are possible
==18987== 
==18987== For counts of detected and suppressed errors, rerun with: -v
==18987== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==18990== Memcheck, a memory error detector
==18990== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==18990== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==18990== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==18990== 
==18990== 
==18990== HEAP SUMMARY:
==18990==     in use at exit: 0 bytes in 0 blocks
==18990==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==18990== 
==18990== All heap blocks were freed -- no leaks are possible
==18990== 
==18990== For counts of detected and suppressed errors, rerun with: -v
==18990== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==18992== Memcheck, a memory error detector
==18992== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==18992== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==18992== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==18992== 
==18992== 
==18992== HEAP SUMMARY:
==18992==     in use at exit: 0 bytes in 0 blocks
==18992==   total heap usage: 2,333 allocs, 2,333 frees, 269,968 bytes allocated
==18992== 
==18992== All heap blocks were freed -- no leaks are possible
==18992== 
==18992== For counts of detected and suppressed errors, rerun with: -v
==18992== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==18995== Memcheck, a memory error detector
==18995== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==18995== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==18995== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==18995== 
==18995== 
==18995== HEAP SUMMARY:
==18995==     in use at exit: 0 bytes in 0 blocks
==18995==   total heap usage: 2,333 allocs, 2,333 frees, 272,368 bytes allocated
==18995== 
==18995== All heap blocks were freed -- no leaks are possible
==18995== 
==18995== For counts of detected and suppressed errors, rerun with: -v
==18995== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==18998== Memcheck, a memory error detector
==18998== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==18998== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==18998== Command: ./test -r xml "List::reverse\ simple"
==18998== 
==18998== 
==18998== HEAP SUMMARY:
==18998==     in use at exit: 0 bytes in 0 blocks
==18998==   total heap usage: 2,189 allocs, 2,189 frees, 262,948 bytes allocated
==18998== 
==18998== All heap blocks were freed -- no leaks are possible
==18998== 
==18998== For counts of detected and suppressed errors, rerun with: -v
==18998== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19000== Memcheck, a memory error detector
==19000== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19000== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==19000== Command: ./test -r xml "List::reverse\ edge\ cases"
==19000== 
==19000== 
==19000== HEAP SUMMARY:
==19000==     in use at exit: 0 bytes in 0 blocks
==19000==   total heap usage: 2,334 allocs, 2,334 frees, 267,648 bytes allocated
==19000== 
==19000== All heap blocks were freed -- no leaks are possible
==19000== 
==19000== For counts of detected and suppressed errors, rerun with: -v
==19000== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19003== Memcheck, a memory error detector
==19003== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19003== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==19003== Command: ./test -r xml "List::reverseNth\ #3"
==19003== 
==19003== 
==19003== HEAP SUMMARY:
==19003==     in use at exit: 0 bytes in 0 blocks
==19003==   total heap usage: 2,195 allocs, 2,195 frees, 263,128 bytes allocated
==19003== 
==19003== All heap blocks were freed -- no leaks are possible
==19003== 
==19003== For counts of detected and suppressed errors, rerun with: -v
==19003== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19005== Memcheck, a memory error detector
==19005== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19005== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==19005== Command: ./test -r xml "List::merge\ #2"
==19005== 
==19005== 
==19005== HEAP SUMMARY:
==19005==     in use at exit: 0 bytes in 0 blocks
==19005==   total heap usage: 2,225 allocs, 2,225 frees, 265,096 bytes allocated
==19005== 
==19005== All heap blocks were freed -- no leaks are possible
==19005== 
==19005== For counts of detected and suppressed errors, rerun with: -v
==19005== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19008== Memcheck, a memory error detector
==19008== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19008== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==19008== Command: ./test -r xml "List::sort\ simple\ #3"
==19008== 
==19008== 
==19008== HEAP SUMMARY:
==19008==     in use at exit: 0 bytes in 0 blocks
==19008==   total heap usage: 2,186 allocs, 2,186 frees, 262,880 bytes allocated
==19008== 
==19008== All heap blocks were freed -- no leaks are possible
==19008== 
==19008== For counts of detected and suppressed errors, rerun with: -v
==19008== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19011== Memcheck, a memory error detector
==19011== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19011== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==19011== Command: ./test -r xml "List::insert\ contents\ #2"
==19011== 
==19011== 
==19011== HEAP SUMMARY:
==19011==     in use at exit: 0 bytes in 0 blocks
==19011==   total heap usage: 2,339 allocs, 2,339 frees, 267,768 bytes allocated
==19011== 
==19011== All heap blocks were freed -- no leaks are possible
==19011== 
==19011== For counts of detected and suppressed errors, rerun with: -v
==19011== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19015== Memcheck, a memory error detector
==19015== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19015== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==19015== Command: ./test -r xml "List::split\ edge\ cases"
==19015== 
==19015== 
==19015== HEAP SUMMARY:
==19015==     in use at exit: 0 bytes in 0 blocks
==19015==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==19015== 
==19015== All heap blocks were freed -- no leaks are possible
==19015== 
==19015== For counts of detected and suppressed errors, rerun with: -v
==19015== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19018== Memcheck, a memory error detector
==19018== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19018== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==19018== Command: ./test -r xml "List::waterfall\ simple"
==19018== 
==19018== 
==19018== HEAP SUMMARY:
==19018==     in use at exit: 0 bytes in 0 blocks
==19018==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==19018== 
==19018== All heap blocks were freed -- no leaks are possible
==19018== 
==19018== For counts of detected and suppressed errors, rerun with: -v
==19018== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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

This report was generated for **dpeng4** using **ade5ad0e00b8b860bc91fa159c4ce1360c9cdfde** (from **February 27th 2019, 12:05:00 am**)
