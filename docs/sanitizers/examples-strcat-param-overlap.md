---
title: "Strcat() parameter overlap."
description: "Source examples and live debug screen shots for Strcat() parameter overlap errors."
ms.date: 02/05/2021
f1_keywords: ["ASan","Address Sanitizer","memory safety","Strcat() parameter overlap", "ASan examples"]
help viewer_keywords: ["ASan","Address Sanitizer","ASan examples","Strcat() parameter overlap"]
---

# Strcat - parameter overlap

Sourced from [LLVM compiler-rt test suite](https://github.com/llvm/llvm-project/tree/main/compiler-rt/test/asan/TestCases).

## Example

```cpp

#include <string.h>

void bad_function() {

  char buffer[] = "hello\0XXX";

  strncat(buffer, buffer + 1, 3); // BOOM

  return;
}

int main(int argc, char **argv) {

  bad_function();
  return 0;
}

```

From a **Developer Command Prompt**:
```
 cl example1.cpp /fsanitize=address /Zi
 devenv /debugexe example1.exe
```

## Resulting error

![example1](SRC_CODE/strcat-param-overlap/example1.PNG)
