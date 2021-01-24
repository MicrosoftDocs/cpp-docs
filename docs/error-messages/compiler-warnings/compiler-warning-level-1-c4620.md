---
description: "Learn more about: Compiler Warning (level 1) C4620"
title: "Compiler Warning (level 1) C4620"
ms.date: "11/04/2016"
f1_keywords: ["C4620"]
helpviewer_keywords: ["C4620"]
ms.assetid: fed29934-b797-47e8-bbea-c7e5f8dd6e93
---
# Compiler Warning (level 1) C4620

no postfix form of 'operator ++' found for type 'type', using prefix form

There is no postfix increment operator defined for the given type. The compiler used the overloaded prefix operator.

This warning can be avoided by defining a postfix `++` operator. Create a two-argument version of the `++` operator as shown here:

```cpp
// C4620.cpp
// compile with: /W1
class A
{
public:
   A(int nData) : m_nData(nData)
   {
   }

   A operator++()
   {
      m_nData -= 1;
      return *this;
   }

   // A operator++(int)
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
   ++a;
   a++;   // C4620
}
```
