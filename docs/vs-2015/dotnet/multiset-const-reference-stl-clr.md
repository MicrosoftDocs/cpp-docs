---
title: "multiset::const_reference (STL-CLR) | Microsoft Docs"
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
  - "cliext::multiset::const_reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "const_reference member [STL/CLR]"
ms.assetid: 6eb23893-ba20-4ddd-8206-60a9bacb8b1a
caps.latest.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# multiset::const_reference (STL/CLR)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [multiset::const_reference (STL/CLR)](https://docs.microsoft.com/cpp/dotnet/multiset-const-reference-stl-clr).  
  
  
The type of a constant reference to an element.  
  
## Syntax  
  
```  
typedef value_type% const_reference;  
```  
  
## Remarks  
 The type describes a constant reference to an element.  
  
## Example  
  
```  
// cliext_multiset_const_reference.cpp   
// compile with: /clr   
#include <cliext/set>   
  
typedef cliext::multiset<wchar_t> Mymultiset;   
int main()   
    {   
    Mymultiset c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display initial contents " a b c"   
    Mymultiset::const_iterator cit = c1.begin();   
    for (; cit != c1.end(); ++cit)   
        {   // get a const reference to an element   
        Mymultiset::const_reference cref = *cit;   
        System::Console::Write(" {0}", cref);   
        }   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
a b c  
```  
  
## Requirements  
 **Header:** \<cliext/set>  
  
 **Namespace:** cliext  
  
## See Also  
 [multiset (STL/CLR)](../dotnet/multiset-stl-clr.md)   
 [multiset::reference (STL/CLR)](../dotnet/multiset-reference-stl-clr.md)   
 [multiset::value_type (STL/CLR)](../dotnet/multiset-value-type-stl-clr.md)

