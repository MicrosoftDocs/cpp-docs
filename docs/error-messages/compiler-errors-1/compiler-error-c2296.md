---
description: "Learn more about: Compiler Error C2296"
title: "Compiler Error C2296"
ms.date: "11/04/2016"
f1_keywords: ["C2296"]
helpviewer_keywords: ["C2296"]
ms.assetid: 47d270f4-13ce-4c16-81e2-7d67c6c4a540
---
# Compiler Error C2296

'operator' : bad left operand

The left operand used with `operator` is invalid.

For example, the compiler may see a declaration where you intended a function call.

The following sample generates C2296:

```cpp
// C2296.cpp
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

   MyStruct m_MyStruct3 = m_MyStruct1 * m_MyStruct2;   // C2296
}
```
