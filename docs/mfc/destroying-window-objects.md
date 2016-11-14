---
title: "Destroying Window Objects | Microsoft Docs"
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
  - "frame windows, destroying"
  - "window objects, deleting"
  - "window objects, destroying"
  - "window objects, removing"
ms.assetid: 3241fea0-c614-4a25-957d-20f21bd5fd0c
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
# Destroying Window Objects
Care must be taken with your own child windows to destroy the C++ window object when the user is finished with the window. If these objects are not destroyed, your application will not recover their memory. Fortunately, the framework manages window destruction as well as creation for frame windows, views, and dialog boxes. If you create additional windows, you are responsible for destroying them.  
  
## What do you want to know more about  
  
-   [Window destruction sequence](../mfc/window-destruction-sequence.md)  
  
-   [Allocating and deallocating window memory](../mfc/allocating-and-deallocating-window-memory.md)  
  
-   [Detaching a CWnd from its HWND](../mfc/detaching-a-cwnd-from-its-hwnd.md)  
  
-   [General Window Creation Sequence](../mfc/general-window-creation-sequence.md)  
  
-   [Destroying frame windows](../mfc/destroying-frame-windows.md)  
  
## See Also  
 [Window Objects](../mfc/window-objects.md)

