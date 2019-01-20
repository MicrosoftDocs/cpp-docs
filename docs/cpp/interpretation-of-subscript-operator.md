---
title: "Interpretation of Subscript Operator"
ms.date: "08/27/2018"
helpviewer_keywords: ["subscript operator [C++], interpretation of", "arrays [C++], subscripting", "interpreting subscript operators [C++]", "operators [C++], interpretation of subscript"]
ms.assetid: 8852ca18-9d5b-43f7-b8bd-abc89364fbf2
---
# Interpretation of Subscript Operator

Like other operators, the subscript operator (**\[]**) can be redefined by the user. The default behavior of the subscript operator, if not overloaded, is to combine the array name and the subscript using the following method:

\*((*array-name*) + (*subscript*))

As in all addition that involves pointer types, scaling is performed automatically to adjust for the size of the type. Therefore, the resultant value is not *subscript* bytes from the origin of *array-name*; rather, it is the *subscript*th element of the array. (For more information about this conversion, see [Additive Operators](../cpp/additive-operators-plus-and.md).)

Similarly, for multidimensional arrays, the address is derived using the following method:

((*array-name*) + (*subscript*1 \* *max*2 \* *max*3 \* ... \* *max*n) + (*subscript*2 \* *max*3 \* ... \* *max*n) + ... + *subscript*n))

## See also

- [Arrays](../cpp/arrays-cpp.md)
