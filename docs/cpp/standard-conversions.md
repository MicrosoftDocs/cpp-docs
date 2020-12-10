---
description: "Learn more about: Standard conversions"
title: "Standard conversions"
ms.date: "10/02/2019"
helpviewer_keywords: ["standard conversions, categories of", "L-values [C++]", "conversions, standard"]
ms.assetid: ce7ac8d3-5c99-4674-8229-0672de05528d
---
# Standard conversions

The C++ language defines conversions between its fundamental types. It also defines conversions for pointer, reference, and pointer-to-member derived types. These conversions are called *standard conversions*.

This section discusses the following standard conversions:

- Integral promotions

- Integral conversions

- Floating conversions

- Floating and integral conversions

- Arithmetic conversions

- Pointer conversions

- Reference conversions

- Pointer-to-member conversions

  > [!NOTE]
  > User-defined types can specify their own conversions. Conversion of user-defined types is covered in [Constructors](../cpp/constructors-cpp.md) and [Conversions](../cpp/user-defined-type-conversions-cpp.md).

The following code causes conversions (in this example, integral promotions):

```cpp
long  long_num1, long_num2;
int   int_num;

// int_num promoted to type long prior to assignment.
long_num1 = int_num;

// int_num promoted to type long prior to multiplication.
long_num2 = int_num * long_num2;
```

The result of a conversion is an l-value only if it produces a reference type. For example, a user-defined conversion declared as `operator int&()` returns a reference and is an l-value. However, a conversion declared as `operator int()` returns an object and isn't an l-value.

## Integral promotions

Objects of an integral type can be converted to another wider integral type, that is, a type that can represent a larger set of values. This widening type of conversion is called *integral promotion*. With integral promotion, you can use the following types in an expression wherever another integral type can be used:

- Objects, literals, and constants of type **`char`** and **`short int`**

- Enumeration types

- **`int`** bit fields

- Enumerators

C++ promotions are "value-preserving," as the value after the promotion is guaranteed to be the same as the value before the promotion. In value-preserving promotions, objects of shorter integral types (such as bit fields or objects of type **`char`**) are promoted to type **`int`** if **`int`** can represent the full range of the original type. If **`int`** can't represent the full range of values, then the object is promoted to type **`unsigned int`**.  Although this strategy is the same as the one used by Standard C, value-preserving conversions don't preserve the "signedness" of the object.

Value-preserving promotions and promotions that preserve signedness normally produce the same results. However, they can produce different results if the promoted object appears as:

- An operand of `/`, `%`, `/=`, `%=`, `<`, `<=`, `>`, or `>=`

   These operators rely on sign for determining the result. Value-preserving and sign-preserving promotions produce different results when applied to these operands.

- The left operand of `>>` or `>>=`

   These operators treat signed and unsigned quantities differently in a shift operation. For signed quantities, a right shift operation propagates the sign bit into the vacated bit positions, while the vacated bit positions are zero-filled in unsigned quantities.

- An argument to an overloaded function, or the operand of an overloaded operator, that depends on the signedness of the operand type for argument matching. For more information about defining overloaded operators, see [Overloaded operators](../cpp/operator-overloading.md).

## Integral conversions

*Integral conversions* are conversions between integral types. The integral types are **`char`**, **`short`** (or **`short int`**), **`int`**, **`long`**, and **`long long`**. These types may be qualified with **`signed`** or **`unsigned`**, and **`unsigned`** can be used as shorthand for **`unsigned int`**.

### Signed to unsigned

Objects of signed integral types can be converted to corresponding unsigned types. When these conversions occur, the actual bit pattern doesn't change. However, the interpretation of the data changes. Consider this code:

```cpp
#include <iostream>

using namespace std;
int main()
{
    short  i = -3;
    unsigned short u;

    cout << (u = i) << "\n";
}
// Output: 65533
```

In the preceding example, a **`signed short`**, `i`, is defined and initialized to a negative number. The expression `(u = i)` causes `i` to be converted to an **`unsigned short`** before the assignment to `u`.

### Unsigned to signed

Objects of unsigned integral types can be converted to corresponding signed types. However, if the unsigned value is outside the representable range of the signed type, the result won't have the correct value, as demonstrated in the following example:

```cpp
#include <iostream>

using namespace std;
int main()
{
short  i;
unsigned short u = 65533;

cout << (i = u) << "\n";
}
//Output: -3
```

In the preceding example, `u` is an **`unsigned short`** integral object that must be converted to a signed quantity to evaluate the expression `(i = u)`. Because its value can't be properly represented in a **`signed short`**, the data is misinterpreted as shown.

## Floating point conversions

An object of a floating type can be safely converted to a more precise floating type — that is, the conversion causes no loss of significance. For example, conversions from **`float`** to **`double`** or from **`double`** to **`long double`** are safe, and the value is unchanged.

An object of a floating type can also be converted to a less precise type, if it's in a range representable by that type. (See [Floating Limits](../cpp/floating-limits.md) for the ranges of floating types.) If the original value isn't representable precisely, it can be converted to either the next higher or the next lower representable value. The result is undefined if no such value exists. Consider the following example:

```cpp
cout << (float)1E300 << endl;
```

The maximum value representable by type **`float`** is 3.402823466E38 — a much smaller number than 1E300. Therefore, the number is converted to infinity, and the result is "inf".

## Conversions between integral and floating point types

Certain expressions can cause objects of floating type to be converted to integral types, or vice versa. When an object of integral type is converted to a floating type, and the original value isn't representable exactly, the result is either the next higher or the next lower representable value.

When an object of floating type is converted to an integral type, the fractional part is *truncated*, or rounded toward zero. A number like 1.3 is converted to 1, and -1.3 is converted to -1. If the truncated value is higher than the highest representable value, or lower than the lowest representable value, the result is undefined.

## Arithmetic conversions

Many binary operators (discussed in [Expressions with binary operators](../cpp/expressions-with-binary-operators.md)) cause conversions of operands, and yield results the same way. The conversions these operators cause are called *usual arithmetic conversions*. Arithmetic conversions of operands that have different native types are done as shown in the following table. Typedef types behave according to their underlying native types.

### Conditions for type conversion

|Conditions Met|Conversion|
|--------------------|----------------|
|Either operand is of type **`long double`**.|Other operand is converted to type **`long double`**.|
|Preceding condition not met and either operand is of type **`double`**.|Other operand is converted to type **`double`**.|
|Preceding conditions not met and either operand is of type **`float`**.|Other operand is converted to type **`float`**.|
|Preceding conditions not met (none of the operands are of floating types).|Operands get integral promotions as follows:<br /><br />- If either operand is of type **`unsigned long`**, the other operand is converted to type **`unsigned long`**.<br />- If preceding condition not met, and if either operand is of type **`long`** and the other of type **`unsigned int`**, both operands are converted to type **`unsigned long`**.<br />- If the preceding two conditions aren't met, and if either operand is of type **`long`**, the other operand is converted to type **`long`**.<br />- If the preceding three conditions aren't met, and if either operand is of type **`unsigned int`**, the other operand is converted to type **`unsigned int`**.<br />- If none of the preceding conditions are met, both operands are converted to type **`int`**.|

The following code illustrates the conversion rules described in the table:

```cpp
double dVal;
float fVal;
int iVal;
unsigned long ulVal;

int main() {
   // iVal converted to unsigned long
   // result of multiplication converted to double
   dVal = iVal * ulVal;

   // ulVal converted to float
   // result of addition converted to double
   dVal = ulVal + fVal;
}
```

The first statement in the preceding example shows multiplication of two integral types, `iVal` and `ulVal`. The condition met is that neither operand is of floating type, and one operand is of type **`unsigned int`**. So, the other operand, `iVal`, is converted to type **`unsigned int`**. The result is then assigned to `dVal`. The condition met here is that one operand is of type **`double`**, so the **`unsigned int`** result of the multiplication is converted to type **`double`**.

The second statement in the preceding example shows addition of a **`float`** and an integral type: `fVal` and `ulVal`. The `ulVal` variable is converted to type **`float`** (third condition in the table). The result of the addition is converted to type **`double`** (second condition in the table) and assigned to `dVal`.

## Pointer conversions

Pointers can be converted during assignment, initialization, comparison, and other expressions.

### Pointer to classes

There are two cases in which a pointer to a class can be converted to a pointer to a base class.

The first case is when the specified base class is accessible and the conversion is unambiguous. For more information about ambiguous base-class references, see [Multiple base classes](../cpp/multiple-base-classes.md).

Whether a base class is accessible depends on the kind of inheritance used in derivation. Consider the inheritance illustrated in the following figure.

![Inheritance graph showing base&#45;class accessibility](../cpp/media/vc38xa1.gif "Inheritance graph showing base&#45;class accessibility") <br/>
Inheritance Graph for Illustration of Base-Class Accessibility

The following table shows the base-class accessibility for the situation illustrated in the figure.

|Type of Function|Derivation|Conversion from<br /><br /> B* to A\* Legal?|
|----------------------|----------------|-------------------------------------------|
|External (not class-scoped) function|Private|No|
||Protected|No|
||Public|Yes|
|B member function (in B scope)|Private|Yes|
||Protected|Yes|
||Public|Yes|
|C member function (in C scope)|Private|No|
||Protected|Yes|
||Public|Yes|

The second case in which a pointer to a class can be converted to a pointer to a base class is when you use an explicit type conversion. For more information about explicit type conversions, see [Explicit type conversion operator](explicit-type-conversion-operator-parens.md).

The result of such a conversion is a pointer to the *subobject*, the portion of the object that is completely described by the base class.

The following code defines two classes, `A` and `B`, where `B` is derived from `A`. (For more information on inheritance, see [Derived Classes](../cpp/inheritance-cpp.md).) It then defines `bObject`, an object of type `B`, and two pointers (`pA` and `pB`) that point to the object.

```cpp
// C2039 expected
class A
{
public:
    int AComponent;
    int AMemberFunc();
};

class B : public A
{
public:
    int BComponent;
    int BMemberFunc();
};
int main()
{
   B bObject;
   A *pA = &bObject;
   B *pB = &bObject;

   pA->AMemberFunc();   // OK in class A
   pB->AMemberFunc();   // OK: inherited from class A
   pA->BMemberFunc();   // Error: not in class A
}
```

The pointer `pA` is of type `A *`, which can be interpreted as meaning "pointer to an object of type `A`." Members of `bObject` (such as `BComponent` and `BMemberFunc`) are unique to type `B` and are therefore inaccessible through `pA`. The `pA` pointer allows access only to those characteristics (member functions and data) of the object that are defined in class `A`.

### Pointer to function

A pointer to a function can be converted to type `void *`, if type `void *` is large enough to hold that pointer.

### Pointer to void

Pointers to type **`void`** can be converted to pointers to any other type, but only with an explicit type cast (unlike in C). A pointer to any type can be converted implicitly to a pointer to type **`void`**. A pointer to an incomplete object of a type can be converted to a pointer to **`void`** (implicitly) and back (explicitly). The result of such a conversion is equal to the value of the original pointer. An object is considered incomplete if it's declared, but there's insufficient information available to determine its size or base class.

A pointer to any object that is not **`const`** or **`volatile`** can be implicitly converted to a pointer of type `void *`.

### const and volatile pointers

C++ doesn't supply a standard conversion from a **`const`** or **`volatile`** type to a type that's not **`const`** or **`volatile`**. However, any sort of conversion can be specified using explicit type casts (including conversions that are unsafe).

> [!NOTE]
> C++ pointers to members, except pointers to static members, are different from normal pointers and don't have the same standard conversions. Pointers to static members are normal pointers and have the same conversions as normal pointers.

### null pointer conversions

An integral constant expression that evaluates to zero, or such an expression cast to a pointer type, is converted to a pointer called the *null pointer*. This pointer always compares unequal to a pointer to any valid object or function. An exception is pointers to based objects, which can have the same offset and still point to different objects.

In C++11, the [nullptr](../cpp/nullptr.md) type should be preferred to the C-style null pointer.

### Pointer expression conversions

Any expression with an array type can be converted to a pointer of the same type. The result of the conversion is a pointer to the first array element. The following example demonstrates such a conversion:

```cpp
char szPath[_MAX_PATH]; // Array of type char.
char *pszPath = szPath; // Equals &szPath[0].
```

An expression that results in a function returning a particular type is converted to a pointer to a function returning that type, except when:

- The expression is used as an operand to the address-of operator (**&**).

- The expression is used as an operand to the function-call operator.

## Reference conversions

A reference to a class can be converted to a reference to a base class in these cases:

- The specified base class is accessible.

- The conversion is unambiguous. (For more information about ambiguous base-class references, see [Multiple base classes](../cpp/multiple-base-classes.md).)

The result of the conversion is a pointer to the subobject that represents the base class.

## Pointer to member

Pointers to class members can be converted during assignment, initialization, comparison, and other expressions. This section describes the following pointer-to-member conversions:

### Pointer to base class member

A pointer to a member of a base class can be converted to a pointer to a member of a class derived from it, when the following conditions are met:

- The inverse conversion, from pointer to derived class to base-class pointer, is accessible.

- The derived class does not inherit virtually from the base class.

When the left operand is a pointer to member, the right operand must be of pointer-to-member type or be a constant expression that evaluates to 0. This assignment is valid only in the following cases:

- The right operand is a pointer to a member of the same class as the left operand.

- The left operand is a pointer to a member of a class derived publicly and unambiguously from the class of the right operand.

### null pointer to member conversions

An integral constant expression that evaluates to zero is converted to a null pointer. This pointer always compares unequal to a pointer to any valid object or function. An exception is pointers to based objects, which can have the same offset and still point to different objects.

The following code illustrates the definition of a pointer to member `i` in class `A`. The pointer, `pai`, is initialized to 0, which is the null pointer.

```cpp
class A
{
public:
int i;
};

int A::*pai = 0;

int main()
{
}
```

## See also

[C++ language reference](../cpp/cpp-language-reference.md)
