---
title: "Using CHotKeyCtrl | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CHotKeyCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "keys, hot and CHotKeyCtrl"
  - "CHotKeyCtrl class, using"
  - "hot key controls"
ms.assetid: 9b207117-d848-4224-8888-c3d197bb0c95
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
# Using CHotKeyCtrl
A hot key control, represented by class [CHotKeyCtrl](../mfc/reference/chotkeyctrl-class.md), is a window that displays a text representation of the key combination the user types into it, such as CTRL+SHIFT+Q. It also maintains an internal representation of this key in the form of a virtual key code and a set of flags that represent the shift state. The hot key control does not actually set the hot key — doing that is up to your program. (For a list of standard virtual key codes, see Winuser.h.)  
  
 Use a hot key control to get a user's input for which hot key to associate with a window or thread. Hot key controls are often used in dialog boxes, such as you might display when asking the user to assign a hot key. It is your program's responsibility to retrieve the values describing the hot key from the hot key control and to call the appropriate functions to associate the hot key with a window or thread.  
  
## What do you want to know more about  
  
-   [Using a Hot Key Control](../mfc/using-a-hot-key-control.md)  
  
-   [Setting a Hot Key](../mfc/setting-a-hot-key.md)  
  
-   [Global Hot Keys](../mfc/global-hot-keys.md)  
  
-   [Thread-Specific Hot Keys](../mfc/thread-specific-hot-keys.md)  
  
## See Also  
 [Controls](../mfc/controls-mfc.md)

