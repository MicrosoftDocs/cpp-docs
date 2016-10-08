---
title: "Using Contained Windows"
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
ms.assetid: 7b3d79e5-b569-413f-9b98-df4f14efbe2b
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
# Using Contained Windows
ATL implements contained windows with [CContainedWindowT](../VS_visualcpp/CContainedWindowT-Class.md). A contained window represents a window that delegates its messages to a container object instead of handling them in its own class.  
  
> [!NOTE]
>  You do not need to derive a class from `CContainedWindowT` in order to use contained windows.  
  
 With contained windows, you can either superclass an existing Windows class or subclass an existing window. To create a window that superclasses an existing Windows class, first specify the existing class name in the constructor for the `CContainedWindowT` object. Then call `CContainedWindowT::Create`. To subclass an existing window, you don't need to specify a Windows class name (pass **NULL** to the constructor). Simply call the `CContainedWindowT::SubclassWindow` method with the handle to the window being subclassed.  
  
 You typically use contained windows as data members of a container class. The container does not need to be a window; however, it must derive from [CMessageMap](../VS_visualcpp/CMessageMap-Class.md).  
  
 A contained window can use alternate message maps to handle its messages. If you have more than one contained window, you should declare several alternate message maps, each corresponding to a separate contained window.  
  
## Example  
 Following is an example of a container class with two contained windows:  
  
 [!CODE [NVC_ATL_Windowing#67](../CodeSnippet/VS_Snippets_Cpp/NVC_ATL_Windowing#67)]  
  
 For more information about contained windows, see the [SUBEDIT](../VS_visualcpp/Visual-C---Samples.md) sample.  
  
## See Also  
 [Window Classes](../VS_visualcpp/ATL-Window-Classes.md)