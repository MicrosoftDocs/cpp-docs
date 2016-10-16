---
title: "hash_map::hash_delegate (STL-CLR)"
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
  - "cliext::hash_map::hash_delegate"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "hash_delegate member [STL/CLR]"
ms.assetid: ae451fbe-a10c-457f-9b54-94dd9d93e8c4
caps.latest.revision: 14
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
# hash_map::hash_delegate (STL/CLR)
Finds an element that matches a specified key.  
  
## Syntax  
  
```  
hasher^ hash_delegate();  
```  
  
## Remarks  
 The member function returns the delegate used to convert a key value to an integer. You use it to hash a key.  
  
## Example  
  
```  
// cliext_hash_map_hash_delegate.cpp   
// compile with: /clr   
#include <cliext/hash_map>   
  
typedef cliext::hash_map<wchar_t, int> Myhash_map;   
int main()   
    {   
    Myhash_map c1;   
    Myhash_map::hasher^ myhash = c1.hash_delegate();   
  
    System::Console::WriteLine("hash(L'a') = {0}", myhash(L'a'));   
    System::Console::WriteLine("hash(L'b') = {0}", myhash(L'b'));   
    return (0);   
    }  
  
```  
  
 **hash(L'a') = 1616896120**  
**hash(L'b') = 570892832**   
## Requirements  
 **Header:** \<cliext/hash_map>  
  
 **Namespace:** cliext  
  
## See Also  
 [hash_map (STL/CLR)](../cli/hash_map--stl-clr-.md)   
 [hash_map::hasher (STL/CLR)](../cli/hash_map--hasher--stl-clr-.md)