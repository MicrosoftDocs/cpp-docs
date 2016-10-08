---
title: "Interfaces (ATL)"
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
ms.assetid: de6c8b12-6230-4fdc-af66-a28b91d5ee55
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
# Interfaces (ATL)
An interface is the way in which an object exposes its functionality to the outside world. In COM, an interface is a table of pointers (like a C++ vtable) to functions implemented by the object. The table represents the interface, and the functions to which it points are the methods of that interface. An object can expose as many interfaces as it chooses.  
  
 Each interface is based on the fundamental COM interface, [IUnknown](../VS_visualcpp/IUnknown.md). The methods of **IUnknown** allow navigation to other interfaces exposed by the object.  
  
 Also, each interface is given a unique interface ID (IID). This uniqueness makes it easy to support interface versioning. A new version of an interface is simply a new interface, with a new IID.  
  
> [!NOTE]
>  IIDs for the standard COM and OLE interfaces are predefined.  
  
## See Also  
 [Introduction to COM](../VS_visualcpp/Introduction-to-COM.md)   
 [COM Objects and Interfaces](http://msdn.microsoft.com/library/windows/desktop/ms690343)