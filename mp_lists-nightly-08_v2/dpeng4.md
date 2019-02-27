


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
==11361== Memcheck, a memory error detector
==11361== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11361== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==11361== Command: ./test -r xml "List::merge"
==11361== 
==11361== 
==11361== HEAP SUMMARY:
==11361==     in use at exit: 0 bytes in 0 blocks
==11361==   total heap usage: 243,290 allocs, 243,290 frees, 79,504,233 bytes allocated
==11361== 
==11361== All heap blocks were freed -- no leaks are possible
==11361== 
==11361== For counts of detected and suppressed errors, rerun with: -v
==11361== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==11367== Memcheck, a memory error detector
==11367== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11367== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==11367== Command: ./test -r xml "List::sort\ simple\ #1"
==11367== 
==11367== 
==11367== HEAP SUMMARY:
==11367==     in use at exit: 0 bytes in 0 blocks
==11367==   total heap usage: 2,183 allocs, 2,183 frees, 262,768 bytes allocated
==11367== 
==11367== All heap blocks were freed -- no leaks are possible
==11367== 
==11367== For counts of detected and suppressed errors, rerun with: -v
==11367== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==11377== Memcheck, a memory error detector
==11377== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11377== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==11377== Command: ./test -r xml "List::sort\ simple\ #2"
==11377== 
==11377== 
==11377== HEAP SUMMARY:
==11377==     in use at exit: 0 bytes in 0 blocks
==11377==   total heap usage: 2,183 allocs, 2,183 frees, 262,816 bytes allocated
==11377== 
==11377== All heap blocks were freed -- no leaks are possible
==11377== 
==11377== For counts of detected and suppressed errors, rerun with: -v
==11377== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==11398== Memcheck, a memory error detector
==11398== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11398== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==11398== Command: ./test -r xml "List::insertFront\ size"
==11398== 
==11398== 
==11398== HEAP SUMMARY:
==11398==     in use at exit: 0 bytes in 0 blocks
==11398==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==11398== 
==11398== All heap blocks were freed -- no leaks are possible
==11398== 
==11398== For counts of detected and suppressed errors, rerun with: -v
==11398== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==11408== Memcheck, a memory error detector
==11408== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11408== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==11408== Command: ./test -r xml "List::insertBack\ size"
==11408== 
==11408== 
==11408== HEAP SUMMARY:
==11408==     in use at exit: 0 bytes in 0 blocks
==11408==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==11408== 
==11408== All heap blocks were freed -- no leaks are possible
==11408== 
==11408== For counts of detected and suppressed errors, rerun with: -v
==11408== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==11417== Memcheck, a memory error detector
==11417== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11417== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==11417== Command: ./test -r xml "List::insert\ contents"
==11417== 
==11417== 
==11417== HEAP SUMMARY:
==11417==     in use at exit: 0 bytes in 0 blocks
==11417==   total heap usage: 2,324 allocs, 2,324 frees, 267,272 bytes allocated
==11417== 
==11417== All heap blocks were freed -- no leaks are possible
==11417== 
==11417== For counts of detected and suppressed errors, rerun with: -v
==11417== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==11435== Memcheck, a memory error detector
==11435== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11435== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==11435== Command: ./test -r xml "List::split\ simple"
==11435== 
==11435== 
==11435== HEAP SUMMARY:
==11435==     in use at exit: 0 bytes in 0 blocks
==11435==   total heap usage: 2,186 allocs, 2,186 frees, 262,840 bytes allocated
==11435== 
==11435== All heap blocks were freed -- no leaks are possible
==11435== 
==11435== For counts of detected and suppressed errors, rerun with: -v
==11435== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==11438== Memcheck, a memory error detector
==11438== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11438== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==11438== Command: ./test -r xml "List::_destroy\ empty\ list"
==11438== 
==11438== 
==11438== HEAP SUMMARY:
==11438==     in use at exit: 0 bytes in 0 blocks
==11438==   total heap usage: 2,336 allocs, 2,336 frees, 268,200 bytes allocated
==11438== 
==11438== All heap blocks were freed -- no leaks are possible
==11438== 
==11438== For counts of detected and suppressed errors, rerun with: -v
==11438== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==11442== Memcheck, a memory error detector
==11442== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11442== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==11442== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==11442== 
==11442== 
==11442== HEAP SUMMARY:
==11442==     in use at exit: 0 bytes in 0 blocks
==11442==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==11442== 
==11442== All heap blocks were freed -- no leaks are possible
==11442== 
==11442== For counts of detected and suppressed errors, rerun with: -v
==11442== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==11618== Memcheck, a memory error detector
==11618== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11618== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==11618== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==11618== 
==11618== 
==11618== HEAP SUMMARY:
==11618==     in use at exit: 0 bytes in 0 blocks
==11618==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==11618== 
==11618== All heap blocks were freed -- no leaks are possible
==11618== 
==11618== For counts of detected and suppressed errors, rerun with: -v
==11618== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==11745== Memcheck, a memory error detector
==11745== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11745== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==11745== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==11745== 
==11745== 
==11745== HEAP SUMMARY:
==11745==     in use at exit: 0 bytes in 0 blocks
==11745==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==11745== 
==11745== All heap blocks were freed -- no leaks are possible
==11745== 
==11745== For counts of detected and suppressed errors, rerun with: -v
==11745== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==11753== Memcheck, a memory error detector
==11753== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11753== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==11753== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==11753== 
==11753== 
==11753== HEAP SUMMARY:
==11753==     in use at exit: 0 bytes in 0 blocks
==11753==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==11753== 
==11753== All heap blocks were freed -- no leaks are possible
==11753== 
==11753== For counts of detected and suppressed errors, rerun with: -v
==11753== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==11758== Memcheck, a memory error detector
==11758== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11758== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==11758== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==11758== 
==11758== 
==11758== HEAP SUMMARY:
==11758==     in use at exit: 0 bytes in 0 blocks
==11758==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==11758== 
==11758== All heap blocks were freed -- no leaks are possible
==11758== 
==11758== For counts of detected and suppressed errors, rerun with: -v
==11758== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==11776== Memcheck, a memory error detector
==11776== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11776== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==11776== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==11776== 
==11776== 
==11776== HEAP SUMMARY:
==11776==     in use at exit: 0 bytes in 0 blocks
==11776==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==11776== 
==11776== All heap blocks were freed -- no leaks are possible
==11776== 
==11776== For counts of detected and suppressed errors, rerun with: -v
==11776== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==11782== Memcheck, a memory error detector
==11782== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11782== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==11782== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==11782== 
==11782== 
==11782== HEAP SUMMARY:
==11782==     in use at exit: 0 bytes in 0 blocks
==11782==   total heap usage: 2,333 allocs, 2,333 frees, 269,968 bytes allocated
==11782== 
==11782== All heap blocks were freed -- no leaks are possible
==11782== 
==11782== For counts of detected and suppressed errors, rerun with: -v
==11782== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==11800== Memcheck, a memory error detector
==11800== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11800== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==11800== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==11800== 
==11800== 
==11800== HEAP SUMMARY:
==11800==     in use at exit: 0 bytes in 0 blocks
==11800==   total heap usage: 2,333 allocs, 2,333 frees, 272,368 bytes allocated
==11800== 
==11800== All heap blocks were freed -- no leaks are possible
==11800== 
==11800== For counts of detected and suppressed errors, rerun with: -v
==11800== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==11804== Memcheck, a memory error detector
==11804== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11804== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==11804== Command: ./test -r xml "List::reverse\ simple"
==11804== 
==11804== 
==11804== HEAP SUMMARY:
==11804==     in use at exit: 0 bytes in 0 blocks
==11804==   total heap usage: 2,189 allocs, 2,189 frees, 262,948 bytes allocated
==11804== 
==11804== All heap blocks were freed -- no leaks are possible
==11804== 
==11804== For counts of detected and suppressed errors, rerun with: -v
==11804== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==11806== Memcheck, a memory error detector
==11806== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11806== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==11806== Command: ./test -r xml "List::reverse\ edge\ cases"
==11806== 
==11806== 
==11806== HEAP SUMMARY:
==11806==     in use at exit: 0 bytes in 0 blocks
==11806==   total heap usage: 2,334 allocs, 2,334 frees, 267,648 bytes allocated
==11806== 
==11806== All heap blocks were freed -- no leaks are possible
==11806== 
==11806== For counts of detected and suppressed errors, rerun with: -v
==11806== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==11808== Memcheck, a memory error detector
==11808== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11808== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==11808== Command: ./test -r xml "List::reverseNth\ #3"
==11808== 
==11808== 
==11808== HEAP SUMMARY:
==11808==     in use at exit: 0 bytes in 0 blocks
==11808==   total heap usage: 2,195 allocs, 2,195 frees, 263,128 bytes allocated
==11808== 
==11808== All heap blocks were freed -- no leaks are possible
==11808== 
==11808== For counts of detected and suppressed errors, rerun with: -v
==11808== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==11810== Memcheck, a memory error detector
==11810== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11810== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==11810== Command: ./test -r xml "List::merge\ #2"
==11810== 
==11810== 
==11810== HEAP SUMMARY:
==11810==     in use at exit: 0 bytes in 0 blocks
==11810==   total heap usage: 2,225 allocs, 2,225 frees, 265,096 bytes allocated
==11810== 
==11810== All heap blocks were freed -- no leaks are possible
==11810== 
==11810== For counts of detected and suppressed errors, rerun with: -v
==11810== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==11813== Memcheck, a memory error detector
==11813== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11813== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==11813== Command: ./test -r xml "List::sort\ simple\ #3"
==11813== 
==11813== 
==11813== HEAP SUMMARY:
==11813==     in use at exit: 0 bytes in 0 blocks
==11813==   total heap usage: 2,186 allocs, 2,186 frees, 262,880 bytes allocated
==11813== 
==11813== All heap blocks were freed -- no leaks are possible
==11813== 
==11813== For counts of detected and suppressed errors, rerun with: -v
==11813== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==11831== Memcheck, a memory error detector
==11831== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11831== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==11831== Command: ./test -r xml "List::insert\ contents\ #2"
==11831== 
==11831== 
==11831== HEAP SUMMARY:
==11831==     in use at exit: 0 bytes in 0 blocks
==11831==   total heap usage: 2,339 allocs, 2,339 frees, 267,768 bytes allocated
==11831== 
==11831== All heap blocks were freed -- no leaks are possible
==11831== 
==11831== For counts of detected and suppressed errors, rerun with: -v
==11831== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==11833== Memcheck, a memory error detector
==11833== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11833== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==11833== Command: ./test -r xml "List::split\ edge\ cases"
==11833== 
==11833== 
==11833== HEAP SUMMARY:
==11833==     in use at exit: 0 bytes in 0 blocks
==11833==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==11833== 
==11833== All heap blocks were freed -- no leaks are possible
==11833== 
==11833== For counts of detected and suppressed errors, rerun with: -v
==11833== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==11836== Memcheck, a memory error detector
==11836== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11836== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==11836== Command: ./test -r xml "List::waterfall\ simple"
==11836== 
==11836== 
==11836== HEAP SUMMARY:
==11836==     in use at exit: 0 bytes in 0 blocks
==11836==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==11836== 
==11836== All heap blocks were freed -- no leaks are possible
==11836== 
==11836== For counts of detected and suppressed errors, rerun with: -v
==11836== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
