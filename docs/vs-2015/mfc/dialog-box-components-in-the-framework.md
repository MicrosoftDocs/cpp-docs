---
title: "Dialog-Box Components in the Framework | Microsoft Docs"
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
  - "MFC dialog boxes, creating"
  - "dialog classes, dialog box components"
  - "MFC dialog boxes, about MFC dialog boxes"
  - "dialog templates, MFC framework"
  - "MFC dialog boxes, dialog resource"
ms.assetid: 592db160-0a8a-49be-ac72-ead278aca53f
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Dialog-Box Components in the Framework
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Dialog-Box Components in the Framework](https://docs.microsoft.com/cpp/mfc/dialog-box-components-in-the-framework).  
  
  
In the MFC framework, a dialog box has two components:  
  
-   A dialog-template resource that specifies the dialog box's controls and their placement.  
  
     The dialog resource stores a dialog template from which Windows creates the dialog window and displays it. The template specifies the dialog box's characteristics, including its size, location, style, and the types and positions of the dialog box's controls. You will usually use a dialog template stored as a resource, but you can also create your own template in memory.  
  
-   A dialog class, derived from [CDialog](../mfc/reference/cdialog-class.md), to provide a programmatic interface for managing the dialog box.  
  
     A dialog box is a window and will be attached to a Windows window when visible. When the dialog window is created, the dialog-template resource is used as a template for creating child window controls for the dialog box.  
  
## See Also  
 [Dialog Boxes](../mfc/dialog-boxes.md)   
 [Life Cycle of a Dialog Box](../mfc/life-cycle-of-a-dialog-box.md)





