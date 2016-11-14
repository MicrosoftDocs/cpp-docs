---
title: "multimap::upper_bound (STL-CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::multimap::upper_bound"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "upper_bound member [STL/CLR]"
ms.assetid: bfb8cf64-cecf-4685-8ac9-e7228ecee809
caps.latest.revision: 16
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
# multimap::upper_bound (STL/CLR)
Finds end of range that matches a specified key.  
  
## Syntax  
  
```  
iterator upper_bound(key_type key);  
```  
  
#### Parameters  
 key  
 Key value to search for.  
  
## Remarks  
 The member function determines the last element `X` in the controlled sequence that has equivalent ordering to `key`. If no such element exists, or if `X` is the last element in the controlled sequence, it returns [multimap::end (STL/CLR)](../dotnet/multimap-end-stl-clr.md)`()`; otherwise it returns an iterator that designates the first element beyond `X`. You use it to locate the end of a sequence of elements currently in the controlled sequence that match a specified key.  
  
## Example  
  
```  
// cliext_multimap_upper_bound.cpp   
// compile with: /clr   
#include <cliext/map>   
  
typedef cliext::multimap<wchar_t, int> Mymultimap;   
int main()   
    {   
    Mymultimap c1;   
    c1.insert(Mymultimap::make_value(L'a', 1));   
    c1.insert(Mymultimap::make_value(L'b', 2));   
    c1.insert(Mymultimap::make_value(L'c', 3));   
  
// display contents " [a 1] [b 2] [c 3]"   
    for each (Mymultimap::value_type elem in c1)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
    System::Console::WriteLine("upper_bound(L'x')==end() = {0}",   
        c1.upper_bound(L'x') == c1.end());   
  
    Mymultimap::iterator it = c1.upper_bound(L'a');   
    System::Console::WriteLine("*upper_bound(L'a') = [{0} {1}]",   
        it->first, it->second);   
    it = c1.upper_bound(L'b');   
    System::Console::WriteLine("*upper_bound(L'b') = [{0} {1}]",   
        it->first, it->second);   
    return (0);   
    }  
  
```  
  
```Output  
 [a 1] [b 2] [c 3]  
upper_bound(L'x')==end() = True  
*upper_bound(L'a') = [b 2]  
*upper_bound(L'b') = [c 3]  
```  
  
## Requirements  
 **Header:** \<cliext/map>  
  
 **Namespace:** cliext  
  
## See Also  
 [multimap (STL/CLR)](../dotnet/multimap-stl-clr.md)   
 [multimap::count (STL/CLR)](../dotnet/multimap-count-stl-clr.md)   
 [multimap::equal_range (STL/CLR)](../dotnet/multimap-equal-range-stl-clr.md)   
 [multimap::find (STL/CLR)](../dotnet/multimap-find-stl-clr.md)   
 [multimap::lower_bound (STL/CLR)](../dotnet/multimap-lower-bound-stl-clr.md)