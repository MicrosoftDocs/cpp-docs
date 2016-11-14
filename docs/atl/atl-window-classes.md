---
title: "ATL Window Classes | Microsoft Docs"
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
  - "windows [C++], subclassing"
  - "windows [C++], superclassing"
  - "windows [C++], ATL"
  - "subclassing ATL window classes"
  - "superclassing"
  - "superclassing, ATL"
ms.assetid: 1d12b708-de3e-49d5-9e41-42fe4769fa62
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# ATL Window Classes
ATL includes several classes that allow you to use and implement windows. These classes, like other ATL classes, provide an efficient implementation that does not impose an overhead on your code.  
  
 This section describes the ATL window classes and explains how to use them.  
  
## In This Section  
 [Introduction to ATL Window Classes](../atl/introduction-to-atl-window-classes.md)  
 Briefly describes each ATL window class and provides links to the reference material on them.  
  
 [Using a Window](../atl/using-a-window.md)  
 Discusses how to use `CWindow` to manipulate a window.  
  
 [Implementing a Window](../atl/implementing-a-window.md)  
 Discusses message handlers, message maps, and using `CWindowImpl`. Includes details on superclassing and subclassing.  
  
 [Implementing a Dialog Box](../atl/implementing-a-dialog-box.md)  
 Discusses the two methods for adding a dialog box class and shows a code sample.  
  
 [Using Contained Windows](../atl/using-contained-windows.md)  
 Discusses contained windows in ATL, which are windows that delegate their messages to a container object instead of handling them in their own class.  
  
 [Understanding Window Traits](../atl/understanding-window-traits.md)  
 Discusses window traits classes in ATL. These classes provide a simple method for standardizing the styles used for the creation of a window object.  
  
## Related Sections  
 [ATL](../atl/active-template-library-atl-concepts.md)  
 Provides links to conceptual topics on how to program using the Active Template Library.  
  
 [Windows Support Classes](../atl/windows-support-classes.md)  
 Lists additional ATL classes that support windows and message maps in ATL.

