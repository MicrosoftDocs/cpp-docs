---
description: "Learn more about: Compiler Warning (level 4, off) C4435"
title: "Compiler Warning (level 4, off) C4435"
ms.date: "1/22/2025"
f1_keywords: ["C4435"]
helpviewer_keywords: ["C4435"]
---
# Compiler warning (level 4, off) C4435

> '*derived_class*': Object layout under `/vd2` will change due to virtual base '*base_class*'

## Remarks

This warning is off by default. For more information, see [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md).

Under the default compile option of `/vd1`, the derived class doesn't have a `vtordisp` field for the indicated virtual base. If `/vd2` or `#pragma vtordisp(2)` is in effect, a `vtordisp` field is present, changing the object layout. This difference can lead to binary compatibility problems if interacting modules are compiled with different `vtordisp` settings.

## Example

The following example generates C4435.

```cpp
// C4435.cpp
// compile with: /c /W4
#pragma warning(default : 4435)
class A
{
public:
    virtual ~A() {}
};

class B : public virtual A  // C4435
{};
```

## See also

[`vtordisp`](../../preprocessor/vtordisp.md)\
[`/vd` (Disable Construction Displacements)](../../build/reference/vd-disable-construction-displacements.md)
