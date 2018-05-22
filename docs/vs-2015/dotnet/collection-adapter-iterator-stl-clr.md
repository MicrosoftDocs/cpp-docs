---
title: "collection_adapter::iterator (STL-CLR) | Microsoft Docs"
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
  - "cliext::collection_adapter::iterator"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "iterator member [STL/CLR]"
ms.assetid: b1078abd-e766-464e-9dc6-32e95ab50695
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# collection_adapter::iterator (STL/CLR)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [collection_adapter::iterator (STL/CLR)](https://docs.microsoft.com/cpp/dotnet/collection-adapter-iterator-stl-clr).  
  
  
The type of an iterator for the controlled sequence.  
  
## Syntax  
  
```  
typedef T1 iterator;  
```  
  
## Remarks  
 The type describes an object of unspecified type `T1` that can serve as an input iterator for the controlled sequence.  
  
## Example  
  
```  
// cliext_collection_adapter_iterator.cpp   
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
    Mycoll::iterator it = c1.begin();   
    for (; it != c1.end(); ++it)   
        System::Console::Write(" {0}", *it);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
a b c  
```  
  
## Requirements  
 **Header:** \<cliext/adapter>  
  
 **Namespace:** cliext  
  
## See Also  
 [collection_adapter (STL/CLR)](../dotnet/collection-adapter-stl-clr.md)

