---
title: "IUnknown"
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
ms.assetid: e6b85472-e54b-4b8c-b19f-4454d6c05a8f
caps.latest.revision: 10
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
# IUnknown
[IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509) is the base interface of every other COM interface.  This interface defines three methods: [QueryInterface](http://msdn.microsoft.com/library/windows/desktop/ms682521), [AddRef](http://msdn.microsoft.com/library/windows/desktop/ms691379), and [Release](http://msdn.microsoft.com/library/windows/desktop/ms682317). [QueryInterface](http://msdn.microsoft.com/library/windows/desktop/ms682521) allows an interface user to ask the object for a pointer to another of its interfaces. [AddRef](http://msdn.microsoft.com/library/windows/desktop/ms691379) and [Release](http://msdn.microsoft.com/library/windows/desktop/ms682317) implement reference counting on the interface.  
  
## See Also  
 [Introduction to COM](../VS_visualcpp/Introduction-to-COM.md)   
 [IUnknown and Interface Inheritance](http://msdn.microsoft.com/library/windows/desktop/ms692713)