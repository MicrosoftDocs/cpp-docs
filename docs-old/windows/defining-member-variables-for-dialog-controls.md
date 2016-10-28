---
title: "Defining Member Variables for Dialog Controls"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C++"
helpviewer_keywords: 
  - "member variables, defining for controls"
  - "variables, dialog box control member variables"
  - "controls [C++], member variables"
  - "Dialog editor, defining member variables for controls"
ms.assetid: 84347c63-c33c-4b04-91f5-6d008c45ba58
caps.latest.revision: 9
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
# Defining Member Variables for Dialog Controls
To define a member variable for any dialog box control except buttons, you can use the following method.  
  
> [!NOTE]
>  This article applies only to dialog controls within an MFC project. ATL projects should use the **New Windows Messages and Event Handlers** dialog box.  
  
### To define a member variable for a (non-button) dialog box control  
  
1.  In the [Dialog editor](../mfc/dialog-editor.md), select a control.  
  
2.  While pressing the **CTRL** key, double-click the dialog box control.  
  
     The [Add Member Variable wizard](../ide/add-member-variable-wizard.md) appears.  
  
3.  Type the appropriate information in the **Add Member Variable** wizard. For more information, see [Dialog Data Exchange](../mfc/dialog-data-exchange.md).  
  
4.  Click **OK** to return to the Dialog editor.  
  
    > [!TIP]
    >  To jump from any dialog box control to its existing handler, double-click the control.  
  
 For information on adding resources to managed projects, please see [Resources in Applications](../Topic/Resources%20in%20Desktop%20Apps.md) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 You can also use the **Member Variables** tab in **MFC Class Wizard** to add new member variables for a specified class, and view those that have already been defined.  
  
 Requirements  
  
 MFC  
  
## See Also  
 [Mapping Messages to Functions](../mfcref/mapping-messages-to-functions.md)   
 [Adding Functionality with Code Wizards](../ide/adding-functionality-with-code-wizards--c---.md)   
 [MFC Class Wizard](../mfcref/mfc-class-wizard.md)   
 [Adding a Class](../ide/adding-a-class--visual-c---.md)   
 [Adding a Member Function](../ide/adding-a-member-function--visual-c---.md)   
 [Adding a Member Variable](../ide/adding-a-member-variable---visual-c---.md)   
 [Overriding a Virtual Function](../ide/overriding-a-virtual-function--visual-c---.md)   
 [MFC Message Handler](../mfcref/adding-an-mfc-message-handler.md)