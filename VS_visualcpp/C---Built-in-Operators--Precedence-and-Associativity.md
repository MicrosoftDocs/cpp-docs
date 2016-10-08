---
title: "C++ Built-in Operators, Precedence and Associativity"
ms.custom: na
ms.date: 10/07/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: language-reference
ms.assetid: 95c1f0ba-dad8-4034-b039-f79a904f112f
caps.latest.revision: 13
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# C++ Built-in Operators, Precedence and Associativity
The C++ language includes all C operators and adds several new operators. Operators specify an evaluation to be performed on one or more operands.  
  
 Operator precedence specifies the order of operations in expressions that contain more than one operator. Operator associativity specifies whether, in an expression that contains multiple operators with the same precedence, an operand is grouped with the one on its left or the one on its right. The following table shows the precedence and associativity of C++ operators (from highest to lowest precedence). Operators with the same precedence number have equal precedence unless another relationship is explicitly forced by parentheses.  
  
### C++ Operator Precedence and Associativity  
  
|Operator Description|Operator|  
|--------------------------|--------------|  
|`Group 1 precedence, no associativity`|  
|[Scope resolution](../VS_visualcpp/Scope-Resolution-Operator----.md)|`::`|  
|`Group 2 precedence, left to right associativity`|  
|[Member selection (object or pointer)](../VS_visualcpp/Member-Access-Operators--.-and---.md)|`. or –>`|  
|[Array subscript](../VS_visualcpp/Subscript-Operator-.md)|`[ ]`|  
|[Function call](../VS_visualcpp/Function-Call-Operator----.md)|`( )`|  
|[Postfix increment](../VS_visualcpp/Postfix-Increment-and-Decrement-Operators-----and---.md)|`++`|  
|[Postfix decrement](../VS_visualcpp/Postfix-Increment-and-Decrement-Operators-----and---.md)|`––`|  
|[Type name](../VS_visualcpp/typeid-Operator.md)|`typeid( )`|  
|[Constant type conversion](../VS_visualcpp/const_cast-Operator.md)|`const_cast`|  
|[Dynamic type conversion](../VS_visualcpp/dynamic_cast-Operator.md)|`dynamic_cast`|  
|[Reinterpreted type conversion](../VS_visualcpp/reinterpret_cast-Operator.md)|`reinterpret_cast`|  
|[Static type conversion](../VS_visualcpp/static_cast-Operator.md)|`static_cast`|  
|`Group 3 precedence, right to left associativity`|  
|[Size of object or type](../VS_visualcpp/sizeof-Operator.md)|`sizeof`|  
|[Prefix increment](../VS_visualcpp/Prefix-Increment-and-Decrement-Operators-----and---.md)|`++`|  
|[Prefix decrement](../VS_visualcpp/Prefix-Increment-and-Decrement-Operators-----and---.md)|`––`|  
|[One's complement](../VS_visualcpp/One-s-Complement-Operator--~.md)|`~`|  
|[Logical not](../VS_visualcpp/Logical-Negation-Operator--!.md)|`!`|  
|[Unary negation](../Topic/Unary%20Negation%20Operator:%20-.md)|`-`|  
|[Unary plus](../VS_visualcpp/Unary-Plus-and-Negation-Operators----and--.md)|`+`|  
|[Address-of](../VS_visualcpp/Lvalue-Reference-Declarator---.md)|`&`|  
|[Indirection](../VS_visualcpp/Indirection-Operator---.md)|`*`|  
|[Create object](../VS_visualcpp/new-Operator--C---.md)|`new`|  
|[Destroy object](../VS_visualcpp/delete-Operator--C---.md)|`delete`|  
|[Cast](../VS_visualcpp/Cast-Operator----.md)|`Cast: ()`|  
|`Group 4 precedence, left to right associativity`|  
|[Pointer-to-member (objects or pointers)](../VS_visualcpp/Pointer-to-Member-Operators--.--and----.md)|`.* or –>*`|  
|`Group 5 precedence, left to right associativity`|  
|[Multiplication](../VS_visualcpp/Multiplicative-Operators-and-the-Modulus-Operator.md)|`*`|  
|[Division](../VS_visualcpp/Multiplicative-Operators-and-the-Modulus-Operator.md)|`/`|  
|[Modulus](../VS_visualcpp/Multiplicative-Operators-and-the-Modulus-Operator.md)|`%`|  
|`Group 6 precedence, left to right associativity`|  
|[Addition](../VS_visualcpp/Additive-Operators----and--.md)|`+`|  
|[Subtraction](../VS_visualcpp/Additive-Operators----and--.md)|`–`|  
|`Group 7 precedence, left to right associativity`|  
|[Left shift](../VS_visualcpp/Left-Shift-and-Right-Shift-Operators-----and----.md)|`<<`|  
|[Right shift](../VS_visualcpp/Left-Shift-and-Right-Shift-Operators-----and----.md)|`>>`|  
|`Group 8 precedence, left to right associativity`|  
|[Less than](../VS_visualcpp/Relational-Operators---------=--and--=.md)|`<`|  
|[Greater than](../VS_visualcpp/Relational-Operators---------=--and--=.md)|`>`|  
|[Less than or equal to](../VS_visualcpp/Relational-Operators---------=--and--=.md)|`<=`|  
|[Greater than or equal to](../VS_visualcpp/Relational-Operators---------=--and--=.md)|`>=`|  
|`Group 9 precedence, left to right associativity`|  
|[Equality](../VS_visualcpp/Equality-Operators--==-and-!=.md)|`==`|  
|[Inequality](../VS_visualcpp/Equality-Operators--==-and-!=.md)|`!=`|  
|`Group 10 precedence left to right associativity`|  
|[Bitwise AND](../VS_visualcpp/Bitwise-AND-Operator---.md)|`&`|  
|`Group 11 precedence, left to right associativity`|  
|[Bitwise exclusive OR](../VS_visualcpp/Bitwise-Exclusive-OR-Operator--^.md)|`^`|  
|`Group 12 precedence, left to right associativity`|  
|[Bitwise inclusive OR](../VS_visualcpp/Bitwise-Inclusive-OR-Operator---.md)|`&#124;`|  
|`Group 13 precedence, left to right associativity`|  
|[Logical AND](../VS_visualcpp/Logical-AND-Operator----.md)|`&&`|  
|`Group 14 precedence, left to right associativity`|  
|[Logical OR](../VS_visualcpp/Logical-OR-Operator----.md)|`&#124;&#124;`|  
|`Group 15 precedence, right to left associativity`|  
|[Conditional](../VS_visualcpp/Conditional-Operator-----.md)|`? :`|  
|`Group 16 precedence, right to left associativity`|  
|[Assignment](../VS_visualcpp/Assignment-Operators.md)|`=`|  
|[Multiplication assignment](../VS_visualcpp/Assignment-Operators.md)|`*=`|  
|[Division assignment](../VS_visualcpp/Assignment-Operators.md)|`/=`|  
|[Modulus assignment](../VS_visualcpp/Assignment-Operators.md)|`%=`|  
|[Addition assignment](../VS_visualcpp/Assignment-Operators.md)|`+=`|  
|[Subtraction assignment](../VS_visualcpp/Assignment-Operators.md)|`–=`|  
|[Left-shift assignment](../VS_visualcpp/Assignment-Operators.md)|`<<=`|  
|[Right-shift assignment](../VS_visualcpp/Assignment-Operators.md)|`>>=`|  
|[Bitwise AND assignment](../VS_visualcpp/Assignment-Operators.md)|`&=`|  
|[Bitwise inclusive OR assignment](../VS_visualcpp/Assignment-Operators.md)|`&#124;=`|  
|[Bitwise exclusive OR assignment](../VS_visualcpp/Assignment-Operators.md)|`^=`|  
|`Group 17 precedence, right to left associativity`|  
|[throw expression](../VS_visualcpp/try--throw--and-catch-Statements--C---.md)|`throw`|  
|`Group 18 precedence, left to right associativity`|  
|[Comma](../VS_visualcpp/Comma-Operator---.md)|`,`|  
  
## See Also  
 [C++ Operators](../Topic/C++%20Operators.md)   
 [Operator Overloading](../VS_visualcpp/Operator-Overloading.md)