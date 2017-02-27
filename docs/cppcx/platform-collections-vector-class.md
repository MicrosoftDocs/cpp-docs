---
title: "Platform::Collections::Vector Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::Vector"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Vector Class (C++/Cx)"
ms.assetid: aee8c076-9700-47c3-99b6-799fd3edb0ca
caps.latest.revision: 17
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Platform::Collections::Vector Class
Represents a sequential collection of objects that can be individually accessed by index.  
  
## Syntax  
  
```  
template <typename T, typename E>  
   ref class Vector sealed;  
```  
  
#### Parameters  
 `T`  
 The type of the elements contained in the Vector object.  
  
 `E`  
 Specifies a binary predicate for testing equality with values of type `T`. The default value is `std::equal_to<T>`.  
  
## Remarks  
 Allowed types are:  
  
1.  integers  
  
2.  interface class ^  
  
3.  public ref class^  
  
4.  value struct  
  
5.  public enum class  
  
 The Vector class is the C++ concrete implementation of the [Windows::Foundation::Collections::IVector](http://go.microsoft.com/fwlink/p/?LinkId=262410) interface.  
  
 If you attempt to use a Vector type in a public return value or parameter, compiler error C3986 will be raised. You can fix the error by changing the parameter or return value type to [Windows::Foundation::Collections::IVector](http://go.microsoft.com/fwlink/p/?LinkId=262410). For more information, see [Collections (C++/CX)](../cppcx/collections-c-cx.md).  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[Vector::Vector Constructor](../cppcx/vector-vector-constructor.md)|Initializes a new instance of the Vector class.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[Vector::Append Method](../cppcx/vector-append-method.md)|Inserts the specified item after the last item in the current Vector.|  
|[Vector::Clear Method](../cppcx/vector-clear-method.md)|Deletes all the elements in the current Vector.|  
|[Vector::First Method](../cppcx/vector-first-method.md)|Returns an iterator that specifies the first element in the Vector.|  
|[Vector::GetAt Method](../cppcx/vector-getat-method.md)|Retrieves the element of the current Vector that is identifed by the specified index.|  
|[Vector::GetMany Method](../cppcx/vector-getmany-method.md)|Retrieves a sequence of items from the current Vector, starting at the specified index.|  
|[Vector::GetView Method](../cppcx/vector-getview-method.md)|Returns a read-only view of a Vector; that is, a [Platform::Collections::VectorView](../cppcx/platform-collections-vectorview-class.md).|  
|[Vector::IndexOf Method](../cppcx/vector-indexof-method.md)|Searches for the specified item in the current Vector, and if found, returns the index of the item.|  
|[Vector::InsertAt Method](../cppcx/vector-insertat-method.md)|Inserts the specified item into the current Vector after the element identified by the specified index.|  
|[Vector::ReplaceAll Method](../cppcx/vector-replaceall-method.md)|Deletes the elements in the current Vector and then inserts the elements from the specified array.|  
|[Vector::RemoveAt Method](../cppcx/vector-removeat-method.md)|Deletes the element identified by the specified index from the current Vector.|  
|[Vector::RemoveAtEnd Method](../cppcx/vector-removeatend-method.md)|Deletes the element at the end of the current Vector.|  
|[Vector::SetAt Method](../cppcx/vector-setat-method.md)|Assigns the specified value to the element in the current Vector that is identified by the specified index.|  
|[Vector::Size Method](../cppcx/vector-size-method.md)|Returns the number of elements in the current Vector object.|  
  
### Events  
  
|||  
|-|-|  
|Name|Description|  
|event [Windows::Foundation::Collection::VectorChangedEventHandler\<T>^ VectorChanged](http://go.microsoft.com/fwlink/p/?LinkId=262644)|Occurs when the Vector changes.|  
  
## Inheritance Hierarchy  
 `Vector`  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [Platform Namespace](platform-namespace-c-cx.md)   
 [Creating Windows Runtime Components in C++](/MicrosoftDocs/windows-uwp/blob/docs/windows-apps-src/winrt-components/creating-windows-runtime-components-in-cpp.md)