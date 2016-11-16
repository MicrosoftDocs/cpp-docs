---
title: "operator&gt; (set) (STL-CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::set::operator>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operator> member [STL/CLR]"
ms.assetid: 1af7a3bd-011e-4248-902a-f86d4acae856
caps.latest.revision: 14
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
# operator&gt; (set) (STL/CLR)
List greater than comparison.  
  
## Syntax  
  
```  
template<typename Key>  
    bool operator>(set<Key>% left,  
        set<Key>% right);  
```  
  
#### Parameters  
 left  
 Left container to compare.  
  
 right  
 Right container to compare.  
  
## Remarks  
 The operator function returns `right` `<` `left`. You use it to test whether `left` is ordered after `right` when the two sets are compared element by element.  
  
## Example  
  
```  
// cliext_set_operator_gt.cpp   
// compile with: /clr   
#include <cliext/set>   
  
typedef cliext::set<wchar_t> Myset;   
int main()   
    {   
    Myset c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// assign to a new container   
    Myset c2;   
    c2.insert(L'a');   
    c2.insert(L'b');   
    c2.insert(L'd');   
  
// display contents " a b d"   
    for each (wchar_t elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
    System::Console::WriteLine("[a b c] > [a b c] is {0}",   
        c1 > c1);   
    System::Console::WriteLine("[a b d] > [a b c] is {0}",   
        c2 > c1);   
    return (0);   
    }  
  
```  
  
```Output  
 a b c  
 a b d  
[a b c] > [a b c] is False  
[a b d] > [a b c] is True  
```  
  
## Requirements  
 **Header:** \<cliext/set>  
  
 **Namespace:** cliext  
  
## See Also  
 [set (STL/CLR)](../dotnet/set-stl-clr.md)   
 [operator== (set) (STL/CLR)](../dotnet/operator-equality-set-stl-clr.md)   
 [operator!= (set) (STL/CLR)](../dotnet/operator-inequality-set-stl-clr.md)   
 [operator\< (set) (STL/CLR)](../dotnet/operator-less-than-set-stl-clr.md)   
 [operator>= (set) (STL/CLR)](../dotnet/operator-greater-or-equal-set-stl-clr.md)   
 [operator<= (set) (STL/CLR)](../dotnet/operator-less-or-equal-set-stl-clr.md)