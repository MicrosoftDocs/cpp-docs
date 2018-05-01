---
title: "map::key_comp (STL-CLR) | Microsoft Docs"
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
  - "cliext::map::key_comp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "key_comp member [STL/CLR]"
ms.assetid: 42607057-d0d7-48b9-aadf-f3336fcc50b4
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# map::key_comp (STL/CLR)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [map::key_comp (STL/CLR)](https://docs.microsoft.com/cpp/dotnet/map-key-comp-stl-clr).  
  
  
Copies the ordering delegate for two keys.  
  
## Syntax  
  
```  
key_compare^key_comp();  
```  
  
## Remarks  
 The member function returns the ordering delegate used to order the controlled sequence. You use it to compare two keys.  
  
## Example  
  
```  
// cliext_map_key_comp.cpp   
// compile with: /clr   
#include <cliext/map>   
  
typedef cliext::map<wchar_t, int> Mymap;   
int main()   
    {   
    Mymap c1;   
    Mymap::key_compare^ kcomp = c1.key_comp();   
  
    System::Console::WriteLine("compare(L'a', L'a') = {0}",   
        kcomp(L'a', L'a'));   
    System::Console::WriteLine("compare(L'a', L'b') = {0}",   
        kcomp(L'a', L'b'));   
    System::Console::WriteLine("compare(L'b', L'a') = {0}",   
        kcomp(L'b', L'a'));   
    System::Console::WriteLine();   
  
// test a different ordering rule   
    Mymap c2 = cliext::greater<wchar_t>();   
    kcomp = c2.key_comp();   
  
    System::Console::WriteLine("compare(L'a', L'a') = {0}",   
        kcomp(L'a', L'a'));   
    System::Console::WriteLine("compare(L'a', L'b') = {0}",   
        kcomp(L'a', L'b'));   
    System::Console::WriteLine("compare(L'b', L'a') = {0}",   
        kcomp(L'b', L'a'));   
    return (0);   
    }  
  
```  
  
```Output  
compare(L'a', L'a') = False  
compare(L'a', L'b') = True  
compare(L'b', L'a') = False  
  
compare(L'a', L'a') = False  
compare(L'a', L'b') = False  
compare(L'b', L'a') = True  
```  
  
## Requirements  
 **Header:** \<cliext/map>  
  
 **Namespace:** cliext  
  
## See Also  
 [map (STL/CLR)](../dotnet/map-stl-clr.md)   
 [map::key_compare (STL/CLR)](../dotnet/map-key-compare-stl-clr.md)   
 [map::key_type (STL/CLR)](../dotnet/map-key-type-stl-clr.md)

