---
title: "multiset::equal_range (STL-CLR)"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
H1: multiset::equal_range (STL/CLR)
ms.assetid: 0fa617fb-8316-4310-b906-0322fa04aebe
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
# multiset::equal_range (STL-CLR)
Finds range that matches a specified key.  
  
## Syntax  
  
```  
cliext::pair<iterator, iterator> equal_range(key_type key);  
```  
  
#### Parameters  
 key  
 Key value to search for.  
  
## Remarks  
 The member function returns a pair of iterators `cliext::pair<iterator, iterator>(` [multiset::lower_bound (STL/CLR)](../VS_visualcpp/multiset--lower_bound--STL-CLR-.md)`(``key``),` [multiset::upper_bound (STL/CLR)](../VS_visualcpp/multiset--upper_bound--STL-CLR-.md)`(``key``))`. You use it to determine the range of elements currently in the controlled sequence that match a specified key.  
  
## Example  
  
```  
// cliext_multiset_equal_range.cpp   
// compile with: /clr   
#include <cliext/set>   
  
typedef cliext::multiset<wchar_t> Mymultiset;   
typedef Mymultiset::pair_iter_iter Pairii;   
int main()   
    {   
    Mymultiset c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// display results of failed search   
    Pairii pair1 = c1.equal_range(L'x');   
    System::Console::WriteLine("equal_range(L'x') empty = {0}",   
        pair1.first == pair1.second);   
  
// display results of successful search   
    pair1 = c1.equal_range(L'b');   
    for (; pair1.first != pair1.second; ++pair1.first)   
        System::Console::Write(" {0}", *pair1.first);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **a b c**  
**equal_range(L'x') empty = True**  
 **b**   
## Requirements  
 **Header:** <cliext/set>  
  
 **Namespace:** cliext  
  
## See Also  
 [multiset (STL/CLR)](../VS_visualcpp/multiset--STL-CLR-.md)   
 [multiset::count (STL/CLR)](../VS_visualcpp/multiset--count--STL-CLR-.md)   
 [multiset::find (STL/CLR)](../VS_visualcpp/multiset--find--STL-CLR-.md)   
 [multiset::lower_bound (STL/CLR)](../VS_visualcpp/multiset--lower_bound--STL-CLR-.md)   
 [multiset::upper_bound (STL/CLR)](../VS_visualcpp/multiset--upper_bound--STL-CLR-.md)