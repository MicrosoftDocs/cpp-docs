---
title: "Window Destruction Sequence | Microsoft Docs"
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
  - "destruction, windows"
  - "destroying windows"
  - "sequence [C++], window destruction"
  - "CWnd objects, destruction sequence"
  - "sequence [C++]"
  - "windows [C++], destroying"
ms.assetid: 2d819196-6240-415f-a308-db43745e616c
caps.latest.revision: 9
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
# Window Destruction Sequence
In the MFC framework, when the user closes the frame window, the window's default [OnClose](../mfc/reference/cwnd-class.md#cwnd__onclose) handler calls [DestroyWindow](../mfc/reference/cwnd-class.md#cwnd__destroywindow). The last member function called when the Windows window is destroyed is [OnNcDestroy](../mfc/reference/cwnd-class.md#cwnd__onncdestroy), which does some cleanup, calls the [Default](../mfc/reference/cwnd-class.md#cwnd__default) member function to perform Windows cleanup, and lastly calls the virtual member function [PostNcDestroy](../mfc/reference/cwnd-class.md#cwnd__postncdestroy). The [CFrameWnd](../mfc/reference/cframewnd-class.md) implementation of `PostNcDestroy` deletes the C++ window object.  
  
## What do you want to know more about  
  
-   [Allocating and deallocating window memory](../mfc/allocating-and-deallocating-window-memory.md)  
  
-   [Detaching a CWnd from its HWND](../mfc/detaching-a-cwnd-from-its-hwnd.md)  
  
## See Also  
 [Destroying Window Objects](../mfc/destroying-window-objects.md)

