---
title: "hash_set::make_value (STL-CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::hash_set::make_value"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "make_value member [STL/CLR]"
ms.assetid: 19819fee-d3a0-428d-92db-cba7235d37d4
caps.latest.revision: 8
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
# hash_set::make_value (STL/CLR)
Constructs a value object.  
  
## Syntax  
  
```  
static value_type make_value(key_type key);  
```  
  
#### Parameters  
 key  
 Key value to use.  
  
## Remarks  
 The member function returns a `value_type` object whose key is `key`. You use it to compose an object suitable for use with several other member functions.  
  
## Example  
  
```  
// cliext_hash_set_make_value.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_set<wchar_t> Myhash_set;   
int main()   
    {   
    Myhash_set c1;   
    c1.insert(Myhash_set::make_value(L'a'));   
    c1.insert(Myhash_set::make_value(L'b'));   
    c1.insert(Myhash_set::make_value(L'c'));   
  
// display contents " a b c"   
    for each (Myhash_set::value_type elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
a b c  
```  
  
## Requirements  
 **Header:** \<cliext/hash_set>  
  
 **Namespace:** cliext  
  
## See Also  
 [hash_set (STL/CLR)](../dotnet/hash-set-stl-clr.md)   
 [hash_set::key_type (STL/CLR)](../dotnet/hash-set-key-type-stl-clr.md)   
 [hash_set::value_type (STL/CLR)](../dotnet/hash-set-value-type-stl-clr.md)