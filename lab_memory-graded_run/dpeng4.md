


## Score: 70/100 (70.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c letter.cpp -o .objs/letter.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c room.cpp -o .objs/room.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c allocator.cpp -o .objs/allocator.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c fileio.cpp -o .objs/fileio.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c tests/tests.cpp -o .objs/tests/tests.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/letter.o .objs/room.o .objs/allocator.o .objs/fileio.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -o test

```


### ✗ - [0/5] - Test the constructor (valgrind)

- **Points**: 0 / 5

```
==31075== Memcheck, a memory error detector
==31075== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==31075== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==31075== Command: ./test -r xml "Test\ the\ constructor\ (valgrind)"
==31075== 
==31075== 
==31075== HEAP SUMMARY:
==31075==     in use at exit: 2,592 bytes in 11 blocks
==31075==   total heap usage: 2,501 allocs, 2,490 frees, 280,552 bytes allocated
==31075== 
==31075== 208 bytes in 1 blocks are definitely lost in loss record 1 of 3
==31075==    at 0x4C29BC3: malloc (vg_replace_malloc.c:299)
==31075==    by 0x4ED2D29: operator new(unsigned long) (in /class/cs225/lm35/lib/libc++.so.1.0)
==31075==    by 0x40A2C5: Allocator::createLetterGroups() (allocator.cpp:25)
==31075==    by 0x40A273: Allocator::Allocator(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (allocator.cpp:16)
==31075==    by 0x44C32E: ____C_A_T_C_H____T_E_S_T____0() (tests.cpp:13)
==31075==    by 0x4813B2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==31075==    by 0x472526: Catch::TestCase::invoke() const (catch.hpp:10793)
==31075==    by 0x472458: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==31075==    by 0x46F0A6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==31075==    by 0x46D717: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==31075==    by 0x476351: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==31075==    by 0x474FEF: Catch::Session::runInternal() (catch.hpp:10149)
==31075== 
==31075== 2,384 (512 direct, 1,872 indirect) bytes in 1 blocks are definitely lost in loss record 3 of 3
==31075==    at 0x4C29BC3: malloc (vg_replace_malloc.c:299)
==31075==    by 0x4ED2D29: operator new(unsigned long) (in /class/cs225/lm35/lib/libc++.so.1.0)
==31075==    by 0x40A5D6: Allocator::loadRooms(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (allocator.cpp:49)
==31075==    by 0x40A28D: Allocator::Allocator(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (allocator.cpp:18)
==31075==    by 0x44C32E: ____C_A_T_C_H____T_E_S_T____0() (tests.cpp:13)
==31075==    by 0x4813B2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==31075==    by 0x472526: Catch::TestCase::invoke() const (catch.hpp:10793)
==31075==    by 0x472458: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==31075==    by 0x46F0A6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==31075==    by 0x46D717: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==31075==    by 0x476351: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==31075==    by 0x474FEF: Catch::Session::runInternal() (catch.hpp:10149)
==31075== 
==31075== LEAK SUMMARY:
==31075==    definitely lost: 720 bytes in 2 blocks
==31075==    indirectly lost: 1,872 bytes in 9 blocks
==31075==      possibly lost: 0 bytes in 0 blocks
==31075==    still reachable: 0 bytes in 0 blocks
==31075==         suppressed: 0 bytes in 0 blocks
==31075== 
==31075== For counts of detected and suppressed errors, rerun with: -v
==31075== ERROR SUMMARY: 2 errors from 2 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Test the constructor (valgrind)" tags="[valgrind][weight=5]" filename="tests/tests.cpp" line="10">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="0" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - Test allocate() (valgrind)

- **Points**: 0 / 5

```
==31077== Memcheck, a memory error detector
==31077== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==31077== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==31077== Command: ./test -r xml "Test\ allocate()\ (valgrind)"
==31077== 
==31077== 
==31077== HEAP SUMMARY:
==31077==     in use at exit: 2,592 bytes in 11 blocks
==31077==   total heap usage: 2,509 allocs, 2,498 frees, 279,016 bytes allocated
==31077== 
==31077== 208 bytes in 1 blocks are definitely lost in loss record 1 of 3
==31077==    at 0x4C29BC3: malloc (vg_replace_malloc.c:299)
==31077==    by 0x4ED2D29: operator new(unsigned long) (in /class/cs225/lm35/lib/libc++.so.1.0)
==31077==    by 0x40A2C5: Allocator::createLetterGroups() (allocator.cpp:25)
==31077==    by 0x40A273: Allocator::Allocator(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (allocator.cpp:16)
==31077==    by 0x44C48E: ____C_A_T_C_H____T_E_S_T____2() (tests.cpp:20)
==31077==    by 0x4813B2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==31077==    by 0x472526: Catch::TestCase::invoke() const (catch.hpp:10793)
==31077==    by 0x472458: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==31077==    by 0x46F0A6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==31077==    by 0x46D717: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==31077==    by 0x476351: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==31077==    by 0x474FEF: Catch::Session::runInternal() (catch.hpp:10149)
==31077== 
==31077== 2,384 (512 direct, 1,872 indirect) bytes in 1 blocks are definitely lost in loss record 3 of 3
==31077==    at 0x4C29BC3: malloc (vg_replace_malloc.c:299)
==31077==    by 0x4ED2D29: operator new(unsigned long) (in /class/cs225/lm35/lib/libc++.so.1.0)
==31077==    by 0x40A5D6: Allocator::loadRooms(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (allocator.cpp:49)
==31077==    by 0x40A28D: Allocator::Allocator(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (allocator.cpp:18)
==31077==    by 0x44C48E: ____C_A_T_C_H____T_E_S_T____2() (tests.cpp:20)
==31077==    by 0x4813B2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==31077==    by 0x472526: Catch::TestCase::invoke() const (catch.hpp:10793)
==31077==    by 0x472458: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==31077==    by 0x46F0A6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==31077==    by 0x46D717: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==31077==    by 0x476351: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==31077==    by 0x474FEF: Catch::Session::runInternal() (catch.hpp:10149)
==31077== 
==31077== LEAK SUMMARY:
==31077==    definitely lost: 720 bytes in 2 blocks
==31077==    indirectly lost: 1,872 bytes in 9 blocks
==31077==      possibly lost: 0 bytes in 0 blocks
==31077==    still reachable: 0 bytes in 0 blocks
==31077==         suppressed: 0 bytes in 0 blocks
==31077== 
==31077== For counts of detected and suppressed errors, rerun with: -v
==31077== ERROR SUMMARY: 2 errors from 2 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Test allocate() (valgrind)" tags="[valgrind][weight=5]" filename="tests/tests.cpp" line="17">
      <OverallResult success="true">
        <StdOut>
C
W
L
S
K
G
M
Z
B
W
L
K
S
B
G
M
Z
C
C
G
M
Z
B
S
K
K
solved
        </StdOut>
      </OverallResult>
    </TestCase>
    <OverallResults successes="0" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/20] - Test printRooms() (valgrind)

- **Points**: 0 / 20

```
==31108== Memcheck, a memory error detector
==31108== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==31108== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==31108== Command: ./test -r xml "Test\ printRooms()\ (valgrind)"
==31108== 
==31108== 
==31108== HEAP SUMMARY:
==31108==     in use at exit: 2,592 bytes in 11 blocks
==31108==   total heap usage: 2,513 allocs, 2,502 frees, 279,736 bytes allocated
==31108== 
==31108== 208 bytes in 1 blocks are definitely lost in loss record 1 of 3
==31108==    at 0x4C29BC3: malloc (vg_replace_malloc.c:299)
==31108==    by 0x4ED2D29: operator new(unsigned long) (in /class/cs225/lm35/lib/libc++.so.1.0)
==31108==    by 0x40A2C5: Allocator::createLetterGroups() (allocator.cpp:25)
==31108==    by 0x40A273: Allocator::Allocator(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (allocator.cpp:16)
==31108==    by 0x44C621: ____C_A_T_C_H____T_E_S_T____4() (tests.cpp:28)
==31108==    by 0x4813B2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==31108==    by 0x472526: Catch::TestCase::invoke() const (catch.hpp:10793)
==31108==    by 0x472458: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==31108==    by 0x46F0A6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==31108==    by 0x46D717: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==31108==    by 0x476351: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==31108==    by 0x474FEF: Catch::Session::runInternal() (catch.hpp:10149)
==31108== 
==31108== 2,384 (512 direct, 1,872 indirect) bytes in 1 blocks are definitely lost in loss record 3 of 3
==31108==    at 0x4C29BC3: malloc (vg_replace_malloc.c:299)
==31108==    by 0x4ED2D29: operator new(unsigned long) (in /class/cs225/lm35/lib/libc++.so.1.0)
==31108==    by 0x40A5D6: Allocator::loadRooms(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (allocator.cpp:49)
==31108==    by 0x40A28D: Allocator::Allocator(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (allocator.cpp:18)
==31108==    by 0x44C621: ____C_A_T_C_H____T_E_S_T____4() (tests.cpp:28)
==31108==    by 0x4813B2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==31108==    by 0x472526: Catch::TestCase::invoke() const (catch.hpp:10793)
==31108==    by 0x472458: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==31108==    by 0x46F0A6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==31108==    by 0x46D717: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==31108==    by 0x476351: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==31108==    by 0x474FEF: Catch::Session::runInternal() (catch.hpp:10149)
==31108== 
==31108== LEAK SUMMARY:
==31108==    definitely lost: 720 bytes in 2 blocks
==31108==    indirectly lost: 1,872 bytes in 9 blocks
==31108==      possibly lost: 0 bytes in 0 blocks
==31108==    still reachable: 0 bytes in 0 blocks
==31108==         suppressed: 0 bytes in 0 blocks
==31108== 
==31108== For counts of detected and suppressed errors, rerun with: -v
==31108== ERROR SUMMARY: 2 errors from 2 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Test printRooms() (valgrind)" tags="[valgrind][weight=20]" filename="tests/tests.cpp" line="25">
      <OverallResult success="true">
        <StdOut>
C
W
L
S
K
G
M
Z
B
W
L
K
S
B
G
M
Z
C
C
G
M
Z
B
S
K
K
solved
        </StdOut>
      </OverallResult>
    </TestCase>
    <OverallResults successes="0" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [30/30] - Test printRooms() for overall output

- **Points**: 30 / 30





### ✓ - [40/40] - Test printRooms() for individual output

- **Points**: 40 / 40





---

This report was generated for **dpeng4** using **2beac6c793655312e1a7cee5704628dd44183f47** (from **February 4th 2019, 12:15:00 am**)
