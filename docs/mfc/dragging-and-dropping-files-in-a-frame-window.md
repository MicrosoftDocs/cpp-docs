---
title: "Dragging and Dropping Files in a Frame Window | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: ["C++"]
helpviewer_keywords: ["drag and drop [MFC], files", "drag and drop [MFC], File Manager", "Windows Explorer [MFC]", "File Manager drag and drop support [MFC]", "files [MFC], drag and drop", "frame windows [MFC], dragging and dropping files in", "drag and drop [MFC], Windows Explorer"]
ms.assetid: 85560fe9-121b-4105-bd7b-216b966e19fa
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# Dragging and Dropping Files in a Frame Window
The frame window manages a relationship with File Explorer or File Manager.  
  
 By adding a few initializing calls in your override of the `CWinApp` member function `InitInstance`, as described in [CWinApp: The Application Class](../mfc/cwinapp-the-application-class.md), you can have your frame window indirectly open files dragged from File Explorer or File Manager and dropped in the frame window. See [File Manager Drag and Drop](../mfc/special-cwinapp-services.md).  
  
## See Also  
 [Using Frame Windows](../mfc/using-frame-windows.md)

