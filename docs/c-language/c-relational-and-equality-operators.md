---
description: "Learn more about: C Relational and Equality Operators"
title: "C Relational and Equality Operators"
ms.date: "10/18/2018"
helpviewer_keywords: ["relational operators, syntax", "equality operator", "operators [C], equality", "equality operator, syntax", "operators [C], relational"]
ms.assetid: c89a3815-a65e-4e0d-8333-0e8dc7fdb30b
---
# C Relational and Equality Operators

The binary relational and equality operators compare their first operand to their second operand to test the validity of the specified relationship. The result of a relational expression is 1 if the tested relationship is true and 0 if it is false. The type of the result is **`int`**.

**Syntax**

*relational-expression*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*shift-expression*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*relational-expression* **&lt;** *shift-expression*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*relational-expression* **>** *shift-expression*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*relational-expression* **&lt;=** *shift-expression*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*relational-expression* **>=** *shift-expression*

*equality-expression*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*relational-expression*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*equality-expression* **==** *relational-expression*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*equality-expression* **!=** *relational-expression*

The relational and equality operators test the following relationships:

|Operator|Relationship Tested|
|--------------|-------------------------|
|**&lt;**|First operand less than second operand|
|**>**|First operand greater than second operand|
|**&lt;=**|First operand less than or equal to second operand|
|**>=**|First operand greater than or equal to second operand|
|**==**|First operand equal to second operand|
|**!=**|First operand not equal to second operand|

The first four operators in the list above have a higher precedence than the equality operators (`==` and `!=`). See the precedence information in the table [Precedence and Associativity of C Operators](../c-language/precedence-and-order-of-evaluation.md).

The operands can have integral, floating, or pointer type. The types of the operands can be different. Relational operators perform the usual arithmetic conversions on integral and floating type operands. In addition, you can use the following combinations of operand types with the relational and equality operators:

- Both operands of any relational or equality operator can be pointers to the same type. For the equality (`==`) and inequality (`!=`) operators, the result of the comparison indicates whether the two pointers address the same memory location. For the other relational operators (**\<**, **>**, **\<**=, and **>**=), the result of the comparison indicates the relative position of the two memory addresses of the objects pointed to. Relational operators compare only offsets.

   Pointer comparison is defined only for parts of the same object. If the pointers refer to members of an array, the comparison is equivalent to comparison of the corresponding subscripts. The address of the first array element is "less than" the address of the last element. In the case of structures, pointers to structure members declared later are "greater than" pointers to members declared earlier in the structure. Pointers to the members of the same union are equal.

- A pointer value can be compared to the constant value 0 for equality (`==`) or inequality (`!=`). A pointer with a value of 0 is called a "null" pointer; that is, it does not point to a valid memory location.

- The equality operators follow the same rules as the relational operators, but permit additional possibilities: a pointer can be compared to a constant integral expression with value 0, or to a pointer to **`void`**. If two pointers are both null pointers, they compare as equal. Equality operators compare both segment and offset.

## Examples

The examples below illustrate relational and equality operators.

```C
int x = 0, y = 0;
if ( x < y )
```

Because `x` and `y` are equal, the expression in this example yields the value 0.

```C
char array[10];
char *p;

for ( p = array; p < &array[10]; p++ )
    *p = '\0';
```

The fragment in this example sets each element of `array` to a null character constant.

```C
enum color { red, white, green } col;
   .
   .
   .
   if ( col == red )
   .
   .
   .
```

These statements declare an enumeration variable named `col` with the tag `color`. At any time, the variable may contain an integer value of 0, 1, or 2, which represents one of the elements of the enumeration set `color`: the color red, white, or green, respectively. If `col` contains 0 when the **`if`** statement is executed, any statements depending on the **`if`** will be executed.

## See also

[Relational Operators: \<, >, \<=, and >=](../cpp/relational-operators-equal-and-equal.md)<br/>
[Equality Operators: == and !=](../cpp/equality-operators-equal-equal-and-exclpt-equal.md)
