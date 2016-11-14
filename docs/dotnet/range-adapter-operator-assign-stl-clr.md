---
title: "range_adapter::operator= (STL-CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::operator="
  - "cliext::range_adapter::operator="
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operator= member [STL/CLR]"
ms.assetid: ac378ccc-a42c-4a90-bc27-9b416bee7fa9
caps.latest.revision: 9
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
# range_adapter::operator= (STL/CLR)
Replaces the stored iterator pair.  
  
## Syntax  
  
```  
range_adapter<Iter>% operator=(range_adapter<Iter>% right);  
```  
  
#### Parameters  
 right  
 Adapter to copy.  
  
## Remarks  
 The member operator copies `right` to the object, then returns `*this`. You use it to replace the stored iterator pair with a copy of the stored iterator pair in `right`.  
  
## Example  
  
```  
// cliext_range_adapter_operator_as.cpp   
// compile with: /clr   
#include <cliext/adapter>   
#include <cliext/deque>   
  
typedef cliext::deque<wchar_t> Mycont;   
typedef cliext::range_adapter<Mycont::iterator> Myrange;   
int main()   
    {   
    cliext::deque<wchar_t> d1;   
    d1.push_back(L'a');   
    d1.push_back(L'b');   
    d1.push_back(L'c');   
    Myrange c1(d1.begin(), d1.end());   
  
// display contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// assign to a new container   
    Myrange c2;   
    c2 = c1;   
    for each (wchar_t elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
a b c  
a b c  
```  
  
## Requirements  
 **Header:** \<cliext/adapter>  
  
 **Namespace:** cliext  
  
## See Also  
 [range_adapter (STL/CLR)](../dotnet/range-adapter-stl-clr.md)