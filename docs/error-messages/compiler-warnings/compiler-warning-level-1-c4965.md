---
description: "Learn more about: Compiler Warning (level 1) C4965"
title: "Compiler Warning (level 1) C4965"
ms.date: "11/04/2016"
f1_keywords: ["C4965"]
helpviewer_keywords: ["C4965"]
ms.assetid: 47f3f6dc-459b-4a25-9947-f394c8966cb5
---
# Compiler Warning (level 1) C4965

implicit box of integer 0; use nullptr or explicit cast

Visual C++ features implicit boxing of value types. An instruction that resulted in a null assignment using Managed Extensions for C++ now becomes an assignment to a boxed int.

For more information, see [Boxing](../../extensions/boxing-cpp-component-extensions.md).

## Example

The following sample generates C4965.

```cpp
// C4965.cpp
// compile with: /clr /W1
int main() {
   System::Object ^o = 0;   // C4965

   // the previous line is the same as the following line
   // using Managed Extensions for C++
   // System::Object *o = __box(0);

   // OK
   System::Object ^o2 = nullptr;
   System::Object ^o3 = safe_cast<System::Object^>(0);
}
```
