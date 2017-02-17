---
title: "VectorView::First Method | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::VectorView::First"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VectorView::First Method"
ms.assetid: 543a5c5b-8ce3-4be3-9fad-726928de7855
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# VectorView::First Method
Returns an iterator that specifies the first element in the VectorView.  
  
## Syntax  
  
```  
  
virtual Windows::Foundation::Collections::IIterator<T>^   
   First();  
```  
  
## Return Value  
 An iterator that specifies the first element in the VectorView.  
  
## Remarks  
 A convenient way to hold the iterator returned by First() is to assign the return value to a variable that is declared with the **auto** type deduction keyword. For example, `auto x = myVectorView->First();`.  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [VectorView Class](http://msdn.microsoft.com/en-us/79697692-ae58-40e0-958f-cf1be6347994)