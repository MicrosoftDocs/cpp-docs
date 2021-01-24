---
description: "Learn more about: Pointer-to-Member Operators: .* and -&gt;*"
title: "Pointer-to-Member Operators: .* and -&gt;*"
ms.date: "11/04/2016"
f1_keywords: [".*", "->*"]
helpviewer_keywords: ["expressions [C++], pointer", "pointer-to-member operators [C++]", ".* operator", "expressions [C++], operators", "->* operator"]
ms.assetid: 2632be3f-1c81-4523-b56c-982a92a68688
---
# Pointer-to-Member Operators: .* and -&gt;*

## Syntax

```
expression .* expression
expression ->* expression
```

## Remarks

The pointer-to-member operators, .* and ->\*, return the value of a specific class member for the object specified on the left side of the expression.  The right side must specify a member of the class.  The following example shows how to use these operators:

```cpp
// expre_Expressions_with_Pointer_Member_Operators.cpp
// compile with: /EHsc
#include <iostream>

using namespace std;

class Testpm {
public:
   void m_func1() { cout << "m_func1\n"; }
   int m_num;
};

// Define derived types pmfn and pmd.
// These types are pointers to members m_func1() and
// m_num, respectively.
void (Testpm::*pmfn)() = &Testpm::m_func1;
int Testpm::*pmd = &Testpm::m_num;

int main() {
   Testpm ATestpm;
   Testpm *pTestpm = new Testpm;

// Access the member function
   (ATestpm.*pmfn)();
   (pTestpm->*pmfn)();   // Parentheses required since * binds
                        // less tightly than the function call.

// Access the member data
   ATestpm.*pmd = 1;
   pTestpm->*pmd = 2;

   cout  << ATestpm.*pmd << endl
         << pTestpm->*pmd << endl;
   delete pTestpm;
}
```

## Output

```Output
m_func1
m_func1
1
2
```

In the preceding example, a pointer to a member, `pmfn`, is used to invoke the member function `m_func1`. Another pointer to a member, `pmd`, is used to access the `m_num` member.

The binary operator .* combines its first operand, which must be an object of class type, with its second operand, which must be a pointer-to-member type.

The binary operator ->* combines its first operand, which must be a pointer to an object of class type, with its second operand, which must be a pointer-to-member type.

In an expression containing the .* operator, the first operand must be of the class type of, and be accessible to, the pointer to member specified in the second operand or of an accessible type unambiguously derived from and accessible to that class.

In an expression containing the ->* operator, the first operand must be of the type "pointer to the class type" of the type specified in the second operand, or it must be of a type unambiguously derived from that class.

## Example

Consider the following classes and program fragment:

```cpp
// expre_Expressions_with_Pointer_Member_Operators2.cpp
// C2440 expected
class BaseClass {
public:
   BaseClass(); // Base class constructor.
   void Func1();
};

// Declare a pointer to member function Func1.
void (BaseClass::*pmfnFunc1)() = &BaseClass::Func1;

class Derived : public BaseClass {
public:
   Derived();  // Derived class constructor.
   void Func2();
};

// Declare a pointer to member function Func2.
void (Derived::*pmfnFunc2)() = &Derived::Func2;

int main() {
   BaseClass ABase;
   Derived ADerived;

   (ABase.*pmfnFunc1)();   // OK: defined for BaseClass.
   (ABase.*pmfnFunc2)();   // Error: cannot use base class to
                           // access pointers to members of
                           // derived classes.

   (ADerived.*pmfnFunc1)();   // OK: Derived is unambiguously
                              // derived from BaseClass.
   (ADerived.*pmfnFunc2)();   // OK: defined for Derived.
}
```

The result of the .* or ->\* pointer-to-member operators is an object or function of the type specified in the declaration of the pointer to member. So, in the preceding example, the result of the expression `ADerived.*pmfnFunc1()` is a pointer to a function that returns void. This result is an l-value if the second operand is an l-value.

> [!NOTE]
> If the result of one of the pointer-to-member operators is a function, then the result can be used only as an operand to the function call operator.

## See also

[C++ Built-in Operators, Precedence and Associativity](../cpp/cpp-built-in-operators-precedence-and-associativity.md)
