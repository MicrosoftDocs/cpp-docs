---
description: "Learn more about: Compiler Warning (level 1) C4692"
title: "Compiler Warning (level 1) C4692"
ms.date: "11/04/2016"
f1_keywords: ["C4692"]
helpviewer_keywords: ["C4692"]
ms.assetid: f6fb3acc-8228-491a-9c30-ce302d8a9c75
---
# Compiler Warning (level 1) C4692

'function': signature of non-private member contains assembly private native type 'native_type'

A type that is visible outside the assembly contains a member function whose signature contains a native type that is not visible outside the assembly. Therefore, the member function should not be called if its containing type is instantiated outside the assembly.

For more information, see [Type visibility](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Type_visibility).

This warning is off by default. For more information, see [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md).

## Example

The following sample generates C4692.

```cpp
// C4692.cpp
// compile with: /W1 /c /clr
#pragma warning(default:4692)
class Private_Native_Class {};
public class Public_Native_Class {};
public ref class Public_Ref_Class {
public:
   void Test(Private_Native_Class *) {}   // C4692
   void Test2(Public_Native_Class *) {}   // OK
};
```
