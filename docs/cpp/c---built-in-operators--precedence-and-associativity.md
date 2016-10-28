---
title: "C++ Built-in Operators, Precedence and Associativity"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operators (C++), hierarchy"
  - "operator precedence"
  - "precedence, operators"
  - "operators (C++), associativity"
  - "multiple operators"
  - "associativity of operators"
  - "operators [C++], precedence"
  - "evaluation order"
  - "hierarchy, operator"
ms.assetid: 95c1f0ba-dad8-4034-b039-f79a904f112f
caps.latest.revision: 13
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# C++ Built-in Operators, Precedence and Associativity
The C++ language includes all C operators and adds several new operators. Operators specify an evaluation to be performed on one or more operands.  
  
 Operator precedence specifies the order of operations in expressions that contain more than one operator. Operator associativity specifies whether, in an expression that contains multiple operators with the same precedence, an operand is grouped with the one on its left or the one on its right. The following table shows the precedence and associativity of C++ operators (from highest to lowest precedence). Operators with the same precedence number have equal precedence unless another relationship is explicitly forced by parentheses.  
  
### C++ Operator Precedence and Associativity  
  
|Operator Description|Operator|  
|--------------------------|--------------|  
|`Group 1 precedence, no associativity`|  
|[Scope resolution](../cpp/scope-resolution-operator----.md)|`::`|  
|`Group 2 precedence, left to right associativity`|  
|[Member selection (object or pointer)](../cpp/member-access-operators--.-and---.md)|`. or –>`|  
|[Array subscript](../cpp/subscript-operator-.md)|`[ ]`|  
|[Function call](../cpp/function-call-operator----.md)|`( )`|  
|[Postfix increment](../cpp/postfix-increment-and-decrement-operators-----and---.md)|`++`|  
|[Postfix decrement](../cpp/postfix-increment-and-decrement-operators-----and---.md)|`––`|  
|[Type name](../cpp/typeid-operator.md)|`typeid( )`|  
|[Constant type conversion](../cpp/const_cast-operator.md)|`const_cast`|  
|[Dynamic type conversion](../cpp/dynamic_cast-operator.md)|`dynamic_cast`|  
|[Reinterpreted type conversion](../cpp/reinterpret_cast-operator.md)|`reinterpret_cast`|  
|[Static type conversion](../cpp/static_cast-operator.md)|`static_cast`|  
|`Group 3 precedence, right to left associativity`|  
|[Size of object or type](../cpp/sizeof-operator.md)|`sizeof`|  
|[Prefix increment](../cpp/prefix-increment-and-decrement-operators-----and---.md)|`++`|  
|[Prefix decrement](../cpp/prefix-increment-and-decrement-operators-----and---.md)|`––`|  
|[One's complement](../cpp/one-s-complement-operator--~.md)|`~`|  
|[Logical not](../cpp/logical-negation-operator--!.md)|`!`|  
|[Unary negation](../notintoc/unary-negation-operator---.md)|`-`|  
|[Unary plus](../cpp/unary-plus-and-negation-operators----and--.md)|`+`|  
|[Address-of](../cpp/lvalue-reference-declarator---.md)|`&`|  
|[Indirection](../cpp/indirection-operator---.md)|`*`|  
|[Create object](../cpp/new-operator--c---.md)|`new`|  
|[Destroy object](../cpp/delete-operator--c---.md)|`delete`|  
|[Cast](../cpp/cast-operator----.md)|`Cast: ()`|  
|`Group 4 precedence, left to right associativity`|  
|[Pointer-to-member (objects or pointers)](../cpp/pointer-to-member-operators--.--and----.md)|`.* or –>*`|  
|`Group 5 precedence, left to right associativity`|  
|[Multiplication](../cpp/multiplicative-operators-and-the-modulus-operator.md)|`*`|  
|[Division](../cpp/multiplicative-operators-and-the-modulus-operator.md)|`/`|  
|[Modulus](../cpp/multiplicative-operators-and-the-modulus-operator.md)|`%`|  
|`Group 6 precedence, left to right associativity`|  
|[Addition](../cpp/additive-operators----and--.md)|`+`|  
|[Subtraction](../cpp/additive-operators----and--.md)|`–`|  
|`Group 7 precedence, left to right associativity`|  
|[Left shift](../cpp/left-shift-and-right-shift-operators-----and----.md)|`<<`|  
|[Right shift](../cpp/left-shift-and-right-shift-operators-----and----.md)|`>>`|  
|`Group 8 precedence, left to right associativity`|  
|[Less than](../cpp/relational-operators---------=--and--=.md)|`<`|  
|[Greater than](../cpp/relational-operators---------=--and--=.md)|`>`|  
|[Less than or equal to](../cpp/relational-operators---------=--and--=.md)|`<=`|  
|[Greater than or equal to](../cpp/relational-operators---------=--and--=.md)|`>=`|  
|`Group 9 precedence, left to right associativity`|  
|[Equality](../cpp/equality-operators--==-and-!=.md)|`==`|  
|[Inequality](../cpp/equality-operators--==-and-!=.md)|`!=`|  
|`Group 10 precedence left to right associativity`|  
|[Bitwise AND](../cpp/bitwise-and-operator---.md)|`&`|  
|`Group 11 precedence, left to right associativity`|  
|[Bitwise exclusive OR](../cpp/bitwise-exclusive-or-operator--^.md)|`^`|  
|`Group 12 precedence, left to right associativity`|  
|[Bitwise inclusive OR](../cpp/bitwise-inclusive-or-operator---.md)|`&#124;`|  
|`Group 13 precedence, left to right associativity`|  
|[Logical AND](../cpp/logical-and-operator----.md)|`&&`|  
|`Group 14 precedence, left to right associativity`|  
|[Logical OR](../cpp/logical-or-operator----.md)|`&#124;&#124;`|  
|`Group 15 precedence, right to left associativity`|  
|[Conditional](../cpp/conditional-operator-----.md)|`? :`|  
|`Group 16 precedence, right to left associativity`|  
|[Assignment](../cpp/assignment-operators.md)|`=`|  
|[Multiplication assignment](../cpp/assignment-operators.md)|`*=`|  
|[Division assignment](../cpp/assignment-operators.md)|`/=`|  
|[Modulus assignment](../cpp/assignment-operators.md)|`%=`|  
|[Addition assignment](../cpp/assignment-operators.md)|`+=`|  
|[Subtraction assignment](../cpp/assignment-operators.md)|`–=`|  
|[Left-shift assignment](../cpp/assignment-operators.md)|`<<=`|  
|[Right-shift assignment](../cpp/assignment-operators.md)|`>>=`|  
|[Bitwise AND assignment](../cpp/assignment-operators.md)|`&=`|  
|[Bitwise inclusive OR assignment](../cpp/assignment-operators.md)|`&#124;=`|  
|[Bitwise exclusive OR assignment](../cpp/assignment-operators.md)|`^=`|  
|`Group 17 precedence, right to left associativity`|  
|[throw expression](../cpp/try--throw--and-catch-statements--c---.md)|`throw`|  
|`Group 18 precedence, left to right associativity`|  
|[Comma](../cpp/comma-operator---.md)|`,`|  
  
## See Also  
 [C++ Operators](../notintoc/c---operators.md)   
 [Operator Overloading](../cpp/operator-overloading.md)