---
title: "set::find (STL-CLR)"
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
H1: set::find (STL/CLR)
ms.assetid: 916e581c-2815-4c07-a51a-6c5ddfa730c1
caps.latest.revision: 14
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
# set::find (STL-CLR)
Finds an element that matches a specified key.  
  
## Syntax  
  
```  
iterator find(key_type key);  
```  
  
#### Parameters  
 key  
 Key value to search for.  
  
## Remarks  
 If at least one element in the controlled sequence has equivalent ordering with `key`, the member function returns an iterator designating one of those elements; otherwise it returns [set::end (STL/CLR)](../VS_visualcpp/set--end--STL-CLR-.md)`()`. You use it to locate an element currently in the controlled sequence that matches a specified key.  
  
## Example  
  
```  
// cliext_set_find.cpp   
// compile with: /clr   
#include <cliext/set>   
  
typedef cliext::set<wchar_t> Myset;   
int main()   
    {   
    Myset c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
    System::Console::WriteLine("find {0} = {1}",   
        L'A', c1.find(L'A') != c1.end());   
    System::Console::WriteLine("find {0} = {1}",   
        L'b', *c1.find(L'b'));   
    System::Console::WriteLine("find {0} = {1}",   
        L'C', c1.find(L'C') != c1.end());   
    return (0);   
    }  
  
```  
  
  **a b c**  
**find A = False**  
**find b = b**  
**find C = False**   
## Description  
 Note that `find` does not guarantee which of several element it finds.  
  
## Requirements  
 **Header:** <cliext/set>  
  
 **Namespace:** cliext  
  
## See Also  
 [set (STL/CLR)](../VS_visualcpp/set--STL-CLR-.md)   
 [set::equal_range (STL/CLR)](../VS_visualcpp/set--equal_range--STL-CLR-.md)   
 [set::lower_bound (STL/CLR)](../VS_visualcpp/set--lower_bound--STL-CLR-.md)   
 [set::upper_bound (STL/CLR)](../VS_visualcpp/set--upper_bound--STL-CLR-.md)