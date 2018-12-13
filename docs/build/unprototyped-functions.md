---
title: "Unprototyped Functions (C++) - Visual Studio"
ms.date: "12/14/2018"
ms.assetid: 34200b8c-5b52-4f0d-aff8-9f70d82868ed
---
# Unprototyped Functions

For functions not fully prototyped, the caller will pass integer values as integers and floating-point values as double precision. For floating-point values only, both the integer register and the floating-point register will contain the float value in case the callee expects the value in the integer registers.

```
func1();
func2() {   // RCX = 2, RDX = XMM1 = 1.0, and R8 = 7
   func1(2, 1.0, 7);
}
```

## See Also

[Calling Convention](calling-convention.md)