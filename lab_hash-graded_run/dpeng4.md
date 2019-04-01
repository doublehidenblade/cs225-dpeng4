


## Score: 72/150 (48.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c hashes.cpp -o .objs/hashes.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c textfile.cpp -o .objs/textfile.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c tests/tests-dh.cpp -o .objs/tests/tests-dh.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c tests/tests-sc.cpp -o .objs/tests/tests-sc.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c tests/tests-lp.cpp -o .objs/tests/tests-lp.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/hashes.o .objs/textfile.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests-dh.o .objs/tests/tests-sc.o .objs/tests/tests-lp.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -o test

```


### ✗ - [0/6] - DH::testRemoveEASY

- **Points**: 0 / 6


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testRemoveEASY" tags="[valgrind][weight=6]" filename="tests/tests-dh.cpp" line="12">
      <Expression success="false" filename="tests/tests-dh.cpp" line="30">
        <Original>
          {Unknown expression after the reported line}
        </Original>
        <Expanded>
          {Unknown expression after the reported line}
        </Expanded>
        <FatalErrorCondition filename="tests/tests-dh.cpp" line="30">
          SIGABRT - Abort (abnormal termination) signal
        </FatalErrorCondition>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="1" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/10] - DH::testRemoveHard

- **Points**: 0 / 10


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testRemoveHard" tags="[valgrind][weight=10]" filename="tests/tests-dh.cpp" line="33">
      <Expression success="false" filename="tests/tests-dh.cpp" line="58">
        <Original>
          {Unknown expression after the reported line}
        </Original>
        <Expanded>
          {Unknown expression after the reported line}
        </Expanded>
        <FatalErrorCondition filename="tests/tests-dh.cpp" line="58">
          SIGABRT - Abort (abnormal termination) signal
        </FatalErrorCondition>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="1" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="1" expectedFailures="0"/>
</Catch>

```


### ✓ - [7/7] - DH::testResizeOnce

- **Points**: 7 / 7

```
==9548== Memcheck, a memory error detector
==9548== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9548== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==9548== Command: ./test -r xml "DH::testResizeOnce"
==9548== 
==9548== 
==9548== HEAP SUMMARY:
==9548==     in use at exit: 0 bytes in 0 blocks
==9548==   total heap usage: 1,974 allocs, 1,974 frees, 245,197 bytes allocated
==9548== 
==9548== All heap blocks were freed -- no leaks are possible
==9548== 
==9548== For counts of detected and suppressed errors, rerun with: -v
==9548== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testResizeOnce" tags="[valgrind][weight=7]" filename="tests/tests-dh.cpp" line="61">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [11/11] - DH::testResizeAll

- **Points**: 11 / 11

```
==9554== Memcheck, a memory error detector
==9554== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9554== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==9554== Command: ./test -r xml "DH::testResizeAll"
==9554== 
==9554== 
==9554== HEAP SUMMARY:
==9554==     in use at exit: 0 bytes in 0 blocks
==9554==   total heap usage: 1,873 allocs, 1,873 frees, 238,685 bytes allocated
==9554== 
==9554== All heap blocks were freed -- no leaks are possible
==9554== 
==9554== For counts of detected and suppressed errors, rerun with: -v
==9554== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testResizeAll" tags="[valgrind][weight=11]" filename="tests/tests-dh.cpp" line="82">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - DH::testInsertEasy

- **Points**: 6 / 6

```
==9560== Memcheck, a memory error detector
==9560== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9560== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==9560== Command: ./test -r xml "DH::testInsertEasy"
==9560== 
==9560== 
==9560== HEAP SUMMARY:
==9560==     in use at exit: 0 bytes in 0 blocks
==9560==   total heap usage: 1,855 allocs, 1,855 frees, 240,653 bytes allocated
==9560== 
==9560== All heap blocks were freed -- no leaks are possible
==9560== 
==9560== For counts of detected and suppressed errors, rerun with: -v
==9560== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testInsertEasy" tags="[valgrind][weight=6]" filename="tests/tests-dh.cpp" line="108">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/10] - DH::testInsertHard

- **Points**: 0 / 10


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testInsertHard" tags="[valgrind][weight=10]" filename="tests/tests-dh.cpp" line="128">
      <Expression success="false" filename="tests/tests-dh.cpp" line="146">
        <Original>
          {Unknown expression after the reported line}
        </Original>
        <Expanded>
          {Unknown expression after the reported line}
        </Expanded>
        <FatalErrorCondition filename="tests/tests-dh.cpp" line="146">
          SIGABRT - Abort (abnormal termination) signal
        </FatalErrorCondition>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="1" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/6] - SC::testRemoveEASY

- **Points**: 0 / 6

```
==9563== Memcheck, a memory error detector
==9563== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9563== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==9563== Command: ./test -r xml "SC::testRemoveEASY"
==9563== 
==9563== Invalid read of size 8
==9563==    at 0x43C8A3: operator++ (list:338)
==9563==    by 0x43C8A3: operator++ (list:342)
==9563==    by 0x43C8A3: SCHashTable<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>::remove(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (schashtable.cpp:83)
==9563==    by 0x4368E1: ____C_A_T_C_H____T_E_S_T____0() (tests-sc.cpp:23)
==9563==    by 0x476492: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==9563==    by 0x467606: Catch::TestCase::invoke() const (catch.hpp:10793)
==9563==    by 0x467538: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==9563==    by 0x464186: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==9563==    by 0x4627F7: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==9563==    by 0x46B431: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==9563==    by 0x46A0CF: Catch::Session::runInternal() (catch.hpp:10149)
==9563==    by 0x469D8E: Catch::Session::run() (catch.hpp:10106)
==9563==    by 0x469D0C: Catch::Session::run(int, char**) (catch.hpp:10074)
==9563==    by 0x495351: main (catch.hpp:13613)
==9563==  Address 0x60b0058 is 8 bytes inside a block of size 48 free'd
==9563==    at 0x4C2ACBD: free (vg_replace_malloc.c:530)
==9563==    by 0x43F907: __deallocate (new:164)
==9563==    by 0x43F907: deallocate (memory:1636)
==9563==    by 0x43F907: deallocate (memory:1447)
==9563==    by 0x43F907: std::__1::list<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::erase(std::__1::__list_const_iterator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, void*>) (list:1723)
==9563==    by 0x43C84B: SCHashTable<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>::remove(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (schashtable.cpp:80)
==9563==    by 0x4368E1: ____C_A_T_C_H____T_E_S_T____0() (tests-sc.cpp:23)
==9563==    by 0x476492: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==9563==    by 0x467606: Catch::TestCase::invoke() const (catch.hpp:10793)
==9563==    by 0x467538: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==9563==    by 0x464186: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==9563==    by 0x4627F7: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==9563==    by 0x46B431: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==9563==    by 0x46A0CF: Catch::Session::runInternal() (catch.hpp:10149)
==9563==    by 0x469D8E: Catch::Session::run() (catch.hpp:10106)
==9563==  Block was alloc'd at
==9563==    at 0x4C29BC3: malloc (vg_replace_malloc.c:299)
==9563==    by 0x4ED2D29: operator new(unsigned long) (in /class/cs225/lm35/lib/libc++.so.1.0)
==9563==    by 0x43E76F: __allocate (new:156)
==9563==    by 0x43E76F: allocate (memory:1634)
==9563==    by 0x43E76F: allocate (memory:1439)
==9563==    by 0x43E76F: std::__1::list<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::push_front(std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> const&) (list:1503)
==9563==    by 0x43C99F: SCHashTable<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>::insert(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int const&) (schashtable.cpp:61)
==9563==    by 0x4363F7: ____C_A_T_C_H____T_E_S_T____0() (tests-sc.cpp:18)
==9563==    by 0x476492: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==9563==    by 0x467606: Catch::TestCase::invoke() const (catch.hpp:10793)
==9563==    by 0x467538: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==9563==    by 0x464186: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==9563==    by 0x4627F7: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==9563==    by 0x46B431: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==9563==    by 0x46A0CF: Catch::Session::runInternal() (catch.hpp:10149)
==9563== 
==9563== Invalid read of size 8
==9563==    at 0x43C8A3: operator++ (list:338)
==9563==    by 0x43C8A3: operator++ (list:342)
==9563==    by 0x43C8A3: SCHashTable<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>::remove(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (schashtable.cpp:83)
==9563==    by 0x436C7E: ____C_A_T_C_H____T_E_S_T____0() (tests-sc.cpp:26)
==9563==    by 0x476492: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==9563==    by 0x467606: Catch::TestCase::invoke() const (catch.hpp:10793)
==9563==    by 0x467538: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==9563==    by 0x464186: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==9563==    by 0x4627F7: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==9563==    by 0x46B431: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==9563==    by 0x46A0CF: Catch::Session::runInternal() (catch.hpp:10149)
==9563==    by 0x469D8E: Catch::Session::run() (catch.hpp:10106)
==9563==    by 0x469D0C: Catch::Session::run(int, char**) (catch.hpp:10074)
==9563==    by 0x495351: main (catch.hpp:13613)
==9563==  Address 0x60b02b8 is 8 bytes inside a block of size 48 free'd
==9563==    at 0x4C2ACBD: free (vg_replace_malloc.c:530)
==9563==    by 0x43F907: __deallocate (new:164)
==9563==    by 0x43F907: deallocate (memory:1636)
==9563==    by 0x43F907: deallocate (memory:1447)
==9563==    by 0x43F907: std::__1::list<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::erase(std::__1::__list_const_iterator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, void*>) (list:1723)
==9563==    by 0x43C84B: SCHashTable<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>::remove(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (schashtable.cpp:80)
==9563==    by 0x436C7E: ____C_A_T_C_H____T_E_S_T____0() (tests-sc.cpp:26)
==9563==    by 0x476492: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==9563==    by 0x467606: Catch::TestCase::invoke() const (catch.hpp:10793)
==9563==    by 0x467538: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==9563==    by 0x464186: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==9563==    by 0x4627F7: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==9563==    by 0x46B431: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==9563==    by 0x46A0CF: Catch::Session::runInternal() (catch.hpp:10149)
==9563==    by 0x469D8E: Catch::Session::run() (catch.hpp:10106)
==9563==  Block was alloc'd at
==9563==    at 0x4C29BC3: malloc (vg_replace_malloc.c:299)
==9563==    by 0x4ED2D29: operator new(unsigned long) (in /class/cs225/lm35/lib/libc++.so.1.0)
==9563==    by 0x43E76F: __allocate (new:156)
==9563==    by 0x43E76F: allocate (memory:1634)
==9563==    by 0x43E76F: allocate (memory:1439)
==9563==    by 0x43E76F: std::__1::list<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::push_front(std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> const&) (list:1503)
==9563==    by 0x43C99F: SCHashTable<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>::insert(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int const&) (schashtable.cpp:61)
==9563==    by 0x4363F7: ____C_A_T_C_H____T_E_S_T____0() (tests-sc.cpp:18)
==9563==    by 0x476492: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==9563==    by 0x467606: Catch::TestCase::invoke() const (catch.hpp:10793)
==9563==    by 0x467538: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==9563==    by 0x464186: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1
```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testRemoveEASY" tags="[valgrind][weight=6]" filename="tests/tests-sc.cpp" line="12">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/10] - SC::testRemoveHard

- **Points**: 0 / 10

```
==9565== Memcheck, a memory error detector
==9565== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9565== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==9565== Command: ./test -r xml "SC::testRemoveHard"
==9565== 
==9565== Invalid read of size 8
==9565==    at 0x43C8A3: operator++ (list:338)
==9565==    by 0x43C8A3: operator++ (list:342)
==9565==    by 0x43C8A3: SCHashTable<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>::remove(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (schashtable.cpp:83)
==9565==    by 0x437307: ____C_A_T_C_H____T_E_S_T____2() (tests-sc.cpp:40)
==9565==    by 0x476492: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==9565==    by 0x467606: Catch::TestCase::invoke() const (catch.hpp:10793)
==9565==    by 0x467538: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==9565==    by 0x464186: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==9565==    by 0x4627F7: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==9565==    by 0x46B431: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==9565==    by 0x46A0CF: Catch::Session::runInternal() (catch.hpp:10149)
==9565==    by 0x469D8E: Catch::Session::run() (catch.hpp:10106)
==9565==    by 0x469D0C: Catch::Session::run(int, char**) (catch.hpp:10074)
==9565==    by 0x495351: main (catch.hpp:13613)
==9565==  Address 0x60b0648 is 8 bytes inside a block of size 48 free'd
==9565==    at 0x4C2ACBD: free (vg_replace_malloc.c:530)
==9565==    by 0x43F907: __deallocate (new:164)
==9565==    by 0x43F907: deallocate (memory:1636)
==9565==    by 0x43F907: deallocate (memory:1447)
==9565==    by 0x43F907: std::__1::list<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::erase(std::__1::__list_const_iterator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, void*>) (list:1723)
==9565==    by 0x43C84B: SCHashTable<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>::remove(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (schashtable.cpp:80)
==9565==    by 0x437307: ____C_A_T_C_H____T_E_S_T____2() (tests-sc.cpp:40)
==9565==    by 0x476492: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==9565==    by 0x467606: Catch::TestCase::invoke() const (catch.hpp:10793)
==9565==    by 0x467538: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==9565==    by 0x464186: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==9565==    by 0x4627F7: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==9565==    by 0x46B431: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==9565==    by 0x46A0CF: Catch::Session::runInternal() (catch.hpp:10149)
==9565==    by 0x469D8E: Catch::Session::run() (catch.hpp:10106)
==9565==  Block was alloc'd at
==9565==    at 0x4C29BC3: malloc (vg_replace_malloc.c:299)
==9565==    by 0x4ED2D29: operator new(unsigned long) (in /class/cs225/lm35/lib/libc++.so.1.0)
==9565==    by 0x43E76F: __allocate (new:156)
==9565==    by 0x43E76F: allocate (memory:1634)
==9565==    by 0x43E76F: allocate (memory:1439)
==9565==    by 0x43E76F: std::__1::list<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::push_front(std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> const&) (list:1503)
==9565==    by 0x43C99F: SCHashTable<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>::insert(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int const&) (schashtable.cpp:61)
==9565==    by 0x437619: ____C_A_T_C_H____T_E_S_T____2() (tests-sc.cpp:46)
==9565==    by 0x476492: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==9565==    by 0x467606: Catch::TestCase::invoke() const (catch.hpp:10793)
==9565==    by 0x467538: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==9565==    by 0x464186: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==9565==    by 0x4627F7: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==9565==    by 0x46B431: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==9565==    by 0x46A0CF: Catch::Session::runInternal() (catch.hpp:10149)
==9565== 
==9565== Invalid read of size 8
==9565==    at 0x43C8A3: operator++ (list:338)
==9565==    by 0x43C8A3: operator++ (list:342)
==9565==    by 0x43C8A3: SCHashTable<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>::remove(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (schashtable.cpp:83)
==9565==    by 0x437AB1: ____C_A_T_C_H____T_E_S_T____2() (tests-sc.cpp:51)
==9565==    by 0x476492: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==9565==    by 0x467606: Catch::TestCase::invoke() const (catch.hpp:10793)
==9565==    by 0x467538: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==9565==    by 0x464186: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==9565==    by 0x4627F7: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==9565==    by 0x46B431: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==9565==    by 0x46A0CF: Catch::Session::runInternal() (catch.hpp:10149)
==9565==    by 0x469D8E: Catch::Session::run() (catch.hpp:10106)
==9565==    by 0x469D0C: Catch::Session::run(int, char**) (catch.hpp:10074)
==9565==    by 0x495351: main (catch.hpp:13613)
==9565==  Address 0x60b0fc8 is 8 bytes inside a block of size 48 free'd
==9565==    at 0x4C2ACBD: free (vg_replace_malloc.c:530)
==9565==    by 0x43F907: __deallocate (new:164)
==9565==    by 0x43F907: deallocate (memory:1636)
==9565==    by 0x43F907: deallocate (memory:1447)
==9565==    by 0x43F907: std::__1::list<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::erase(std::__1::__list_const_iterator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, void*>) (list:1723)
==9565==    by 0x43C84B: SCHashTable<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>::remove(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (schashtable.cpp:80)
==9565==    by 0x437AB1: ____C_A_T_C_H____T_E_S_T____2() (tests-sc.cpp:51)
==9565==    by 0x476492: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==9565==    by 0x467606: Catch::TestCase::invoke() const (catch.hpp:10793)
==9565==    by 0x467538: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==9565==    by 0x464186: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==9565==    by 0x4627F7: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==9565==    by 0x46B431: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==9565==    by 0x46A0CF: Catch::Session::runInternal() (catch.hpp:10149)
==9565==    by 0x469D8E: Catch::Session::run() (catch.hpp:10106)
==9565==  Block was alloc'd at
==9565==    at 0x4C29BC3: malloc (vg_replace_malloc.c:299)
==9565==    by 0x4ED2D29: operator new(unsigned long) (in /class/cs225/lm35/lib/libc++.so.1.0)
==9565==    by 0x43E76F: __allocate (new:156)
==9565==    by 0x43E76F: allocate (memory:1634)
==9565==    by 0x43E76F: allocate (memory:1439)
==9565==    by 0x43E76F: std::__1::list<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::push_front(std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> const&) (list:1503)
==9565==    by 0x43C99F: SCHashTable<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>::insert(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int const&) (schashtable.cpp:61)
==9565==    by 0x4375EB: ____C_A_T_C_H____T_E_S_T____2() (tests-sc.cpp:43)
==9565==    by 0x476492: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==9565==    by 0x467606: Catch::TestCase::invoke() const (catch.hpp:10793)
==9565==    by 0x467538: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==9565==    by 0x464186: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1
```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testRemoveHard" tags="[valgrind][weight=10]" filename="tests/tests-sc.cpp" line="33">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [7/7] - SC::testResizeOnce

- **Points**: 7 / 7

```
==9570== Memcheck, a memory error detector
==9570== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9570== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==9570== Command: ./test -r xml "SC::testResizeOnce"
==9570== 
==9570== 
==9570== HEAP SUMMARY:
==9570==     in use at exit: 0 bytes in 0 blocks
==9570==   total heap usage: 2,054 allocs, 2,054 frees, 251,200 bytes allocated
==9570== 
==9570== All heap blocks were freed -- no leaks are possible
==9570== 
==9570== For counts of detected and suppressed errors, rerun with: -v
==9570== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testResizeOnce" tags="[valgrind][weight=7]" filename="tests/tests-sc.cpp" line="61">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [11/11] - SC::testResizeAll

- **Points**: 11 / 11

```
==9575== Memcheck, a memory error detector
==9575== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9575== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==9575== Command: ./test -r xml "SC::testResizeAll"
==9575== 
==9575== 
==9575== HEAP SUMMARY:
==9575==     in use at exit: 0 bytes in 0 blocks
==9575==   total heap usage: 1,934 allocs, 1,934 frees, 243,776 bytes allocated
==9575== 
==9575== All heap blocks were freed -- no leaks are possible
==9575== 
==9575== For counts of detected and suppressed errors, rerun with: -v
==9575== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testResizeAll" tags="[valgrind][weight=11]" filename="tests/tests-sc.cpp" line="82">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - SC::testInsertEasy

- **Points**: 6 / 6

```
==9603== Memcheck, a memory error detector
==9603== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9603== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==9603== Command: ./test -r xml "SC::testInsertEasy"
==9603== 
==9603== 
==9603== HEAP SUMMARY:
==9603==     in use at exit: 0 bytes in 0 blocks
==9603==   total heap usage: 1,862 allocs, 1,862 frees, 241,600 bytes allocated
==9603== 
==9603== All heap blocks were freed -- no leaks are possible
==9603== 
==9603== For counts of detected and suppressed errors, rerun with: -v
==9603== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testInsertEasy" tags="[valgrind][weight=6]" filename="tests/tests-sc.cpp" line="108">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/10] - SC::testInsertHard

- **Points**: 0 / 10

```
==9605== Memcheck, a memory error detector
==9605== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9605== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==9605== Command: ./test -r xml "SC::testInsertHard"
==9605== 
==9605== Invalid read of size 8
==9605==    at 0x43C8A3: operator++ (list:338)
==9605==    by 0x43C8A3: operator++ (list:342)
==9605==    by 0x43C8A3: SCHashTable<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>::remove(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (schashtable.cpp:83)
==9605==    by 0x43AAFC: ____C_A_T_C_H____T_E_S_T____10() (tests-sc.cpp:136)
==9605==    by 0x476492: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==9605==    by 0x467606: Catch::TestCase::invoke() const (catch.hpp:10793)
==9605==    by 0x467538: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==9605==    by 0x464186: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==9605==    by 0x4627F7: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==9605==    by 0x46B431: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==9605==    by 0x46A0CF: Catch::Session::runInternal() (catch.hpp:10149)
==9605==    by 0x469D8E: Catch::Session::run() (catch.hpp:10106)
==9605==    by 0x469D0C: Catch::Session::run(int, char**) (catch.hpp:10074)
==9605==    by 0x495351: main (catch.hpp:13613)
==9605==  Address 0x60b0648 is 8 bytes inside a block of size 48 free'd
==9605==    at 0x4C2ACBD: free (vg_replace_malloc.c:530)
==9605==    by 0x43F907: __deallocate (new:164)
==9605==    by 0x43F907: deallocate (memory:1636)
==9605==    by 0x43F907: deallocate (memory:1447)
==9605==    by 0x43F907: std::__1::list<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::erase(std::__1::__list_const_iterator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, void*>) (list:1723)
==9605==    by 0x43C84B: SCHashTable<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>::remove(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (schashtable.cpp:80)
==9605==    by 0x43AAFC: ____C_A_T_C_H____T_E_S_T____10() (tests-sc.cpp:136)
==9605==    by 0x476492: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==9605==    by 0x467606: Catch::TestCase::invoke() const (catch.hpp:10793)
==9605==    by 0x467538: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==9605==    by 0x464186: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==9605==    by 0x4627F7: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==9605==    by 0x46B431: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==9605==    by 0x46A0CF: Catch::Session::runInternal() (catch.hpp:10149)
==9605==    by 0x469D8E: Catch::Session::run() (catch.hpp:10106)
==9605==  Block was alloc'd at
==9605==    at 0x4C29BC3: malloc (vg_replace_malloc.c:299)
==9605==    by 0x4ED2D29: operator new(unsigned long) (in /class/cs225/lm35/lib/libc++.so.1.0)
==9605==    by 0x43E76F: __allocate (new:156)
==9605==    by 0x43E76F: allocate (memory:1634)
==9605==    by 0x43E76F: allocate (memory:1439)
==9605==    by 0x43E76F: std::__1::list<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::push_front(std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> const&) (list:1503)
==9605==    by 0x43C99F: SCHashTable<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>::insert(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int const&) (schashtable.cpp:61)
==9605==    by 0x43AB96: ____C_A_T_C_H____T_E_S_T____10() (tests-sc.cpp:137)
==9605==    by 0x476492: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==9605==    by 0x467606: Catch::TestCase::invoke() const (catch.hpp:10793)
==9605==    by 0x467538: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==9605==    by 0x464186: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==9605==    by 0x4627F7: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==9605==    by 0x46B431: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==9605==    by 0x46A0CF: Catch::Session::runInternal() (catch.hpp:10149)
==9605== 
==9605== 
==9605== HEAP SUMMARY:
==9605==     in use at exit: 0 bytes in 0 blocks
==9605==   total heap usage: 1,895 allocs, 1,895 frees, 242,832 bytes allocated
==9605== 
==9605== All heap blocks were freed -- no leaks are possible
==9605== 
==9605== For counts of detected and suppressed errors, rerun with: -v
==9605== ERROR SUMMARY: 2 errors from 1 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testInsertHard" tags="[valgrind][weight=10]" filename="tests/tests-sc.cpp" line="128">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/6] - LP::testRemoveEASY

- **Points**: 0 / 6


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testRemoveEASY" tags="[valgrind][weight=6]" filename="tests/tests-lp.cpp" line="12">
      <Expression success="false" filename="tests/tests-lp.cpp" line="31">
        <Original>
          {Unknown expression after the reported line}
        </Original>
        <Expanded>
          {Unknown expression after the reported line}
        </Expanded>
        <FatalErrorCondition filename="tests/tests-lp.cpp" line="31">
          SIGABRT - Abort (abnormal termination) signal
        </FatalErrorCondition>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="1" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/10] - LP::testRemoveHard

- **Points**: 0 / 10


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testRemoveHard" tags="[valgrind][weight=10]" filename="tests/tests-lp.cpp" line="34">
      <Expression success="false" filename="tests/tests-lp.cpp" line="59">
        <Original>
          {Unknown expression after the reported line}
        </Original>
        <Expanded>
          {Unknown expression after the reported line}
        </Expanded>
        <FatalErrorCondition filename="tests/tests-lp.cpp" line="59">
          SIGABRT - Abort (abnormal termination) signal
        </FatalErrorCondition>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="1" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="1" expectedFailures="0"/>
</Catch>

```


### ✓ - [7/7] - LP::testResizeOnce

- **Points**: 7 / 7

```
==9610== Memcheck, a memory error detector
==9610== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9610== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==9610== Command: ./test -r xml "LP::testResizeOnce"
==9610== 
==9610== 
==9610== HEAP SUMMARY:
==9610==     in use at exit: 0 bytes in 0 blocks
==9610==   total heap usage: 1,974 allocs, 1,974 frees, 245,197 bytes allocated
==9610== 
==9610== All heap blocks were freed -- no leaks are possible
==9610== 
==9610== For counts of detected and suppressed errors, rerun with: -v
==9610== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testResizeOnce" tags="[valgrind][weight=7]" filename="tests/tests-lp.cpp" line="62">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [11/11] - LP::testResizeAll

- **Points**: 11 / 11

```
==9612== Memcheck, a memory error detector
==9612== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9612== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==9612== Command: ./test -r xml "LP::testResizeAll"
==9612== 
==9612== 
==9612== HEAP SUMMARY:
==9612==     in use at exit: 0 bytes in 0 blocks
==9612==   total heap usage: 1,873 allocs, 1,873 frees, 238,685 bytes allocated
==9612== 
==9612== All heap blocks were freed -- no leaks are possible
==9612== 
==9612== For counts of detected and suppressed errors, rerun with: -v
==9612== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testResizeAll" tags="[valgrind][weight=11]" filename="tests/tests-lp.cpp" line="83">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - LP::testInsertEasy

- **Points**: 6 / 6

```
==9646== Memcheck, a memory error detector
==9646== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9646== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==9646== Command: ./test -r xml "LP::testInsertEasy"
==9646== 
==9646== 
==9646== HEAP SUMMARY:
==9646==     in use at exit: 0 bytes in 0 blocks
==9646==   total heap usage: 1,855 allocs, 1,855 frees, 240,653 bytes allocated
==9646== 
==9646== All heap blocks were freed -- no leaks are possible
==9646== 
==9646== For counts of detected and suppressed errors, rerun with: -v
==9646== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testInsertEasy" tags="[valgrind][weight=6]" filename="tests/tests-lp.cpp" line="110">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/10] - LP::testInsertHard

- **Points**: 0 / 10


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testInsertHard" tags="[valgrind][weight=10]" filename="tests/tests-lp.cpp" line="130">
      <Expression success="false" filename="tests/tests-lp.cpp" line="148">
        <Original>
          {Unknown expression after the reported line}
        </Original>
        <Expanded>
          {Unknown expression after the reported line}
        </Expanded>
        <FatalErrorCondition filename="tests/tests-lp.cpp" line="148">
          SIGABRT - Abort (abnormal termination) signal
        </FatalErrorCondition>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="1" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="1" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **dpeng4** using **26c5642b9b32d7e3a432afa612a0e8a8befbe862** (from **April 1st 2019, 12:15:00 am**)
