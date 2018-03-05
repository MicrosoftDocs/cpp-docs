---
title: "Creating Your Dialog Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: ["C++"]
helpviewer_keywords: ["dialog boxes [MFC], creating", "MFC dialog boxes [MFC], creating", "files [MFC], creating", "dialog classes [MFC], Add Class Wizard", "dialog classes [MFC], creating"]
ms.assetid: d5321741-da41-47a8-bb1c-6a0e8b28c4c1
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# Creating Your Dialog Class
For each dialog box in your program, create a new dialog class to work with the dialog resource.  
  
 [Adding a Class](../ide/adding-a-class-visual-cpp.md) explains how to create a new dialog class. When you create a dialog class with the Add Class Wizard, it writes the following items in the .H and .CPP files you specify:  
  
 In the .H file:  
  
-   A class declaration for the dialog class. The class is derived from [CDialog](../mfc/reference/cdialog-class.md).  
  
 In the .CPP file:  
  
-   A message map for the class.  
  
-   A standard constructor for the dialog box.  
  
-   An override of the [DoDataExchange](../mfc/reference/cwnd-class.md#dodataexchange) member function. Edit this function. It is used for dialog data exchange and validation capabilities as described later in [Dialog data exchange and validation](../mfc/dialog-data-exchange-and-validation.md).  
  
## See Also  
 [Creating a Dialog Class with Code Wizards](../mfc/creating-a-dialog-class-with-code-wizards.md)   
 [Life Cycle of a Dialog Box](../mfc/life-cycle-of-a-dialog-box.md)

