


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
==10356== Memcheck, a memory error detector
==10356== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10356== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==10356== Command: ./test -r xml "List::merge"
==10356== 
==10356== 
==10356== HEAP SUMMARY:
==10356==     in use at exit: 0 bytes in 0 blocks
==10356==   total heap usage: 243,290 allocs, 243,290 frees, 79,504,233 bytes allocated
==10356== 
==10356== All heap blocks were freed -- no leaks are possible
==10356== 
==10356== For counts of detected and suppressed errors, rerun with: -v
==10356== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10441== Memcheck, a memory error detector
==10441== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10441== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==10441== Command: ./test -r xml "List::sort\ simple\ #1"
==10441== 
==10441== 
==10441== HEAP SUMMARY:
==10441==     in use at exit: 0 bytes in 0 blocks
==10441==   total heap usage: 2,183 allocs, 2,183 frees, 262,768 bytes allocated
==10441== 
==10441== All heap blocks were freed -- no leaks are possible
==10441== 
==10441== For counts of detected and suppressed errors, rerun with: -v
==10441== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10445== Memcheck, a memory error detector
==10445== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10445== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==10445== Command: ./test -r xml "List::sort\ simple\ #2"
==10445== 
==10445== 
==10445== HEAP SUMMARY:
==10445==     in use at exit: 0 bytes in 0 blocks
==10445==   total heap usage: 2,183 allocs, 2,183 frees, 262,816 bytes allocated
==10445== 
==10445== All heap blocks were freed -- no leaks are possible
==10445== 
==10445== For counts of detected and suppressed errors, rerun with: -v
==10445== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10480== Memcheck, a memory error detector
==10480== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10480== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==10480== Command: ./test -r xml "List::insertFront\ size"
==10480== 
==10480== 
==10480== HEAP SUMMARY:
==10480==     in use at exit: 0 bytes in 0 blocks
==10480==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==10480== 
==10480== All heap blocks were freed -- no leaks are possible
==10480== 
==10480== For counts of detected and suppressed errors, rerun with: -v
==10480== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10484== Memcheck, a memory error detector
==10484== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10484== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==10484== Command: ./test -r xml "List::insertBack\ size"
==10484== 
==10484== 
==10484== HEAP SUMMARY:
==10484==     in use at exit: 0 bytes in 0 blocks
==10484==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==10484== 
==10484== All heap blocks were freed -- no leaks are possible
==10484== 
==10484== For counts of detected and suppressed errors, rerun with: -v
==10484== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10514== Memcheck, a memory error detector
==10514== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10514== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==10514== Command: ./test -r xml "List::insert\ contents"
==10514== 
==10514== 
==10514== HEAP SUMMARY:
==10514==     in use at exit: 0 bytes in 0 blocks
==10514==   total heap usage: 2,324 allocs, 2,324 frees, 267,272 bytes allocated
==10514== 
==10514== All heap blocks were freed -- no leaks are possible
==10514== 
==10514== For counts of detected and suppressed errors, rerun with: -v
==10514== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10553== Memcheck, a memory error detector
==10553== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10553== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==10553== Command: ./test -r xml "List::split\ simple"
==10553== 
==10553== 
==10553== HEAP SUMMARY:
==10553==     in use at exit: 0 bytes in 0 blocks
==10553==   total heap usage: 2,186 allocs, 2,186 frees, 262,840 bytes allocated
==10553== 
==10553== All heap blocks were freed -- no leaks are possible
==10553== 
==10553== For counts of detected and suppressed errors, rerun with: -v
==10553== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10564== Memcheck, a memory error detector
==10564== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10564== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==10564== Command: ./test -r xml "List::_destroy\ empty\ list"
==10564== 
==10564== 
==10564== HEAP SUMMARY:
==10564==     in use at exit: 0 bytes in 0 blocks
==10564==   total heap usage: 2,336 allocs, 2,336 frees, 268,200 bytes allocated
==10564== 
==10564== All heap blocks were freed -- no leaks are possible
==10564== 
==10564== For counts of detected and suppressed errors, rerun with: -v
==10564== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10568== Memcheck, a memory error detector
==10568== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10568== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==10568== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==10568== 
==10568== 
==10568== HEAP SUMMARY:
==10568==     in use at exit: 0 bytes in 0 blocks
==10568==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==10568== 
==10568== All heap blocks were freed -- no leaks are possible
==10568== 
==10568== For counts of detected and suppressed errors, rerun with: -v
==10568== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10585== Memcheck, a memory error detector
==10585== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10585== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==10585== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==10585== 
==10585== 
==10585== HEAP SUMMARY:
==10585==     in use at exit: 0 bytes in 0 blocks
==10585==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==10585== 
==10585== All heap blocks were freed -- no leaks are possible
==10585== 
==10585== For counts of detected and suppressed errors, rerun with: -v
==10585== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10589== Memcheck, a memory error detector
==10589== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10589== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==10589== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==10589== 
==10589== 
==10589== HEAP SUMMARY:
==10589==     in use at exit: 0 bytes in 0 blocks
==10589==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==10589== 
==10589== All heap blocks were freed -- no leaks are possible
==10589== 
==10589== For counts of detected and suppressed errors, rerun with: -v
==10589== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10609== Memcheck, a memory error detector
==10609== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10609== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==10609== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==10609== 
==10609== 
==10609== HEAP SUMMARY:
==10609==     in use at exit: 0 bytes in 0 blocks
==10609==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==10609== 
==10609== All heap blocks were freed -- no leaks are possible
==10609== 
==10609== For counts of detected and suppressed errors, rerun with: -v
==10609== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10625== Memcheck, a memory error detector
==10625== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10625== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==10625== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==10625== 
==10625== 
==10625== HEAP SUMMARY:
==10625==     in use at exit: 0 bytes in 0 blocks
==10625==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==10625== 
==10625== All heap blocks were freed -- no leaks are possible
==10625== 
==10625== For counts of detected and suppressed errors, rerun with: -v
==10625== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10641== Memcheck, a memory error detector
==10641== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10641== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==10641== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==10641== 
==10641== 
==10641== HEAP SUMMARY:
==10641==     in use at exit: 0 bytes in 0 blocks
==10641==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==10641== 
==10641== All heap blocks were freed -- no leaks are possible
==10641== 
==10641== For counts of detected and suppressed errors, rerun with: -v
==10641== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10651== Memcheck, a memory error detector
==10651== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10651== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==10651== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==10651== 
==10651== 
==10651== HEAP SUMMARY:
==10651==     in use at exit: 0 bytes in 0 blocks
==10651==   total heap usage: 2,333 allocs, 2,333 frees, 269,968 bytes allocated
==10651== 
==10651== All heap blocks were freed -- no leaks are possible
==10651== 
==10651== For counts of detected and suppressed errors, rerun with: -v
==10651== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10708== Memcheck, a memory error detector
==10708== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10708== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==10708== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==10708== 
==10708== 
==10708== HEAP SUMMARY:
==10708==     in use at exit: 0 bytes in 0 blocks
==10708==   total heap usage: 2,333 allocs, 2,333 frees, 272,368 bytes allocated
==10708== 
==10708== All heap blocks were freed -- no leaks are possible
==10708== 
==10708== For counts of detected and suppressed errors, rerun with: -v
==10708== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10716== Memcheck, a memory error detector
==10716== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10716== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==10716== Command: ./test -r xml "List::reverse\ simple"
==10716== 
==10716== 
==10716== HEAP SUMMARY:
==10716==     in use at exit: 0 bytes in 0 blocks
==10716==   total heap usage: 2,189 allocs, 2,189 frees, 262,948 bytes allocated
==10716== 
==10716== All heap blocks were freed -- no leaks are possible
==10716== 
==10716== For counts of detected and suppressed errors, rerun with: -v
==10716== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10720== Memcheck, a memory error detector
==10720== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10720== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==10720== Command: ./test -r xml "List::reverse\ edge\ cases"
==10720== 
==10720== 
==10720== HEAP SUMMARY:
==10720==     in use at exit: 0 bytes in 0 blocks
==10720==   total heap usage: 2,334 allocs, 2,334 frees, 267,648 bytes allocated
==10720== 
==10720== All heap blocks were freed -- no leaks are possible
==10720== 
==10720== For counts of detected and suppressed errors, rerun with: -v
==10720== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10737== Memcheck, a memory error detector
==10737== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10737== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==10737== Command: ./test -r xml "List::reverseNth\ #3"
==10737== 
==10737== 
==10737== HEAP SUMMARY:
==10737==     in use at exit: 0 bytes in 0 blocks
==10737==   total heap usage: 2,195 allocs, 2,195 frees, 263,128 bytes allocated
==10737== 
==10737== All heap blocks were freed -- no leaks are possible
==10737== 
==10737== For counts of detected and suppressed errors, rerun with: -v
==10737== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10741== Memcheck, a memory error detector
==10741== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10741== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==10741== Command: ./test -r xml "List::merge\ #2"
==10741== 
==10741== 
==10741== HEAP SUMMARY:
==10741==     in use at exit: 0 bytes in 0 blocks
==10741==   total heap usage: 2,225 allocs, 2,225 frees, 265,096 bytes allocated
==10741== 
==10741== All heap blocks were freed -- no leaks are possible
==10741== 
==10741== For counts of detected and suppressed errors, rerun with: -v
==10741== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10756== Memcheck, a memory error detector
==10756== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10756== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==10756== Command: ./test -r xml "List::sort\ simple\ #3"
==10756== 
==10756== 
==10756== HEAP SUMMARY:
==10756==     in use at exit: 0 bytes in 0 blocks
==10756==   total heap usage: 2,186 allocs, 2,186 frees, 262,880 bytes allocated
==10756== 
==10756== All heap blocks were freed -- no leaks are possible
==10756== 
==10756== For counts of detected and suppressed errors, rerun with: -v
==10756== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10758== Memcheck, a memory error detector
==10758== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10758== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==10758== Command: ./test -r xml "List::insert\ contents\ #2"
==10758== 
==10758== 
==10758== HEAP SUMMARY:
==10758==     in use at exit: 0 bytes in 0 blocks
==10758==   total heap usage: 2,339 allocs, 2,339 frees, 267,768 bytes allocated
==10758== 
==10758== All heap blocks were freed -- no leaks are possible
==10758== 
==10758== For counts of detected and suppressed errors, rerun with: -v
==10758== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10772== Memcheck, a memory error detector
==10772== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10772== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==10772== Command: ./test -r xml "List::split\ edge\ cases"
==10772== 
==10772== 
==10772== HEAP SUMMARY:
==10772==     in use at exit: 0 bytes in 0 blocks
==10772==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==10772== 
==10772== All heap blocks were freed -- no leaks are possible
==10772== 
==10772== For counts of detected and suppressed errors, rerun with: -v
==10772== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10799== Memcheck, a memory error detector
==10799== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10799== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==10799== Command: ./test -r xml "List::waterfall\ simple"
==10799== 
==10799== 
==10799== HEAP SUMMARY:
==10799==     in use at exit: 0 bytes in 0 blocks
==10799==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==10799== 
==10799== All heap blocks were freed -- no leaks are possible
==10799== 
==10799== For counts of detected and suppressed errors, rerun with: -v
==10799== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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

This report was generated for **dpeng4** using **ade5ad0e00b8b860bc91fa159c4ce1360c9cdfde** (from **February 25th 2019, 12:05:00 am**)
