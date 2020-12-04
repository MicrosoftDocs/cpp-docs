---
description: "Learn more about: Compiler Error C2144"
title: "Compiler Error C2144"
ms.date: "11/04/2016"
f1_keywords: ["C2144"]
helpviewer_keywords: ["C2144"]
ms.assetid: 49f3959b-324f-4c06-9588-c0ecef5dc5b3
---
# Compiler Error C2144

> syntax error : '*type*' should be preceded by '*token*'

The compiler expected *token* and found *type* instead.

This error may be caused by a missing closing brace, right parenthesis, or semicolon.

C2144 can also occur when attempting to create a macro from a CLR keyword that contains a white space character.

You may also see C2144 if you are trying to do type forwarding. See [Type Forwarding (C++/CLI)](../../extensions/type-forwarding-cpp-cli.md) for more information.

## Examples

The following sample generates C2144, and shows a way to fix it:

```cpp
// C2144.cpp
// compile with: /clr /c
#define REF ref
REF struct MyStruct0;   // C2144

// OK
#define REF1 ref struct
REF1 MyStruct1;
```

The following sample generates C2144, and shows a way to fix it:

```cpp
// C2144_2.cpp
// compile with: /clr /c
ref struct X {

   property double MultiDimProp[,,] {   // C2144
   // try the following line instead
   // property double MultiDimProp[int , int, int] {
      double get(int, int, int) { return 1; }
      void set(int i, int j, int k, double l) {}
   }

   property double MultiDimProp2[] {   // C2144
   // try the following line instead
   // property double MultiDimProp2[int] {
      double get(int) { return 1; }
      void set(int i, double l) {}
   }
};
```
