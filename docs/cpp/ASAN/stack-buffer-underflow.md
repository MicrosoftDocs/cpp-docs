# Stack buffer underflow

## Example - local array underflow
```cpp
#include <stdio.h>

int main() {
  int subscript = -1;
  char buffer[42];
  buffer[subscript] = 42; // Boom!
}

```
## Resulting error

![example1](\SRC_CODE\stack-buffer-underflow\example2.PNG)

## Example - stack underflow on thread

```cpp
#include <windows.h>

DWORD WINAPI thread_proc(void *) {
  int subscript = -1;
  volatile char stack_buffer[42];
  stack_buffer[subscript] = 42;
  return 0;
}

int main() {
  HANDLE thr = CreateThread(NULL, 0, thread_proc, NULL, 0, NULL);

  if (thr == 0) return 0;

  WaitForSingleObject(thr, INFINITE);
}

```

## Resulting error

![example2](\SRC_CODE\stack-buffer-underflow\example2.PNG)
