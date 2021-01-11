---
description: "Learn more about: Compiler Warning (level 3) C4608"
title: "Compiler Warning (level 3) C4608"
ms.date: "11/04/2016"
f1_keywords: ["C4608"]
helpviewer_keywords: ["C4608"]
ms.assetid: 8b8f5f28-8ce9-457e-9d3d-a8c0efce9b6a
---
# Compiler Warning (level 3) C4608

'union_member' has already been initialized by another union member in the initializer list, 'union_member'

Two members of the same union were initialized in an initialization list. You can only access one member of the union.

The following sample generates C4608:

```cpp
// C4608.cpp
// compile with: /W3 /c
class X {
public:
   X(char c) : m_i( c + 1), m_c(c) {}   // C4608
   // try the following line instead
   // X(char c) : m_c(c) {}

private:
   union {
      int m_i;
      char m_c;
   };
};

union Y {
public:
   Y(char * name) : m_number(0.3), m_string( name ) {} // C4608

private:
   double m_number;
   char * m_string;
};
```
