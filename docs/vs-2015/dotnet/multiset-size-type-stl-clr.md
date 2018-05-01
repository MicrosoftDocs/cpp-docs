---
title: "multiset::size_type (STL-CLR) | Microsoft Docs"
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
  - "cliext::multiset::size_type"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "size_type member [STL/CLR]"
ms.assetid: 6ddadf69-ab2d-4b06-a59c-982c2e29f718
caps.latest.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# multiset::size_type (STL/CLR)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [multiset::size_type (STL/CLR)](https://docs.microsoft.com/cpp/dotnet/multiset-size-type-stl-clr).  
  
  
The type of a signed distance between two element.  
  
## Syntax  
  
```  
typedef int size_type;  
```  
  
## Remarks  
 The type describes a non-negative element count.  
  
## Example  
  
```  
// cliext_multiset_size_type.cpp   
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
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// compute positive difference   
    Mymultiset::size_type diff = 0;   
    for (Mymultiset::iterator it = c1.begin(); it != c1.end(); ++it)   
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
 **Header:** \<cliext/set>  
  
 **Namespace:** cliext  
  
## See Also  
 [multiset (STL/CLR)](../dotnet/multiset-stl-clr.md)   
 [multiset::empty (STL/CLR)](../dotnet/multiset-empty-stl-clr.md)

