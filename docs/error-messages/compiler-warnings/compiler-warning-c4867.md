---
description: "Learn more about: Compiler Warning C4867"
title: "Compiler Warning C4867"
ms.date: "11/04/2016"
f1_keywords: ["C4867"]
helpviewer_keywords: ["C4867"]
ms.assetid: 8a257d70-c3a7-462d-b285-e57c952a8bf7
---
# Compiler Warning C4867

'function': function call missing argument list; use 'call' to create a pointer to member

A pointer to member function was initialized incorrectly.

This warning can be generated as a result of compiler conformance work that was done for Visual Studio 2005: enhanced pointer-to-member conformance.  Code that compiled prior to Visual Studio 2005 will now generate C4867.

This warning is always issued as an error. Use the [warning](../../preprocessor/warning.md) pragma to disable this warning. For more information about C4867 and MFC/ATL, see [_ATL_ENABLE_PTM_WARNING](../../atl/reference/compiler-options-macros.md#_atl_enable_ptm_warning).

## Example

The following sample generates C4867.

```cpp
// C4867.cpp
// compile with: /c
class A {
public:
   void f(int) {}

   typedef void (A::*TAmtd)(int);

   struct B {
      TAmtd p;
   };

   void g() {
      B b = {f};   // C4867
      B b2 = {&A::f};   // OK
   }
};
```
