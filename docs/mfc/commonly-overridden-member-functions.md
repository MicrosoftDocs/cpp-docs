---
title: "Commonly Overridden Member Functions | Microsoft Docs"
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
  - "CDialog class, members"
  - "OnInitDialog function"
  - "dialog classes, commonly overridden member functions"
  - "OnCancel function"
  - "overriding, dialog class members"
  - "OnOK function"
  - "MFC dialog boxes, overriding member functions"
ms.assetid: 78eb566c-e361-4c86-8db5-c7e2791b249a
caps.latest.revision: 9
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
# Commonly Overridden Member Functions
The following table lists the most likely member functions to override in your `CDialog`-derived class.  
  
### Commonly Overridden Member Functions of Class CDialog  
  
|Member function|Message it responds to|Purpose of the override|  
|---------------------|----------------------------|-----------------------------|  
|`OnInitDialog`|**WM_INITDIALOG**|Initialize the dialog box's controls.|  
|`OnOK`|**BN_CLICKED** for button **IDOK**|Respond when the user clicks the OK button.|  
|`OnCancel`|**BN_CLICKED** for button **IDCANCEL**|Respond when the user clicks the Cancel button.|  
  
 `OnInitDialog`, `OnOK`, and `OnCancel` are virtual functions. To override them, you declare an overriding function in your derived dialog class using the [Properties window](/visualstudio/ide/reference/properties-window).  
  
 `OnInitDialog` is called just before the dialog box is displayed. You must call the default `OnInitDialog` handler from your override — usually as the first action in the handler. By default, `OnInitDialog` returns **TRUE** to indicate that the focus should be set to the first control in the dialog box.  
  
 `OnOK` is typically overridden for modeless but not modal dialog boxes. If you override this handler for a modal dialog box, call the base class version from your override — to ensure that `EndDialog` is called — or call `EndDialog` yourself.  
  
 `OnCancel` is usually overridden for modeless dialog boxes.  
  
 For more information about these member functions, see class [CDialog](../mfc/reference/cdialog-class.md) in the *MFC Reference* and the discussion on [Life Cycle of a Dialog Box](../mfc/life-cycle-of-a-dialog-box.md).  
  
## See Also  
 [Dialog Boxes](../mfc/dialog-boxes.md)   
 [Commonly Added Member Functions](../mfc/commonly-added-member-functions.md)
