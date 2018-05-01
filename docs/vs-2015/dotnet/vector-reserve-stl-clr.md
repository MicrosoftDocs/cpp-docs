---
title: "vector::reserve (STL-CLR) | Microsoft Docs"
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
  - "cliext::vector::reserve"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "reserve member [STL/CLR]"
ms.assetid: d1d5ede9-9628-4b55-95ec-f087a57205f2
caps.latest.revision: 18
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# vector::reserve (STL/CLR)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [vector::reserve (STL/CLR)](https://docs.microsoft.com/cpp/dotnet/vector-reserve-stl-clr).  
  
  
Ensures a minimum growth capacity for the container.  
  
## Syntax  
  
```  
void reserve(size_type count);  
```  
  
#### Parameters  
 count  
 New minimum capacity of the container.  
  
## Remarks  
 The member function ensures that `capacity()` henceforth returns at least `count`. You use it to ensure that the container need not reallocate storage for the controlled sequence until it has grown to the specified size.  
  
## Example  
  
```  
// cliext_vector_reserve.cpp   
// compile with: /clr   
#include <cliext/vector>   
  
int main()   
    {   
    cliext::vector<wchar_t> c1;   
    c1.push_back(L'a');   
    c1.push_back(L'b');   
    c1.push_back(L'c');   
  
// display initial contents " a b c"   
    for (int i = 0; i < c1.size(); ++i)   
        System::Console::Write(" {0}", c1.at(i));   
    System::Console::WriteLine();   
  
// increase capacity   
    cliext::vector<wchar_t>::size_type cap = c1.capacity();   
    System::Console::WriteLine("capacity() = {0}, ok = {1}",   
        cap, c1.size() <= cap);   
    c1.reserve(cap + 5);   
    System::Console::WriteLine("capacity() = {0}, ok = {1}",   
        c1.capacity(), cap + 5 <= c1.capacity());   
    return (0);   
    }  
  
```  
  
```Output  
 a b c  
capacity() = 4, ok = True  
capacity() = 9, ok = True  
```  
  
## Description  
 Note that the actual capacities may differ from the values shown here, so long as all `ok` tests report true.  
  
## Requirements  
 **Header:** \<cliext/vector>  
  
 **Namespace:** cliext  
  
## See Also  
 [vector (STL/CLR)](../dotnet/vector-stl-clr.md)   
 [vector::capacity (STL/CLR)](../dotnet/vector-capacity-stl-clr.md)   
 [vector::resize (STL/CLR)](../dotnet/vector-resize-stl-clr.md)

