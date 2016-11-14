---
title: "pair::pair (STL-CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::pair::pair"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "pair member [STL/CLR]"
ms.assetid: 188035f3-bd37-4b46-96dd-5ceb9a16df79
caps.latest.revision: 8
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
# pair::pair (STL/CLR)
Constructs a pair object.  
  
## Syntax  
  
```  
pair();  
pair(pair<Coll>% right);  
pair(pair<Coll>^ right);  
pair(Value1 val1, Value2 val2);  
```  
  
#### Parameters  
 right  
 Pair to store.  
  
 val1  
 First value to store.  
  
 val2  
 Second value to store.  
  
## Remarks  
 The constructor:  
  
 `pair();`  
  
 initializes the stored pair with default constructed values.  
  
 The constructor:  
  
 `pair(pair<Value1, Value2>% right);`  
  
 initializes the stored pair with `right``.`[pair::first (STL/CLR)](../dotnet/pair-first-stl-clr.md) and `right``.`[pair::second (STL/CLR)](../dotnet/pair-second-stl-clr.md).  
  
 `pair(pair<Value1, Value2>^ right);`  
  
 initializes the stored pair with `right``->`[pair::first (STL/CLR)](../dotnet/pair-first-stl-clr.md) and `right``>`[pair::second (STL/CLR)](../dotnet/pair-second-stl-clr.md).  
  
 The constructor:  
  
 `pair(Value1 val1, Value2 val2);`  
  
 initializes the stored pair with with `val1` and `val2`.  
  
## Example  
  
```  
// cliext_pair_construct.cpp   
// compile with: /clr   
#include <cliext/utility>   
  
int main()   
    {   
// construct an empty container   
    cliext::pair<wchar_t, int> c1;   
    System::Console::WriteLine("[{0}, {1}]",   
        c1.first == L'\0' ? "\\0" : "??", c1.second);   
  
// construct with a pair of values   
    cliext::pair<wchar_t, int> c2(L'x', 3);   
    System::Console::WriteLine("[{0}, {1}]", c2.first, c2.second);   
  
// construct by copying another pair   
    cliext::pair<wchar_t, int> c3(c2);   
    System::Console::WriteLine("[{0}, {1}]", c3.first, c3.second);   
  
// construct by copying a pair handle   
    cliext::pair<wchar_t, int> c4(%c3);   
    System::Console::WriteLine("[{0}, {1}]", c4.first, c4.second);   
  
    return (0);   
    }  
  
```  
  
```Output  
[\0, 0]  
[x, 3]  
[x, 3]  
[x, 3]  
```  
  
## Requirements  
 **Header:** \<cliext/utility>  
  
 **Namespace:** cliext  
  
## See Also  
 [pair (STL/CLR)](../dotnet/pair-stl-clr.md)