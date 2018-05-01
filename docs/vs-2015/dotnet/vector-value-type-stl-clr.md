---
title: "vector::value_type (STL-CLR) | Microsoft Docs"
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
  - "cliext::vector::value_type"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "value_type member [STL/CLR]"
ms.assetid: d8777470-5e7f-40d5-966c-a3c518d1f54c
caps.latest.revision: 18
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# vector::value_type (STL/CLR)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [vector::value_type (STL/CLR)](https://docs.microsoft.com/cpp/dotnet/vector-value-type-stl-clr).  
  
  
The type of an element.  
  
## Syntax  
  
```  
typedef Value value_type;  
```  
  
## Remarks  
 The type is a synonym for the template parameter `Value`.  
  
## Example  
  
```  
// cliext_vector_value_type.cpp   
// compile with: /clr   
#include <cliext/vector>   
  
int main()   
    {   
    cliext::vector<wchar_t> c1;   
    c1.push_back(L'a');   
    c1.push_back(L'b');   
    c1.push_back(L'c');   
  
// display contents " a b c" using value_type   
    for (cliext::vector<wchar_t>::iterator it = c1.begin();   
        it != c1.end(); ++it)   
        {   // store element in value_type object   
        cliext::vector<wchar_t>::value_type val = *it;   
  
        System::Console::Write(" {0}", val);   
        }   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
a b c  
```  
  
## Requirements  
 **Header:** \<cliext/vector>  
  
 **Namespace:** cliext  
  
## See Also  
 [vector (STL/CLR)](../dotnet/vector-stl-clr.md)   
 [vector::const_reference (STL/CLR)](../dotnet/vector-const-reference-stl-clr.md)   
 [vector::reference (STL/CLR)](../dotnet/vector-reference-stl-clr.md)

