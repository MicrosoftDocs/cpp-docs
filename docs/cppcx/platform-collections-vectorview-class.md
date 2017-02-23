---
title: "Platform::Collections::VectorView Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::VectorView"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VectorView Class"
ms.assetid: 05cd461d-dce7-49d3-b0e7-2e5c78ed8192
caps.latest.revision: 8
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Platform::Collections::VectorView Class
Represents a read-only view of a sequential collection of objects that can be individually accessed by index. The type of each object in the collection is specified by the template parameter.  
  
## Syntax  
  
```  
template <typename T, typename E>  
   ref class VectorView sealed;  
```  
  
#### Parameters  
 `T`  
 The type of the elements contained in the `VectorView` object.  
  
 `E`  
 Specifies a binary predicate for testing equality with values of type `T`. The default value is `std::equal_to<T>`.  
  
## Remarks  
 The `VectorView` class implements the [Windows::Foundation::Collections::IVectorView\<T>](http://go.microsoft.com/fwlink/p/?LinkId=262411) interface, and support for Standard Template Library iterators.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[VectorView::VectorView Constructor](../cppcx/vectorview-vectorview-constructor.md)|Initializes a new instance of the VectorView class.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[VectorView::First Method](../cppcx/vectorview-first-method.md)|Returns an iterator that specifies the first element in the VectorView.|  
|[VectorView::GetAt Method](../cppcx/vectorview-getat-method.md)|Retrieves the element of the current VectorView that is indicated by the specified index.|  
|[VectorView::GetMany Method](../cppcx/vectorview-getmany-method.md)|Retrieves a sequence of items from the current VectorView, starting at the specified index.|  
|[VectorView::IndexOf Method](../cppcx/vectorview-indexof-method.md)|Searches for the specified item in the current VectorView, and if found, returns the index of the item.|  
|[VectorView::Size Method](../cppcx/vectorview-size-method.md)|Returns the number of elements in the current VectorView object.|  
  
## Inheritance Hierarchy  
 `VectorView`  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [(NOTINBUILD) Platform Namespace](http://msdn.microsoft.com/en-us/f3ce3eab-028c-4204-ba9f-9ab8af17c8c4)   
 [Creating Windows Runtime Components in C++](/MicrosoftDocs/windows-uwp/blob/docs/windows-apps-src/winrt-components/creating-windows-runtime-components-in-cpp.md)