


## Score: 40/55 (72.73%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c tests/tests.cpp -o .objs/tests/tests.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -o test

```


### ✓ - [5/5] - test_insertion_idx_emp

- **Points**: 5 / 5





### ✓ - [5/5] - test_insertion_idx_small

- **Points**: 5 / 5





### ✗ - [0/5] - test_btree3_small

- **Points**: 0 / 5

```
==14150== Memcheck, a memory error detector
==14150== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14150== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==14150== Command: ./test -r xml "test_btree3_small"
==14150== 
==14150== Conditional jump or move depends on uninitialised value(s)
==14150==    at 0x44F71B: BTree<int, int>::insert(BTree<int, int>::BTreeNode*, BTree<int, int>::DataPair const&) (btree.cpp:184)
==14150==    by 0x44F237: BTree<int, int>::insert(int const&, int const&) (btree.cpp:66)
==14150==    by 0x44B06C: void do_inserts<int, int>(std::__1::vector<std::__1::pair<int, int>, std::__1::allocator<std::__1::pair<int, int> > >&, BTree<int, int>&) (tests.cpp:38)
==14150==    by 0x4282C9: ____C_A_T_C_H____T_E_S_T____4() (tests.cpp:105)
==14150==    by 0x4853D2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==14150==    by 0x476546: Catch::TestCase::invoke() const (catch.hpp:10793)
==14150==    by 0x476478: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==14150==    by 0x4730C6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==14150==    by 0x471737: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==14150==    by 0x47A371: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==14150==    by 0x47900F: Catch::Session::runInternal() (catch.hpp:10149)
==14150==    by 0x478CCE: Catch::Session::run() (catch.hpp:10106)
==14150== 
==14150== Conditional jump or move depends on uninitialised value(s)
==14150==    at 0x44F71B: BTree<int, int>::insert(BTree<int, int>::BTreeNode*, BTree<int, int>::DataPair const&) (btree.cpp:184)
==14150==    by 0x44F8C2: BTree<int, int>::insert(BTree<int, int>::BTreeNode*, BTree<int, int>::DataPair const&) (btree.cpp:189)
==14150==    by 0x44F237: BTree<int, int>::insert(int const&, int const&) (btree.cpp:66)
==14150==    by 0x44B06C: void do_inserts<int, int>(std::__1::vector<std::__1::pair<int, int>, std::__1::allocator<std::__1::pair<int, int> > >&, BTree<int, int>&) (tests.cpp:38)
==14150==    by 0x4282C9: ____C_A_T_C_H____T_E_S_T____4() (tests.cpp:105)
==14150==    by 0x4853D2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==14150==    by 0x476546: Catch::TestCase::invoke() const (catch.hpp:10793)
==14150==    by 0x476478: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==14150==    by 0x4730C6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==14150==    by 0x471737: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==14150==    by 0x47A371: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==14150==    by 0x47900F: Catch::Session::runInternal() (catch.hpp:10149)
==14150== 
==14150== Conditional jump or move depends on uninitialised value(s)
==14150==    at 0x44ED91: BTree<int, int>::find(BTree<int, int>::BTreeNode const*, int const&) const (btree.cpp:34)
==14150==    by 0x44E9B6: BTree<int, int>::find(int const&) const (btree.cpp:17)
==14150==    by 0x44B1FC: void verify_finds<int, int>(std::__1::vector<std::__1::pair<int, int>, std::__1::allocator<std::__1::pair<int, int> > >&, BTree<int, int>&) (tests.cpp:44)
==14150==    by 0x4282E1: ____C_A_T_C_H____T_E_S_T____4() (tests.cpp:106)
==14150==    by 0x4853D2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==14150==    by 0x476546: Catch::TestCase::invoke() const (catch.hpp:10793)
==14150==    by 0x476478: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==14150==    by 0x4730C6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==14150==    by 0x471737: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==14150==    by 0x47A371: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==14150==    by 0x47900F: Catch::Session::runInternal() (catch.hpp:10149)
==14150==    by 0x478CCE: Catch::Session::run() (catch.hpp:10106)
==14150== 
==14150== Conditional jump or move depends on uninitialised value(s)
==14150==    at 0x44ED91: BTree<int, int>::find(BTree<int, int>::BTreeNode const*, int const&) const (btree.cpp:34)
==14150==    by 0x44EE20: BTree<int, int>::find(BTree<int, int>::BTreeNode const*, int const&) const (btree.cpp:37)
==14150==    by 0x44E9B6: BTree<int, int>::find(int const&) const (btree.cpp:17)
==14150==    by 0x44B1FC: void verify_finds<int, int>(std::__1::vector<std::__1::pair<int, int>, std::__1::allocator<std::__1::pair<int, int> > >&, BTree<int, int>&) (tests.cpp:44)
==14150==    by 0x4282E1: ____C_A_T_C_H____T_E_S_T____4() (tests.cpp:106)
==14150==    by 0x4853D2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==14150==    by 0x476546: Catch::TestCase::invoke() const (catch.hpp:10793)
==14150==    by 0x476478: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==14150==    by 0x4730C6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==14150==    by 0x471737: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==14150==    by 0x47A371: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==14150==    by 0x47900F: Catch::Session::runInternal() (catch.hpp:10149)
==14150== 
==14150== 
==14150== HEAP SUMMARY:
==14150==     in use at exit: 0 bytes in 0 blocks
==14150==   total heap usage: 1,798 allocs, 1,798 frees, 227,168 bytes allocated
==14150== 
==14150== All heap blocks were freed -- no leaks are possible
==14150== 
==14150== For counts of detected and suppressed errors, rerun with: -v
==14150== Use --track-origins=yes to see where uninitialised values come from
==14150== ERROR SUMMARY: 12 errors from 4 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_btree3_small" tags="[timeout=8000][valgrind][weight=5]" filename="tests/tests.cpp" line="93">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="10" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="10" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - test_btree3_large_seq

- **Points**: 5 / 5





### ✓ - [5/5] - test_btree3_large_rand

- **Points**: 5 / 5





### ✓ - [5/5] - test_btree64_large_seq

- **Points**: 5 / 5





### ✓ - [5/5] - test_btree64_large_rand

- **Points**: 5 / 5





### ✗ - [0/5] - test_btree128_med_rand

- **Points**: 0 / 5

```
==14160== Memcheck, a memory error detector
==14160== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14160== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==14160== Command: ./test -r xml "test_btree128_med_rand"
==14160== 
==14160== Conditional jump or move depends on uninitialised value(s)
==14160==    at 0x44F71B: BTree<int, int>::insert(BTree<int, int>::BTreeNode*, BTree<int, int>::DataPair const&) (btree.cpp:184)
==14160==    by 0x44F237: BTree<int, int>::insert(int const&, int const&) (btree.cpp:66)
==14160==    by 0x44B06C: void do_inserts<int, int>(std::__1::vector<std::__1::pair<int, int>, std::__1::allocator<std::__1::pair<int, int> > >&, BTree<int, int>&) (tests.cpp:38)
==14160==    by 0x429687: ____C_A_T_C_H____T_E_S_T____14() (tests.cpp:151)
==14160==    by 0x4853D2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==14160==    by 0x476546: Catch::TestCase::invoke() const (catch.hpp:10793)
==14160==    by 0x476478: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==14160==    by 0x4730C6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==14160==    by 0x471737: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==14160==    by 0x47A371: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==14160==    by 0x47900F: Catch::Session::runInternal() (catch.hpp:10149)
==14160==    by 0x478CCE: Catch::Session::run() (catch.hpp:10106)
==14160== 
==14160== Conditional jump or move depends on uninitialised value(s)
==14160==    at 0x44F71B: BTree<int, int>::insert(BTree<int, int>::BTreeNode*, BTree<int, int>::DataPair const&) (btree.cpp:184)
==14160==    by 0x44F8C2: BTree<int, int>::insert(BTree<int, int>::BTreeNode*, BTree<int, int>::DataPair const&) (btree.cpp:189)
==14160==    by 0x44F237: BTree<int, int>::insert(int const&, int const&) (btree.cpp:66)
==14160==    by 0x44B06C: void do_inserts<int, int>(std::__1::vector<std::__1::pair<int, int>, std::__1::allocator<std::__1::pair<int, int> > >&, BTree<int, int>&) (tests.cpp:38)
==14160==    by 0x429687: ____C_A_T_C_H____T_E_S_T____14() (tests.cpp:151)
==14160==    by 0x4853D2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==14160==    by 0x476546: Catch::TestCase::invoke() const (catch.hpp:10793)
==14160==    by 0x476478: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==14160==    by 0x4730C6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==14160==    by 0x471737: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==14160==    by 0x47A371: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==14160==    by 0x47900F: Catch::Session::runInternal() (catch.hpp:10149)
==14160== 
==14160== Conditional jump or move depends on uninitialised value(s)
==14160==    at 0x44F71B: BTree<int, int>::insert(BTree<int, int>::BTreeNode*, BTree<int, int>::DataPair const&) (btree.cpp:184)
==14160==    by 0x44F8C2: BTree<int, int>::insert(BTree<int, int>::BTreeNode*, BTree<int, int>::DataPair const&) (btree.cpp:189)
==14160==    by 0x44F8C2: BTree<int, int>::insert(BTree<int, int>::BTreeNode*, BTree<int, int>::DataPair const&) (btree.cpp:189)
==14160==    by 0x44F237: BTree<int, int>::insert(int const&, int const&) (btree.cpp:66)
==14160==    by 0x44B06C: void do_inserts<int, int>(std::__1::vector<std::__1::pair<int, int>, std::__1::allocator<std::__1::pair<int, int> > >&, BTree<int, int>&) (tests.cpp:38)
==14160==    by 0x429687: ____C_A_T_C_H____T_E_S_T____14() (tests.cpp:151)
==14160==    by 0x4853D2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==14160==    by 0x476546: Catch::TestCase::invoke() const (catch.hpp:10793)
==14160==    by 0x476478: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==14160==    by 0x4730C6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==14160==    by 0x471737: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==14160==    by 0x47A371: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==14160== 
==14160== Conditional jump or move depends on uninitialised value(s)
==14160==    at 0x44ED91: BTree<int, int>::find(BTree<int, int>::BTreeNode const*, int const&) const (btree.cpp:34)
==14160==    by 0x44E9B6: BTree<int, int>::find(int const&) const (btree.cpp:17)
==14160==    by 0x44B1FC: void verify_finds<int, int>(std::__1::vector<std::__1::pair<int, int>, std::__1::allocator<std::__1::pair<int, int> > >&, BTree<int, int>&) (tests.cpp:44)
==14160==    by 0x429699: ____C_A_T_C_H____T_E_S_T____14() (tests.cpp:152)
==14160==    by 0x4853D2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==14160==    by 0x476546: Catch::TestCase::invoke() const (catch.hpp:10793)
==14160==    by 0x476478: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==14160==    by 0x4730C6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==14160==    by 0x471737: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==14160==    by 0x47A371: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==14160==    by 0x47900F: Catch::Session::runInternal() (catch.hpp:10149)
==14160==    by 0x478CCE: Catch::Session::run() (catch.hpp:10106)
==14160== 
==14160== Conditional jump or move depends on uninitialised value(s)
==14160==    at 0x44ED91: BTree<int, int>::find(BTree<int, int>::BTreeNode const*, int const&) const (btree.cpp:34)
==14160==    by 0x44EE20: BTree<int, int>::find(BTree<int, int>::BTreeNode const*, int const&) const (btree.cpp:37)
==14160==    by 0x44E9B6: BTree<int, int>::find(int const&) const (btree.cpp:17)
==14160==    by 0x44B1FC: void verify_finds<int, int>(std::__1::vector<std::__1::pair<int, int>, std::__1::allocator<std::__1::pair<int, int> > >&, BTree<int, int>&) (tests.cpp:44)
==14160==    by 0x429699: ____C_A_T_C_H____T_E_S_T____14() (tests.cpp:152)
==14160==    by 0x4853D2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==14160==    by 0x476546: Catch::TestCase::invoke() const (catch.hpp:10793)
==14160==    by 0x476478: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==14160==    by 0x4730C6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==14160==    by 0x471737: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==14160==    by 0x47A371: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==14160==    by 0x47900F: Catch::Session::runInternal() (catch.hpp:10149)
==14160== 
==14160== 
==14160== HEAP SUMMARY:
==14160==     in use at exit: 0 bytes in 0 blocks
==14160==   total heap usage: 2,643 allocs, 2,643 frees, 1,579,960 bytes allocated
==14160== 
==14160== All heap blocks were freed -- no leaks are possible
==14160== 
==14160== For counts of detected and suppressed errors, rerun with: -v
==14160== Use --track-origins=yes to see where uninitialised values come from
==14160== ERROR SUMMARY: 14160 errors from 5 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_btree128_med_rand" tags="[timeout=8000][valgrind][weight=5]" filename="tests/tests.cpp" line="147">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="20001" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="20001" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - test_btree256_med_rand

- **Points**: 0 / 5

```
==14173== Memcheck, a memory error detector
==14173== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14173== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==14173== Command: ./test -r xml "test_btree256_med_rand"
==14173== 
==14173== Conditional jump or move depends on uninitialised value(s)
==14173==    at 0x44F71B: BTree<int, int>::insert(BTree<int, int>::BTreeNode*, BTree<int, int>::DataPair const&) (btree.cpp:184)
==14173==    by 0x44F237: BTree<int, int>::insert(int const&, int const&) (btree.cpp:66)
==14173==    by 0x44B06C: void do_inserts<int, int>(std::__1::vector<std::__1::pair<int, int>, std::__1::allocator<std::__1::pair<int, int> > >&, BTree<int, int>&) (tests.cpp:38)
==14173==    by 0x429917: ____C_A_T_C_H____T_E_S_T____16() (tests.cpp:160)
==14173==    by 0x4853D2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==14173==    by 0x476546: Catch::TestCase::invoke() const (catch.hpp:10793)
==14173==    by 0x476478: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==14173==    by 0x4730C6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==14173==    by 0x471737: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==14173==    by 0x47A371: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==14173==    by 0x47900F: Catch::Session::runInternal() (catch.hpp:10149)
==14173==    by 0x478CCE: Catch::Session::run() (catch.hpp:10106)
==14173== 
==14173== Conditional jump or move depends on uninitialised value(s)
==14173==    at 0x44F71B: BTree<int, int>::insert(BTree<int, int>::BTreeNode*, BTree<int, int>::DataPair const&) (btree.cpp:184)
==14173==    by 0x44F8C2: BTree<int, int>::insert(BTree<int, int>::BTreeNode*, BTree<int, int>::DataPair const&) (btree.cpp:189)
==14173==    by 0x44F237: BTree<int, int>::insert(int const&, int const&) (btree.cpp:66)
==14173==    by 0x44B06C: void do_inserts<int, int>(std::__1::vector<std::__1::pair<int, int>, std::__1::allocator<std::__1::pair<int, int> > >&, BTree<int, int>&) (tests.cpp:38)
==14173==    by 0x429917: ____C_A_T_C_H____T_E_S_T____16() (tests.cpp:160)
==14173==    by 0x4853D2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==14173==    by 0x476546: Catch::TestCase::invoke() const (catch.hpp:10793)
==14173==    by 0x476478: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==14173==    by 0x4730C6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==14173==    by 0x471737: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==14173==    by 0x47A371: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==14173==    by 0x47900F: Catch::Session::runInternal() (catch.hpp:10149)
==14173== 
==14173== Conditional jump or move depends on uninitialised value(s)
==14173==    at 0x44ED91: BTree<int, int>::find(BTree<int, int>::BTreeNode const*, int const&) const (btree.cpp:34)
==14173==    by 0x44E9B6: BTree<int, int>::find(int const&) const (btree.cpp:17)
==14173==    by 0x44B1FC: void verify_finds<int, int>(std::__1::vector<std::__1::pair<int, int>, std::__1::allocator<std::__1::pair<int, int> > >&, BTree<int, int>&) (tests.cpp:44)
==14173==    by 0x429929: ____C_A_T_C_H____T_E_S_T____16() (tests.cpp:161)
==14173==    by 0x4853D2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==14173==    by 0x476546: Catch::TestCase::invoke() const (catch.hpp:10793)
==14173==    by 0x476478: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==14173==    by 0x4730C6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==14173==    by 0x471737: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==14173==    by 0x47A371: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==14173==    by 0x47900F: Catch::Session::runInternal() (catch.hpp:10149)
==14173==    by 0x478CCE: Catch::Session::run() (catch.hpp:10106)
==14173== 
==14173== 
==14173== HEAP SUMMARY:
==14173==     in use at exit: 0 bytes in 0 blocks
==14173==   total heap usage: 2,669 allocs, 2,669 frees, 3,411,056 bytes allocated
==14173== 
==14173== All heap blocks were freed -- no leaks are possible
==14173== 
==14173== For counts of detected and suppressed errors, rerun with: -v
==14173== Use --track-origins=yes to see where uninitialised values come from
==14173== ERROR SUMMARY: 1179 errors from 3 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_btree256_med_rand" tags="[timeout=8000][valgrind][weight=5]" filename="tests/tests.cpp" line="156">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="40001" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="40001" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - test_btree12_double

- **Points**: 5 / 5





### ✓ - [5/5] - test_btree12_strings

- **Points**: 5 / 5





---

This report was generated for **dpeng4** using **badfb999b2cb0cb913263462a0190f980f1986db** (from **March 27th 2019, 12:15:00 am**)
