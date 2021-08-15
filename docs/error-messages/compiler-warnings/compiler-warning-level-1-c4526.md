---
description: "Learn more about: Compiler Warning (level 1) C4526"
title: "Compiler Warning (level 1) C4526"
ms.date: "11/04/2016"
f1_keywords: ["C4526"]
helpviewer_keywords: ["C4526"]
ms.assetid: 490f8916-5fdc-4cad-b412-76c3382a5976
---
# Compiler Warning (level 1) C4526

'function' : static member function cannot override virtual function 'virtual function'override ignored, virtual function will be hidden

The static member function meets the criteria to override the virtual function, which makes the member function both virtual and static.

The following code generates C4526:

```cpp
// C4526.cpp
// compile with: /W1 /c
// C4526 expected
struct myStruct1 {
   virtual void __stdcall func( int ) = 0;
};

struct myStruct2: public myStruct1 {
   static void __stdcall func( int );
};
```

The following are possible fixes:

- If the function was intended to override the base class virtual function, remove the static specifier.

- If the function was intended to be a static member function, rename it so it doesn't conflict with the base class virtual function.
