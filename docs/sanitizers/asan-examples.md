---
title: "AddressSanitizer error examples"
description: "Top-level description of the AddressSanitizer error examples in Microsoft C/C++."
ms.date: 03/01/2021
helpviewer_keywords: ["ASan Examples", "AddressSanitizer Examples", "Address Sanitizer Examples", "Examples for AddressSanitizer"]
---
# AddressSanitizer error examples

We've ported some examples to help you learn to use the AddressSanitizer features supported by MSVC in your code. These examples are based on sources in the [LLVM compiler-rt test suite](https://github.com/llvm/llvm-project/tree/main/compiler-rt/test/asan/TestCases).

## Build the examples

Each example provides source code and compilation instructions for a command-line build. To build each example, open a developer command prompt. Create a folder for your example project, then make it the current directory. Then copy the example code into a source file with the appropriate name, such as *`example1.cpp`*. Follow the build instructions to generate and run the instrumented code in the debugger.

## Examples

- [`alloc-dealloc-mismatch`](./examples-alloc-dealloc-mismatch.md)

- [`allocation-size-too-big`](./examples-allocation-size-too-big.md)

- [`calloc-overflow`](./examples-calloc-overflow.md)

- [`double-free`](./examples-double-free.md)

- [`dynamic-stack-buffer-overflow`](./examples-dynamic-stack-buffer-overflow.md)

- [`global-overflow`](./examples-global-overflow.md)

- [`heap-buffer-overflow`](./examples-heap-buffer-overflow.md)

- [`heap-use-after-free`](./examples-heap-use-after-free.md)

- [`invalid-aligned-alloc-alignment`](./examples-invalid-aligned-alloc-alignment.md)

- [`memcpy-param-overlap`](./examples-memcpy-param-overlap.md)

- [`new-delete-type-mismatch`](./examples-new-delete-type-mismatch.md)

- [`stack-buffer-overflow`](./examples-stack-buffer-overflow.md)

- [`stack-buffer-underflow`](./examples-stack-buffer-underflow.md)

- [`stack-use-after-return`](./examples-stack-use-after-return.md)

- [`stack-use-after-scope`](./examples-stack-use-after-scope.md)

- [`strcat-param-overlap`](./examples-strcat-param-overlap.md)

- [`use-after-poison`](./examples-use-after-poison.md)

## See also

[AddressSanitizer overview](./asan.md)\
[AddressSanitizer known issues](./asan-known-issues.md)\
[AddressSanitizer build and language reference](./asan-building.md)\
[AddressSanitizer runtime reference](./asan-runtime.md)\
[AddressSanitizer shadow bytes](./asan-shadowbytes.md)\
[AddressSanitizer cloud or distributed testing](./asan-offline-crash-dumps.md)\
[AddressSanitizer debugger integration](./asan-debugger-integration.md)
