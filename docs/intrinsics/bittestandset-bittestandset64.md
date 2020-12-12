---
description: "Learn more about: _bittestandset, _bittestandset64"
title: "_bittestandset, _bittestandset64"
ms.date: "09/02/2019"
f1_keywords: ["_bittestandset_cpp", "_bittestandset64_cpp", "_bittestandset64", "_bittestandset"]
helpviewer_keywords: ["bts instruction", "_bittestandset intrinsic", "_bittestandset64 intrinsic"]
ms.assetid: 6d6c8670-fea0-4c1c-9aad-2bb842715203
---
# _bittestandset, _bittestandset64

**Microsoft Specific**

Generate an instruction to examine bit `b` of the address `a`, return its current value, and set the bit to 1.

## Syntax

```C
unsigned char _bittestandset(
   long *a,
   long b
);
unsigned char _bittestandset64(
   __int64 *a,
   __int64 b
);
```

### Parameters

*a*\
[in, out] A pointer to the memory to examine.

*b*\
[in] The bit position to test.

## Return value

The bit at the position specified.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`_bittestandset`|x86, ARM, x64, ARM64|
|`_bittestandset64`|x64, ARM64|

**Header file** \<intrin.h>

## Remarks

This routine is only available as an intrinsic.

## Example

```cpp
// bittestandset.cpp
// processor: x86, ARM, x64
// This example uses several of the _bittest family of intrinsics
// to implement a Flags class that allows bit level access to an
// integer field.
#include <stdio.h>
#include <intrin.h>

#pragma intrinsic(_bittestandset, _bittestandreset,\
                  _bittestandcomplement, _bittest)

class Flags
{
private:
    long flags;
    long* oldValues;

public:
    Flags() : flags(0)
    {
        oldValues = new long[32];
    }

    ~Flags()
    {
        delete oldValues;
    }

    void SetFlagBit(long nBit)
    {
        // We omit range checks on the argument
        oldValues[nBit] = _bittestandset(&flags, nBit);
        printf_s("Flags: 0x%x\n", flags);
    }
    void ClearFlagBit(long nBit)
    {
        oldValues[nBit] = _bittestandreset(&flags, nBit);
        printf_s("Flags: 0x%x\n", flags);
    }
    unsigned char GetFlagBit(long nBit)
    {
        unsigned char result = _bittest(&flags, nBit);
        printf_s("Flags: 0x%x\n", flags);
        return result;
    }
    void RestoreFlagBit(long nBit)
    {
        if (oldValues[nBit])
            oldValues[nBit] = _bittestandset(&flags, nBit);
        else
            oldValues[nBit] = _bittestandreset(&flags, nBit);
        printf_s("Flags: 0x%x\n", flags);
    }
    unsigned char ToggleBit(long nBit)
    {
        unsigned char result = _bittestandcomplement(&flags, nBit);
        printf_s("Flags: 0x%x\n", flags);
        return result;
    }
};

int main()
{
    Flags f;
    f.SetFlagBit(1);
    f.SetFlagBit(2);
    f.SetFlagBit(3);
    f.ClearFlagBit(3);
    f.ToggleBit(1);
    f.RestoreFlagBit(2);
}
```

```Output
Flags: 0x2
Flags: 0x6
Flags: 0xe
Flags: 0x6
Flags: 0x4
Flags: 0x0
```

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)
