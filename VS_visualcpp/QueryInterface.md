---
title: "QueryInterface"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 62fce95e-aafa-4187-b50b-e6611b74c3b3
caps.latest.revision: 8
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# QueryInterface
Although there are mechanisms by which an object can express the functionality it provides statically (before it is instantiated), the fundamental COM mechanism is to use the **IUnknown** method called [QueryInterface](http://msdn.microsoft.com/library/windows/desktop/ms682521).  
  
 Every interface is derived from **IUnknown**, so every interface has an implementation of `QueryInterface`. Regardless of implementation, this method queries an object using the IID of the interface to which the caller wants a pointer. If the object supports that interface, `QueryInterface` retrieves a pointer to the interface, while also calling `AddRef`. Otherwise, it returns the **E_NOINTERFACE** error code.  
  
 Note that you must obey [Reference Counting](../VS_visualcpp/Reference-Counting.md) rules at all times. If you call **Release** on an interface pointer to decrement the reference count to zero, you should not use that pointer again. Occasionally you may need to obtain a weak reference to an object (that is, you may wish to obtain a pointer to one of its interfaces without incrementing the reference count), but it is not acceptable to do this by calling `QueryInterface` followed by **Release**. The pointer obtained in such a manner is invalid and should not be used. This more readily becomes apparent when [_ATL_DEBUG_INTERFACES](../Topic/_ATL_DEBUG_INTERFACES.md) is defined, so defining this macro is a useful way of finding reference counting bugs.  
  
## See Also  
 [Introduction to COM](../VS_visualcpp/Introduction-to-COM.md)   
 [QueryInterface: Navigating in an Object](http://msdn.microsoft.com/library/windows/desktop/ms687230)