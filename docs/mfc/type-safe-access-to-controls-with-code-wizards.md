---
title: "Type-Safe Access to Controls With Code Wizards | Microsoft Docs"
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
  - "DDX (dialog data exchange), access to controls"
  - "code wizards"
  - "dialog boxes, access to controls"
  - "dialog box controls, accessing"
ms.assetid: b8874393-ee48-4124-8d78-e3648a7e29b9
caps.latest.revision: 11
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
# Type-Safe Access to Controls With Code Wizards
If you are familiar with DDX features, you can use the Control property in the [Add Member Variable Wizard](../ide/add-member-variable-wizard.md) to create type-safe access. This approach is easier than creating controls without code wizards.  
  
 If you simply want access to a control's value, DDX provides it. If you want to do more than access a control's value, use the Add Member Variable Wizard to add a member variable of the appropriate class to your dialog class. Attach this member variable to the Control property.  
  
 Member variables can have a Control property instead of a Value property. The Value property refers to the type of data returned from the control, such as `CString` or `int`. The Control property enables direct access to the control through a data member whose type is one of the control classes in MFC, such as `CButton` or `CEdit`.  
  
> [!NOTE]
>  For a given control, you can, if you wish, have multiple member variables with the Value property and at most one member variable with the Control property. You can have only one MFC object mapped to a control because multiple objects attached to a control, or any other window, would lead to an ambiguity in the message map.  
  
 You can use this object to call any member functions for the control object. Such calls affect the control in the dialog box. For example, for a check-box control represented by a variable `m_Checkbox`, of type `CButton`, you could call:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#52](../mfc/codesnippet/cpp/type-safe-access-to-controls-with-code-wizards_1.cpp)]  
  
 Here the member variable `m_Checkbox` serves the same purpose as the member function `GetMyCheckbox` shown in [Type-Safe Access to Controls Without Code Wizards](../mfc/type-safe-access-to-controls-without-code-wizards.md). If the check box is not an auto check box, you would still need a handler in your dialog class for the **BN_CLICKED** control-notification message when the button is clicked.  
  
 For more information about controls, see [Controls](../mfc/controls-mfc.md).  
  
## See Also  
 [Type-Safe Access to Controls in a Dialog Box](../mfc/type-safe-access-to-controls-in-a-dialog-box.md)   
 [Life Cycle of a Dialog Box](../mfc/life-cycle-of-a-dialog-box.md)   
 [Type-Safe Access to Controls Without Code Wizards](../mfc/type-safe-access-to-controls-without-code-wizards.md)

