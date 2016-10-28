---
title: "operator&lt; (pair) (STL-CLR)"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "reference"
f1_keywords: 
  - "cliext::pair::operator<"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operator< member [STL/CLR]"
ms.assetid: e7061b29-1289-4ea9-ae69-feea8abbfb25
caps.latest.revision: 6
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
# operator&lt; (pair) (STL/CLR)
Pair less than comparison.  
  
## Syntax  
  
```  
template<typename Value1,  
    typename Value2>  
    bool operator<(pair<Value1, Value2>% left,  
        pair<Value1, Value2>% right);  
```  
  
#### Parameters  
 left  
 Left pair to compare.  
  
 right  
 Right pair to compare.  
  
## Remarks  
 The operator function returns `left``.first <` `right``.first || !(``right``.first <` `left``.first &&` `left``.second <` `right``.second`. You use it to test whether `left` is ordered the before `right` when the two pairs are compared element by element.  
  
## Example  
  
```  
// cliext_pair_operator_lt.cpp   
// compile with: /clr   
#include <cliext/utility>   
  
int main()   
    {   
    cliext::pair<wchar_t, int> c1(L'x', 3);   
    System::Console::WriteLine("[{0}, {1}]", c1.first, c1.second);   
    cliext::pair<wchar_t, int> c2(L'x', 4);   
    System::Console::WriteLine("[{0}, {1}]", c2.first, c2.second);   
  
    System::Console::WriteLine("[x 3] < [x 3] is {0}",   
        c1 < c1);   
    System::Console::WriteLine("[x 3] < [x 4] is {0}",   
        c1 < c2);   
    return (0);   
    }  
  
```  
  
 **[x, 3]**  
**[x, 4]**  
**[x 3] < [x 3] is False**  
**[x 3] < [x 4] is True**   
## Requirements  
 **Header:** \<cliext/utility>  
  
 **Namespace:** cliext  
  
## See Also  
 [pair (STL/CLR)](../cli/pair--stl-clr-.md)   
 [operator== (pair) (STL/CLR)](../cli/operator==--pair---stl-clr-.md)   
 [operator!= (pair) (STL/CLR)](../cli/operator!=--pair---stl-clr-.md)   
 [operator>= (pair) (STL/CLR)](../cli/operator-=--pair---stl-clr-.md)   
 [operator> (pair) (STL/CLR)](../cli/operator---pair---stl-clr-.md)   
 [operator<= (pair) (STL/CLR)](../cli/operator-=--pair---stl-clr-.md)