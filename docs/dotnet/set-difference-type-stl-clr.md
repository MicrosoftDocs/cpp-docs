---
title: "set::difference_type (STL-CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::set::difference_type"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "difference_type member [STL/CLR]"
ms.assetid: db8121f0-ca2f-4024-996a-0b8513f03079
caps.latest.revision: 14
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
# set::difference_type (STL/CLR)
The types of a signed distance between two elements.  
  
## Syntax  
  
```  
typedef int difference_type;  
```  
  
## Remarks  
 The type describes a possibly negative element count.  
  
## Example  
  
```  
// cliext_set_difference_type.cpp   
// compile with: /clr   
#include <cliext/set>   
  
typedef cliext::set<wchar_t> Myset;   
int main()   
    {   
    Myset c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// compute positive difference   
    Myset::difference_type diff = 0;   
    for (Myset::iterator it = c1.begin(); it != c1.end(); ++it)   
        ++diff;   
    System::Console::WriteLine("end()-begin() = {0}", diff);   
  
// compute negative difference   
    diff = 0;   
    for (Myset::iterator it = c1.end(); it != c1.begin(); --it)   
        --diff;   
    System::Console::WriteLine("begin()-end() = {0}", diff);   
    return (0);   
    }  
  
```  
  
```Output  
 a b c  
end()-begin() = 3  
begin()-end() = -3  
```  
  
## Requirements  
 **Header:** \<cliext/set>  
  
 **Namespace:** cliext  
  
## See Also  
 [set (STL/CLR)](../dotnet/set-stl-clr.md)   
 [set::size_type (STL/CLR)](../dotnet/set-size-type-stl-clr.md)