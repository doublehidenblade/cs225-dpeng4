


## Score: 20/20 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c coloredout.cpp -o .objs/coloredout.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c tests/tests.cpp -o .objs/tests/tests.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/coloredout.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -o test

```


### ✓ - [1/1] - test_heapify_down_1

- **Points**: 1 / 1

```
==21562== Memcheck, a memory error detector
==21562== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==21562== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==21562== Command: ./test -r xml "test_heapify_down_1"
==21562== 
==21562== 
==21562== HEAP SUMMARY:
==21562==     in use at exit: 0 bytes in 0 blocks
==21562==   total heap usage: 1,868 allocs, 1,868 frees, 236,956 bytes allocated
==21562== 
==21562== All heap blocks were freed -- no leaks are possible
==21562== 
==21562== For counts of detected and suppressed errors, rerun with: -v
==21562== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_1" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="67">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="3" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="3" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_2

- **Points**: 1 / 1

```
==21565== Memcheck, a memory error detector
==21565== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==21565== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==21565== Command: ./test -r xml "test_heapify_down_2"
==21565== 
==21565== 
==21565== HEAP SUMMARY:
==21565==     in use at exit: 0 bytes in 0 blocks
==21565==   total heap usage: 1,869 allocs, 1,869 frees, 237,012 bytes allocated
==21565== 
==21565== All heap blocks were freed -- no leaks are possible
==21565== 
==21565== For counts of detected and suppressed errors, rerun with: -v
==21565== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_2" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="73">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="6" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="6" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_3

- **Points**: 1 / 1

```
==21568== Memcheck, a memory error detector
==21568== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==21568== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==21568== Command: ./test -r xml "test_heapify_down_3"
==21568== 
==21568== 
==21568== HEAP SUMMARY:
==21568==     in use at exit: 0 bytes in 0 blocks
==21568==   total heap usage: 1,870 allocs, 1,870 frees, 237,116 bytes allocated
==21568== 
==21568== All heap blocks were freed -- no leaks are possible
==21568== 
==21568== For counts of detected and suppressed errors, rerun with: -v
==21568== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_3" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="79">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="11" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="11" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_4

- **Points**: 1 / 1

```
==21576== Memcheck, a memory error detector
==21576== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==21576== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==21576== Command: ./test -r xml "test_heapify_down_4"
==21576== 
==21576== 
==21576== HEAP SUMMARY:
==21576==     in use at exit: 0 bytes in 0 blocks
==21576==   total heap usage: 1,870 allocs, 1,870 frees, 237,148 bytes allocated
==21576== 
==21576== All heap blocks were freed -- no leaks are possible
==21576== 
==21576== For counts of detected and suppressed errors, rerun with: -v
==21576== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_4" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="85">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="15" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="15" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_5

- **Points**: 1 / 1

```
==21580== Memcheck, a memory error detector
==21580== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==21580== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==21580== Command: ./test -r xml "test_heapify_down_5"
==21580== 
==21580== 
==21580== HEAP SUMMARY:
==21580==     in use at exit: 0 bytes in 0 blocks
==21580==   total heap usage: 1,873 allocs, 1,873 frees, 238,452 bytes allocated
==21580== 
==21580== All heap blocks were freed -- no leaks are possible
==21580== 
==21580== For counts of detected and suppressed errors, rerun with: -v
==21580== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_5" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="91">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="66" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="66" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_6

- **Points**: 1 / 1

```
==21583== Memcheck, a memory error detector
==21583== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==21583== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==21583== Command: ./test -r xml "test_heapify_down_6"
==21583== 
==21583== 
==21583== HEAP SUMMARY:
==21583==     in use at exit: 0 bytes in 0 blocks
==21583==   total heap usage: 1,869 allocs, 1,869 frees, 237,456 bytes allocated
==21583== 
==21583== All heap blocks were freed -- no leaks are possible
==21583== 
==21583== For counts of detected and suppressed errors, rerun with: -v
==21583== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_6" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="100">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="4" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_7

- **Points**: 1 / 1

```
==21586== Memcheck, a memory error detector
==21586== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==21586== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==21586== Command: ./test -r xml "test_heapify_down_7"
==21586== 
==21586== 
==21586== HEAP SUMMARY:
==21586==     in use at exit: 0 bytes in 0 blocks
==21586==   total heap usage: 1,870 allocs, 1,870 frees, 238,128 bytes allocated
==21586== 
==21586== All heap blocks were freed -- no leaks are possible
==21586== 
==21586== For counts of detected and suppressed errors, rerun with: -v
==21586== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_7" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="106">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="10" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="10" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_8

- **Points**: 1 / 1

```
==21593== Memcheck, a memory error detector
==21593== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==21593== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==21593== Command: ./test -r xml "test_heapify_down_8"
==21593== 
==21593== 
==21593== HEAP SUMMARY:
==21593==     in use at exit: 0 bytes in 0 blocks
==21593==   total heap usage: 1,870 allocs, 1,870 frees, 238,368 bytes allocated
==21593== 
==21593== All heap blocks were freed -- no leaks are possible
==21593== 
==21593== For counts of detected and suppressed errors, rerun with: -v
==21593== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_8" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="112">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="15" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="15" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_9

- **Points**: 1 / 1

```
==21598== Memcheck, a memory error detector
==21598== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==21598== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==21598== Command: ./test -r xml "test_heapify_down_9"
==21598== 
==21598== 
==21598== HEAP SUMMARY:
==21598==     in use at exit: 0 bytes in 0 blocks
==21598==   total heap usage: 1,871 allocs, 1,871 frees, 239,424 bytes allocated
==21598== 
==21598== All heap blocks were freed -- no leaks are possible
==21598== 
==21598== For counts of detected and suppressed errors, rerun with: -v
==21598== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_9" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="118">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="21" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="21" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_10

- **Points**: 1 / 1

```
==21601== Memcheck, a memory error detector
==21601== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==21601== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==21601== Command: ./test -r xml "test_heapify_down_10"
==21601== 
==21601== 
==21601== HEAP SUMMARY:
==21601==     in use at exit: 0 bytes in 0 blocks
==21601==   total heap usage: 1,871 allocs, 1,871 frees, 239,856 bytes allocated
==21601== 
==21601== All heap blocks were freed -- no leaks are possible
==21601== 
==21601== For counts of detected and suppressed errors, rerun with: -v
==21601== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_10" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="124">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="30" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="30" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_build_heap_1

- **Points**: 1 / 1

```
==21604== Memcheck, a memory error detector
==21604== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==21604== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==21604== Command: ./test -r xml "test_build_heap_1"
==21604== 
==21604== 
==21604== HEAP SUMMARY:
==21604==     in use at exit: 0 bytes in 0 blocks
==21604==   total heap usage: 1,871 allocs, 1,871 frees, 236,984 bytes allocated
==21604== 
==21604== All heap blocks were freed -- no leaks are possible
==21604== 
==21604== For counts of detected and suppressed errors, rerun with: -v
==21604== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_build_heap_1" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="130">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_build_heap_2

- **Points**: 1 / 1

```
==21611== Memcheck, a memory error detector
==21611== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==21611== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==21611== Command: ./test -r xml "test_build_heap_2"
==21611== 
==21611== 
==21611== HEAP SUMMARY:
==21611==     in use at exit: 0 bytes in 0 blocks
==21611==   total heap usage: 1,874 allocs, 1,874 frees, 237,096 bytes allocated
==21611== 
==21611== All heap blocks were freed -- no leaks are possible
==21611== 
==21611== For counts of detected and suppressed errors, rerun with: -v
==21611== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_build_heap_2" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="141">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_build_heap_3

- **Points**: 1 / 1

```
==21615== Memcheck, a memory error detector
==21615== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==21615== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==21615== Command: ./test -r xml "test_build_heap_3"
==21615== 
==21615== 
==21615== HEAP SUMMARY:
==21615==     in use at exit: 0 bytes in 0 blocks
==21615==   total heap usage: 1,876 allocs, 1,876 frees, 237,308 bytes allocated
==21615== 
==21615== All heap blocks were freed -- no leaks are possible
==21615== 
==21615== For counts of detected and suppressed errors, rerun with: -v
==21615== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_build_heap_3" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="153">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_build_heap_4

- **Points**: 1 / 1

```
==21618== Memcheck, a memory error detector
==21618== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==21618== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==21618== Command: ./test -r xml "test_build_heap_4"
==21618== 
==21618== 
==21618== HEAP SUMMARY:
==21618==     in use at exit: 0 bytes in 0 blocks
==21618==   total heap usage: 1,878 allocs, 1,878 frees, 237,612 bytes allocated
==21618== 
==21618== All heap blocks were freed -- no leaks are possible
==21618== 
==21618== For counts of detected and suppressed errors, rerun with: -v
==21618== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_build_heap_4" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="165">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_build_heap_5

- **Points**: 1 / 1

```
==21625== Memcheck, a memory error detector
==21625== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==21625== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==21625== Command: ./test -r xml "test_build_heap_5"
==21625== 
==21625== 
==21625== HEAP SUMMARY:
==21625==     in use at exit: 0 bytes in 0 blocks
==21625==   total heap usage: 1,882 allocs, 1,882 frees, 239,736 bytes allocated
==21625== 
==21625== All heap blocks were freed -- no leaks are possible
==21625== 
==21625== For counts of detected and suppressed errors, rerun with: -v
==21625== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_build_heap_5" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="177">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_update_elem_1

- **Points**: 1 / 1

```
==21629== Memcheck, a memory error detector
==21629== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==21629== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==21629== Command: ./test -r xml "test_update_elem_1"
==21629== 
==21629== 
==21629== HEAP SUMMARY:
==21629==     in use at exit: 0 bytes in 0 blocks
==21629==   total heap usage: 1,869 allocs, 1,869 frees, 236,968 bytes allocated
==21629== 
==21629== All heap blocks were freed -- no leaks are possible
==21629== 
==21629== For counts of detected and suppressed errors, rerun with: -v
==21629== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_update_elem_1" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="192">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="3" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="3" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_update_elem_2

- **Points**: 1 / 1

```
==21632== Memcheck, a memory error detector
==21632== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==21632== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==21632== Command: ./test -r xml "test_update_elem_2"
==21632== 
==21632== 
==21632== HEAP SUMMARY:
==21632==     in use at exit: 0 bytes in 0 blocks
==21632==   total heap usage: 1,870 allocs, 1,870 frees, 237,036 bytes allocated
==21632== 
==21632== All heap blocks were freed -- no leaks are possible
==21632== 
==21632== For counts of detected and suppressed errors, rerun with: -v
==21632== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_update_elem_2" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="198">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="6" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="6" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_update_elem_3

- **Points**: 1 / 1

```
==21635== Memcheck, a memory error detector
==21635== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==21635== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==21635== Command: ./test -r xml "test_update_elem_3"
==21635== 
==21635== 
==21635== HEAP SUMMARY:
==21635==     in use at exit: 0 bytes in 0 blocks
==21635==   total heap usage: 1,871 allocs, 1,871 frees, 237,160 bytes allocated
==21635== 
==21635== All heap blocks were freed -- no leaks are possible
==21635== 
==21635== For counts of detected and suppressed errors, rerun with: -v
==21635== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_update_elem_3" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="204">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="11" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="11" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_update_elem_4

- **Points**: 1 / 1

```
==21638== Memcheck, a memory error detector
==21638== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==21638== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==21638== Command: ./test -r xml "test_update_elem_4"
==21638== 
==21638== 
==21638== HEAP SUMMARY:
==21638==     in use at exit: 0 bytes in 0 blocks
==21638==   total heap usage: 1,871 allocs, 1,871 frees, 237,208 bytes allocated
==21638== 
==21638== All heap blocks were freed -- no leaks are possible
==21638== 
==21638== For counts of detected and suppressed errors, rerun with: -v
==21638== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_update_elem_4" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="210">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="15" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="15" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_update_elem_5

- **Points**: 1 / 1

```
==21645== Memcheck, a memory error detector
==21645== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==21645== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==21645== Command: ./test -r xml "test_update_elem_5"
==21645== 
==21645== 
==21645== HEAP SUMMARY:
==21645==     in use at exit: 0 bytes in 0 blocks
==21645==   total heap usage: 1,874 allocs, 1,874 frees, 238,716 bytes allocated
==21645== 
==21645== All heap blocks were freed -- no leaks are possible
==21645== 
==21645== For counts of detected and suppressed errors, rerun with: -v
==21645== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_update_elem_5" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="216">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="66" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="66" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **dpeng4** using **512dead6a11736d9b311dffa58eb692be858506f** (from **April 8th 2019, 12:15:00 am**)
