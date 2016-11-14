---
title: "collection_adapter::difference_type (STL-CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::collection_adapter::difference_type"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "difference_type member [STL/CLR]"
ms.assetid: ef263e3f-f932-4d64-9d27-429c7b8ba279
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
# collection_adapter::difference_type (STL/CLR)
The types of a signed distance between two elements.  
  
## Syntax  
  
```  
typedef int difference_type;  
```  
  
## Remarks  
 The type describes a signed element count.  
  
## Example  
  
```  
// cliext_collection_adapter_difference_type.cpp   
// compile with: /clr   
#include <cliext/adapter>   
#include <cliext/deque>   
  
typedef cliext::collection_adapter<   
    System::Collections::ICollection> Mycoll;   
int main()   
    {   
    cliext::deque<wchar_t> d1;   
    d1.push_back(L'a');   
    d1.push_back(L'b');   
    d1.push_back(L'c');   
    Mycoll c1(%d1);   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// compute positive difference   
    Mycoll::difference_type diff = 0;   
    Mycoll::iterator it = c1.begin();   
    for (; it != c1.end(); ++it)   
        ++diff;   
    System::Console::WriteLine("end()-begin() = {0}", diff);   
    return (0);   
    }  
  
```  
  
```Output  
 a b c  
end()-begin() = 3  
```  
  
## Requirements  
 **Header:** \<cliext/adapter>  
  
 **Namespace:** cliext  
  
## See Also  
 [collection_adapter (STL/CLR)](../dotnet/collection-adapter-stl-clr.md)   
 [collection_adapter::size_type (STL/CLR)](../dotnet/collection-adapter-size-type-stl-clr.md)