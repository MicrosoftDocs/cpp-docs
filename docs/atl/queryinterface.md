---
title: "QueryInterface | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-atl"]
ms.topic: "reference"
f1_keywords: ["QueryInterface"]
dev_langs: ["C++"]
helpviewer_keywords: ["interfaces, pointers", "interfaces, availability", "QueryInterface method"]
ms.assetid: 62fce95e-aafa-4187-b50b-e6611b74c3b3
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# QueryInterface
Although there are mechanisms by which an object can express the functionality it provides statically (before it is instantiated), the fundamental COM mechanism is to use the `IUnknown` method called [QueryInterface](http://msdn.microsoft.com/library/windows/desktop/ms682521).  
  
 Every interface is derived from `IUnknown`, so every interface has an implementation of `QueryInterface`. Regardless of implementation, this method queries an object using the IID of the interface to which the caller wants a pointer. If the object supports that interface, `QueryInterface` retrieves a pointer to the interface, while also calling `AddRef`. Otherwise, it returns the E_NOINTERFACE error code.  
  
 Note that you must obey [Reference Counting](../atl/reference-counting.md) rules at all times. If you call `Release` on an interface pointer to decrement the reference count to zero, you should not use that pointer again. Occasionally you may need to obtain a weak reference to an object (that is, you may wish to obtain a pointer to one of its interfaces without incrementing the reference count), but it is not acceptable to do this by calling `QueryInterface` followed by `Release`. The pointer obtained in such a manner is invalid and should not be used. This more readily becomes apparent when [_ATL_DEBUG_INTERFACES](reference/debugging-and-error-reporting-macros.md#_atl_debug_interfaces) is defined, so defining this macro is a useful way of finding reference counting bugs.  
  
## See Also  
 [Introduction to COM](../atl/introduction-to-com.md)   
 [QueryInterface: Navigating in an Object](http://msdn.microsoft.com/library/windows/desktop/ms687230)

