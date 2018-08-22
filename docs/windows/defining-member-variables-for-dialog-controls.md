---
title: "Defining Member Variables for Dialog Controls | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["member variables, defining for controls", "variables, dialog box control member variables", "controls [C++], member variables", "Dialog editor, defining member variables for controls"]
ms.assetid: 84347c63-c33c-4b04-91f5-6d008c45ba58
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Defining Member Variables for Dialog Controls
To define a member variable for any dialog box control except buttons, you can use the following method.  
  
> [!NOTE]
>  This article applies only to dialog controls within an MFC project. ATL projects should use the **New Windows Messages and Event Handlers** dialog box.  
  
### To define a member variable for a (non-button) dialog box control  
  
1.  In the [Dialog editor](../windows/dialog-editor.md), select a control.  
  
2.  While pressing the **Ctrl** key, double-click the dialog box control.  
  
     The [Add Member Variable wizard](../ide/add-member-variable-wizard.md) appears.  
  
3.  Type the appropriate information in the **Add Member Variable** wizard. For more information, see [Dialog Data Exchange](../mfc/dialog-data-exchange.md).  
  
4.  Click **OK** to return to the **Dialog** editor.  
  
    > [!TIP]
    >  To jump from any dialog box control to its existing handler, double-click the control.  
  
 You can also use the **Member Variables** tab in **MFC Class Wizard** to add new member variables for a specified class, and view those that have already been defined.  
  
## Requirements  
 MFC  
  
## See Also  
 [Mapping Messages to Functions](../mfc/reference/mapping-messages-to-functions.md)   
 [Adding Functionality with Code Wizards](../ide/adding-functionality-with-code-wizards-cpp.md)   
 [MFC Class Wizard](../mfc/reference/mfc-class-wizard.md)   
 [Adding a Class](../ide/adding-a-class-visual-cpp.md)   
 [Adding a Member Function](../ide/adding-a-member-function-visual-cpp.md)   
 [Adding a Member Variable](../ide/adding-a-member-variable-visual-cpp.md)   
 [Overriding a Virtual Function](../ide/overriding-a-virtual-function-visual-cpp.md)   
 [MFC Message Handler](../mfc/reference/adding-an-mfc-message-handler.md)