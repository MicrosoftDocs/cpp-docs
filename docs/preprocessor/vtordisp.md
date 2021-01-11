---
description: "Learn more about: vtordisp pragma"
title: "vtordisp pragma"
ms.date: "08/29/2019"
f1_keywords: ["vc-pragma.vtordisp", "vtordisp_CPP"]
helpviewer_keywords: ["pragmas, vtordisp", "vtordisp pragma"]
ms.assetid: 05b7d73c-43fa-4b62-8c8a-170a9e427391
---
# vtordisp pragma

**C++ Specific**

Controls the addition of the hidden `vtordisp` construction/destruction displacement member.

## Syntax

> **#pragma vtordisp(** [ **push,** ] *n* **)**\
> **#pragma vtordisp(pop)**\
> **#pragma vtordisp()**\
> **#pragma vtordisp(** [ **push,** ] { **on** | **off** } **)**

### Parameters

**push**\
Pushes the current `vtordisp` setting on the internal compiler stack, and sets the new `vtordisp` setting to *n*.  If *n* isn't specified, the current `vtordisp` setting is unchanged.

**pop**\
Removes the top record from the internal compiler stack, and restores the `vtordisp` setting to the removed value.

*n*\
Specifies the new value for the `vtordisp` setting. Possible values are 0, 1 or 2, corresponding to the `/vd0`, `/vd1`, and `/vd2` compiler options. For more information, see [/vd (Disable Construction Displacements)](../build/reference/vd-disable-construction-displacements.md).

**on**\
Equivalent to `#pragma vtordisp(1)`.

**off**\
Equivalent to `#pragma vtordisp(0)`.

## Remarks

The **vtordisp** pragma is applicable only to code that uses virtual bases. If a derived class overrides a virtual function that it inherits from a virtual base class, and if a constructor or destructor for the derived class calls that function using a pointer to the virtual base class, the compiler might introduce additional hidden `vtordisp` fields into classes with virtual bases.

The **vtordisp** pragma affects the layout of classes that follow it. The `/vd0`, `/vd1`, and `/vd2` options specify the same behavior for complete modules. Specifying 0 or **off** suppresses the hidden `vtordisp` members. Turn off **vtordisp** only if there's no possibility that the class's constructors and destructors call virtual functions on the object pointed to by the **`this`** pointer.

Specifying 1 or **on**, the default, enables the hidden `vtordisp` members where they're necessary.

Specifying 2 enables the hidden `vtordisp` members for all virtual bases with virtual functions.  `#pragma vtordisp(2)` might be necessary to ensure correct performance of **`dynamic_cast`** on a partially constructed object. For more information, see [Compiler Warning (level 1) C4436](../error-messages/compiler-warnings/compiler-warning-level-1-c4436.md).

`#pragma vtordisp()`, with no arguments, restores the `vtordisp` setting to its initial setting.

```cpp
#pragma vtordisp(push, 2)
class GetReal : virtual public VBase { ... };
#pragma vtordisp(pop)
```

**END C++ Specific**

## See also

[Pragma directives and the __pragma keyword](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
