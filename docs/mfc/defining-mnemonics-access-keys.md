---
title: "Defining Mnemonics (Access Keys) | Microsoft Docs"
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
  - "C++"
helpviewer_keywords: 
  - "access keys [C++], adding"
  - "keyboard shortcuts [C++], controls"
  - "dialog box controls, mnemonics"
  - "access keys [C++], checking"
  - "mnemonics, checking for duplicate"
  - "mnemonics"
  - "mnemonics, dialog box controls"
  - "keyboard shortcuts [C++], uniqueness checking"
  - "Check Mnemonics command"
  - "controls [C++], access keys"
  - "access keys [C++]"
ms.assetid: 60a85435-aa30-4c5c-98b6-42fb045b9eb2
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
# Defining Mnemonics (Access Keys)
Normally, keyboard users move the input focus from one control to another in a dialog box with the TAB and ARROW keys. However, you can define an access key (a mnemonic or easy-to-remember name) that allows users to choose a control by pressing a single key.  
  
### To define an access key for a control with a visible caption (push buttons, check boxes, and radio buttons)  
  
1.  Select the control on the dialog box.  
  
2.  In the [Properties Window](/visualstudio/ide/reference/properties-window), in the **Caption** property, type a new name for the control, typing an ampersand (**&**) in front of the letter you want as the access key for that control. For example, `&Radio1`.  
  
3.  Press **Enter**.  
  
     An underline appears in the displayed caption to indicate the access key, for example, **R**adio1.  
  
### To define an access key for a control without a visible caption  
  
1.  Make a caption for the control by using a **Static Text** control in the [Toolbox](/visualstudio/ide/reference/toolbox).  
  
2.  In the static text caption, type an ampersand (**&**) in front of the letter you want as the access key.  
  
3.  Make sure the static text control immediately precedes the control it labels in the tab order.  
  
 All the access keys within a dialog box should be unique.  
  
#### To check for duplicate access keys  
  
1.  On the **Format** menu, click **Check Mnemonics**.  
  
 For information on adding resources to managed projects, please see [Resources in Applications](http://msdn.microsoft.com/library/8ad495d4-2941-40cf-bf64-e82e85825890) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Localizing Windows Forms](http://msdn.microsoft.com/en-us/9a96220d-a19b-4de0-9f48-01e5d82679e5) and [Walkthrough: Using Resources for Localization with ASP.NET](http://msdn.microsoft.com/library/bb4e5b44-e2b0-48ab-bbe9-609fb33900b6).  
  
### Requirements  
 Win32  
  
## See Also  
 [Controls in Dialog Boxes](../mfc/controls-in-dialog-boxes.md)   
 [Controls](../mfc/controls-mfc.md)

