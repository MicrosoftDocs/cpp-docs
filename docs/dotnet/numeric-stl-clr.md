---
title: "numeric (STL-CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "<cliext/numeric>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "numeric functions [STL/CLR]"
  - "<cliext/numeric> header [STL/CLR]"
  - "<numeric> header [STL/CLR]"
ms.assetid: 1dc4d9a3-e734-459c-9678-5d9be0ef4c79
caps.latest.revision: 4
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
# numeric (STL/CLR)
Defines container template functions that perform algorithms provided for numerical processing.  
  
## Syntax  
  
```  
#include <cliext/numeric>  
```  
  
## Functions  
  
|Function|Description|  
|--------------|-----------------|  
|[accumulate (STL/CLR)](../dotnet/accumulate-stl-clr.md)|Computes the sum of all the elements in a specified range including some initial value by computing successive partial sums or computes the result of successive partial results similarly obtained from using a specified binary operation other than the sum.|  
|[adjacent_difference (STL/CLR)](../dotnet/adjacent-difference-stl-clr.md)|Computes the successive differences between each element and its predecessor in an input range and outputs the results to a destination range or computes the result of a generalized procedure where the difference operation is replaced by another, specified binary operation.|  
|[inner_product (STL/CLR)](../dotnet/inner-product-stl-clr.md)|Computes the sum of the element-wise product of two ranges and adds it to a specified initial value or computes the result of a generalized procedure where the sum and product binary operations are replaced by other specified binary operations.|  
|[partial_sum (STL/CLR)](../dotnet/partial-sum-stl-clr.md)|Computes a series of sums in an input range from the first element through the `i`th element and stores the result of each such sum in `i`th element of a destination range or computes the result of a generalized procedure where the sum operation is replaced by another specified binary operation.|  
  
## Requirements  
 **Header:** \<cliext/numeric>  
  
 **Namespace:** cliext  
  
## See Also  
 [STL/CLR Library Reference](../dotnet/stl-clr-library-reference.md)