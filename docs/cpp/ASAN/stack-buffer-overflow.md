# Stack buffer overflow

The stack buffer overflow happen many ways in C or C++.  We provide several examples for this category of error caught with a simple recompile. All simple examples are compiled using:
>  **`cl -fsanitize=address /Zi  uas_example.c`**

## Example - stack buffer overflow

```cpp
#include <string.h>
int main(int argc, char **argv) {
    char x[10];
    memset(x, 0, 10);
    int res = x[argc * 10];  // Boom! Classic stack buffer overflow

    return res;
}
```

## Resulting error

![example1](\SRC_CODE\stack-buffer-overflow\example1.PNG)

## Example - Stack buffer math

```cpp
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(int argc, char **argv) {
    assert(argc >= 2);
    int idx = atoi(argv[1]);
    char AAA[10], BBB[10], CCC[10];
    memset(AAA, 0, sizeof(AAA));
    memset(BBB, 0, sizeof(BBB));
    memset(CCC, 0, sizeof(CCC));
    int res = 0;
    char *p = AAA + idx;
    printf("AAA: %p\ny: %p\nz: %p\np: %p\n", AAA, BBB, CCC, p);

    return *(short*)(p) + BBB[argc % 2] + CCC[argc % 2];  // Boom! ... when argument is 9
}
```

## Resulting error
![example2](\SRC_CODE\stack-buffer-overflow\example2.PNG)

## Example - improper down cast on stack

```cpp
class Parent {
 public:
  int field;
};

class Child : public Parent {
 public:
  int extra_field;
};

int main(void) {

  Parent *p = new Parent;
  Child *c = (Child*)p;  // Boom!
  c->extra_field = 42;

  return 0;
}
```

## Resulting error

![example3](\SRC_CODE\stack-buffer-overflow\example3.PNG)
