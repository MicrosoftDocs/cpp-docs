---
description: "Learn more about: User-Defined Operators (C++/CLI)"
title: "User-Defined Operators (C++/CLI)"
ms.date: "11/04/2016"
helpviewer_keywords: ["user-defined operators under /clr"]
ms.assetid: 42f93b4a-6de4-4e34-b07b-5a62ac014f2c
---
# User-Defined Operators (C++/CLI)

User-defined operators for managed types are allowed as static members or instance members, or at global scope. However, only static operators are accessible through metadata to clients that are written in a language other than Visual C++.

In a reference type, one of the parameters of a static user-defined operator must be one of these:

- A handle (`type` ^) to an instance of the enclosing type.

- A reference type indirection (`type`^& or type^%) to a handle to an instance of the enclosing type.

In a value type, one of the parameters of a static user-defined operator must be one of these:

- Of the same type as the enclosing value type.

- A pointer type indirection (`type`^) to the enclosing type.

- A reference type indirection (`type`% or `type`&) to the enclosing type.

- A reference type indirection (`type`^% or `type`^&) to the handle.

You can define the following operators:

|Operator|Unary/Binary Forms?|
|--------------|--------------------------|
|!|Unary|
|!=|Binary|
|%|Binary|
|&|Unary and Binary|
|&&|Binary|
|*|Unary and Binary|
|+|Unary and Binary|
|++|Unary|
|,|Binary|
|-|Unary and Binary|
|--|Unary|
|->|Unary|
|/|Binary|
|<|Binary|
|<<|Binary|
|\<=|Binary|
|=|Binary|
|==|Binary|
|>|Binary|
|>=|Binary|
|>>|Binary|
|^|Binary|
|false|Unary|
|true|Unary|
|&#124;|Binary|
|&#124;&#124;|Binary|
|~|Unary|

## Example: User-defined operators

```cpp
// mcppv2_user-defined_operators.cpp
// compile with: /clr
using namespace System;
public ref struct X {
   X(int i) : m_i(i) {}
   X() {}

   int m_i;

   // static, binary, user-defined operator
   static X ^ operator + (X^ me, int i) {
      return (gcnew X(me -> m_i + i));
   }

   // instance, binary, user-defined operator
   X^ operator -( int i ) {
      return gcnew X(this->m_i - i);
   }

   // instance, unary, user-defined pre-increment operator
   X^ operator ++() {
      return gcnew X(this->m_i++);
   }

   // instance, unary, user-defined post-increment operator
   X^ operator ++(int i) {
      return gcnew X(this->m_i++);
   }

   // static, unary user-defined pre- and post-increment operator
   static X^ operator-- (X^ me) {
      return (gcnew X(me -> m_i - 1));
   }
};

int main() {
   X ^hX = gcnew X(-5);
   System::Console::WriteLine(hX -> m_i);

   hX = hX + 1;
   System::Console::WriteLine(hX -> m_i);

   hX = hX - (-1);
   System::Console::WriteLine(hX -> m_i);

   ++hX;
   System::Console::WriteLine(hX -> m_i);

   hX++;
   System::Console::WriteLine(hX -> m_i);

   hX--;
   System::Console::WriteLine(hX -> m_i);

   --hX;
   System::Console::WriteLine(hX -> m_i);
}
```

```Output
-5
-4
-3
-2
-1
-2
-3
```

## Example: Operator synthesis

The following sample demonstrates operator synthesis, which is only available when you use **/clr** to compile. Operator synthesis creates the assignment form of a binary operator, if one is not defined, where the left-hand side of the assignment operator has a CLR type.

```cpp
// mcppv2_user-defined_operators_2.cpp
// compile with: /clr
ref struct A {
   A(int n) : m_n(n) {};
   static A^ operator + (A^ r1, A^ r2) {
      return gcnew A( r1->m_n + r2->m_n);
   };
   int m_n;
};

int main() {
   A^ a1 = gcnew A(10);
   A^ a2 = gcnew A(20);

   a1 += a2;   // a1 = a1 + a2   += not defined in source
   System::Console::WriteLine(a1->m_n);
}
```

```Output
30
```

## See also

[Classes and Structs](../extensions/classes-and-structs-cpp-component-extensions.md)
