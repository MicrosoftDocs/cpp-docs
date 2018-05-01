---
title: "operator== (pair) (STL-CLR) | Microsoft Docs"
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
  - "cliext::pair::operator=="
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operator== member [STL/CLR]"
ms.assetid: 2b4879a1-f326-4fb3-b113-bd8d457f9802
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# operator== (pair) (STL/CLR)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [operator== (pair) (STL/CLR)](https://docs.microsoft.com/cpp/dotnet/operator-equality-pair-stl-clr).  
  
  
Pair equal comparison.  
  
## Syntax  
  
```  
template<typename Value1,  
    typename Value2>  
    bool operator==(pair<Value1, Value2>% left,  
        pair<Value1, Value2>% right);  
```  
  
#### Parameters  
 left  
 Left pair to compare.  
  
 right  
 Right pair to compare.  
  
## Remarks  
 The operator function returns `left``.first ==` `right``.first &&` `left``.second ==` `right``.second`. You use it to test whether `left` is ordered the same as `right` when the two pairs are compared element by element.  
  
## Example  
  
```  
// cliext_pair_operator_eq.cpp   
// compile with: /clr   
#include <cliext/utility>   
  
int main()   
    {   
    cliext::pair<wchar_t, int> c1(L'x', 3);   
    System::Console::WriteLine("[{0}, {1}]", c1.first, c1.second);   
    cliext::pair<wchar_t, int> c2(L'x', 4);   
    System::Console::WriteLine("[{0}, {1}]", c2.first, c2.second);   
  
    System::Console::WriteLine("[x 3] == [x 3] is {0}",   
        c1 == c1);   
    System::Console::WriteLine("[x 3] == [x 4] is {0}",   
        c1 == c2);   
    return (0);   
    }  
  
```  
  
```Output  
[x, 3]  
[x, 4]  
[x 3] == [x 3] is True  
[x 3] == [x 4] is False  
```  
  
## Requirements  
 **Header:** \<cliext/utility>  
  
 **Namespace:** cliext  
  
## See Also  
 [pair (STL/CLR)](../dotnet/pair-stl-clr.md)   
 [operator!= (pair) (STL/CLR)](../dotnet/operator-inequality-pair-stl-clr.md)   
 [operator\< (pair) (STL/CLR)](../dotnet/operator-less-than-pair-stl-clr.md)   
 [operator>= (pair) (STL/CLR)](../dotnet/operator-greater-or-equal-pair-stl-clr.md)   
 [operator> (pair) (STL/CLR)](../dotnet/operator-greater-than-pair-stl-clr.md)   
 [operator<= (pair) (STL/CLR)](../dotnet/operator-less-or-equal-pair-stl-clr.md)

