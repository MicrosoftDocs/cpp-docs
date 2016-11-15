---
title: "Adding a Member Variable  (Visual C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.codewiz.classes.member.variable"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "member variables, adding"
  - "member variables"
ms.assetid: 437783bd-8eb4-4508-8b73-7380116e9d71
caps.latest.revision: 6
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
# Adding a Member Variable  (Visual C++)
You can add a member variable to a class using Class View. Member variables can be either for [data exchange and data validation](../mfc/dialog-data-exchange-and-validation.md), or they can be generic. The data member variable wizard is specifically designed to take the relevant information and use it to insert elements in your source files at the appropriate locations. You can add a member variable from the [Dialog editor](../mfc/dialog-editor.md) in [Resource View](../windows/resource-view-window.md), or from [Class View](http://msdn.microsoft.com/en-us/8d7430a9-3e33-454c-a9e1-a85e3d2db925).  
  
> [!NOTE]
>  When you are designing and implementing a dialog box, you might find it more efficient to use the Dialog editor to add the dialog box controls, and then to implement the controls' member variables.  
  
### To add a member variable for a dialog control in Resource View using the Add Member Variable Wizard  
  
1.  In Resource View, expand the project node and the Dialog node to display the list of the project's dialog boxes.  
  
2.  Double-click the dialog box to which you want to add the member variable to open it in the Dialog editor.  
  
3.  In the dialog box displayed in the Dialog editor, right-click the control to which you want to add the member variable.  
  
4.  On the shortcut menu, click **Add Variable** to display the [Add Member Variable Wizard](../ide/add-member-variable-wizard.md).  
  
    > [!NOTE]
    >  A default value is already provided in **Control ID**.  
  
5.  Provide the information in the appropriate wizard boxes. See [Dialog Box Controls and Variable Types](../ide/dialog-box-controls-and-variable-types.md) for more information.  
  
6.  Click **Finish** to add the definition and implementation code to the project and close the wizard.  
  
### To add a member variable from Class View using the Add Member Variable Wizard  
  
1.  In [Class View](http://msdn.microsoft.com/en-us/8d7430a9-3e33-454c-a9e1-a85e3d2db925), expand the project node to display the classes in the project.  
  
2.  Right-click the class to which you want to add a variable.  
  
3.  On the shortcut menu, click **Add**, and then click **Add Variable** to display the Add Member Variable Wizard.  
  
4.  Provide the information in the appropriate wizard boxes. See [Add Member Variable Wizard](../ide/add-member-variable-wizard.md) for details.  
  
5.  Click **Finish** to add the definition and implementation code to the project and close the wizard.  
  
## See Also  
 [Adding Functionality with Code Wizards](../ide/adding-functionality-with-code-wizards-cpp.md)   
 [Adding a Class](../ide/adding-a-class-visual-cpp.md)   
 [Adding a Member Function](../ide/adding-a-member-function-visual-cpp.md)   
 [MFC Message Handler](../mfc/reference/adding-an-mfc-message-handler.md)   
 [Navigating the Class Structure](../ide/navigating-the-class-structure-visual-cpp.md)