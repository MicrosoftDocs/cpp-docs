---
title: "Using CHotKeyCtrl"
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
ms.assetid: 9b207117-d848-4224-8888-c3d197bb0c95
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
# Using CHotKeyCtrl
A hot key control, represented by class [CHotKeyCtrl](../VS_visualcpp/CHotKeyCtrl-Class.md), is a window that displays a text representation of the key combination the user types into it, such as CTRL+SHIFT+Q. It also maintains an internal representation of this key in the form of a virtual key code and a set of flags that represent the shift state. The hot key control does not actually set the hot key — doing that is up to your program. (For a list of standard virtual key codes, see Winuser.h.)  
  
 Use a hot key control to get a user's input for which hot key to associate with a window or thread. Hot key controls are often used in dialog boxes, such as you might display when asking the user to assign a hot key. It is your program's responsibility to retrieve the values describing the hot key from the hot key control and to call the appropriate functions to associate the hot key with a window or thread.  
  
## What do you want to know more about?  
  
-   [Using a Hot Key Control](../VS_visualcpp/Using-a-Hot-Key-Control.md)  
  
-   [Setting a Hot Key](../VS_visualcpp/Setting-a-Hot-Key.md)  
  
-   [Global Hot Keys](../VS_visualcpp/Global-Hot-Keys.md)  
  
-   [Thread-Specific Hot Keys](../VS_visualcpp/Thread-Specific-Hot-Keys.md)  
  
## See Also  
 [Controls](../VS_visualcpp/Controls--MFC-.md)