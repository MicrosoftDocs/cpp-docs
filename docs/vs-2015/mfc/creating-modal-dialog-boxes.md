---
title: "Creating Modal Dialog Boxes | Microsoft Docs"
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
  - "modal dialog boxes, creating"
  - "MFC dialog boxes, creating"
  - "MFC dialog boxes, modal"
ms.assetid: 26c7a68c-79f6-4862-a5a8-6024984644d2
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Creating Modal Dialog Boxes
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Creating Modal Dialog Boxes](https://docs.microsoft.com/cpp/mfc/creating-modal-dialog-boxes).  
  
  
To create a modal dialog box, call either of the two public constructors declared in [CDialog](../mfc/reference/cdialog-class.md). Next, call the dialog object's [DoModal](../mfc/reference/cdialog-class.md#domodal) member function to display the dialog box and manage interaction with it until the user chooses OK or Cancel. This management by `DoModal` is what makes the dialog box modal. For modal dialog boxes, `DoModal` loads the dialog resource.  
  
## See Also  
 [Life Cycle of a Dialog Box](../mfc/life-cycle-of-a-dialog-box.md)





