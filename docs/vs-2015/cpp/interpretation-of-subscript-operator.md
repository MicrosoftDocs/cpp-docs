---
title: "Interpretation of Subscript Operator | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "subscript operator, interpretation of"
  - "arrays [C++], subscripting"
  - "interpreting subscript operators"
  - "operators [C++], interpretation of subscript"
ms.assetid: 8852ca18-9d5b-43f7-b8bd-abc89364fbf2
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Interpretation of Subscript Operator
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Interpretation of Subscript Operator](https://docs.microsoft.com/cpp/cpp/interpretation-of-subscript-operator).  
  
Like other operators, the subscript operator (**[ ]**) can be redefined by the user. The default behavior of the subscript operator, if not overloaded, is to combine the array name and the subscript using the following method:  
  
 \*((*array-name*) + (*subscript*))  
  
 As in all addition that involves pointer types, scaling is performed automatically to adjust for the size of the type. Therefore, the resultant value is not *subscript* bytes from the origin of *array-name*; rather, it is the *subscript*th element of the array. (For more information about this conversion, see [Additive Operators](../cpp/additive-operators-plus-and.md).)  
  
 Similarly, for multidimensional arrays, the address is derived using the following method:  
  
 **((**   
 ***array-name* ) + (**   
 ***subscript* 1**  *max*2 *\* max*3*...max*n)               **+** *subscript*2 *\* max*3*...max*n)                    . . . *+* *subscript*n))  
  
## See Also  
 [Arrays](../cpp/arrays-cpp.md)





