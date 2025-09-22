---
title: "Compiler Warning (level 1) C4407"
description: "Learn more about: Compiler Warning (level 1) C4407"
ms.date: 04/13/2021
f1_keywords: ["C4407"]
helpviewer_keywords: ["C4407"]
---
# Compiler Warning (level 1) C4407

> cast between different pointer to member representations, compiler may generate incorrect code

## Remarks

An incorrect cast between pointer-to-member types was detected.

C4407 can be generated because of compiler conformance work that was done in Visual Studio 2005. Pointer-to-member now requires a qualified name and the address-of operator (&).

C4407 can occur if you cast between a multiple inheritance pointer-to-member to a single inheritance pointer-to-member. Sometimes this can work, but sometimes it can't because the single inheritance pointer-to-member representation doesn't hold sufficient information. Compiling with the **`/vmm`** might help. For more information, see [`/vmm`, `/vms`, `/vmv` (General purpose representation)](../../build/reference/vmm-vms-vmv-general-purpose-representation.md). You can also try rearranging your base classes; the compiler is detecting a loss of information in the conversion because a base class is at a non-zero offset from the derived.

## Example

The following example generates C4407 and shows how to fix it:

```cpp
// C4407.cpp
// compile with: /W1 /c
struct C1 {};
struct C2 {};
struct C3 : C1, C2 {};

typedef void(C3::*PMF_C3)();
typedef void(C2::*PMF_C2)();

PMF_C2 f1(PMF_C3 pmf) {
   return (PMF_C2)pmf;   // C4407, change type of cast,
   // or reverse base class inheritance of C3 (i.e. : C2, C1)
}
```
