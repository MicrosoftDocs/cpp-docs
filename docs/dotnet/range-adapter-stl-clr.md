---
title: "range_adapter (STL-CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::range_adapter"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "range_adapter class [STL/CLR]"
ms.assetid: 3fbe2a65-1216-46a0-a182-422816b80cfb
caps.latest.revision: 16
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
# range_adapter (STL/CLR)
A template class that wraps a pair of iterators that are used to implement several Base Class Library (BCL) interfaces. You use the range_adapter to manipulate an STL/CLR range as if it were a BCL collection.  
  
## Syntax  
  
```  
template<typename Iter>  
    ref class range_adapter  
        :   public  
        System::Collections::IEnumerable,  
        System::Collections::ICollection,  
        System::Collections::Generic::IEnumerable<Value>,  
        System::Collections::Generic::ICollection<Value>  
    { ..... };  
```  
  
#### Parameters  
 Iter  
 The type associated with the wrapped iterators.  
  
## Members  
  
|Member Function|Description|  
|---------------------|-----------------|  
|[range_adapter::range_adapter (STL/CLR)](../dotnet/range-adapter-range-adapter-stl-clr.md)|Constructs an adapter object.|  
  
|Operator|Description|  
|--------------|-----------------|  
|[range_adapter::operator= (STL/CLR)](../dotnet/range-adapter-operator-assign-stl-clr.md)|Replaces the stored iterator pair.|  
  
## Interfaces  
  
|Interface|Description|  
|---------------|-----------------|  
|<xref:System.Collections.IEnumerable>|Iterates through elements in the collection.|  
|<xref:System.Collections.ICollection>|Maintains a group of elements.|  
|<xref:System.Collections.Generic.IEnumerable%601>|Iterates through typed elements in the collection..|  
|<xref:System.Collections.Generic.ICollection%601>|Maintains a group of typed elements.|  
  
## Remarks  
 The range_adapter stores a pair of iterators, which in turn delimit a sequence of elements. The object implements four BCL interfaces that let you iterate through the elements, in order. You use this template class to manipulate STL/CLR ranges much like BCL containers.  
  
## Requirements  
 **Header:** \<cliext/adapter>  
  
 **Namespace:** cliext  
  
## See Also  
 [collection_adapter (STL/CLR)](../dotnet/collection-adapter-stl-clr.md)   
 [make_collection (STL/CLR)](../dotnet/make-collection-stl-clr.md)