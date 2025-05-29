---
title: "Error: alloc-dealloc-mismatch"
description: "Learn about the alloc-dealloc-mismatch Address Sanitizer error."
ms.date: 05/28/2025
f1_keywords: ["alloc-dealloc-mismatch"]
helpviewer_keywords: ["alloc-dealloc-mismatch error", "AddressSanitizer error alloc-dealloc-mismatch"]
---
# Error: `alloc-dealloc-mismatch`

> Address Sanitizer Error: Mismatch between allocation and deallocation APIs

Enables runtime detection of mismatched memory operations that may lead to undefined behavior, such as:
- `malloc` must be paired with `free`, not `delete` or `delete[]`.
- `new` must be paired with `delete`, not `free` or `delete[]`.
- `new[]` must be paired with `delete[]`, not `delete` or `free`.

The `alloc`/`dealloc` mismatch functionality in AddressSanitizer is off by default for Windows. To enable it, run `set ASAN_OPTIONS=alloc_dealloc_mismatch=1` before running the program.

## Example

```cpp
// Demonstrate alloc-dealloc-mismatch error
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    if (argc != 2) return -1;

    switch (atoi(argv[1]))
    {
        case 1:
            delete[](new int[10]);
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

Run the following commands in a Visual Studio 2019 version 16.9 or later [developer command prompt](../build/building-on-the-command-line.md#developer_command_prompt_shortcuts) to run the example:

```cmd
cl example1.cpp /fsanitize=address /Zi
set ASAN_OPTIONS=alloc_dealloc_mismatch=1
devenv /debugexe example1.exe 2
```

### Output

:::image type="content" source="media/alloc-dealloc-mismatch-example-1.png" alt-text="Screenshot of debugger displaying alloc-dealloc-mismatch error in example 1.":::

## See also

[AddressSanitizer overview](asan.md)\
[AddressSanitizer known issues](asan-known-issues.md)\
[AddressSanitizer build and language reference](asan-building.md)\
[AddressSanitizer runtime reference](asan-runtime.md)\
[AddressSanitizer shadow bytes](asan-shadow-bytes.md)\
[AddressSanitizer cloud or distributed testing](asan-offline-crash-dumps.md)\
[AddressSanitizer debugger integration](asan-debugger-integration.md)\
[AddressSanitizer error examples](asan-error-examples.md)
