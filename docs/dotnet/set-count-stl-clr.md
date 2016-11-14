---
title: "set::count (STL-CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::set::Count"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "count member [STL/CLR]"
ms.assetid: 78855f8c-3de5-4d3e-800b-0bbea5e829dd
caps.latest.revision: 17
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
# set::count (STL/CLR)
Finds the number of elements matching a specified key.  
  
## Syntax  
  
```  
size_type count(key_type key);  
```  
  
#### Parameters  
 key  
 Key value to search for.  
  
## Remarks  
 The member function returns the number of elements in the controlled sequence that have equivalent ordering with `key`. You use it to determine the number of elements currently in the controlled sequence that match a specified key.  
  
## Example  
  
```  
// cliext_set_count.cpp   
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
  
    System::Console::WriteLine("count(L'A') = {0}", c1.count(L'A'));   
    System::Console::WriteLine("count(L'b') = {0}", c1.count(L'b'));   
    System::Console::WriteLine("count(L'C') = {0}", c1.count(L'C'));   
    return (0);   
    }  
  
```  
  
```Output  
 a b c  
count(L'A') = 0  
count(L'b') = 1  
count(L'C') = 0  
```  
  
## Requirements  
 **Header:** \<cliext/set>  
  
 **Namespace:** cliext  
  
## See Also  
 [set (STL/CLR)](../dotnet/set-stl-clr.md)   
 [set::equal_range (STL/CLR)](../dotnet/set-equal-range-stl-clr.md)