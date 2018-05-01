---
title: "deque::const_iterator (STL-CLR) | Microsoft Docs"
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
  - "cliext::deque::const_iterator"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "const_iterator member [STL/CLR]"
ms.assetid: 51579985-4664-4aaa-bad3-02f52f9050ac
caps.latest.revision: 18
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# deque::const_iterator (STL/CLR)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [deque::const_iterator (STL/CLR)](https://docs.microsoft.com/cpp/dotnet/deque-const-iterator-stl-clr).  
  
  
The type of a constant iterator for the controlled sequence.  
  
## Syntax  
  
```  
typedef T2 const_iterator;  
```  
  
## Remarks  
 The type describes an object of unspecified type `T2` that can serve as a constant random-access iterator for the controlled sequence.  
  
## Example  
  
```  
// cliext_deque_const_iterator.cpp   
// compile with: /clr   
#include <cliext/deque>   
  
int main()   
    {   
    cliext::deque<wchar_t> c1;   
    c1.push_back(L'a');   
    c1.push_back(L'b');   
    c1.push_back(L'c');   
  
// display contents " a b c"   
    cliext::deque<wchar_t>::const_iterator cit = c1.begin();   
    for (; cit != c1.end(); ++cit)   
        System::Console::Write(" {0}", *cit);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
a b c  
```  
  
## Requirements  
 **Header:** \<cliext/deque>  
  
 **Namespace:** cliext  
  
## See Also  
 [deque (STL/CLR)](../dotnet/deque-stl-clr.md)   
 [deque::iterator (STL/CLR)](../dotnet/deque-iterator-stl-clr.md)

