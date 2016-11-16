---
title: "hash_multiset::lower_bound (STL-CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::hash_multiset::lower_bound"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "lower_bound member [STL/CLR]"
ms.assetid: 891898fa-c9e8-4132-a71d-36e5141793f1
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
# hash_multiset::lower_bound (STL/CLR)
Finds beginning of range that matches a specified key.  
  
## Syntax  
  
```  
iterator lower_bound(key_type key);  
```  
  
#### Parameters  
 key  
 Key value to search for.  
  
## Remarks  
 The member function determines the first element `X` in the controlled sequence that hashes to the same bucket as `key` and has equivalent ordering to `key`. If no such element exists, it returns [hash_multiset::end (STL/CLR)](../dotnet/hash-multiset-end-stl-clr.md)`()`; otherwise it returns an iterator that designates `X`. You use it to locate the beginning of a sequence of elements currently in the controlled sequence that match a specified key.  
  
## Example  
  
```  
// cliext_hash_multiset_lower_bound.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_multiset<wchar_t> Myhash_multiset;   
int main()   
    {   
    Myhash_multiset c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
    System::Console::WriteLine("lower_bound(L'x')==end() = {0}",   
        c1.lower_bound(L'x') == c1.end());   
  
    System::Console::WriteLine("*lower_bound(L'a') = {0}",   
        *c1.lower_bound(L'a'));   
    System::Console::WriteLine("*lower_bound(L'b') = {0}",   
        *c1.lower_bound(L'b'));   
    return (0);   
    }  
  
```  
  
```Output  
 a b c  
lower_bound(L'x')==end() = True  
*lower_bound(L'a') = a  
*lower_bound(L'b') = b  
```  
  
## Requirements  
 **Header:** \<cliext/hash_set>  
  
 **Namespace:** cliext  
  
## See Also  
 [hash_multiset (STL/CLR)](../dotnet/hash-multiset-stl-clr.md)   
 [hash_multiset::count (STL/CLR)](../dotnet/hash-multiset-count-stl-clr.md)   
 [hash_multiset::equal_range (STL/CLR)](../dotnet/hash-multiset-equal-range-stl-clr.md)   
 [hash_multiset::find (STL/CLR)](../dotnet/hash-multiset-find-stl-clr.md)   
 [hash_multiset::upper_bound (STL/CLR)](../dotnet/hash-multiset-upper-bound-stl-clr.md)