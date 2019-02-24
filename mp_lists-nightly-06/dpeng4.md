


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
==26494== Memcheck, a memory error detector
==26494== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==26494== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==26494== Command: ./test -r xml "List::merge"
==26494== 
==26494== 
==26494== HEAP SUMMARY:
==26494==     in use at exit: 0 bytes in 0 blocks
==26494==   total heap usage: 243,290 allocs, 243,290 frees, 79,504,233 bytes allocated
==26494== 
==26494== All heap blocks were freed -- no leaks are possible
==26494== 
==26494== For counts of detected and suppressed errors, rerun with: -v
==26494== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26508== Memcheck, a memory error detector
==26508== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==26508== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==26508== Command: ./test -r xml "List::sort\ simple\ #1"
==26508== 
==26508== 
==26508== HEAP SUMMARY:
==26508==     in use at exit: 0 bytes in 0 blocks
==26508==   total heap usage: 2,183 allocs, 2,183 frees, 262,768 bytes allocated
==26508== 
==26508== All heap blocks were freed -- no leaks are possible
==26508== 
==26508== For counts of detected and suppressed errors, rerun with: -v
==26508== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26510== Memcheck, a memory error detector
==26510== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==26510== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==26510== Command: ./test -r xml "List::sort\ simple\ #2"
==26510== 
==26510== 
==26510== HEAP SUMMARY:
==26510==     in use at exit: 0 bytes in 0 blocks
==26510==   total heap usage: 2,183 allocs, 2,183 frees, 262,816 bytes allocated
==26510== 
==26510== All heap blocks were freed -- no leaks are possible
==26510== 
==26510== For counts of detected and suppressed errors, rerun with: -v
==26510== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26515== Memcheck, a memory error detector
==26515== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==26515== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==26515== Command: ./test -r xml "List::insertFront\ size"
==26515== 
==26515== 
==26515== HEAP SUMMARY:
==26515==     in use at exit: 0 bytes in 0 blocks
==26515==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==26515== 
==26515== All heap blocks were freed -- no leaks are possible
==26515== 
==26515== For counts of detected and suppressed errors, rerun with: -v
==26515== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26540== Memcheck, a memory error detector
==26540== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==26540== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==26540== Command: ./test -r xml "List::insertBack\ size"
==26540== 
==26540== 
==26540== HEAP SUMMARY:
==26540==     in use at exit: 0 bytes in 0 blocks
==26540==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==26540== 
==26540== All heap blocks were freed -- no leaks are possible
==26540== 
==26540== For counts of detected and suppressed errors, rerun with: -v
==26540== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26544== Memcheck, a memory error detector
==26544== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==26544== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==26544== Command: ./test -r xml "List::insert\ contents"
==26544== 
==26544== 
==26544== HEAP SUMMARY:
==26544==     in use at exit: 0 bytes in 0 blocks
==26544==   total heap usage: 2,324 allocs, 2,324 frees, 267,272 bytes allocated
==26544== 
==26544== All heap blocks were freed -- no leaks are possible
==26544== 
==26544== For counts of detected and suppressed errors, rerun with: -v
==26544== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26551== Memcheck, a memory error detector
==26551== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==26551== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==26551== Command: ./test -r xml "List::split\ simple"
==26551== 
==26551== 
==26551== HEAP SUMMARY:
==26551==     in use at exit: 0 bytes in 0 blocks
==26551==   total heap usage: 2,186 allocs, 2,186 frees, 262,840 bytes allocated
==26551== 
==26551== All heap blocks were freed -- no leaks are possible
==26551== 
==26551== For counts of detected and suppressed errors, rerun with: -v
==26551== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26556== Memcheck, a memory error detector
==26556== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==26556== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==26556== Command: ./test -r xml "List::_destroy\ empty\ list"
==26556== 
==26556== 
==26556== HEAP SUMMARY:
==26556==     in use at exit: 0 bytes in 0 blocks
==26556==   total heap usage: 2,336 allocs, 2,336 frees, 268,200 bytes allocated
==26556== 
==26556== All heap blocks were freed -- no leaks are possible
==26556== 
==26556== For counts of detected and suppressed errors, rerun with: -v
==26556== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26561== Memcheck, a memory error detector
==26561== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==26561== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==26561== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==26561== 
==26561== 
==26561== HEAP SUMMARY:
==26561==     in use at exit: 0 bytes in 0 blocks
==26561==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==26561== 
==26561== All heap blocks were freed -- no leaks are possible
==26561== 
==26561== For counts of detected and suppressed errors, rerun with: -v
==26561== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26565== Memcheck, a memory error detector
==26565== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==26565== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==26565== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==26565== 
==26565== 
==26565== HEAP SUMMARY:
==26565==     in use at exit: 0 bytes in 0 blocks
==26565==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==26565== 
==26565== All heap blocks were freed -- no leaks are possible
==26565== 
==26565== For counts of detected and suppressed errors, rerun with: -v
==26565== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26569== Memcheck, a memory error detector
==26569== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==26569== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==26569== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==26569== 
==26569== 
==26569== HEAP SUMMARY:
==26569==     in use at exit: 0 bytes in 0 blocks
==26569==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==26569== 
==26569== All heap blocks were freed -- no leaks are possible
==26569== 
==26569== For counts of detected and suppressed errors, rerun with: -v
==26569== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26573== Memcheck, a memory error detector
==26573== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==26573== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==26573== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==26573== 
==26573== 
==26573== HEAP SUMMARY:
==26573==     in use at exit: 0 bytes in 0 blocks
==26573==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==26573== 
==26573== All heap blocks were freed -- no leaks are possible
==26573== 
==26573== For counts of detected and suppressed errors, rerun with: -v
==26573== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26577== Memcheck, a memory error detector
==26577== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==26577== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==26577== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==26577== 
==26577== 
==26577== HEAP SUMMARY:
==26577==     in use at exit: 0 bytes in 0 blocks
==26577==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==26577== 
==26577== All heap blocks were freed -- no leaks are possible
==26577== 
==26577== For counts of detected and suppressed errors, rerun with: -v
==26577== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26581== Memcheck, a memory error detector
==26581== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==26581== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==26581== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==26581== 
==26581== 
==26581== HEAP SUMMARY:
==26581==     in use at exit: 0 bytes in 0 blocks
==26581==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==26581== 
==26581== All heap blocks were freed -- no leaks are possible
==26581== 
==26581== For counts of detected and suppressed errors, rerun with: -v
==26581== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26585== Memcheck, a memory error detector
==26585== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==26585== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==26585== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==26585== 
==26585== 
==26585== HEAP SUMMARY:
==26585==     in use at exit: 0 bytes in 0 blocks
==26585==   total heap usage: 2,333 allocs, 2,333 frees, 269,968 bytes allocated
==26585== 
==26585== All heap blocks were freed -- no leaks are possible
==26585== 
==26585== For counts of detected and suppressed errors, rerun with: -v
==26585== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26589== Memcheck, a memory error detector
==26589== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==26589== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==26589== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==26589== 
==26589== 
==26589== HEAP SUMMARY:
==26589==     in use at exit: 0 bytes in 0 blocks
==26589==   total heap usage: 2,333 allocs, 2,333 frees, 272,368 bytes allocated
==26589== 
==26589== All heap blocks were freed -- no leaks are possible
==26589== 
==26589== For counts of detected and suppressed errors, rerun with: -v
==26589== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26593== Memcheck, a memory error detector
==26593== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==26593== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==26593== Command: ./test -r xml "List::reverse\ simple"
==26593== 
==26593== 
==26593== HEAP SUMMARY:
==26593==     in use at exit: 0 bytes in 0 blocks
==26593==   total heap usage: 2,189 allocs, 2,189 frees, 262,948 bytes allocated
==26593== 
==26593== All heap blocks were freed -- no leaks are possible
==26593== 
==26593== For counts of detected and suppressed errors, rerun with: -v
==26593== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26600== Memcheck, a memory error detector
==26600== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==26600== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==26600== Command: ./test -r xml "List::reverse\ edge\ cases"
==26600== 
==26600== 
==26600== HEAP SUMMARY:
==26600==     in use at exit: 0 bytes in 0 blocks
==26600==   total heap usage: 2,334 allocs, 2,334 frees, 267,648 bytes allocated
==26600== 
==26600== All heap blocks were freed -- no leaks are possible
==26600== 
==26600== For counts of detected and suppressed errors, rerun with: -v
==26600== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26607== Memcheck, a memory error detector
==26607== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==26607== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==26607== Command: ./test -r xml "List::reverseNth\ #3"
==26607== 
==26607== 
==26607== HEAP SUMMARY:
==26607==     in use at exit: 0 bytes in 0 blocks
==26607==   total heap usage: 2,195 allocs, 2,195 frees, 263,128 bytes allocated
==26607== 
==26607== All heap blocks were freed -- no leaks are possible
==26607== 
==26607== For counts of detected and suppressed errors, rerun with: -v
==26607== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26627== Memcheck, a memory error detector
==26627== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==26627== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==26627== Command: ./test -r xml "List::merge\ #2"
==26627== 
==26627== 
==26627== HEAP SUMMARY:
==26627==     in use at exit: 0 bytes in 0 blocks
==26627==   total heap usage: 2,225 allocs, 2,225 frees, 265,096 bytes allocated
==26627== 
==26627== All heap blocks were freed -- no leaks are possible
==26627== 
==26627== For counts of detected and suppressed errors, rerun with: -v
==26627== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26633== Memcheck, a memory error detector
==26633== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==26633== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==26633== Command: ./test -r xml "List::sort\ simple\ #3"
==26633== 
==26633== 
==26633== HEAP SUMMARY:
==26633==     in use at exit: 0 bytes in 0 blocks
==26633==   total heap usage: 2,186 allocs, 2,186 frees, 262,880 bytes allocated
==26633== 
==26633== All heap blocks were freed -- no leaks are possible
==26633== 
==26633== For counts of detected and suppressed errors, rerun with: -v
==26633== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26639== Memcheck, a memory error detector
==26639== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==26639== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==26639== Command: ./test -r xml "List::insert\ contents\ #2"
==26639== 
==26639== 
==26639== HEAP SUMMARY:
==26639==     in use at exit: 0 bytes in 0 blocks
==26639==   total heap usage: 2,339 allocs, 2,339 frees, 267,768 bytes allocated
==26639== 
==26639== All heap blocks were freed -- no leaks are possible
==26639== 
==26639== For counts of detected and suppressed errors, rerun with: -v
==26639== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26643== Memcheck, a memory error detector
==26643== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==26643== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==26643== Command: ./test -r xml "List::split\ edge\ cases"
==26643== 
==26643== 
==26643== HEAP SUMMARY:
==26643==     in use at exit: 0 bytes in 0 blocks
==26643==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==26643== 
==26643== All heap blocks were freed -- no leaks are possible
==26643== 
==26643== For counts of detected and suppressed errors, rerun with: -v
==26643== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26647== Memcheck, a memory error detector
==26647== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==26647== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==26647== Command: ./test -r xml "List::waterfall\ simple"
==26647== 
==26647== 
==26647== HEAP SUMMARY:
==26647==     in use at exit: 0 bytes in 0 blocks
==26647==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==26647== 
==26647== All heap blocks were freed -- no leaks are possible
==26647== 
==26647== For counts of detected and suppressed errors, rerun with: -v
==26647== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
