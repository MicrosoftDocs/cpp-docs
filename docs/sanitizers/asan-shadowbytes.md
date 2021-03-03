---
title: "AddressSanitizer shadow bytes"
description: "Technical description of shadow bytes written and read by the compiler-generated code and AddressSanitizer runtime."
ms.date: 03/02/2021
helpviewer_keywords: ["Shadow bytes", "AddressSanitizer shadow bytes","Address Sanitizer shadow bytes", "ASan shadow bytes"]
---

# AddressSanitizer shadow bytes

We briefly summarize the concept of shadow bytes and how they can be used by the runtime implementation of [`/fsanitize=address`](../build/reference/fsanitize.md). For further details, we refer you to the [seminal paper](https://www.usenix.org/system/files/conference/atc12/atc12-final39.pdf) and the [AddressSanitizer algorithm](https://github.com/google/sanitizers/wiki/AddressSanitizerAlgorithm).

## Core concept

Every **8 bytes** in your application's virtual address space can be described using **one shadow byte**.

One shadow byte describes how many bytes are currently accessible as follows:

- 0 means all 8 bytes
- 1-7 means one to seven bytes
- Negative numbers encode context for the runtime to use for reporting diagnostics.

### Shadow byte legend

Consider this shadow byte legend where all negative numbers are defined:

:::image type="content" source="./media/asan-shadow-byte-legend.png" alt-text="Screenshot of the AddressSanitizer shadow-byte legend.":::

## Mapping - describing your address space

Every 8 bytes in the application's virtual address space that's "0-mod-8" aligned can be mapped to the shadow byte that describes that slot in the virtual address space.  This mapping can be accomplished with a **simple shift and add**.

On x86:

```cpp
char shadow_byte_value = *((Your_Address >> 3) + 0x30000000)
```

On x64:

```cpp
char shadow_byte_value = *((Your_Address >> 3) + _asan_runtime_assigned_offset)
```

## Code generation - tests

Consider how specific shadow bytes might get written, either by the compiler-generated code, static data, or the runtime. This pseudo-code shows how it's possible to generate a check that precedes any load or store:

```cpp
ShadowAddr = (Addr >> 3) + Offset;
if (*ShadowAddr != 0) {
    ReportAndCrash(Addr);
}
```

When instrumenting a memory reference that's less than 8 bytes wide, the instrumentation is slightly more complex. If the shadow value is positive (meaning only the first k bytes in the 8-byte word can be accessed), we need to compare the last 3 bits of the address with k.

```cpp
ShadowAddr = (Addr >> 3) + Offset;
k = *ShadowAddr;
if (k != 0 && ((Addr & 7) + AccessSize > k)) {
    ReportAndCrash(Addr);
}
```

The runtime and the compiler-generated code both write shadow bytes. These shadow bytes either allow or revoke access when scopes end or storage is freed. The checks above read shadow bytes that describe 8-byte "slots" in your application's address space, at a certain time in the program's execution. Besides these explicitly generated checks, the runtime also checks shadow bytes after it intercepts (or "hooks") many functions in the CRT.

For more information, see the list of [intercepted functions](./asan-runtime.md#default-interceptors).

## Setting shadow bytes

Both the code the compiler generates and the AddressSanitizer runtime can write shadow bytes. For example, the compiler can set shadow bytes to allow fixed sized access to stack locals defined in an inner scope. The runtime can surround global variables in the data section with shadow bytes.

## See also

[AddressSanitizer overview](./asan.md)\
[AddressSanitizer known issues](./asan-known-issues.md)\
[AddressSanitizer build and language reference](./asan-building.md)\
[AddressSanitizer runtime reference](./asan-runtime.md)\
[AddressSanitizer cloud or distributed testing](./asan-offline-crash-dumps.md)\
[AddressSanitizer debugger integration](./asan-debugger-integration.md)\
[AddressSanitizer error examples](./asan-error-examples.md)
