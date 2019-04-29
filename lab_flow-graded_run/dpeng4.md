


## Score: 0/10 (0.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c graph.cpp -o .objs/graph.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c NetworkFlow.cpp -o .objs/NetworkFlow.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c tests/unit_tests.cpp -o .objs/tests/unit_tests.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/graph.o .objs/NetworkFlow.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/unit_tests.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -o test

```


### ✗ - [0/1] - Graph a - 4 -> b  has flow of 4.

- **Points**: 0 / 1


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Graph a - 4 -> b  has flow of 4." tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="10">
      <Expression success="false" type="REQUIRE" filename="tests/unit_tests.cpp" line="20">
        <Original>
          n.getMaxFlow() == 4
        </Original>
        <Expanded>
          0 == 4
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - Testing flow through two pipes - secret test

- **Points**: 0 / 1


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing flow through two pipes - secret test" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="23">
      <Expression success="false" type="REQUIRE" filename="tests/unit_tests.cpp" line="37">
        <Original>
          n.getMaxFlow() == 4
        </Original>
        <Expanded>
          35408344 (0x21c49d8) == 4
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - Graph a - 10 -> b  has flow of 10.

- **Points**: 0 / 1


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Graph a - 10 -> b  has flow of 10." tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="40">
      <Expression success="false" type="REQUIRE" filename="tests/unit_tests.cpp" line="50">
        <Original>
          n.getMaxFlow() == 10
        </Original>
        <Expanded>
          0 == 10
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - Testing flow through two pipes

- **Points**: 0 / 1


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing flow through two pipes" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="53">
      <Expression success="false" type="REQUIRE" filename="tests/unit_tests.cpp" line="67">
        <Original>
          n.getMaxFlow() == 8
        </Original>
        <Expanded>
          -1440175504 == 8
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - Testing simple backflow - secret

- **Points**: 0 / 1


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing simple backflow - secret" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="70">
      <Expression success="false" type="REQUIRE" filename="tests/unit_tests.cpp" line="90">
        <Original>
          n.getMaxFlow() == 37
        </Original>
        <Expanded>
          40497504 (0x269f160) == 37
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - Testing simple backflow

- **Points**: 0 / 1


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing simple backflow" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="93">
      <Expression success="false" type="REQUIRE" filename="tests/unit_tests.cpp" line="111">
        <Original>
          n.getMaxFlow() == 20
        </Original>
        <Expanded>
          18761864 (0x11e4888) == 20
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - Testing full pipe usage - secret

- **Points**: 0 / 1


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing full pipe usage - secret" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="114">
      <Expression success="false" type="REQUIRE" filename="tests/unit_tests.cpp" line="136">
        <Original>
          n.getMaxFlow() == 20
        </Original>
        <Expanded>
          34011808 (0x206faa0) == 20
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - Testing full pipe usage

- **Points**: 0 / 1


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing full pipe usage" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="139">
      <Expression success="false" type="REQUIRE" filename="tests/unit_tests.cpp" line="161">
        <Original>
          n.getMaxFlow() == 10
        </Original>
        <Expanded>
          9530016 (0x916aa0) == 10
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - Testing 3 x 3 plumbing - secret

- **Points**: 0 / 1


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing 3 x 3 plumbing - secret" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="164">
      <Expression success="false" type="REQUIRE" filename="tests/unit_tests.cpp" line="200">
        <Original>
          n.getMaxFlow() == 50
        </Original>
        <Expanded>
          450823840 (0x1adf06a0) == 50
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - Testing 3 x 3 plumbing

- **Points**: 0 / 1


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing 3 x 3 plumbing" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="203">
      <Expression success="false" type="REQUIRE" filename="tests/unit_tests.cpp" line="239">
        <Original>
          n.getMaxFlow() == 8
        </Original>
        <Expanded>
          -606932848 == 8
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **dpeng4** using **94e8e9b8e0862def428456e56404887f8ff5cca0** (from **April 29th 2019, 12:15:00 am**)
