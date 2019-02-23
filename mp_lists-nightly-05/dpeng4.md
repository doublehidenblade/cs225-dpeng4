


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
==32672== Memcheck, a memory error detector
==32672== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==32672== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==32672== Command: ./test -r xml "List::merge"
==32672== 
==32672== 
==32672== HEAP SUMMARY:
==32672==     in use at exit: 0 bytes in 0 blocks
==32672==   total heap usage: 243,290 allocs, 243,290 frees, 79,504,233 bytes allocated
==32672== 
==32672== All heap blocks were freed -- no leaks are possible
==32672== 
==32672== For counts of detected and suppressed errors, rerun with: -v
==32672== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==32706== Memcheck, a memory error detector
==32706== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==32706== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==32706== Command: ./test -r xml "List::sort\ simple\ #1"
==32706== 
==32706== 
==32706== HEAP SUMMARY:
==32706==     in use at exit: 0 bytes in 0 blocks
==32706==   total heap usage: 2,183 allocs, 2,183 frees, 262,768 bytes allocated
==32706== 
==32706== All heap blocks were freed -- no leaks are possible
==32706== 
==32706== For counts of detected and suppressed errors, rerun with: -v
==32706== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==32708== Memcheck, a memory error detector
==32708== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==32708== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==32708== Command: ./test -r xml "List::sort\ simple\ #2"
==32708== 
==32708== 
==32708== HEAP SUMMARY:
==32708==     in use at exit: 0 bytes in 0 blocks
==32708==   total heap usage: 2,183 allocs, 2,183 frees, 262,816 bytes allocated
==32708== 
==32708== All heap blocks were freed -- no leaks are possible
==32708== 
==32708== For counts of detected and suppressed errors, rerun with: -v
==32708== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==32712== Memcheck, a memory error detector
==32712== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==32712== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==32712== Command: ./test -r xml "List::insertFront\ size"
==32712== 
==32712== 
==32712== HEAP SUMMARY:
==32712==     in use at exit: 0 bytes in 0 blocks
==32712==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==32712== 
==32712== All heap blocks were freed -- no leaks are possible
==32712== 
==32712== For counts of detected and suppressed errors, rerun with: -v
==32712== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==32714== Memcheck, a memory error detector
==32714== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==32714== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==32714== Command: ./test -r xml "List::insertBack\ size"
==32714== 
==32714== 
==32714== HEAP SUMMARY:
==32714==     in use at exit: 0 bytes in 0 blocks
==32714==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==32714== 
==32714== All heap blocks were freed -- no leaks are possible
==32714== 
==32714== For counts of detected and suppressed errors, rerun with: -v
==32714== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==32716== Memcheck, a memory error detector
==32716== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==32716== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==32716== Command: ./test -r xml "List::insert\ contents"
==32716== 
==32716== 
==32716== HEAP SUMMARY:
==32716==     in use at exit: 0 bytes in 0 blocks
==32716==   total heap usage: 2,324 allocs, 2,324 frees, 267,272 bytes allocated
==32716== 
==32716== All heap blocks were freed -- no leaks are possible
==32716== 
==32716== For counts of detected and suppressed errors, rerun with: -v
==32716== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==32744== Memcheck, a memory error detector
==32744== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==32744== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==32744== Command: ./test -r xml "List::split\ simple"
==32744== 
==32744== 
==32744== HEAP SUMMARY:
==32744==     in use at exit: 0 bytes in 0 blocks
==32744==   total heap usage: 2,186 allocs, 2,186 frees, 262,840 bytes allocated
==32744== 
==32744== All heap blocks were freed -- no leaks are possible
==32744== 
==32744== For counts of detected and suppressed errors, rerun with: -v
==32744== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==32750== Memcheck, a memory error detector
==32750== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==32750== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==32750== Command: ./test -r xml "List::_destroy\ empty\ list"
==32750== 
==32750== 
==32750== HEAP SUMMARY:
==32750==     in use at exit: 0 bytes in 0 blocks
==32750==   total heap usage: 2,336 allocs, 2,336 frees, 268,200 bytes allocated
==32750== 
==32750== All heap blocks were freed -- no leaks are possible
==32750== 
==32750== For counts of detected and suppressed errors, rerun with: -v
==32750== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==32754== Memcheck, a memory error detector
==32754== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==32754== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==32754== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==32754== 
==32754== 
==32754== HEAP SUMMARY:
==32754==     in use at exit: 0 bytes in 0 blocks
==32754==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==32754== 
==32754== All heap blocks were freed -- no leaks are possible
==32754== 
==32754== For counts of detected and suppressed errors, rerun with: -v
==32754== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==32757== Memcheck, a memory error detector
==32757== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==32757== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==32757== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==32757== 
==32757== 
==32757== HEAP SUMMARY:
==32757==     in use at exit: 0 bytes in 0 blocks
==32757==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==32757== 
==32757== All heap blocks were freed -- no leaks are possible
==32757== 
==32757== For counts of detected and suppressed errors, rerun with: -v
==32757== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==32761== Memcheck, a memory error detector
==32761== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==32761== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==32761== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==32761== 
==32761== 
==32761== HEAP SUMMARY:
==32761==     in use at exit: 0 bytes in 0 blocks
==32761==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==32761== 
==32761== All heap blocks were freed -- no leaks are possible
==32761== 
==32761== For counts of detected and suppressed errors, rerun with: -v
==32761== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==32766== Memcheck, a memory error detector
==32766== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==32766== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==32766== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==32766== 
==32766== 
==32766== HEAP SUMMARY:
==32766==     in use at exit: 0 bytes in 0 blocks
==32766==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==32766== 
==32766== All heap blocks were freed -- no leaks are possible
==32766== 
==32766== For counts of detected and suppressed errors, rerun with: -v
==32766== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==302== Memcheck, a memory error detector
==302== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==302== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==302== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==302== 
==302== 
==302== HEAP SUMMARY:
==302==     in use at exit: 0 bytes in 0 blocks
==302==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==302== 
==302== All heap blocks were freed -- no leaks are possible
==302== 
==302== For counts of detected and suppressed errors, rerun with: -v
==302== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==306== Memcheck, a memory error detector
==306== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==306== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==306== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==306== 
==306== 
==306== HEAP SUMMARY:
==306==     in use at exit: 0 bytes in 0 blocks
==306==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==306== 
==306== All heap blocks were freed -- no leaks are possible
==306== 
==306== For counts of detected and suppressed errors, rerun with: -v
==306== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==310== Memcheck, a memory error detector
==310== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==310== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==310== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==310== 
==310== 
==310== HEAP SUMMARY:
==310==     in use at exit: 0 bytes in 0 blocks
==310==   total heap usage: 2,333 allocs, 2,333 frees, 269,968 bytes allocated
==310== 
==310== All heap blocks were freed -- no leaks are possible
==310== 
==310== For counts of detected and suppressed errors, rerun with: -v
==310== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==314== Memcheck, a memory error detector
==314== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==314== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==314== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==314== 
==314== 
==314== HEAP SUMMARY:
==314==     in use at exit: 0 bytes in 0 blocks
==314==   total heap usage: 2,333 allocs, 2,333 frees, 272,368 bytes allocated
==314== 
==314== All heap blocks were freed -- no leaks are possible
==314== 
==314== For counts of detected and suppressed errors, rerun with: -v
==314== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==320== Memcheck, a memory error detector
==320== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==320== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==320== Command: ./test -r xml "List::reverse\ simple"
==320== 
==320== 
==320== HEAP SUMMARY:
==320==     in use at exit: 0 bytes in 0 blocks
==320==   total heap usage: 2,189 allocs, 2,189 frees, 262,948 bytes allocated
==320== 
==320== All heap blocks were freed -- no leaks are possible
==320== 
==320== For counts of detected and suppressed errors, rerun with: -v
==320== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==324== Memcheck, a memory error detector
==324== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==324== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==324== Command: ./test -r xml "List::reverse\ edge\ cases"
==324== 
==324== 
==324== HEAP SUMMARY:
==324==     in use at exit: 0 bytes in 0 blocks
==324==   total heap usage: 2,334 allocs, 2,334 frees, 267,648 bytes allocated
==324== 
==324== All heap blocks were freed -- no leaks are possible
==324== 
==324== For counts of detected and suppressed errors, rerun with: -v
==324== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==328== Memcheck, a memory error detector
==328== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==328== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==328== Command: ./test -r xml "List::reverseNth\ #3"
==328== 
==328== 
==328== HEAP SUMMARY:
==328==     in use at exit: 0 bytes in 0 blocks
==328==   total heap usage: 2,195 allocs, 2,195 frees, 263,128 bytes allocated
==328== 
==328== All heap blocks were freed -- no leaks are possible
==328== 
==328== For counts of detected and suppressed errors, rerun with: -v
==328== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==333== Memcheck, a memory error detector
==333== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==333== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==333== Command: ./test -r xml "List::merge\ #2"
==333== 
==333== 
==333== HEAP SUMMARY:
==333==     in use at exit: 0 bytes in 0 blocks
==333==   total heap usage: 2,225 allocs, 2,225 frees, 265,096 bytes allocated
==333== 
==333== All heap blocks were freed -- no leaks are possible
==333== 
==333== For counts of detected and suppressed errors, rerun with: -v
==333== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==339== Memcheck, a memory error detector
==339== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==339== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==339== Command: ./test -r xml "List::sort\ simple\ #3"
==339== 
==339== 
==339== HEAP SUMMARY:
==339==     in use at exit: 0 bytes in 0 blocks
==339==   total heap usage: 2,186 allocs, 2,186 frees, 262,880 bytes allocated
==339== 
==339== All heap blocks were freed -- no leaks are possible
==339== 
==339== For counts of detected and suppressed errors, rerun with: -v
==339== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==357== Memcheck, a memory error detector
==357== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==357== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==357== Command: ./test -r xml "List::insert\ contents\ #2"
==357== 
==357== 
==357== HEAP SUMMARY:
==357==     in use at exit: 0 bytes in 0 blocks
==357==   total heap usage: 2,339 allocs, 2,339 frees, 267,768 bytes allocated
==357== 
==357== All heap blocks were freed -- no leaks are possible
==357== 
==357== For counts of detected and suppressed errors, rerun with: -v
==357== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==365== Memcheck, a memory error detector
==365== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==365== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==365== Command: ./test -r xml "List::split\ edge\ cases"
==365== 
==365== 
==365== HEAP SUMMARY:
==365==     in use at exit: 0 bytes in 0 blocks
==365==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==365== 
==365== All heap blocks were freed -- no leaks are possible
==365== 
==365== For counts of detected and suppressed errors, rerun with: -v
==365== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==385== Memcheck, a memory error detector
==385== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==385== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==385== Command: ./test -r xml "List::waterfall\ simple"
==385== 
==385== 
==385== HEAP SUMMARY:
==385==     in use at exit: 0 bytes in 0 blocks
==385==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==385== 
==385== All heap blocks were freed -- no leaks are possible
==385== 
==385== For counts of detected and suppressed errors, rerun with: -v
==385== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
