


## Score: 13/13 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++ -std=c++1y -stdlib=libc++ -c -g -O0 -Wall -Wextra -pedantic main.cpp intro.cpp
clang++ -std=c++1y -stdlib=libc++ -c -g -O0 -Wall -Wextra -pedantic cs225/PNG.cpp
clang++ -std=c++1y -stdlib=libc++ -c -g -O0 -Wall -Wextra -pedantic cs225/HSLAPixel.cpp
clang++ -std=c++1y -stdlib=libc++ -c -g -O0 -Wall -Wextra -pedantic cs225/lodepng/lodepng.cpp
clang++ intro.o PNG.o HSLAPixel.o lodepng.o main.o -std=c++1y -stdlib=libc++ -lpthread -lm -o intro
clang++ -std=c++1y -stdlib=libc++ -c -g -O0 -Wall -Wextra -pedantic tests/tests.cpp
clang++ tests.o PNG.o HSLAPixel.o lodepng.o intro.o -std=c++1y -stdlib=libc++ -lpthread -lm -o test

```


### ✓ - [1/1] - HSLAPixel's default constructor creates a white pixel

- **Points**: 1 / 1





### ✓ - [1/1] - HSLAPixel's default constructor creates an opaque pixel

- **Points**: 1 / 1





### ✓ - [1/1] - HSLAPixel's HSL constructor creates a pixel with provided HSL values

- **Points**: 1 / 1





### ✓ - [1/1] - HSLAPixel's HSL constructor creates an opaque pixel

- **Points**: 1 / 1





### ✓ - [1/1] - HSLAPixel's HSLA constructor creates a pixel with provided HSLA values

- **Points**: 1 / 1





### ✓ - [1/1] - Rotate in_01.png

- **Points**: 1 / 1





### ✓ - [1/1] - Rotate in_02.png

- **Points**: 1 / 1





### ✓ - [1/1] - Rotate in_03.png

- **Points**: 1 / 1





### ✓ - [5/5] - Creative artwork contains at least three unique colors

- **Points**: 5 / 5





### ✓ - [0/0] - Generate creative artwork

- **Points**: 0 / 0





---

This report was generated for **dpeng4** using **e453dab371c31eb525e1444e7808d7e2d28962d4** (from **January 30th 2019, 12:05:00 am**)
