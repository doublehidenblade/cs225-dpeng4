


## Score: 50/50 (100.00%)


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


### ✓ - [10/10] - test_find

- **Points**: 10 / 10

```
==6591== Memcheck, a memory error detector
==6591== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==6591== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==6591== Command: ./test -r xml "test_find"
==6591== 
==6591== 
==6591== HEAP SUMMARY:
==6591==     in use at exit: 0 bytes in 0 blocks
==6591==   total heap usage: 1,667 allocs, 1,667 frees, 216,640 bytes allocated
==6591== 
==6591== All heap blocks were freed -- no leaks are possible
==6591== 
==6591== For counts of detected and suppressed errors, rerun with: -v
==6591== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_find" tags="[valgrind][weight=10]" filename="tests/tests.cpp" line="30">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="5" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="5" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - test_insert_small

- **Points**: 5 / 5





### ✓ - [10/10] - test_insert_find

- **Points**: 10 / 10





### ✓ - [10/10] - test_insert_big

- **Points**: 10 / 10

```
==6614== Memcheck, a memory error detector
==6614== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==6614== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==6614== Command: ./test -r xml "test_insert_big"
==6614== 
==6614== 
==6614== HEAP SUMMARY:
==6614==     in use at exit: 0 bytes in 0 blocks
==6614==   total heap usage: 1,693 allocs, 1,693 frees, 218,128 bytes allocated
==6614== 
==6614== All heap blocks were freed -- no leaks are possible
==6614== 
==6614== For counts of detected and suppressed errors, rerun with: -v
==6614== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_insert_big" tags="[valgrind][weight=10]" filename="tests/tests.cpp" line="76">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="3" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="3" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - test_remove_small

- **Points**: 5 / 5





### ✓ - [10/10] - test_remove_big

- **Points**: 10 / 10

```
==6637== Memcheck, a memory error detector
==6637== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==6637== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==6637== Command: ./test -r xml "test_remove_big"
==6637== 
==6637== 
==6637== HEAP SUMMARY:
==6637==     in use at exit: 0 bytes in 0 blocks
==6637==   total heap usage: 1,706 allocs, 1,706 frees, 219,624 bytes allocated
==6637== 
==6637== All heap blocks were freed -- no leaks are possible
==6637== 
==6637== For counts of detected and suppressed errors, rerun with: -v
==6637== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_remove_big" tags="[valgrind][weight=10]" filename="tests/tests.cpp" line="120">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="3" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="3" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **dpeng4** using **0affd035a72037edcefc6723dd44ba1d53895d56** (from **March 11th 2019, 12:15:00 am**)
