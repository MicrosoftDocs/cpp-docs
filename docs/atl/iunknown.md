---
title: "IUnknown | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-atl"]
ms.topic: "reference"
f1_keywords: ["IUnknown"]
dev_langs: ["C++"]
helpviewer_keywords: ["COM interfaces, base interface", "IUnknown interface"]
ms.assetid: e6b85472-e54b-4b8c-b19f-4454d6c05a8f
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# IUnknown
[IUnknown](https://msdn.microsoft.com/library/windows/desktop/ms680509) is the base interface of every other COM interface.  This interface defines three methods: [QueryInterface](https://msdn.microsoft.com/library/windows/desktop/ms682521), [AddRef](https://msdn.microsoft.com/library/windows/desktop/ms691379), and [Release](https://msdn.microsoft.com/library/windows/desktop/ms682317). [QueryInterface](https://msdn.microsoft.com/library/windows/desktop/ms682521) allows an interface user to ask the object for a pointer to another of its interfaces. [AddRef](https://msdn.microsoft.com/library/windows/desktop/ms691379) and [Release](https://msdn.microsoft.com/library/windows/desktop/ms682317) implement reference counting on the interface.  
  
## See Also  
 [Introduction to COM](../atl/introduction-to-com.md)   
 [IUnknown and Interface Inheritance](https://msdn.microsoft.com/library/windows/desktop/ms692713)

