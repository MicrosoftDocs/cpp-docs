---
title: "Alloc dealloc mismatch"
description: "Source examples and live debug screenshots for alloc-dealloc-mismatch errors."
ms.date: 02/05/2021
f1_keywords: ["ASan","Address Sanitizer","memory safety","alloc dealloc mismatch", "ASan examples"]
help viewer_keywords: ["ASan","Address Sanitizer","ASan examples","alloc-dealloc-mismatch"]
---

# Alloc dealloc mismatch

This functionality is off by default for Windows. To enable, `set ASAN_OPTIONS=alloc_dealloc_mismatch=1` before running the program. This runtime flag will report errors on malloc/delete, new/free, and new/delete[]. Sourced from [LLVM compiler-rt test suite](https://github.com/llvm/llvm-project/tree/main/compiler-rt/test/asan/TestCases).

## Example

```cpp
#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[] ) {

  if (argc != 2) return -1;

  switch (atoi(argv[1])) {

  case 1: 
    delete [] (new int[10]);  
    break;
  case 2: 
    delete (new int[10]);      // Boom!
    break;
  default: 
    printf("arguments: 1: no error 2: runtime error\n");
    return -1;
  }

  return 0;
}
```

From a **Developer Command Prompt**:
```
 cl example1.cpp /fsanitize=address /Zi
 set ASAN_OPTIONS=alloc_dealloc_mismatch=1
 devenv /debugexe example1.exe 2
```

## Resulting error

![example1](SRC_CODE/alloc-dealloc-mismatch/example1.PNG)
