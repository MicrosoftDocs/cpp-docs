---
description: "Learn more about: Operator overloading"
title: "Operator Overloading"
ms.date: "11/04/2016"
f1_keywords: ["operator_cpp", "operator"]
helpviewer_keywords: ["redefinable operators [C++]", "non-redefinable operators [C++]", "operator keyword [C++]", "operators [C++], overloading", "operator overloading"]
ms.assetid: 56ad4c4f-dd0c-45e0-adaa-08fe98cb1f8e
---
# Operator overloading

The **`operator`** keyword declares a function specifying what *operator-symbol* means when applied to instances of a class. This gives the operator more than one meaning, or "overloads" it. The compiler distinguishes between the different meanings of an operator by examining the types of its operands.

## Syntax

> *type* **`operator`** *operator-symbol* **(** *parameter-list* **)**

## Remarks

You can redefine the function of most built-in operators globally or on a class-by-class basis. Overloaded operators are implemented as functions.

The name of an overloaded operator is **`operator`** *x*, where *x* is the operator as it appears in the following table. For example, to overload the addition operator, you define a function called **operator+**. Similarly, to overload the addition/assignment operator, **+=**, define a function called **operator+=**.

### Redefinable Operators

|Operator|Name|Type|
|--------------|----------|----------|
|**,**|Comma|Binary|
|**!**|Logical NOT|Unary|
|**!=**|Inequality|Binary|
|**%**|Modulus|Binary|
|**%=**|Modulus assignment|Binary|
|**&**|Bitwise AND|Binary|
|**&**|Address-of|Unary|
|**&&**|Logical AND|Binary|
|**&=**|Bitwise AND assignment|Binary|
|**( )**|Function call|—|
|**( )**|Cast Operator|Unary|
|**&#42;**|Multiplication|Binary|
|**&#42;**|Pointer dereference|Unary|
|**&#42;=**|Multiplication assignment|Binary|
|**+**|Addition|Binary|
|**+**|Unary Plus|Unary|
|**++**|Increment <sup>1</sup>|Unary|
|**+=**|Addition assignment|Binary|
|**-**|Subtraction|Binary|
|**-**|Unary negation|Unary|
|**--**|Decrement <sup>1</sup>|Unary|
|**-=**|Subtraction assignment|Binary|
|**->**|Member selection|Binary|
|**->&#42;**|Pointer-to-member selection|Binary|
|**/**|Division|Binary|
|**/=**|Division assignment|Binary|
|**\<**|Less than|Binary|
|**<<**|Left shift|Binary|
|**<<=**|Left shift assignment|Binary|
|**<=**|Less than or equal to|Binary|
|**=**|Assignment|Binary|
|**==**|Equality|Binary|
|**>**|Greater than|Binary|
|**>=**|Greater than or equal to|Binary|
|**>>**|Right shift|Binary|
|**>>=**|Right shift assignment|Binary|
|**[ ]**|Array subscript|—|
|**^**|Exclusive OR|Binary|
|**^=**|Exclusive OR assignment|Binary|
|**&#124;**|Bitwise inclusive OR|Binary|
|**&#124;=**|Bitwise inclusive OR assignment|Binary|
|**&#124;&#124;**|Logical OR|Binary|
|**~**|One's complement|Unary|
|**`delete`**|Delete|—|
|**`new`**|New|—|
|conversion operators|conversion operators|Unary|

<sup>1</sup> Two versions of the unary increment and decrement operators exist: preincrement and postincrement.

See [General Rules for Operator Overloading](../cpp/general-rules-for-operator-overloading.md) for more information. The constraints on the various categories of overloaded operators are described in the following topics:

- [Unary Operators](../cpp/overloading-unary-operators.md)

- [Binary Operators](../cpp/binary-operators.md)

- [Assignment](../cpp/assignment.md)

- [Function Call](../cpp/function-call-cpp.md)

- [Subscripting](../cpp/subscripting.md)

- [Class-Member Access](../cpp/member-access.md)

- [Increment and Decrement](../cpp/increment-and-decrement-operator-overloading-cpp.md).

- [User-Defined Type Conversions](../cpp/user-defined-type-conversions-cpp.md)

The operators shown in the following table cannot be overloaded. The table includes the preprocessor symbols **#** and **##**.

### Nonredefinable Operators

|Operator|Name|
|-|-|
|**.**|Member selection|
|**.&#42;**|Pointer-to-member selection|
|**::**|Scope resolution|
|**? :**|Conditional|
|**#**|Preprocessor convert to string|
|**##**|Preprocessor concatenate|

Although overloaded operators are usually called implicitly by the compiler when they are encountered in code, they can be invoked explicitly the same way as any member or nonmember function is called:

```cpp
Point pt;
pt.operator+( 3 );  // Call addition operator to add 3 to pt.
```

## Example

The following example overloads the **+** operator to add two complex numbers and returns the result.

```cpp
// operator_overloading.cpp
// compile with: /EHsc
#include <iostream>
using namespace std;

struct Complex {
   Complex( double r, double i ) : re(r), im(i) {}
   Complex operator+( Complex &other );
   void Display( ) {   cout << re << ", " << im << endl; }
private:
   double re, im;
};

// Operator overloaded using a member function
Complex Complex::operator+( Complex &other ) {
   return Complex( re + other.re, im + other.im );
}

int main() {
   Complex a = Complex( 1.2, 3.4 );
   Complex b = Complex( 5.6, 7.8 );
   Complex c = Complex( 0.0, 0.0 );

   c = a + b;
   c.Display();
}
```

```Output
6.8, 11.2
```

## In this section

- [General Rules for Operator Overloading](../cpp/general-rules-for-operator-overloading.md)

- [Overloading Unary Operators](../cpp/overloading-unary-operators.md)

- [Binary Operators](../cpp/binary-operators.md)

- [Assignment](../cpp/assignment.md)

- [Function Call](../cpp/function-call-cpp.md)

- [Subscripting](../cpp/subscripting.md)

- [Member Access](../cpp/member-access.md)

## See also

[C++ Built-in Operators, Precedence and Associativity](../cpp/cpp-built-in-operators-precedence-and-associativity.md)<br/>
[Keywords](../cpp/keywords-cpp.md)
