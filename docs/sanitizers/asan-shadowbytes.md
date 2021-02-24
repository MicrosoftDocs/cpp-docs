---
title: "AddressSanitizer Shadow Bytes"
description: "Technical description of shadow bytes written and read by compiler's generate code and AddressSanitizer runtime."
ms.date: 02/05/2021
f1_keywords: ["Shadow Bytes","AddressSanitizer","Address Sanitizer", "ASan Code Gen", "ASan compiler", "ASan Runtime"]
help viewer_keywords: ["Shadow Bytes","AddressSanitizer","Address Sanitizer", "ASan Code Gen", "ASan compiler", "ASan Runtime"]
---

# AddressSanitizer Shadow Bytes

We briefly summarize the concept of shadow bytes and how they can be used by the runtime implementation of `-fsanitize=address`. For further details, we refer you to the [seminal paper](
https://www.usenix.org/system/files/conference/atc12/atc12-final39.pdf).

## Core concept

Every **8 bytes** in your application's virtual address space can be described with **one shadow byte**.

One shadow byte describes how many bytes are currently accessible as follows:

- 0 means all 8 bytes
- 1-7 means one to seven bytes
- Negative numbers encode context for the runtime to use for reporting diagnostics.

### Shadow byte legend

Consider this shadow byte legend where all negative numbers are defined:

![shadow-legend](.\MEDIA\ASan-ShadowByte-Legend.PNG)

## Mapping - describing your address space

Every 8 bytes in the application's virtual address space that is "0-mod-8" aligned, can be mapped to the shadow byte that describes that slot in the virtual address space.  This mapping can be accomplished with a **simple shift and add**.

On x86:

```cpp
            char shadow_byte_value = *((Your_Address >> 3) + 0x30000000)
```

On x64:

```cpp
            char shadow_byte_value = *((Your_Address >> 3) + _asan_runtime_assigned_offset)
```

## Code generation - tests

If you consider that specific shadow bytes will have been written, either by the compiler-generated code, static data, or the runtime.  Then the following pseudo code shows how it would be simple to generate a check that would precede any load or store.

```cpp
        ShadowAddr = (Addr >> 3) + Offset;
        if (*ShadowAddr != 0) {
            ReportAndCrash(Addr);
        }
```

When instrumenting a memory reference that is less than 8 bytes wide, the instrumentation is slightly more complex. If the shadow value is positive (meaning only the first k bytes in the 8 byte word can be accessed) we need to compare the 3 last bits of the address with k.

```cpp
        ShadowAddr = (Addr >> 3) + Offset;
        k = *ShadowAddr;
        if (k != 0 && ((Addr & 7) + AccessSize > k)) {
            ReportAndCrash(Addr);
        }
```

The runtime and the compiler-generated code, will write shadow bytes. Writing shadow-bytes will allow or revoke access when scopes end or storage is freed. The checks above, are reading shadow bytes that describe 8-byte "slots" in your application's address space, **at a certain time in the programs execution**.

In addition to these explicitly generated checks, the runtime will check shadow bytes after it "intercepts or hooks" many functions in the CRT.  See [the list of intercepted functions](#address-sanitizer-intercepted-functions.md)

## Setting shadow bytes

Both the code the compiler generates and the AddressSanitizer runtime can write shadow bytes. For example, the compiler can set shadow bytes to allow fixed sized access to stack locals defined in an inner scope.  The runtime can surround global variables in the data section with shadow bytes.

## See Also

The AddressSanitizer [algorithm](https://github.com/google/sanitizers/wiki/AddressSanitizerAlgorithm) for further details.

## See also

- [AddressSanitizer Overview](./asan.md)
- [AddressSanitizer Known Issues](./asan-known-issues.md)
- [AddressSanitizer Build and Language Reference](./asan-building.md)
- [AddressSanitizer Runtime Reference](./asan-runtime.md)
- [AddressSanitizer Shadow Bytes](./asan-shadowbytes.md)
- [AddressSanitizer Cloud or Distributed Testing](./asan-offline-crash-dumps.md)
- [AddressSanitizer Debugger Integration](./asan-debugger-integration.md)

> [!NOTE] Send us [feedback](https://aka.ms/feedback/suggest?space=62) on what you would like to see in future releases, and please [report bugs](https://aka.ms/feedback/report?space=62) if you run into issues.