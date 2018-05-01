---
title: "hash_set::const_reference (STL-CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::hash_set::const_reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "const_reference member [STL/CLR]"
ms.assetid: 12e79114-91b6-4df8-9b5d-a92731d93f6a
caps.latest.revision: 18
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# hash_set::const_reference (STL/CLR)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [hash_set::const_reference (STL/CLR)](https://docs.microsoft.com/cpp/dotnet/hash-set-const-reference-stl-clr).  
  
  
The type of a constant reference to an element.  
  
## Syntax  
  
```  
typedef value_type% const_reference;  
```  
  
## Remarks  
 The type describes a constant reference to an element.  
  
## Example  
  
```  
// cliext_hash_set_const_reference.cpp   
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
    Myhash_set::const_iterator cit = c1.begin();   
    for (; cit != c1.end(); ++cit)   
        {   // get a const reference to an element   
        Myhash_set::const_reference cref = *cit;   
        System::Console::Write(" {0}", cref);   
        }   
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
 [hash_set::reference (STL/CLR)](../dotnet/hash-set-reference-stl-clr.md)   
 [hash_set::value_type (STL/CLR)](../dotnet/hash-set-value-type-stl-clr.md)

