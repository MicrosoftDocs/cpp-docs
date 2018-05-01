---
title: "operator&lt;= (pair) (STL-CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::pair::operator<="
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operator<= member [STL/CLR]"
ms.assetid: 94a4cc0a-cef4-4050-bd59-f826bd318e7b
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# operator&lt;= (pair) (STL/CLR)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [operator&lt;= (pair) (STL/CLR)](https://docs.microsoft.com/cpp/dotnet/operator-less-or-equal-pair-stl-clr).  
  
  
Pair less than or equal comparison.  
  
## Syntax  
  
```  
template<typename Value1,  
    typename Value2>  
    bool operator<=(pair<Value1, Value2>% left,  
        pair<Value1, Value2>% right);  
```  
  
#### Parameters  
 left  
 Left pair to compare.  
  
 right  
 Right pair to compare.  
  
## Remarks  
 The operator function returns `!(``right` `<` `left``)`. You use it to test whether `left` is not ordered after `right` when the two pairs are compared element by element.  
  
## Example  
  
```  
// cliext_pair_operator_le.cpp   
// compile with: /clr   
#include <cliext/utility>   
  
int main()   
    {   
    cliext::pair<wchar_t, int> c1(L'x', 3);   
    System::Console::WriteLine("[{0}, {1}]", c1.first, c1.second);   
    cliext::pair<wchar_t, int> c2(L'x', 4);   
    System::Console::WriteLine("[{0}, {1}]", c2.first, c2.second);   
  
    System::Console::WriteLine("[x 3] <= [x 3] is {0}",   
        c1 <= c1);   
    System::Console::WriteLine("[x 4] <= [x 3] is {0}",   
        c2 <= c1);   
    return (0);   
    }  
  
```  
  
```Output  
[x, 3]  
[x, 4]  
[x 3] <= [x 3] is True  
[x 4] <= [x 3] is False  
```  
  
## Requirements  
 **Header:** \<cliext/utility>  
  
 **Namespace:** cliext  
  
## See Also  
 [pair (STL/CLR)](../dotnet/pair-stl-clr.md)   
 [operator== (pair) (STL/CLR)](../dotnet/operator-equality-pair-stl-clr.md)   
 [operator!= (pair) (STL/CLR)](../dotnet/operator-inequality-pair-stl-clr.md)   
 [operator\< (pair) (STL/CLR)](../dotnet/operator-less-than-pair-stl-clr.md)   
 [operator>= (pair) (STL/CLR)](../dotnet/operator-greater-or-equal-pair-stl-clr.md)   
 [operator> (pair) (STL/CLR)](../dotnet/operator-greater-than-pair-stl-clr.md)

