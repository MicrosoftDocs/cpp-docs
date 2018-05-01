---
title: "Dragging and Dropping Files in a Frame Window | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "drag and drop [C++], files"
  - "drag and drop [C++], File Manager"
  - "Windows Explorer [C++]"
  - "File Manager drag and drop support"
  - "files [C++], drag and drop"
  - "frame windows [C++], dragging and dropping files in"
  - "drag and drop [C++], Windows Explorer"
ms.assetid: 85560fe9-121b-4105-bd7b-216b966e19fa
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Dragging and Dropping Files in a Frame Window
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Dragging and Dropping Files in a Frame Window](https://docs.microsoft.com/cpp/mfc/dragging-and-dropping-files-in-a-frame-window).  
  
  
The frame window manages a relationship with File Explorer or File Manager.  
  
 By adding a few initializing calls in your override of the `CWinApp` member function `InitInstance`, as described in [CWinApp: The Application Class](../mfc/cwinapp-the-application-class.md), you can have your frame window indirectly open files dragged from File Explorer or File Manager and dropped in the frame window. See [File Manager Drag and Drop](../mfc/special-cwinapp-services.md).  
  
## See Also  
 [Using Frame Windows](../mfc/using-frame-windows.md)





