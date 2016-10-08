---
title: "hash_set::upper_bound (STL-CLR)"
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
H1: hash_set::upper_bound (STL/CLR)
ms.assetid: dc8815f1-8b45-4f3d-a51f-54050d434d8f
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
# hash_set::upper_bound (STL-CLR)
Finds end of range that matches a specified key.  
  
## Syntax  
  
```  
iterator upper_bound(key_type key);  
```  
  
#### Parameters  
 key  
 Key value to search for.  
  
## Remarks  
 The member function determines the last element `X` in the controlled sequence that hashes to the same bucket as `key` and has equivalent ordering to `key`. If no such element exists, or if `X` is the last element in the controlled sequence, it returns [hash_set::end (STL/CLR)](../VS_visualcpp/hash_set--end--STL-CLR-.md)`()`; otherwise it returns an iterator that designates the first element beyond `X`. You use it to locate the end of a sequence of elements currently in the controlled sequence that match a specified key.  
  
## Example  
  
```  
// cliext_hash_set_upper_bound.cpp   
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
  
    System::Console::WriteLine("upper_bound(L'x')==end() = {0}",   
        c1.upper_bound(L'x') == c1.end());   
  
    System::Console::WriteLine("*upper_bound(L'a') = {0}",   
        *c1.upper_bound(L'a'));   
    System::Console::WriteLine("*upper_bound(L'b') = {0}",   
        *c1.upper_bound(L'b'));   
    return (0);   
    }  
  
```  
  
  **a b c**  
**upper_bound(L'x')==end() = True**  
**\*upper_bound(L'a') = b**  
**\*upper_bound(L'b') = c**   
## Requirements  
 **Header:** <cliext/hash_set>  
  
 **Namespace:** cliext  
  
## See Also  
 [hash_set (STL/CLR)](../VS_visualcpp/hash_set--STL-CLR-.md)   
 [hash_set::count (STL/CLR)](../VS_visualcpp/hash_set--count--STL-CLR-.md)   
 [hash_set::equal_range (STL/CLR)](../VS_visualcpp/hash_set--equal_range--STL-CLR-.md)   
 [hash_set::find (STL/CLR)](../VS_visualcpp/hash_set--find--STL-CLR-.md)   
 [hash_set::lower_bound (STL/CLR)](../VS_visualcpp/hash_set--lower_bound--STL-CLR-.md)