---
title: "QueryInterface | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "QueryInterface"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "interfaces, pointers"
  - "interfaces, availability"
  - "QueryInterface method"
ms.assetid: 62fce95e-aafa-4187-b50b-e6611b74c3b3
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# QueryInterface
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [QueryInterface](https://docs.microsoft.com/cpp/atl/queryinterface).  
  
  
Although there are mechanisms by which an object can express the functionality it provides statically (before it is instantiated), the fundamental COM mechanism is to use the **IUnknown** method called [QueryInterface](http://msdn.microsoft.com/library/windows/desktop/ms682521).  
  
 Every interface is derived from **IUnknown**, so every interface has an implementation of `QueryInterface`. Regardless of implementation, this method queries an object using the IID of the interface to which the caller wants a pointer. If the object supports that interface, `QueryInterface` retrieves a pointer to the interface, while also calling `AddRef`. Otherwise, it returns the **E_NOINTERFACE** error code.  
  
 Note that you must obey [Reference Counting](../atl/reference-counting.md) rules at all times. If you call **Release** on an interface pointer to decrement the reference count to zero, you should not use that pointer again. Occasionally you may need to obtain a weak reference to an object (that is, you may wish to obtain a pointer to one of its interfaces without incrementing the reference count), but it is not acceptable to do this by calling `QueryInterface` followed by **Release**. The pointer obtained in such a manner is invalid and should not be used. This more readily becomes apparent when [_ATL_DEBUG_INTERFACES](http://msdn.microsoft.com/library/874b767b-c605-4afc-8d8b-819478d24224) is defined, so defining this macro is a useful way of finding reference counting bugs.  
  
## See Also  
 [Introduction to COM](../atl/introduction-to-com.md)   
 [QueryInterface: Navigating in an Object](http://msdn.microsoft.com/library/windows/desktop/ms687230)





