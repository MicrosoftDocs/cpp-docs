---
title: "hash_set::hasher (STL-CLR)"
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
H1: hash_set::hasher (STL/CLR)
ms.assetid: 0fafd645-0bdf-4d4c-8630-c536fbc4bd2c
caps.latest.revision: 12
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
# hash_set::hasher (STL-CLR)
The hashing delegate for a key.  
  
## Syntax  
  
```  
Microsoft::VisualC::StlClr::UnaryDelegate<GKey, int>  
    hasher;  
```  
  
## Remarks  
 The type describes a delegate that converts a key value to an integer.  
  
## Example  
  
```  
// cliext_hash_set_hasher.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_set<wchar_t> Myhash_set;   
int main()   
    {   
    Myhash_set c1;   
    Myhash_set::hasher^ myhash = c1.hash_delegate();   
  
    System::Console::WriteLine("hash(L'a') = {0}", myhash(L'a'));   
    System::Console::WriteLine("hash(L'b') = {0}", myhash(L'b'));   
    return (0);   
    }  
  
```  
  
 **hash(L'a') = 1616896120**  
**hash(L'b') = 570892832**   
## Requirements  
 **Header:** <cliext/hash_set>  
  
 **Namespace:** cliext  
  
## See Also  
 [hash_set (STL/CLR)](../VS_visualcpp/hash_set--STL-CLR-.md)   
 [hash_set::hash_delegate (STL/CLR)](../VS_visualcpp/hash_set--hash_delegate--STL-CLR-.md)