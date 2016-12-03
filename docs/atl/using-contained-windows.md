---
title: "Using Contained Windows | Microsoft Docs"
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
  - "ATL, windows"
  - "windows [C++], ATL"
  - "contained windows in ATL"
ms.assetid: 7b3d79e5-b569-413f-9b98-df4f14efbe2b
caps.latest.revision: 12
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
# Using Contained Windows
ATL implements contained windows with [CContainedWindowT](../atl/reference/ccontainedwindowt-class.md). A contained window represents a window that delegates its messages to a container object instead of handling them in its own class.  
  
> [!NOTE]
>  You do not need to derive a class from `CContainedWindowT` in order to use contained windows.  
  
 With contained windows, you can either superclass an existing Windows class or subclass an existing window. To create a window that superclasses an existing Windows class, first specify the existing class name in the constructor for the `CContainedWindowT` object. Then call `CContainedWindowT::Create`. To subclass an existing window, you don't need to specify a Windows class name (pass **NULL** to the constructor). Simply call the `CContainedWindowT::SubclassWindow` method with the handle to the window being subclassed.  
  
 You typically use contained windows as data members of a container class. The container does not need to be a window; however, it must derive from [CMessageMap](../atl/reference/cmessagemap-class.md).  
  
 A contained window can use alternate message maps to handle its messages. If you have more than one contained window, you should declare several alternate message maps, each corresponding to a separate contained window.  
  
## Example  
 Following is an example of a container class with two contained windows:  
  
 [!code-cpp[NVC_ATL_Windowing#67](../atl/codesnippet/cpp/using-contained-windows_1.h)]  
  
 For more information about contained windows, see the [SUBEDIT](../visual-cpp-samples.md) sample.  
  
## See Also  
 [Window Classes](../atl/atl-window-classes.md)

