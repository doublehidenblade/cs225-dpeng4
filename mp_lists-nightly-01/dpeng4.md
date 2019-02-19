


## Score: 109/114 (95.61%)


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
==17705== Memcheck, a memory error detector
==17705== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==17705== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==17705== Command: ./test -r xml "List::merge"
==17705== 
==17705== 
==17705== HEAP SUMMARY:
==17705==     in use at exit: 0 bytes in 0 blocks
==17705==   total heap usage: 243,290 allocs, 243,290 frees, 79,504,233 bytes allocated
==17705== 
==17705== All heap blocks were freed -- no leaks are possible
==17705== 
==17705== For counts of detected and suppressed errors, rerun with: -v
==17705== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==17759== Memcheck, a memory error detector
==17759== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==17759== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==17759== Command: ./test -r xml "List::sort\ simple\ #1"
==17759== 
==17759== 
==17759== HEAP SUMMARY:
==17759==     in use at exit: 0 bytes in 0 blocks
==17759==   total heap usage: 2,183 allocs, 2,183 frees, 262,768 bytes allocated
==17759== 
==17759== All heap blocks were freed -- no leaks are possible
==17759== 
==17759== For counts of detected and suppressed errors, rerun with: -v
==17759== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==17765== Memcheck, a memory error detector
==17765== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==17765== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==17765== Command: ./test -r xml "List::sort\ simple\ #2"
==17765== 
==17765== 
==17765== HEAP SUMMARY:
==17765==     in use at exit: 0 bytes in 0 blocks
==17765==   total heap usage: 2,183 allocs, 2,183 frees, 262,816 bytes allocated
==17765== 
==17765== All heap blocks were freed -- no leaks are possible
==17765== 
==17765== For counts of detected and suppressed errors, rerun with: -v
==17765== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==17789== Memcheck, a memory error detector
==17789== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==17789== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==17789== Command: ./test -r xml "List::insertFront\ size"
==17789== 
==17789== 
==17789== HEAP SUMMARY:
==17789==     in use at exit: 0 bytes in 0 blocks
==17789==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==17789== 
==17789== All heap blocks were freed -- no leaks are possible
==17789== 
==17789== For counts of detected and suppressed errors, rerun with: -v
==17789== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==17795== Memcheck, a memory error detector
==17795== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==17795== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==17795== Command: ./test -r xml "List::insertBack\ size"
==17795== 
==17795== 
==17795== HEAP SUMMARY:
==17795==     in use at exit: 0 bytes in 0 blocks
==17795==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==17795== 
==17795== All heap blocks were freed -- no leaks are possible
==17795== 
==17795== For counts of detected and suppressed errors, rerun with: -v
==17795== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==17801== Memcheck, a memory error detector
==17801== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==17801== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==17801== Command: ./test -r xml "List::insert\ contents"
==17801== 
==17801== 
==17801== HEAP SUMMARY:
==17801==     in use at exit: 0 bytes in 0 blocks
==17801==   total heap usage: 2,324 allocs, 2,324 frees, 267,272 bytes allocated
==17801== 
==17801== All heap blocks were freed -- no leaks are possible
==17801== 
==17801== For counts of detected and suppressed errors, rerun with: -v
==17801== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==17809== Memcheck, a memory error detector
==17809== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==17809== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==17809== Command: ./test -r xml "List::split\ simple"
==17809== 
==17809== 
==17809== HEAP SUMMARY:
==17809==     in use at exit: 0 bytes in 0 blocks
==17809==   total heap usage: 2,186 allocs, 2,186 frees, 262,840 bytes allocated
==17809== 
==17809== All heap blocks were freed -- no leaks are possible
==17809== 
==17809== For counts of detected and suppressed errors, rerun with: -v
==17809== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==17834== Memcheck, a memory error detector
==17834== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==17834== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==17834== Command: ./test -r xml "List::_destroy\ empty\ list"
==17834== 
==17834== 
==17834== HEAP SUMMARY:
==17834==     in use at exit: 0 bytes in 0 blocks
==17834==   total heap usage: 2,336 allocs, 2,336 frees, 268,200 bytes allocated
==17834== 
==17834== All heap blocks were freed -- no leaks are possible
==17834== 
==17834== For counts of detected and suppressed errors, rerun with: -v
==17834== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==17842== Memcheck, a memory error detector
==17842== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==17842== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==17842== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==17842== 
==17842== 
==17842== HEAP SUMMARY:
==17842==     in use at exit: 0 bytes in 0 blocks
==17842==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==17842== 
==17842== All heap blocks were freed -- no leaks are possible
==17842== 
==17842== For counts of detected and suppressed errors, rerun with: -v
==17842== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==17852== Memcheck, a memory error detector
==17852== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==17852== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==17852== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==17852== 
==17852== 
==17852== HEAP SUMMARY:
==17852==     in use at exit: 0 bytes in 0 blocks
==17852==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==17852== 
==17852== All heap blocks were freed -- no leaks are possible
==17852== 
==17852== For counts of detected and suppressed errors, rerun with: -v
==17852== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==17860== Memcheck, a memory error detector
==17860== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==17860== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==17860== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==17860== 
==17860== 
==17860== HEAP SUMMARY:
==17860==     in use at exit: 0 bytes in 0 blocks
==17860==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==17860== 
==17860== All heap blocks were freed -- no leaks are possible
==17860== 
==17860== For counts of detected and suppressed errors, rerun with: -v
==17860== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==17867== Memcheck, a memory error detector
==17867== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==17867== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==17867== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==17867== 
==17867== 
==17867== HEAP SUMMARY:
==17867==     in use at exit: 0 bytes in 0 blocks
==17867==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==17867== 
==17867== All heap blocks were freed -- no leaks are possible
==17867== 
==17867== For counts of detected and suppressed errors, rerun with: -v
==17867== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==17878== Memcheck, a memory error detector
==17878== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==17878== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==17878== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==17878== 
==17878== 
==17878== HEAP SUMMARY:
==17878==     in use at exit: 0 bytes in 0 blocks
==17878==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==17878== 
==17878== All heap blocks were freed -- no leaks are possible
==17878== 
==17878== For counts of detected and suppressed errors, rerun with: -v
==17878== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==17885== Memcheck, a memory error detector
==17885== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==17885== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==17885== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==17885== 
==17885== 
==17885== HEAP SUMMARY:
==17885==     in use at exit: 0 bytes in 0 blocks
==17885==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==17885== 
==17885== All heap blocks were freed -- no leaks are possible
==17885== 
==17885== For counts of detected and suppressed errors, rerun with: -v
==17885== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==17909== Memcheck, a memory error detector
==17909== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==17909== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==17909== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==17909== 
==17909== 
==17909== HEAP SUMMARY:
==17909==     in use at exit: 0 bytes in 0 blocks
==17909==   total heap usage: 2,333 allocs, 2,333 frees, 269,968 bytes allocated
==17909== 
==17909== All heap blocks were freed -- no leaks are possible
==17909== 
==17909== For counts of detected and suppressed errors, rerun with: -v
==17909== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==17919== Memcheck, a memory error detector
==17919== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==17919== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==17919== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==17919== 
==17919== 
==17919== HEAP SUMMARY:
==17919==     in use at exit: 0 bytes in 0 blocks
==17919==   total heap usage: 2,333 allocs, 2,333 frees, 272,368 bytes allocated
==17919== 
==17919== All heap blocks were freed -- no leaks are possible
==17919== 
==17919== For counts of detected and suppressed errors, rerun with: -v
==17919== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==17923== Memcheck, a memory error detector
==17923== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==17923== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==17923== Command: ./test -r xml "List::reverse\ simple"
==17923== 
==17923== 
==17923== HEAP SUMMARY:
==17923==     in use at exit: 0 bytes in 0 blocks
==17923==   total heap usage: 2,189 allocs, 2,189 frees, 262,948 bytes allocated
==17923== 
==17923== All heap blocks were freed -- no leaks are possible
==17923== 
==17923== For counts of detected and suppressed errors, rerun with: -v
==17923== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==17930== Memcheck, a memory error detector
==17930== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==17930== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==17930== Command: ./test -r xml "List::reverse\ edge\ cases"
==17930== 
==17930== 
==17930== HEAP SUMMARY:
==17930==     in use at exit: 0 bytes in 0 blocks
==17930==   total heap usage: 2,334 allocs, 2,334 frees, 267,648 bytes allocated
==17930== 
==17930== All heap blocks were freed -- no leaks are possible
==17930== 
==17930== For counts of detected and suppressed errors, rerun with: -v
==17930== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==17938== Memcheck, a memory error detector
==17938== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==17938== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==17938== Command: ./test -r xml "List::reverseNth\ #3"
==17938== 
==17938== 
==17938== HEAP SUMMARY:
==17938==     in use at exit: 0 bytes in 0 blocks
==17938==   total heap usage: 2,195 allocs, 2,195 frees, 263,128 bytes allocated
==17938== 
==17938== All heap blocks were freed -- no leaks are possible
==17938== 
==17938== For counts of detected and suppressed errors, rerun with: -v
==17938== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==17942== Memcheck, a memory error detector
==17942== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==17942== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==17942== Command: ./test -r xml "List::merge\ #2"
==17942== 
==17942== 
==17942== HEAP SUMMARY:
==17942==     in use at exit: 0 bytes in 0 blocks
==17942==   total heap usage: 2,225 allocs, 2,225 frees, 265,096 bytes allocated
==17942== 
==17942== All heap blocks were freed -- no leaks are possible
==17942== 
==17942== For counts of detected and suppressed errors, rerun with: -v
==17942== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==17948== Memcheck, a memory error detector
==17948== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==17948== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==17948== Command: ./test -r xml "List::sort\ simple\ #3"
==17948== 
==17948== 
==17948== HEAP SUMMARY:
==17948==     in use at exit: 0 bytes in 0 blocks
==17948==   total heap usage: 2,186 allocs, 2,186 frees, 262,880 bytes allocated
==17948== 
==17948== All heap blocks were freed -- no leaks are possible
==17948== 
==17948== For counts of detected and suppressed errors, rerun with: -v
==17948== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==17951== Memcheck, a memory error detector
==17951== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==17951== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==17951== Command: ./test -r xml "List::insert\ contents\ #2"
==17951== 
==17951== 
==17951== HEAP SUMMARY:
==17951==     in use at exit: 0 bytes in 0 blocks
==17951==   total heap usage: 2,339 allocs, 2,339 frees, 267,768 bytes allocated
==17951== 
==17951== All heap blocks were freed -- no leaks are possible
==17951== 
==17951== For counts of detected and suppressed errors, rerun with: -v
==17951== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==17958== Memcheck, a memory error detector
==17958== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==17958== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==17958== Command: ./test -r xml "List::waterfall\ simple"
==17958== 
==17958== 
==17958== HEAP SUMMARY:
==17958==     in use at exit: 0 bytes in 0 blocks
==17958==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==17958== 
==17958== All heap blocks were freed -- no leaks are possible
==17958== 
==17958== For counts of detected and suppressed errors, rerun with: -v
==17958== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
