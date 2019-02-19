


## Score: 14/14 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c exercises.cpp -o .objs/exercises.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c tests/basic.cpp -o .objs/tests/basic.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/exercises.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/basic.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -o test

```


### ✓ - [1/1] - sumDigits

- **Points**: 1 / 1

```
==1748== Memcheck, a memory error detector
==1748== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1748== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==1748== Command: ./test -r xml "sumDigits"
==1748== 
==1748== 
==1748== HEAP SUMMARY:
==1748==     in use at exit: 0 bytes in 0 blocks
==1748==   total heap usage: 1,714 allocs, 1,714 frees, 219,888 bytes allocated
==1748== 
==1748== All heap blocks were freed -- no leaks are possible
==1748== 
==1748== For counts of detected and suppressed errors, rerun with: -v
==1748== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="sumDigits" tags="[valgrind][weight=1]" filename="tests/basic.cpp" line="26">
      <Section name="Base cases work" filename="tests/basic.cpp" line="27">
        <OverallResults successes="2" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Multiple digits sum correctly" filename="tests/basic.cpp" line="31">
        <OverallResults successes="2" failures="0" expectedFailures="0"/>
      </Section>
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="4" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - triangle

- **Points**: 1 / 1

```
==1753== Memcheck, a memory error detector
==1753== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1753== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==1753== Command: ./test -r xml "triangle"
==1753== 
==1753== 
==1753== HEAP SUMMARY:
==1753==     in use at exit: 0 bytes in 0 blocks
==1753==   total heap usage: 1,700 allocs, 1,700 frees, 219,440 bytes allocated
==1753== 
==1753== All heap blocks were freed -- no leaks are possible
==1753== 
==1753== For counts of detected and suppressed errors, rerun with: -v
==1753== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="triangle" tags="[valgrind][weight=1]" filename="tests/basic.cpp" line="37">
      <Section name="Base cases work" filename="tests/basic.cpp" line="38">
        <OverallResults successes="1" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Recursive cases work" filename="tests/basic.cpp" line="41">
        <OverallResults successes="3" failures="0" expectedFailures="0"/>
      </Section>
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="4" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [3/3] - sum

- **Points**: 3 / 3

```
==1756== Memcheck, a memory error detector
==1756== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1756== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==1756== Command: ./test -r xml "sum"
==1756== 
==1756== 
==1756== HEAP SUMMARY:
==1756==     in use at exit: 0 bytes in 0 blocks
==1756==   total heap usage: 1,783 allocs, 1,783 frees, 328,016 bytes allocated
==1756== 
==1756== All heap blocks were freed -- no leaks are possible
==1756== 
==1756== For counts of detected and suppressed errors, rerun with: -v
==1756== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="sum" tags="[valgrind][weight=3]" filename="tests/basic.cpp" line="48">
      <Section name="Sum is correct" filename="tests/basic.cpp" line="53">
        <OverallResults successes="1" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Stack is unchanged" filename="tests/basic.cpp" line="56">
        <OverallResults successes="1" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Float sum is correct" filename="tests/basic.cpp" line="69">
        <OverallResults successes="0" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Stack is unchanged" filename="tests/basic.cpp" line="74">
        <OverallResults successes="1" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Did not make any additional stack objects" filename="tests/basic.cpp" line="77">
        <OverallResults successes="1" failures="0" expectedFailures="0"/>
      </Section>
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="4" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [3/3] - isBalanced

- **Points**: 3 / 3

```
==1761== Memcheck, a memory error detector
==1761== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1761== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==1761== Command: ./test -r xml "isBalanced"
==1761== 
==1761== 
==1761== HEAP SUMMARY:
==1761==     in use at exit: 0 bytes in 0 blocks
==1761==   total heap usage: 1,763 allocs, 1,763 frees, 315,264 bytes allocated
==1761== 
==1761== All heap blocks were freed -- no leaks are possible
==1761== 
==1761== For counts of detected and suppressed errors, rerun with: -v
==1761== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="isBalanced" tags="[valgrind][weight=3]" filename="tests/basic.cpp" line="82">
      <Section name="balanced" filename="tests/basic.cpp" line="85">
        <OverallResults successes="6" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="unbalanced" filename="tests/basic.cpp" line="101">
        <OverallResults successes="6" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Only used 1 stack" filename="tests/basic.cpp" line="117">
        <OverallResults successes="2" failures="0" expectedFailures="0"/>
      </Section>
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="14" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="14" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [3/3] - scramble 17

- **Points**: 3 / 3

```
==1765== Memcheck, a memory error detector
==1765== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1765== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==1765== Command: ./test -r xml "scramble\ 17"
==1765== 
==1765== 
==1765== HEAP SUMMARY:
==1765==     in use at exit: 0 bytes in 0 blocks
==1765==   total heap usage: 1,712 allocs, 1,712 frees, 232,360 bytes allocated
==1765== 
==1765== All heap blocks were freed -- no leaks are possible
==1765== 
==1765== For counts of detected and suppressed errors, rerun with: -v
==1765== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="scramble 17" tags="[valgrind][weight=3]" filename="tests/basic.cpp" line="130">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="0" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [3/3] - scramble 9

- **Points**: 3 / 3

```
==1769== Memcheck, a memory error detector
==1769== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1769== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==1769== Command: ./test -r xml "scramble\ 9"
==1769== 
==1769== 
==1769== HEAP SUMMARY:
==1769==     in use at exit: 0 bytes in 0 blocks
==1769==   total heap usage: 1,707 allocs, 1,707 frees, 231,688 bytes allocated
==1769== 
==1769== All heap blocks were freed -- no leaks are possible
==1769== 
==1769== For counts of detected and suppressed errors, rerun with: -v
==1769== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="scramble 9" tags="[valgrind][weight=3]" filename="tests/basic.cpp" line="158">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="0" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/0] - verifySame (EXTRA CREDIT)

- **Points**: 0 / 0


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="verifySame (EXTRA CREDIT)" tags="[extraCredit=1][valgrind][weight=0]" filename="tests/basic.cpp" line="186">
      <Section name="Result for different stack and queue is different" filename="tests/basic.cpp" line="187">
        <Expression success="false" type="REQUIRE" filename="tests/basic.cpp" line="206">
          <Original>
            verifySame(s, q)== false
          </Original>
          <Expanded>
            true == false
          </Expanded>
        </Expression>
        <OverallResults successes="0" failures="1" expectedFailures="0"/>
      </Section>
      <Section name="Result for same stack and queue is same" filename="tests/basic.cpp" line="224">
        <OverallResults successes="1" failures="0" expectedFailures="0"/>
      </Section>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="1" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="1" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **dpeng4** using **bae76e13a71246763550cd6129c5420f3e930541** (from **February 18th 2019, 12:15:00 am**)
