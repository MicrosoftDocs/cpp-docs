---
description: "Learn more about: Compiler Error C2216"
title: "Compiler Error C2216"
ms.date: "11/04/2016"
f1_keywords: ["C2216"]
helpviewer_keywords: ["C2216"]
ms.assetid: 250f6bdc-a5e1-495f-a1e8-6e8e7021ad9d
---
# Compiler Error C2216

'keyword1' cannot be used with ' keyword2'

Two keywords that are mutually exclusive were used together.

## Examples

The following sample generates C2216.

```cpp
// C2216.cpp
// compile with: /clr /c
ref struct Y1 {
   literal
   static int staticConst2 = 10;   // C2216
};
```

The following sample generates C2216.

```cpp
// C2216b.cpp
// compile with: /clr /c
public ref class X {
   extern property int i { int get(); }   // C2216 extern not allowed on property
   typedef property int i2;   // C2216 typedef not allowed on property
};
```

The following sample generates C2216.

```cpp
// C2216c.cpp
// compile with: /clr /c
public interface struct I {
   double f();
   double g();
   double h();
};

public ref struct R : I {
   virtual double f() new override { return 0.0; }   // C2216
   virtual double g() new { return 0.0; }   // OK
   virtual double h() override { return 0.0; }   // OK
};
```
