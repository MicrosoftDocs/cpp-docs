---
description: "Learn more about the conform pragma directive in Microsoft C/C++"
title: "conform pragma"
ms.date: 01/22/2021
f1_keywords: ["conform_CPP", "vc-pragma.conform"]
helpviewer_keywords: ["conform pragma", "forScope conform pragma", "pragma, conform"]
no-loc: ["pragma"]
---
# `conform` pragma

**C++ Specific**

Specifies the run-time behavior of the [`/Zc:forScope`](../build/reference/zc-forscope-force-conformance-in-for-loop-scope.md) compiler option.

## Syntax

> **`#pragma conform(`** *name* [ **`, show`** ] [ **`,`** { **`on`** | **`off`** } ] [ [ **`,`** { **`push`** | **`pop`** } ] [ **`,`** *identifier* [ **`,`** { **`on`** | **`off`** } ] ] ] **`)`**

### Parameters

*name*\
Specifies the name of the compiler option to be modified. The only valid *name* is `forScope`.

**`show`**\
(Optional) Causes the current setting of *name* (true or false) to be displayed by means of a warning message during compilation. For example, `#pragma conform(forScope, show)`.

**`on`**, **`off`**\
(Optional) Setting *name* to **`on`** enables the [/Zc:forScope](../build/reference/zc-forscope-force-conformance-in-for-loop-scope.md) compiler option. The default is **`off`**.

**`push`**\
(Optional) Pushes the current value of *name* onto the internal compiler stack. If you specify *identifier*, you can specify the **`on`** or **`off`** value for *name* to be pushed onto the stack. For example, `#pragma conform(forScope, push, myname, on)`.

**`pop`**\
(Optional) Sets the value of *name* to the value at the top of the internal compiler stack and then pops the stack. If identifier is specified with **`pop`**, the stack will be popped back until it finds the record with *identifier*, which will also be popped; the current value for *name* in the next record on the stack becomes the new value for *name*. If you specify **`pop`** with an *identifier* that is not in a record on the stack, the **`pop`** is ignored.

*identifier*\
(Optional) Can be included with a **`push`** or **`pop`** command. If *identifier* is used, then an **`on`** or **`off`** specifier can also be used.

## Example

```cpp
// pragma_directive_conform.cpp
// compile with: /W1
// C4811 expected
#pragma conform(forScope, show)
#pragma conform(forScope, push, x, on)
#pragma conform(forScope, push, x1, off)
#pragma conform(forScope, push, x2, off)
#pragma conform(forScope, push, x3, off)
#pragma conform(forScope, show)
#pragma conform(forScope, pop, x1)
#pragma conform(forScope, show)

int main() {}
```

## See also

[Pragma directives and the `__pragma` and `_Pragma` keywords](./pragma-directives-and-the-pragma-keyword.md)
