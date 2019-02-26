


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
==29413== Memcheck, a memory error detector
==29413== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29413== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29413== Command: ./test -r xml "List::merge"
==29413== 
==29413== 
==29413== HEAP SUMMARY:
==29413==     in use at exit: 0 bytes in 0 blocks
==29413==   total heap usage: 243,290 allocs, 243,290 frees, 79,504,233 bytes allocated
==29413== 
==29413== All heap blocks were freed -- no leaks are possible
==29413== 
==29413== For counts of detected and suppressed errors, rerun with: -v
==29413== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==29416== Memcheck, a memory error detector
==29416== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29416== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29416== Command: ./test -r xml "List::sort\ simple\ #1"
==29416== 
==29416== 
==29416== HEAP SUMMARY:
==29416==     in use at exit: 0 bytes in 0 blocks
==29416==   total heap usage: 2,183 allocs, 2,183 frees, 262,768 bytes allocated
==29416== 
==29416== All heap blocks were freed -- no leaks are possible
==29416== 
==29416== For counts of detected and suppressed errors, rerun with: -v
==29416== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==29419== Memcheck, a memory error detector
==29419== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29419== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29419== Command: ./test -r xml "List::sort\ simple\ #2"
==29419== 
==29419== 
==29419== HEAP SUMMARY:
==29419==     in use at exit: 0 bytes in 0 blocks
==29419==   total heap usage: 2,183 allocs, 2,183 frees, 262,816 bytes allocated
==29419== 
==29419== All heap blocks were freed -- no leaks are possible
==29419== 
==29419== For counts of detected and suppressed errors, rerun with: -v
==29419== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==29432== Memcheck, a memory error detector
==29432== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29432== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29432== Command: ./test -r xml "List::insertFront\ size"
==29432== 
==29432== 
==29432== HEAP SUMMARY:
==29432==     in use at exit: 0 bytes in 0 blocks
==29432==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==29432== 
==29432== All heap blocks were freed -- no leaks are possible
==29432== 
==29432== For counts of detected and suppressed errors, rerun with: -v
==29432== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==29435== Memcheck, a memory error detector
==29435== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29435== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29435== Command: ./test -r xml "List::insertBack\ size"
==29435== 
==29435== 
==29435== HEAP SUMMARY:
==29435==     in use at exit: 0 bytes in 0 blocks
==29435==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==29435== 
==29435== All heap blocks were freed -- no leaks are possible
==29435== 
==29435== For counts of detected and suppressed errors, rerun with: -v
==29435== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==29437== Memcheck, a memory error detector
==29437== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29437== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29437== Command: ./test -r xml "List::insert\ contents"
==29437== 
==29437== 
==29437== HEAP SUMMARY:
==29437==     in use at exit: 0 bytes in 0 blocks
==29437==   total heap usage: 2,324 allocs, 2,324 frees, 267,272 bytes allocated
==29437== 
==29437== All heap blocks were freed -- no leaks are possible
==29437== 
==29437== For counts of detected and suppressed errors, rerun with: -v
==29437== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==29442== Memcheck, a memory error detector
==29442== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29442== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29442== Command: ./test -r xml "List::split\ simple"
==29442== 
==29442== 
==29442== HEAP SUMMARY:
==29442==     in use at exit: 0 bytes in 0 blocks
==29442==   total heap usage: 2,186 allocs, 2,186 frees, 262,840 bytes allocated
==29442== 
==29442== All heap blocks were freed -- no leaks are possible
==29442== 
==29442== For counts of detected and suppressed errors, rerun with: -v
==29442== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==29446== Memcheck, a memory error detector
==29446== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29446== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29446== Command: ./test -r xml "List::_destroy\ empty\ list"
==29446== 
==29446== 
==29446== HEAP SUMMARY:
==29446==     in use at exit: 0 bytes in 0 blocks
==29446==   total heap usage: 2,336 allocs, 2,336 frees, 268,200 bytes allocated
==29446== 
==29446== All heap blocks were freed -- no leaks are possible
==29446== 
==29446== For counts of detected and suppressed errors, rerun with: -v
==29446== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==29449== Memcheck, a memory error detector
==29449== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29449== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29449== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==29449== 
==29449== 
==29449== HEAP SUMMARY:
==29449==     in use at exit: 0 bytes in 0 blocks
==29449==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==29449== 
==29449== All heap blocks were freed -- no leaks are possible
==29449== 
==29449== For counts of detected and suppressed errors, rerun with: -v
==29449== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==29451== Memcheck, a memory error detector
==29451== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29451== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29451== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==29451== 
==29451== 
==29451== HEAP SUMMARY:
==29451==     in use at exit: 0 bytes in 0 blocks
==29451==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==29451== 
==29451== All heap blocks were freed -- no leaks are possible
==29451== 
==29451== For counts of detected and suppressed errors, rerun with: -v
==29451== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==29453== Memcheck, a memory error detector
==29453== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29453== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29453== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==29453== 
==29453== 
==29453== HEAP SUMMARY:
==29453==     in use at exit: 0 bytes in 0 blocks
==29453==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==29453== 
==29453== All heap blocks were freed -- no leaks are possible
==29453== 
==29453== For counts of detected and suppressed errors, rerun with: -v
==29453== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==29455== Memcheck, a memory error detector
==29455== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29455== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29455== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==29455== 
==29455== 
==29455== HEAP SUMMARY:
==29455==     in use at exit: 0 bytes in 0 blocks
==29455==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==29455== 
==29455== All heap blocks were freed -- no leaks are possible
==29455== 
==29455== For counts of detected and suppressed errors, rerun with: -v
==29455== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==29457== Memcheck, a memory error detector
==29457== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29457== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29457== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==29457== 
==29457== 
==29457== HEAP SUMMARY:
==29457==     in use at exit: 0 bytes in 0 blocks
==29457==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==29457== 
==29457== All heap blocks were freed -- no leaks are possible
==29457== 
==29457== For counts of detected and suppressed errors, rerun with: -v
==29457== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==29459== Memcheck, a memory error detector
==29459== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29459== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29459== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==29459== 
==29459== 
==29459== HEAP SUMMARY:
==29459==     in use at exit: 0 bytes in 0 blocks
==29459==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==29459== 
==29459== All heap blocks were freed -- no leaks are possible
==29459== 
==29459== For counts of detected and suppressed errors, rerun with: -v
==29459== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==29461== Memcheck, a memory error detector
==29461== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29461== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29461== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==29461== 
==29461== 
==29461== HEAP SUMMARY:
==29461==     in use at exit: 0 bytes in 0 blocks
==29461==   total heap usage: 2,333 allocs, 2,333 frees, 269,968 bytes allocated
==29461== 
==29461== All heap blocks were freed -- no leaks are possible
==29461== 
==29461== For counts of detected and suppressed errors, rerun with: -v
==29461== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==29463== Memcheck, a memory error detector
==29463== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29463== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29463== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==29463== 
==29463== 
==29463== HEAP SUMMARY:
==29463==     in use at exit: 0 bytes in 0 blocks
==29463==   total heap usage: 2,333 allocs, 2,333 frees, 272,368 bytes allocated
==29463== 
==29463== All heap blocks were freed -- no leaks are possible
==29463== 
==29463== For counts of detected and suppressed errors, rerun with: -v
==29463== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==29465== Memcheck, a memory error detector
==29465== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29465== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29465== Command: ./test -r xml "List::reverse\ simple"
==29465== 
==29465== 
==29465== HEAP SUMMARY:
==29465==     in use at exit: 0 bytes in 0 blocks
==29465==   total heap usage: 2,189 allocs, 2,189 frees, 262,948 bytes allocated
==29465== 
==29465== All heap blocks were freed -- no leaks are possible
==29465== 
==29465== For counts of detected and suppressed errors, rerun with: -v
==29465== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==29467== Memcheck, a memory error detector
==29467== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29467== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29467== Command: ./test -r xml "List::reverse\ edge\ cases"
==29467== 
==29467== 
==29467== HEAP SUMMARY:
==29467==     in use at exit: 0 bytes in 0 blocks
==29467==   total heap usage: 2,334 allocs, 2,334 frees, 267,648 bytes allocated
==29467== 
==29467== All heap blocks were freed -- no leaks are possible
==29467== 
==29467== For counts of detected and suppressed errors, rerun with: -v
==29467== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==29469== Memcheck, a memory error detector
==29469== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29469== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29469== Command: ./test -r xml "List::reverseNth\ #3"
==29469== 
==29469== 
==29469== HEAP SUMMARY:
==29469==     in use at exit: 0 bytes in 0 blocks
==29469==   total heap usage: 2,195 allocs, 2,195 frees, 263,128 bytes allocated
==29469== 
==29469== All heap blocks were freed -- no leaks are possible
==29469== 
==29469== For counts of detected and suppressed errors, rerun with: -v
==29469== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==29472== Memcheck, a memory error detector
==29472== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29472== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29472== Command: ./test -r xml "List::merge\ #2"
==29472== 
==29472== 
==29472== HEAP SUMMARY:
==29472==     in use at exit: 0 bytes in 0 blocks
==29472==   total heap usage: 2,225 allocs, 2,225 frees, 265,096 bytes allocated
==29472== 
==29472== All heap blocks were freed -- no leaks are possible
==29472== 
==29472== For counts of detected and suppressed errors, rerun with: -v
==29472== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==29474== Memcheck, a memory error detector
==29474== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29474== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29474== Command: ./test -r xml "List::sort\ simple\ #3"
==29474== 
==29474== 
==29474== HEAP SUMMARY:
==29474==     in use at exit: 0 bytes in 0 blocks
==29474==   total heap usage: 2,186 allocs, 2,186 frees, 262,880 bytes allocated
==29474== 
==29474== All heap blocks were freed -- no leaks are possible
==29474== 
==29474== For counts of detected and suppressed errors, rerun with: -v
==29474== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==29476== Memcheck, a memory error detector
==29476== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29476== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29476== Command: ./test -r xml "List::insert\ contents\ #2"
==29476== 
==29476== 
==29476== HEAP SUMMARY:
==29476==     in use at exit: 0 bytes in 0 blocks
==29476==   total heap usage: 2,339 allocs, 2,339 frees, 267,768 bytes allocated
==29476== 
==29476== All heap blocks were freed -- no leaks are possible
==29476== 
==29476== For counts of detected and suppressed errors, rerun with: -v
==29476== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==29479== Memcheck, a memory error detector
==29479== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29479== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29479== Command: ./test -r xml "List::split\ edge\ cases"
==29479== 
==29479== 
==29479== HEAP SUMMARY:
==29479==     in use at exit: 0 bytes in 0 blocks
==29479==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==29479== 
==29479== All heap blocks were freed -- no leaks are possible
==29479== 
==29479== For counts of detected and suppressed errors, rerun with: -v
==29479== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==29481== Memcheck, a memory error detector
==29481== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29481== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29481== Command: ./test -r xml "List::waterfall\ simple"
==29481== 
==29481== 
==29481== HEAP SUMMARY:
==29481==     in use at exit: 0 bytes in 0 blocks
==29481==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==29481== 
==29481== All heap blocks were freed -- no leaks are possible
==29481== 
==29481== For counts of detected and suppressed errors, rerun with: -v
==29481== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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

This report was generated for **dpeng4** using **ade5ad0e00b8b860bc91fa159c4ce1360c9cdfde** (from **February 26th 2019, 12:05:00 am**)
