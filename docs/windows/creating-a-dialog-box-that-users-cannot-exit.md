---
title: "Creating a Dialog Box That Users Cannot Exit | Microsoft Docs"
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
  - "dialog boxes, creating"
  - "modal dialog boxes, logon screens"
  - "logon screens"
ms.assetid: 54823c27-1658-4388-bd12-0a1ce8f3899e
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Creating a Dialog Box That Users Cannot Exit
You can create a runtime dialog box that a user cannot exit. This kind of dialog box is useful for logons, and for application or document locks.  
  
### To create a dialog box that a user cannot exit  
  
1.  In the **Properties** pane for the dialog box, set the **System Menu** property to **false**.  
  
     This disables the dialog box system menu and **Close** button.  
  
2.  In the dialog box form, delete the **Cancel** and **OK** buttons.  
  
     At run time, a user cannot exit a modal dialog box that has these characteristics.  
  
 To enable testing of this kind of dialog box, the test dialog box function detects when ESC is pressed. (ESC is also known as the VK_ESCAPE virtual key.) No matter how the dialog box is designed to behave at run time, you can terminate it in test mode by pressing ESC.  
  
> [!NOTE]
>  For MFC applications, to create a dialog box that users cannot exit, you must override the default behavior of `OnOK`and `OnCancel` because even if you delete the associated buttons, the dialog box can still be dismissed by pressing ENTER or ESC.  
  
 For information about how to add resources to managed projects, see [Resources in Desktop Apps](http://msdn.microsoft.com/Library/8ad495d4-2941-40cf-bf64-e82e85825890).  
  
## Requirements  
 Win32  
  
## See Also  
 [How to: Create a Resource](../windows/how-to-create-a-resource.md)   
 [Resource Files](../mfc/resource-files-visual-studio.md)   
 [Dialog Editor](../mfc/dialog-editor.md)

