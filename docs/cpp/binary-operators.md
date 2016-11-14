---
title: "Binary Operators | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "member-selection operators"
  - "operators [C++], binary"
  - "binary operators"
ms.assetid: c0e7fbff-bc87-4708-8333-504ac09ee83e
caps.latest.revision: 7
author: "mikeblome"
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
# Binary Operators
The following table shows a list of operators that can be overloaded.  
  
### Redefinable Binary Operators  
  
|Operator|Name|  
|--------------|----------|  
|**,**|Comma|  
|`!=`|Inequality|  
|`%`|Modulus|  
|`%=`|Modulus/assignment|  
|**&**|Bitwise AND|  
|**&&**|Logical AND|  
|**&=**|Bitwise AND/assignment|  
|**\***|Multiplication|  
|**\*=**|Multiplication/assignment|  
|**+**|Addition|  
|`+=`|Addition/assignment|  
|**–**|Subtraction|  
|**–=**|Subtraction/assignment|  
|**–>**|Member selection|  
|**–>\***|Pointer-to-member selection|  
|**/**|Division|  
|`/=`|Division/assignment|  
|**<**|Less than|  
|**<<**|Left shift|  
|**<<=**|Left shift/assignment|  
|**<=**|Less than or equal to|  
|**=**|Assignment|  
|`==`|Equality|  
|**>**|Greater than|  
|**>=**|Greater than or equal to|  
|**>>**|Right shift|  
|**>>=**|Right shift/assignment|  
|**^**|Exclusive OR|  
|`^=`|Exclusive OR/assignment|  
|**&#124;**|Bitwise inclusive OR|  
|`&#124;=`|Bitwise inclusive OR/assignment|  
|`&#124;&#124;`|Logical OR|  
  
 To declare a binary operator function as a nonstatic member, you must declare it in the form:  
  
 *ret-type* **operator**`op`**(** `arg` **)**  
  
 where *ret-type* is the return type, `op` is one of the operators listed in the preceding table, and `arg` is an argument of any type.  
  
 To declare a binary operator function as a global function, you must declare it in the form:  
  
 *ret-type* **operator**`op`**(** `arg1`**,** `arg2` **)**  
  
 where *ret-type* and `op` are as described for member operator functions and `arg1` and `arg2` are arguments. At least one of the arguments must be of class type.  
  
> [!NOTE]
>  There is no restriction on the return types of the binary operators; however, most user-defined binary operators return either a class type or a reference to a class type.  
  
## See Also  
 [Operator Overloading](../cpp/operator-overloading.md)