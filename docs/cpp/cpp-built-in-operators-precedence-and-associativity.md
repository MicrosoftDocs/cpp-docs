---
title: "C++ Built-in Operators, Precedence and Associativity | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
dev_langs: ["C++"]
helpviewer_keywords: ["operators (C++), hierarchy", "operator precedence", "precedence, operators", "operators (C++), associativity", "multiple operators [C++]", "associativity of operators [C++]", "operators [C++], precedence", "evaluation order", "hierarchy, operator"]
ms.assetid: 95c1f0ba-dad8-4034-b039-f79a904f112f
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# C++ Built-in Operators, Precedence and Associativity

The C++ language includes all C operators and adds several new operators. Operators specify an evaluation to be performed on one or more operands.

Operator *precedence* specifies the order of operations in expressions that contain more than one operator. Operator *associativity* specifies whether, in an expression that contains multiple operators with the same precedence, an operand is grouped with the one on its left or the one on its right. The following table shows the precedence and associativity of C++ operators (from highest to lowest precedence). Operators with the same precedence number have equal precedence unless another relationship is explicitly forced by parentheses.

### C++ Operator Precedence and Associativity

|Operator Description|Operator|
|--------------------------|--------------|
|**Group 1 precedence, no associativity**|
|[Scope resolution](../cpp/scope-resolution-operator.md)|[::](../cpp/scope-resolution-operator.md)|
|**Group 2 precedence, left to right associativity**|
|[Member selection (object or pointer)](../cpp/member-access-operators-dot-and.md)|[. or ->](../cpp/member-access-operators-dot-and.md)|
|[Array subscript](../cpp/subscript-operator.md)|[&#91;&#93;](../cpp/subscript-operator.md)|
|[Function call](../cpp/function-call-operator-parens.md)|[()](../cpp/function-call-operator-parens.md)|
|[Postfix increment](../cpp/postfix-increment-and-decrement-operators-increment-and-decrement.md)|[++](../cpp/postfix-increment-and-decrement-operators-increment-and-decrement.md)|
|[Postfix decrement](../cpp/postfix-increment-and-decrement-operators-increment-and-decrement.md)|[--](../cpp/postfix-increment-and-decrement-operators-increment-and-decrement.md)|
|[Type name](../cpp/typeid-operator.md)|[typeid](../cpp/typeid-operator.md)|
|[Constant type conversion](../cpp/const-cast-operator.md)|[const_cast](../cpp/const-cast-operator.md)|
|[Dynamic type conversion](../cpp/dynamic-cast-operator.md)|[dynamic_cast](../cpp/dynamic-cast-operator.md)|
|[Reinterpreted type conversion](../cpp/reinterpret-cast-operator.md)|[reinterpret_cast](../cpp/reinterpret-cast-operator.md)|
|[Static type conversion](../cpp/static-cast-operator.md)|[static_cast](../cpp/static-cast-operator.md)|
|**Group 3 precedence, right to left associativity**|
|[Size of object or type](../cpp/sizeof-operator.md)|[sizeof](../cpp/sizeof-operator.md)|
|[Prefix increment](../cpp/prefix-increment-and-decrement-operators-increment-and-decrement.md)|[++](../cpp/prefix-increment-and-decrement-operators-increment-and-decrement.md)|
|[Prefix decrement](../cpp/prefix-increment-and-decrement-operators-increment-and-decrement.md)|[--](../cpp/prefix-increment-and-decrement-operators-increment-and-decrement.md)|
|[One's complement](../cpp/one-s-complement-operator-tilde.md)|[~](../cpp/one-s-complement-operator-tilde.md)|
|[Logical not](../cpp/logical-negation-operator-exclpt.md)|[!](../cpp/logical-negation-operator-exclpt.md)|
|[Unary negation](../cpp/unary-plus-and-negation-operators-plus-and.md)|[-](../cpp/unary-plus-and-negation-operators-plus-and.md)|
|[Unary plus](../cpp/unary-plus-and-negation-operators-plus-and.md)|[+](../cpp/unary-plus-and-negation-operators-plus-and.md)|
|[Address-of](../cpp/address-of-operator-amp.md)|[&amp;](../cpp/address-of-operator-amp.md)|
|[Indirection](../cpp/indirection-operator-star.md)|[&#42;](../cpp/indirection-operator-star.md)|
|[Create object](../cpp/new-operator-cpp.md)|[new](../cpp/new-operator-cpp.md)|
|[Destroy object](../cpp/delete-operator-cpp.md)|[delete](../cpp/delete-operator-cpp.md)|
|[Cast](../cpp/cast-operator-parens.md)|[()](../cpp/cast-operator-parens.md)|
|**Group 4 precedence, left to right associativity**|
|[Pointer-to-member (objects or pointers)](../cpp/pointer-to-member-operators-dot-star-and-star.md)|[.&#42; or ->&#42;](../cpp/pointer-to-member-operators-dot-star-and-star.md)|
|**Group 5 precedence, left to right associativity**|
|[Multiplication](../cpp/multiplicative-operators-and-the-modulus-operator.md)|[&#42;](../cpp/multiplicative-operators-and-the-modulus-operator.md)|
|[Division](../cpp/multiplicative-operators-and-the-modulus-operator.md)|[/](../cpp/multiplicative-operators-and-the-modulus-operator.md)|
|[Modulus](../cpp/multiplicative-operators-and-the-modulus-operator.md)|[%](../cpp/multiplicative-operators-and-the-modulus-operator.md)|
|**Group 6 precedence, left to right associativity**|
|[Addition](../cpp/additive-operators-plus-and.md)|[+](../cpp/additive-operators-plus-and.md)|
|[Subtraction](../cpp/additive-operators-plus-and.md)|[-](../cpp/additive-operators-plus-and.md)|
|**Group 7 precedence, left to right associativity**|
|[Left shift](../cpp/left-shift-and-right-shift-operators-input-and-output.md)|[<<](../cpp/left-shift-and-right-shift-operators-input-and-output.md)|
|[Right shift](../cpp/left-shift-and-right-shift-operators-input-and-output.md)|[>>](../cpp/left-shift-and-right-shift-operators-input-and-output.md)|
|**Group 8 precedence, left to right associativity**|
|[Less than](../cpp/relational-operators-equal-and-equal.md)|[<](../cpp/relational-operators-equal-and-equal.md)|
|[Greater than](../cpp/relational-operators-equal-and-equal.md)|[>](../cpp/relational-operators-equal-and-equal.md)|
|[Less than or equal to](../cpp/relational-operators-equal-and-equal.md)|[<=](../cpp/relational-operators-equal-and-equal.md)|
|[Greater than or equal to](../cpp/relational-operators-equal-and-equal.md)|[>=](../cpp/relational-operators-equal-and-equal.md)|
|**Group 9 precedence, left to right associativity**|
|[Equality](../cpp/equality-operators-equal-equal-and-exclpt-equal.md)|[==](../cpp/equality-operators-equal-equal-and-exclpt-equal.md)|
|[Inequality](../cpp/equality-operators-equal-equal-and-exclpt-equal.md)|[!=](../cpp/equality-operators-equal-equal-and-exclpt-equal.md)|
|**Group 10 precedence left to right associativity**|
|[Bitwise AND](../cpp/bitwise-and-operator-amp.md)|[&amp;](../cpp/bitwise-and-operator-amp.md)|
|**Group 11 precedence, left to right associativity**|
|[Bitwise exclusive OR](../cpp/bitwise-exclusive-or-operator-hat.md)|[^](../cpp/bitwise-exclusive-or-operator-hat.md)|
|**Group 12 precedence, left to right associativity**|
|[Bitwise inclusive OR](../cpp/bitwise-inclusive-or-operator-pipe.md)|[&#124;](../cpp/bitwise-inclusive-or-operator-pipe.md)|
|**Group 13 precedence, left to right associativity**|
|[Logical AND](../cpp/logical-and-operator-amp-amp.md)|[&amp;&amp;](../cpp/logical-and-operator-amp-amp.md)|
|**Group 14 precedence, left to right associativity**|
|[Logical OR](../cpp/logical-or-operator-pipe-pipe.md)|[&#124;&#124;](../cpp/logical-or-operator-pipe-pipe.md)|
|**Group 15 precedence, right to left associativity**|
|[Conditional](../cpp/conditional-operator-q.md)|[? :](../cpp/conditional-operator-q.md)|
|**Group 16 precedence, right to left associativity**|
|[Assignment](../cpp/assignment-operators.md)|[=](../cpp/assignment-operators.md)|
|[Multiplication assignment](../cpp/assignment-operators.md)|[&#42;=](../cpp/assignment-operators.md)|
|[Division assignment](../cpp/assignment-operators.md)|[/=](../cpp/assignment-operators.md)|
|[Modulus assignment](../cpp/assignment-operators.md)|[%=](../cpp/assignment-operators.md)|
|[Addition assignment](../cpp/assignment-operators.md)|[+=](../cpp/assignment-operators.md)|
|[Subtraction assignment](../cpp/assignment-operators.md)|[-=](../cpp/assignment-operators.md)|
|[Left-shift assignment](../cpp/assignment-operators.md)|[<<=](../cpp/assignment-operators.md)|
|[Right-shift assignment](../cpp/assignment-operators.md)|[>>=](../cpp/assignment-operators.md)|
|[Bitwise AND assignment](../cpp/assignment-operators.md)|[&amp;=](../cpp/assignment-operators.md)|
|[Bitwise inclusive OR assignment](../cpp/assignment-operators.md)|[&#124;=](../cpp/assignment-operators.md)|
|[Bitwise exclusive OR assignment](../cpp/assignment-operators.md)|[^=](../cpp/assignment-operators.md)|
|**Group 17 precedence, right to left associativity**|
|[throw expression](../cpp/try-throw-and-catch-statements-cpp.md)|[throw](../cpp/try-throw-and-catch-statements-cpp.md)|
|**Group 18 precedence, left to right associativity**|
|[Comma](../cpp/comma-operator.md)|[,](../cpp/comma-operator.md)|

## See also
 [Operator Overloading](operator-overloading.md)