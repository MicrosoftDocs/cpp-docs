---
title: "Reference Counting | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "AddRef method [C++], reference counting"
  - "reference counting"
  - "AddRef method [C++]"
  - "reference counts"
  - "references, counting"
ms.assetid: b1fd4514-6de6-429f-9e60-2777c0d07a3d
caps.latest.revision: 10
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
# Reference Counting
COM itself does not automatically try to remove an object from memory when it thinks the object is no longer being used. Instead, the object programmer must remove the unused object. The programmer determines whether an object can be removed based on a reference count.  
  
 COM uses the **IUnknown** methods, [AddRef](http://msdn.microsoft.com/library/windows/desktop/ms691379) and [Release](http://msdn.microsoft.com/library/windows/desktop/ms682317), to manage the reference count of interfaces on an object. The general rules for calling these methods are:  
  
-   Whenever a client receives an interface pointer, `AddRef` must be called on the interface.  
  
-   Whenever the client has finished using the interface pointer, it must call **Release**.  
  
 In a simple implementation, each `AddRef` call increments and each **Release** call decrements a counter variable inside the object. When the count returns to zero, the interface no longer has any users and is free to remove itself from memory.  
  
 Reference counting can also be implemented so that each reference to the object (not to an individual interface) is counted. In this case, each `AddRef` and **Release** call delegates to a central implementation on the object, and **Release** frees the entire object when its reference count reaches zero.  
  
> [!NOTE]
>  When a `CComObject`-derived object is constructed using the **new** operator, the reference count is 0. Therefore, a call to `AddRef` must be made after successfully creating the `CComObject`-derived object.  
  
## See Also  
 [Introduction to COM](../atl/introduction-to-com.md)   
 [Managing Object Lifetimes through Reference Counting](http://msdn.microsoft.com/library/windows/desktop/ms687260)

