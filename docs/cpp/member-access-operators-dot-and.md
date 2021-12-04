---
description: "Learn more about: Member access operators: '.' and '->'"
title: "Member access operators: '.' and '->'"
ms.date: 12/04/2021
f1_keywords: [".", "->"]
helpviewer_keywords: ["member access, expressions", "operators [C++], member access", "dot operator (.)", "-> operator", "member access, operators", "postfix operators [C++]", ". operator", "member access"]
ms.assetid: f8fc3df9-d728-40c5-b384-276927f5f1b3
---
# Member access operators: `.` and `->`

## Syntax

*`postfix-expression`*:\
&emsp; *`postfix-expression`* **`.`** **`template`**<sub>opt</sub> *`id-expression`*\
&emsp; *`postfix-expression`* **`->`** **`template`**<sub>opt</sub> *`id-expression`*

## Remarks

The member access operators **`.`** and **`->`** are used to refer to members of `struct`, `union`, and `class` types. Member access expressions have the value and type of the selected member.

There are two forms of member access expressions:

1. In the first form, *`postfix-expression`* represents a value of `struct`, `class`, or `union` type, and *`id-expression`* names a member of the specified `struct`, `union`, or `class`. The value of the operation is that of *`id-expression`* and is an l-value if *`postfix-expression`* is an l-value.

1. In the second form, *`postfix-expression`* represents a pointer to a `struct`, `union`, or `class`, and *`id-expression`* names a member of the specified `struct`, `union`, or `class`. The value is that of `id-expression` and is an l-value. The **`->`** operator dereferences the pointer. The expressions `e->member` and `(*(e)).member` (where *`e`* represents a pointer) yield identical results (except when the operators **`->`** or **`*`** are overloaded).

## Example

The following example demonstrates both forms of the member access operator.

```cpp
// expre_Selection_Operator.cpp
// compile with: /EHsc
#include <iostream>
using namespace std;

struct Date {
   Date(int i, int j, int k) : day(i), month(j), year(k){}
   int month;
   int day;
   int year;
};

int main() {
   Date mydate(1,1,1900);
   mydate.month = 2;
   cout  << mydate.month << "/" << mydate.day
         << "/" << mydate.year << endl;

   Date *mydate2 = new Date(1,1,2000);
   mydate2->month = 2;
   cout  << mydate2->month << "/" << mydate2->day
         << "/" << mydate2->year << endl;
   delete mydate2;
}
```

```Output
2/1/1900
2/1/2000
```

## See also

[Postfix expressions](../cpp/postfix-expressions.md)\
[C++ built-in operators, precedence, and associativity](../cpp/cpp-built-in-operators-precedence-and-associativity.md)\
[Classes and Structs](../cpp/classes-and-structs-cpp.md)\
[Structure and union members](../c-language/structure-and-union-members.md)
