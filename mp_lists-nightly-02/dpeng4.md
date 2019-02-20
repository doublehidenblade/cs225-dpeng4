


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
==14439== Memcheck, a memory error detector
==14439== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14439== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==14439== Command: ./test -r xml "List::merge"
==14439== 
==14439== 
==14439== HEAP SUMMARY:
==14439==     in use at exit: 0 bytes in 0 blocks
==14439==   total heap usage: 243,290 allocs, 243,290 frees, 79,504,233 bytes allocated
==14439== 
==14439== All heap blocks were freed -- no leaks are possible
==14439== 
==14439== For counts of detected and suppressed errors, rerun with: -v
==14439== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14443== Memcheck, a memory error detector
==14443== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14443== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==14443== Command: ./test -r xml "List::sort\ simple\ #1"
==14443== 
==14443== 
==14443== HEAP SUMMARY:
==14443==     in use at exit: 0 bytes in 0 blocks
==14443==   total heap usage: 2,183 allocs, 2,183 frees, 262,768 bytes allocated
==14443== 
==14443== All heap blocks were freed -- no leaks are possible
==14443== 
==14443== For counts of detected and suppressed errors, rerun with: -v
==14443== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14445== Memcheck, a memory error detector
==14445== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14445== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==14445== Command: ./test -r xml "List::sort\ simple\ #2"
==14445== 
==14445== 
==14445== HEAP SUMMARY:
==14445==     in use at exit: 0 bytes in 0 blocks
==14445==   total heap usage: 2,183 allocs, 2,183 frees, 262,816 bytes allocated
==14445== 
==14445== All heap blocks were freed -- no leaks are possible
==14445== 
==14445== For counts of detected and suppressed errors, rerun with: -v
==14445== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14449== Memcheck, a memory error detector
==14449== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14449== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==14449== Command: ./test -r xml "List::insertFront\ size"
==14449== 
==14449== 
==14449== HEAP SUMMARY:
==14449==     in use at exit: 0 bytes in 0 blocks
==14449==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==14449== 
==14449== All heap blocks were freed -- no leaks are possible
==14449== 
==14449== For counts of detected and suppressed errors, rerun with: -v
==14449== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14451== Memcheck, a memory error detector
==14451== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14451== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==14451== Command: ./test -r xml "List::insertBack\ size"
==14451== 
==14451== 
==14451== HEAP SUMMARY:
==14451==     in use at exit: 0 bytes in 0 blocks
==14451==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==14451== 
==14451== All heap blocks were freed -- no leaks are possible
==14451== 
==14451== For counts of detected and suppressed errors, rerun with: -v
==14451== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14453== Memcheck, a memory error detector
==14453== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14453== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==14453== Command: ./test -r xml "List::insert\ contents"
==14453== 
==14453== 
==14453== HEAP SUMMARY:
==14453==     in use at exit: 0 bytes in 0 blocks
==14453==   total heap usage: 2,324 allocs, 2,324 frees, 267,272 bytes allocated
==14453== 
==14453== All heap blocks were freed -- no leaks are possible
==14453== 
==14453== For counts of detected and suppressed errors, rerun with: -v
==14453== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14457== Memcheck, a memory error detector
==14457== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14457== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==14457== Command: ./test -r xml "List::split\ simple"
==14457== 
==14457== 
==14457== HEAP SUMMARY:
==14457==     in use at exit: 0 bytes in 0 blocks
==14457==   total heap usage: 2,186 allocs, 2,186 frees, 262,840 bytes allocated
==14457== 
==14457== All heap blocks were freed -- no leaks are possible
==14457== 
==14457== For counts of detected and suppressed errors, rerun with: -v
==14457== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14460== Memcheck, a memory error detector
==14460== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14460== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==14460== Command: ./test -r xml "List::_destroy\ empty\ list"
==14460== 
==14460== 
==14460== HEAP SUMMARY:
==14460==     in use at exit: 0 bytes in 0 blocks
==14460==   total heap usage: 2,336 allocs, 2,336 frees, 268,200 bytes allocated
==14460== 
==14460== All heap blocks were freed -- no leaks are possible
==14460== 
==14460== For counts of detected and suppressed errors, rerun with: -v
==14460== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14462== Memcheck, a memory error detector
==14462== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14462== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==14462== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==14462== 
==14462== 
==14462== HEAP SUMMARY:
==14462==     in use at exit: 0 bytes in 0 blocks
==14462==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==14462== 
==14462== All heap blocks were freed -- no leaks are possible
==14462== 
==14462== For counts of detected and suppressed errors, rerun with: -v
==14462== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14466== Memcheck, a memory error detector
==14466== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14466== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==14466== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==14466== 
==14466== 
==14466== HEAP SUMMARY:
==14466==     in use at exit: 0 bytes in 0 blocks
==14466==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==14466== 
==14466== All heap blocks were freed -- no leaks are possible
==14466== 
==14466== For counts of detected and suppressed errors, rerun with: -v
==14466== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14468== Memcheck, a memory error detector
==14468== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14468== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==14468== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==14468== 
==14468== 
==14468== HEAP SUMMARY:
==14468==     in use at exit: 0 bytes in 0 blocks
==14468==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==14468== 
==14468== All heap blocks were freed -- no leaks are possible
==14468== 
==14468== For counts of detected and suppressed errors, rerun with: -v
==14468== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14470== Memcheck, a memory error detector
==14470== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14470== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==14470== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==14470== 
==14470== 
==14470== HEAP SUMMARY:
==14470==     in use at exit: 0 bytes in 0 blocks
==14470==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==14470== 
==14470== All heap blocks were freed -- no leaks are possible
==14470== 
==14470== For counts of detected and suppressed errors, rerun with: -v
==14470== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14472== Memcheck, a memory error detector
==14472== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14472== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==14472== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==14472== 
==14472== 
==14472== HEAP SUMMARY:
==14472==     in use at exit: 0 bytes in 0 blocks
==14472==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==14472== 
==14472== All heap blocks were freed -- no leaks are possible
==14472== 
==14472== For counts of detected and suppressed errors, rerun with: -v
==14472== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14474== Memcheck, a memory error detector
==14474== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14474== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==14474== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==14474== 
==14474== 
==14474== HEAP SUMMARY:
==14474==     in use at exit: 0 bytes in 0 blocks
==14474==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==14474== 
==14474== All heap blocks were freed -- no leaks are possible
==14474== 
==14474== For counts of detected and suppressed errors, rerun with: -v
==14474== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14476== Memcheck, a memory error detector
==14476== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14476== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==14476== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==14476== 
==14476== 
==14476== HEAP SUMMARY:
==14476==     in use at exit: 0 bytes in 0 blocks
==14476==   total heap usage: 2,333 allocs, 2,333 frees, 269,968 bytes allocated
==14476== 
==14476== All heap blocks were freed -- no leaks are possible
==14476== 
==14476== For counts of detected and suppressed errors, rerun with: -v
==14476== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14478== Memcheck, a memory error detector
==14478== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14478== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==14478== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==14478== 
==14478== 
==14478== HEAP SUMMARY:
==14478==     in use at exit: 0 bytes in 0 blocks
==14478==   total heap usage: 2,333 allocs, 2,333 frees, 272,368 bytes allocated
==14478== 
==14478== All heap blocks were freed -- no leaks are possible
==14478== 
==14478== For counts of detected and suppressed errors, rerun with: -v
==14478== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14480== Memcheck, a memory error detector
==14480== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14480== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==14480== Command: ./test -r xml "List::reverse\ simple"
==14480== 
==14480== 
==14480== HEAP SUMMARY:
==14480==     in use at exit: 0 bytes in 0 blocks
==14480==   total heap usage: 2,189 allocs, 2,189 frees, 262,948 bytes allocated
==14480== 
==14480== All heap blocks were freed -- no leaks are possible
==14480== 
==14480== For counts of detected and suppressed errors, rerun with: -v
==14480== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14482== Memcheck, a memory error detector
==14482== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14482== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==14482== Command: ./test -r xml "List::reverse\ edge\ cases"
==14482== 
==14482== 
==14482== HEAP SUMMARY:
==14482==     in use at exit: 0 bytes in 0 blocks
==14482==   total heap usage: 2,334 allocs, 2,334 frees, 267,648 bytes allocated
==14482== 
==14482== All heap blocks were freed -- no leaks are possible
==14482== 
==14482== For counts of detected and suppressed errors, rerun with: -v
==14482== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14484== Memcheck, a memory error detector
==14484== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14484== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==14484== Command: ./test -r xml "List::reverseNth\ #3"
==14484== 
==14484== 
==14484== HEAP SUMMARY:
==14484==     in use at exit: 0 bytes in 0 blocks
==14484==   total heap usage: 2,195 allocs, 2,195 frees, 263,128 bytes allocated
==14484== 
==14484== All heap blocks were freed -- no leaks are possible
==14484== 
==14484== For counts of detected and suppressed errors, rerun with: -v
==14484== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14486== Memcheck, a memory error detector
==14486== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14486== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==14486== Command: ./test -r xml "List::merge\ #2"
==14486== 
==14486== 
==14486== HEAP SUMMARY:
==14486==     in use at exit: 0 bytes in 0 blocks
==14486==   total heap usage: 2,225 allocs, 2,225 frees, 265,096 bytes allocated
==14486== 
==14486== All heap blocks were freed -- no leaks are possible
==14486== 
==14486== For counts of detected and suppressed errors, rerun with: -v
==14486== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14488== Memcheck, a memory error detector
==14488== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14488== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==14488== Command: ./test -r xml "List::sort\ simple\ #3"
==14488== 
==14488== 
==14488== HEAP SUMMARY:
==14488==     in use at exit: 0 bytes in 0 blocks
==14488==   total heap usage: 2,186 allocs, 2,186 frees, 262,880 bytes allocated
==14488== 
==14488== All heap blocks were freed -- no leaks are possible
==14488== 
==14488== For counts of detected and suppressed errors, rerun with: -v
==14488== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14490== Memcheck, a memory error detector
==14490== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14490== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==14490== Command: ./test -r xml "List::insert\ contents\ #2"
==14490== 
==14490== 
==14490== HEAP SUMMARY:
==14490==     in use at exit: 0 bytes in 0 blocks
==14490==   total heap usage: 2,339 allocs, 2,339 frees, 267,768 bytes allocated
==14490== 
==14490== All heap blocks were freed -- no leaks are possible
==14490== 
==14490== For counts of detected and suppressed errors, rerun with: -v
==14490== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14498== Memcheck, a memory error detector
==14498== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14498== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==14498== Command: ./test -r xml "List::waterfall\ simple"
==14498== 
==14498== 
==14498== HEAP SUMMARY:
==14498==     in use at exit: 0 bytes in 0 blocks
==14498==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==14498== 
==14498== All heap blocks were freed -- no leaks are possible
==14498== 
==14498== For counts of detected and suppressed errors, rerun with: -v
==14498== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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

This report was generated for **dpeng4** using **c0548f6ecf6b6f86a7de1f6aaf6e9d6145fd6e9d** (from **February 20th 2019, 12:05:00 am**)
