---
description: "Learn more about: Compiler Error C3374"
title: "Compiler Error C3374"
ms.date: "11/04/2016"
f1_keywords: ["C3374"]
helpviewer_keywords: ["C3374"]
ms.assetid: 41431299-bd20-47d4-a0c8-1334dd79018b
---
# Compiler Error C3374

can't take address of 'function' unless creating delegate instance

The address of a function was taken in a context other than the creation of a delegate instance.

The following sample generates C3374:

```cpp
// C3374.cpp
// compile with: /clr
public delegate void MyDel(int i);

ref class A {
public:
   void func1(int i) {
      System::Console::WriteLine("in func1 {0}", i);
   }
};

int main() {
   &A::func1;   // C3374

   // OK
   A ^ a = gcnew A;
   MyDel ^ StaticDelInst = gcnew MyDel(a, &A::func1);
}
```

## See also

[How to: Define and Use Delegates (C++/CLI)](../../dotnet/how-to-define-and-use-delegates-cpp-cli.md)
