---
description: "Learn more about: Compiler Error C2297"
title: "Compiler Error C2297"
ms.date: "11/04/2016"
f1_keywords: ["C2297"]
helpviewer_keywords: ["C2297"]
ms.assetid: 65849fe5-17e1-4b7e-b50c-f508b05ddaa4
---
# Compiler Error C2297

'operator' : bad right operand

The right operand used with `operator` is invalid.

For example, the compiler may see a declaration where you intended a function call.

The following sample generates C2297:

```cpp
// C2297.cpp
struct MyStruct {
   struct Help {
      Help(float f) : m_f(f) {}
      float m_f;
   };

   MyStruct(const Help &h) : m_f(h.m_f) {}

   MyStruct(float f) : m_f(f) {}

   MyStruct operator*(const MyStruct &f1) const {
      return MyStruct(m_f * f1.m_f);
   }

private:
   float m_f;
};

int main() {
   float f1 = 1.0f;

   MyStruct m_MyStruct1 ( MyStruct::Help( f1 ) );
   // try the following line instead
   // MyStruct m_MyStruct1 = MyStruct::Help( f1 );

   MyStruct m_MyStruct2 ( MyStruct::Help( f1 ) );
   // try the following line instead
   // MyStruct m_MyStruct2 = MyStruct::Help( f1 );

   MyStruct m_MyStruct3 = m_MyStruct1 * m_MyStruct2;   // C2297
}
```
