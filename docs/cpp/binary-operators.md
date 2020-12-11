---
description: "Learn more about: Binary Operators"
title: "Binary Operators"
ms.date: "06/14/2018"
helpviewer_keywords: ["member-selection operators [C++]", "operators [C++], binary", "binary operators [C++]"]
ms.assetid: c0e7fbff-bc87-4708-8333-504ac09ee83e
---
# Binary Operators

The following table shows a list of operators that can be overloaded.

## Redefinable Binary Operators

|Operator|Name|
|--------------|----------|
|**,**|Comma|
|**!=**|Inequality|
|**%**|Modulus|
|**%=**|Modulus/assignment|
|**&**|Bitwise AND|
|**&&**|Logical AND|
|**&=**|Bitwise AND/assignment|
|**&#42;**|Multiplication|
|**&#42;=**|Multiplication/assignment|
|**+**|Addition|
|**+=**|Addition/assignment|
|**-**|Subtraction|
|**-=**|Subtraction/assignment|
|**->**|Member selection|
|**->&#42;**|Pointer-to-member selection|
|**/**|Division|
|**/=**|Division/assignment|
|**<**|Less than|
|**<<**|Left shift|
|**<<=**|Left shift/assignment|
|**<=**|Less than or equal to|
|**=**|Assignment|
|**==**|Equality|
|**>**|Greater than|
|**>=**|Greater than or equal to|
|**>>**|Right shift|
|**>>=**|Right shift/assignment|
|**^**|Exclusive OR|
|**^=**|Exclusive OR/assignment|
|**&#124;**|Bitwise inclusive OR|
|**&#124;=**|Bitwise inclusive OR/assignment|
|**&#124;&#124;**|Logical OR|

To declare a binary operator function as a nonstatic member, you must declare it in the form:

> *ret-type* **`operator`** *op* **(** *arg* **)**

where *ret-type* is the return type, *op* is one of the operators listed in the preceding table, and *arg* is an argument of any type.

To declare a binary operator function as a global function, you must declare it in the form:

> *ret-type* **`operator`** *op* **(** _arg1_**,** _arg2_ **)**

where *ret-type* and *op* are as described for member operator functions and *arg1* and *arg2* are arguments. At least one of the arguments must be of class type.

> [!NOTE]
> There is no restriction on the return types of the binary operators; however, most user-defined binary operators return either a class type or a reference to a class type.

## See also

[Operator Overloading](../cpp/operator-overloading.md)
