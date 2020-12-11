---
description: "Learn more about: Compiler Warning (level 1) C4621"
title: "Compiler Warning (level 1) C4621"
ms.date: "11/04/2016"
f1_keywords: ["C4621"]
helpviewer_keywords: ["C4621"]
ms.assetid: 40931bd9-cb89-497e-86f0-cec9f016c63c
---
# Compiler Warning (level 1) C4621

no postfix form of 'operator --' found for type 'type', using prefix form

There was no postfix decrement operator defined for the given type. The compiler used the overloaded prefix operator.

This warning can be avoided by defining a postfix `--` operator. Create a two-argument version of the `--` operator as shown below:

```cpp
// C4621.cpp
// compile with: /W1
class A
{
public:
   A(int nData) : m_nData(nData)
   {
   }

   A operator--()
   {
      m_nData -= 1;
      return *this;
   }

   // A operator--(int)
   // {
   //    A tmp = *this;
   //    m_nData -= 1;
   //    return tmp;
   // }

private:
   int m_nData;
};

int main()
{
   A a(10);
   --a;
   a--;   // C4621
}
```
