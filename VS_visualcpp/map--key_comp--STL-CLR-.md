---
title: "map::key_comp (STL-CLR)"
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
H1: map::key_comp (STL/CLR)
ms.assetid: 42607057-d0d7-48b9-aadf-f3336fcc50b4
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
# map::key_comp (STL-CLR)
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
  
 **compare(L'a', L'a') = False**  
**compare(L'a', L'b') = True**  
**compare(L'b', L'a') = False**  
**compare(L'a', L'a') = False**  
**compare(L'a', L'b') = False**  
**compare(L'b', L'a') = True**   
## Requirements  
 **Header:** <cliext/map>  
  
 **Namespace:** cliext  
  
## See Also  
 [map (STL/CLR)](../VS_visualcpp/map--STL-CLR-.md)   
 [map::key_compare (STL/CLR)](../VS_visualcpp/map--key_compare--STL-CLR-.md)   
 [map::key_type (STL/CLR)](../VS_visualcpp/map--key_type--STL-CLR-.md)