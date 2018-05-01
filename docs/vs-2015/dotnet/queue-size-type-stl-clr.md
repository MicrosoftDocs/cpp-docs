---
title: "queue::size_type (STL-CLR) | Microsoft Docs"
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
  - "cliext::queue::size_type"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "size_type member [STL/CLR]"
ms.assetid: 9b24c931-cc23-4d25-a29f-950ffff762ef
caps.latest.revision: 18
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# queue::size_type (STL/CLR)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [queue::size_type (STL/CLR)](https://docs.microsoft.com/cpp/dotnet/queue-size-type-stl-clr).  
  
  
The type of a signed distance between two element.  
  
## Syntax  
  
```  
typedef int size_type;  
```  
  
## Remarks  
 The type describes a non-negative element count.  
  
## Example  
  
```  
// cliext_queue_size_type.cpp   
// compile with: /clr   
#include <cliext/queue>   
  
typedef cliext::queue<wchar_t> Myqueue;   
int main()   
    {   
    Myqueue c1;   
    c1.push(L'a');   
    c1.push(L'b');   
    c1.push(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// compute positive difference   
    Myqueue::size_type diff = c1.size();   
    c1.pop();   
    c1.pop();   
    diff -= c1.size();   
    System::Console::WriteLine("size difference = {0}", diff);   
    return (0);   
    }  
  
```  
  
```Output  
 a b c  
size difference = 2  
```  
  
## Requirements  
 **Header:** \<cliext/queue>  
  
 **Namespace:** cliext  
  
## See Also  
 [queue (STL/CLR)](../dotnet/queue-stl-clr.md)   
 [queue::empty (STL/CLR)](../dotnet/queue-empty-stl-clr.md)

