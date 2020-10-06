---
title: "Address-of Operator: &amp;"
description: "The address-of operator in the C++ language."
ms.date: 10/02/2020
f1_keywords: ["&"]
helpviewer_keywords: ["address-of operator (&)", "& operator", "& operator [C++], address-of operator"]
ms.assetid: 2828221a-15f6-4acc-87fe-25e34feebb88
---
# Address-of Operator: &amp;

## Syntax

> **`&`** *`cast-expression`*

## Remarks

The unary address-of operator (**`&`**) takes the address of its operand. The operand of the address-of operator can be either a function designator or an l-value that designates an object that's not a bit field.

The address-of operator can only be applied to variables of fundamental, structure, class, or union types that are declared at the file-scope level, or to subscripted array references. In these expressions, a constant expression that doesn't include the address-of operator can be added to or subtracted from the address-of expression.

When applied to functions or l-values, the result of the expression is a pointer type (an r-value) derived from the type of the operand. For example, if the operand is of type **`char`**, the result of the expression is of type pointer to **`char`**. The address-of operator, applied to **`const`** or **`volatile`** objects, evaluates to `const type *` or `volatile type *`, where `type` is the type of the original object.

The address of an overloaded function can be taken only when it's clear which version of the function is being referenced. See [Function Overloading](function-overloading.md) for information about how to obtain the address of a particular overloaded function.

When the address-of operator is applied to a qualified name, the result depends on whether the *qualified-name* specifies a static member. If so, the result is a pointer to the type specified in the declaration of the member. If the member isn't static, the result is a pointer to the member *name* of the class indicated by *qualified-class-name*. For more information about *qualified-class-name*, see [Primary expressions](../cpp/primary-expressions.md).

## Example: Address of static member

The following code fragment shows how the address-of operator result differs, depending on whether a class member is static:

```cpp
// expre_Address_Of_Operator.cpp
// C2440 expected
class PTM {
public:
    int iValue;
    static float fValue;
};

int main() {
   int   PTM::*piValue = &PTM::iValue;  // OK: non-static
   float PTM::*pfValue = &PTM::fValue;  // C2440 error: static
   float *spfValue     = &PTM::fValue;  // OK
}
```

In this example, the expression `&PTM::fValue` yields type `float *` instead of type `float PTM::*` because `fValue` is a static member.

## Example: Address of a reference type

Applying the address-of operator to a reference type gives the same result as applying the operator to the object to which the reference is bound. For example:

```cpp
// expre_Address_Of_Operator2.cpp
// compile with: /EHsc
#include <iostream>
using namespace std;
int main() {
   double d;        // Define an object of type double.
   double& rd = d;  // Define a reference to the object.

   // Obtain and compare their addresses
   if( &d == &rd )
      cout << "&d equals &rd" << endl;
}
```

```Output
&d equals &rd
```

## Example: Function address as parameter

The following example uses the address-of operator to pass a pointer argument to a function:

```cpp
// expre_Address_Of_Operator3.cpp
// compile with: /EHsc
// Demonstrate address-of operator &

#include <iostream>
using namespace std;

// Function argument is pointer to type int
int square( int *n ) {
   return (*n) * (*n);
}

int main() {
   int mynum = 5;
   cout << square( &mynum ) << endl;   // pass address of int
}
```

```Output
25
```

## See also

[Expressions with Unary Operators](../cpp/expressions-with-unary-operators.md)<br/>
[C++ Built-in Operators, Precedence, and Associativity](../cpp/cpp-built-in-operators-precedence-and-associativity.md)<br/>
[Lvalue Reference Declarator: &](../cpp/lvalue-reference-declarator-amp.md)<br/>
[Indirection and Address-of Operators](../c-language/indirection-and-address-of-operators.md)
