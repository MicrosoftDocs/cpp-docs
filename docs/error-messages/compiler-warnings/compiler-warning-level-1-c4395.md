---
description: "Learn more about: Compiler Warning (level 1) C4395"
title: "Compiler Warning (level 1) C4395"
ms.date: "11/04/2016"
f1_keywords: ["C4395"]
helpviewer_keywords: ["C4395"]
ms.assetid: 8051469a-3a39-4677-80f7-1300fbffe8ea
---
# Compiler Warning (level 1) C4395

'function' : member function will be invoked on a copy of the initonly data member 'member'

A member function was called on an [initonly (C++/CLI)](../../dotnet/initonly-cpp-cli.md) data member.  C4395 warns that the **initonly** data member cannot be modified by the function.

The following sample generates C4395:

```cpp
// C4395.cpp
// compile with: /W1 /clr
public value class V {
public:
   V(int data) : m_data(data) {}

   void Mutate() {
      System::Console::WriteLine("Enter Mutate: m_data = {0}", m_data);
      m_data *= 2;
      System::Console::WriteLine("Leave Mutate: m_data = {0}", m_data);
   }

   int m_data;
};

public ref class R {
public:
   static void f() {
      System::Console::WriteLine("v.m_data = {0}", v.m_data);
      v.Mutate();   // C4395
      System::Console::WriteLine("v.m_data = {0}", v.m_data);
   }

private:
   initonly static V v = V(4);
};

int main() {
   R::f();
}
```
