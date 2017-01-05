---
title: "Implementing a Window with CWindowImpl | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CWindowImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ATL, windows"
  - "windows [C++], subclassing"
  - "windows [C++], superclassing"
  - "windows [C++], ATL"
  - "subclassing ATL window classes"
  - "superclassing, ATL"
ms.assetid: 3fc40550-f1d6-4702-8b7c-4cf682b6a855
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
# Implementing a Window with CWindowImpl
To implement a window, derive a class from `CWindowImpl`. In your derived class, declare a message map and the message handler functions. You can now use your class in three different ways:  
  
-   [Create a window based on a new Windows class](#_atl_creating_a_window_based_on_a_new_windows_class)  
  
-   [Superclass an existing Windows class](#_atl_superclassing_an_existing_windows_class)  
  
-   [Subclass an existing window](#_atl_subclassing_an_existing_window)  
  
##  <a name="_atl_creating_a_window_based_on_a_new_windows_class"></a> Creating a Window Based on a New Windows Class  
 `CWindowImpl` contains the [DECLARE_WND_CLASS](http://msdn.microsoft.com/library/55247a72-fb9e-4bde-87f3-747c08076971) macro to declare Windows class information. This macro implements the `GetWndClassInfo` function, which uses [CWndClassInfo](../atl/reference/cwndclassinfo-class.md) to define the information of a new Windows class. When `CWindowImpl::Create` is called, this Windows class is registered and a new window is created.  
  
> [!NOTE]
>  `CWindowImpl` passes **NULL** to the `DECLARE_WND_CLASS` macro, which means ATL will generate a Windows class name. To specify your own name, pass a string to `DECLARE_WND_CLASS` in your `CWindowImpl`-derived class.  
  
## Example  
 Following is an example of a class that implements a window based on a new Windows class:  
  
 [!code-cpp[NVC_ATL_Windowing#64](../atl/codesnippet/cpp/implementing-a-window-with-cwindowimpl_1.h)]  
  
 To create a window, create an instance of `CMyWindow` and then call the **Create** method.  
  
> [!NOTE]
>  To override the default Windows class information, implement the `GetWndClassInfo` method in your derived class by setting the `CWndClassInfo` members to the appropriate values.  
  
##  <a name="_atl_superclassing_an_existing_windows_class"></a> Superclassing an Existing Windows Class  
 The [DECLARE_WND_SUPERCLASS](http://msdn.microsoft.com/library/650337b6-4973-41e5-8c36-55f90327bdcd) macro allows you to create a window that superclasses an existing Windows class. Specify this macro in your `CWindowImpl`-derived class. Like any other ATL window, messages are handled by a message map.  
  
 When you use `DECLARE_WND_SUPERCLASS`, a new Windows class will be registered. This new class will be the same as the existing class you specify, but will replace the window procedure with `CWindowImpl::WindowProc` (or with your function that overrides this method).  
  
## Example  
 Following is an example of a class that superclasses the standard Edit class:  
  
 [!code-cpp[NVC_ATL_Windowing#65](../atl/codesnippet/cpp/implementing-a-window-with-cwindowimpl_2.h)]  
  
 To create the superclassed Edit window, create an instance of `CMyEdit` and then call the **Create** method.  
  
##  <a name="_atl_subclassing_an_existing_window"></a> Subclassing an Existing Window  
 To subclass an existing window, derive a class from `CWindowImpl` and declare a message map, as in the two previous cases. Note, however, that you do not specify any Windows class information, since you will subclass an already existing window.  
  
 Instead of calling **Create**, call `SubclassWindow` and pass it the handle to the existing window you want to subclass. Once the window is subclassed, it will use `CWindowImpl::WindowProc` (or your function that overrides this method) to direct messages to the message map. To detach a subclassed window from your object, call `UnsubclassWindow`. The window's original window procedure will then be restored.  
  
## See Also  
 [Implementing a Window](../atl/implementing-a-window.md)

