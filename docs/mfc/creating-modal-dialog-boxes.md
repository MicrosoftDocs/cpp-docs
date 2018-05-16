---
title: "Creating Modal Dialog Boxes | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["modal dialog boxes [MFC], creating", "MFC dialog boxes [MFC], creating", "MFC dialog boxes [MFC], modal"]
ms.assetid: 26c7a68c-79f6-4862-a5a8-6024984644d2
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Creating Modal Dialog Boxes
To create a modal dialog box, call either of the two public constructors declared in [CDialog](../mfc/reference/cdialog-class.md). Next, call the dialog object's [DoModal](../mfc/reference/cdialog-class.md#domodal) member function to display the dialog box and manage interaction with it until the user chooses OK or Cancel. This management by `DoModal` is what makes the dialog box modal. For modal dialog boxes, `DoModal` loads the dialog resource.  
  
## See Also  
 [Life Cycle of a Dialog Box](../mfc/life-cycle-of-a-dialog-box.md)

