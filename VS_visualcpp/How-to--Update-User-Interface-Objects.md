---
title: "How to: Update User-Interface Objects"
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
ms.assetid: 82f09773-c978-427b-b321-05a6143b7369
caps.latest.revision: 7
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
# How to: Update User-Interface Objects
Typically, menu items and toolbar buttons have more than one state. For example, a menu item is grayed (dimmed) if it is unavailable in the present context. Menu items can also be checked or unchecked. A toolbar button can also be disabled if unavailable, or it can be checked.  
  
 Who updates the state of these items as program conditions change? Logically, if a menu item generates a command that is handled by, say, a document, it makes sense to have the document update the menu item. The document probably contains the information on which the update is based.  
  
 If a command has multiple user-interface objects (perhaps a menu item and a toolbar button), both are routed to the same handler function. This encapsulates your user-interface update code for all of the equivalent user-interface objects in a single place.  
  
 The framework provides a convenient interface for automatically updating user-interface objects. You can choose to do the updating in some other way, but the interface provided is efficient and easy to use.  
  
 The following topics explain the use of update handlers:  
  
-   [When update handlers are called](../VS_visualcpp/When-Update-Handlers-Are-Called.md)  
  
-   [The ON_UPDATE_COMMAND_UI macro](../VS_visualcpp/ON_UPDATE_COMMAND_UI-Macro.md)  
  
-   [The CCmdUI class](../VS_visualcpp/The-CCmdUI-Class.md)  
  
## See Also  
 [Menus](../VS_visualcpp/Menus--MFC-.md)