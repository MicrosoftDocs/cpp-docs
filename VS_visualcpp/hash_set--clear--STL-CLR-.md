---
title: "hash_set::clear (STL-CLR)"
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
H1: hash_set::clear (STL/CLR)
ms.assetid: 9f38b72a-5db8-485a-b41a-7d47ac57f4a9
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
# hash_set::clear (STL-CLR)
Removes all elements.  
  
## Syntax  
  
```  
void clear();  
```  
  
## Remarks  
 The member function effectively calls [hash_set::erase (STL/CLR)](../VS_visualcpp/hash_set--erase--STL-CLR-.md)`(` [hash_set::begin (STL/CLR)](../VS_visualcpp/hash_set--begin--STL-CLR-.md)`(),` [hash_set::end (STL/CLR)](../VS_visualcpp/hash_set--end--STL-CLR-.md)`())`. You use it to ensure that the controlled sequence is empty.  
  
## Example  
  
```  
// cliext_hash_set_clear.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_set<wchar_t> Myhash_set;   
int main()   
    {   
    Myhash_set c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// clear the container and reinspect   
    c1.clear();   
    System::Console::WriteLine("size() = {0}", c1.size());   
  
// add elements and clear again   
    c1.insert(L'a');   
    c1.insert(L'b');   
  
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    c1.clear();   
    System::Console::WriteLine("size() = {0}", c1.size());   
    return (0);   
    }  
  
```  
  
  **a b c**  
**size() = 0**  
 **a b**  
**size() = 0**   
## Requirements  
 **Header:** <cliext/hash_set>  
  
 **Namespace:** cliext  
  
## See Also  
 [hash_set (STL/CLR)](../VS_visualcpp/hash_set--STL-CLR-.md)   
 [hash_set::erase (STL/CLR)](../VS_visualcpp/hash_set--erase--STL-CLR-.md)