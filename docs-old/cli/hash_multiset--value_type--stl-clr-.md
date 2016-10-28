---
title: "hash_multiset::value_type (STL-CLR)"
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
  - "cliext::hash_multiset::value_type"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "value_type member [STL/CLR]"
ms.assetid: 8f9cd362-28e7-4916-af4e-c37e780e097c
caps.latest.revision: 13
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
# hash_multiset::value_type (STL/CLR)
The type of an element.  
  
## Syntax  
  
```  
typedef generic_value value_type;  
```  
  
## Remarks  
 The type is a synonym for `generic_value`.  
  
## Example  
  
```  
// cliext_hash_multiset_value_type.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_multiset<wchar_t> Myhash_multiset;   
int main()   
    {   
    Myhash_multiset c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display contents " a b c" using value_type   
    for (Myhash_multiset::iterator it = c1.begin(); it != c1.end(); ++it)   
        {   // store element in value_type object   
        Myhash_multiset::value_type val = *it;   
  
        System::Console::Write(" {0}", val);   
        }   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **a b c**   
## Requirements  
 **Header:** \<cliext/hash_set>  
  
 **Namespace:** cliext  
  
## See Also  
 [hash_multiset (STL/CLR)](../cli/hash_multiset--stl-clr-.md)   
 [hash_multiset::const_reference (STL/CLR)](../cli/hash_multiset--const_reference--stl-clr-.md)   
 [hash_multiset::key_type (STL/CLR)](../cli/hash_multiset--key_type--stl-clr-.md)   
 [hash_multiset::reference (STL/CLR)](../cli/hash_multiset--reference--stl-clr-.md)