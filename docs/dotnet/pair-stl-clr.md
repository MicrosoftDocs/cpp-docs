---
title: "pair (STL-CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::pair"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "pair class [STL/CLR]"
ms.assetid: 3326b4d9-a52a-49e5-8103-9aa5e8b352de
caps.latest.revision: 5
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
# pair (STL/CLR)
The template class describes an object that wraps a pair of values.  
  
## Syntax  
  
```  
template<typename Value1,  
    typename Value2>  
    ref class pair;  
```  
  
#### Parameters  
 Value1  
 The type of first wrapped value.  
  
 Value2  
 The type of second wrapped value.  
  
## Members  
  
|Type Definition|Description|  
|---------------------|-----------------|  
|[pair::first_type (STL/CLR)](../dotnet/pair-first-type-stl-clr.md)|The type of the first wrapped value.|  
|[pair::second_type (STL/CLR)](../dotnet/pair-second-type-stl-clr.md)|The type of the second wrapped value.|  
  
|Member Object|Description|  
|-------------------|-----------------|  
|[pair::first (STL/CLR)](../dotnet/pair-first-stl-clr.md)|The first stored value.|  
|[pair::second (STL/CLR)](../dotnet/pair-second-stl-clr.md)|The second stored value.|  
  
|Member Function|Description|  
|---------------------|-----------------|  
|[pair::pair (STL/CLR)](../dotnet/pair-pair-stl-clr.md)|Constructs a pair object.|  
|[pair::swap (STL/CLR)](../dotnet/pair-swap-stl-clr.md)|Swaps the contents of two pairs.|  
  
|Operator|Description|  
|--------------|-----------------|  
|[pair::operator= (STL/CLR)](../dotnet/pair-operator-assign-stl-clr.md)|Replaces the stored pair of values.|  
  
## Remarks  
 The object stores a pair of values. You use this template class to combine two values into a single object. Note that `cliext::pair` (described here) stores only managed types; to store a pair of unmanaged types use `std::pair`, declared in `<utility>`.  
  
## Requirements  
 **Header:** \<cliext/utility>  
  
 **Namespace:** cliext  
  
## See Also  
 [make_pair (STL/CLR)](../dotnet/make-pair-stl-clr.md)