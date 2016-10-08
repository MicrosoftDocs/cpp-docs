---
title: "Closing the Dialog Box"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 946f5675-c482-46a4-a5dd-34fe138ffae5
caps.latest.revision: 7
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Closing the Dialog Box
A modal dialog box closes when the user chooses one of its buttons, typically the OK button or the Cancel button. Choosing the OK or Cancel button causes Windows to send the dialog object a **BN_CLICKED** control-notification message with the button's ID, either **IDOK** or **IDCANCEL**. `CDialog` provides default handler functions for these messages: `OnOK` and `OnCancel`. The default handlers call the `EndDialog` member function to close the dialog window. You can also call `EndDialog` from your own code. For more information, see the [EndDialog](../Topic/CDialog::EndDialog.md) member function of class `CDialog` in the *MFC Reference*.  
  
 To arrange for closing and deleting a modeless dialog box, override `PostNcDestroy` and invoke the **delete** operator on the **this** pointer. [Destroying the Dialog Box](../VS_visualcpp/Destroying-the-Dialog-Box.md) explains what happens next.  
  
## See Also  
 [Life Cycle of a Dialog Box](../VS_visualcpp/Life-Cycle-of-a-Dialog-Box.md)