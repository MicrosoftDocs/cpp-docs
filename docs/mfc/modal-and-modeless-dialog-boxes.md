---
title: "Modal and Modeless Dialog Boxes | Microsoft Docs"
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
  - "MFC dialog boxes, modeless"
  - "modeless dialog boxes"
  - "MFC dialog boxes, modal"
  - "modal dialog boxes"
ms.assetid: e83df336-5994-4b8f-8233-7942f997315b
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
# Modal and Modeless Dialog Boxes
You can use class [CDialog](../mfc/reference/cdialog-class.md) to manage two kinds of dialog boxes:  
  
-   *Modal dialog boxes*, which require the user to respond before continuing the program  
  
-   *Modeless dialog boxes*, which stay on the screen and are available for use at any time but permit other user activities  
  
 The resource editing and procedures for creating a dialog template are the same for modal and modeless dialog boxes.  
  
 Creating a dialog box for your program requires the following steps:  
  
1.  Use the [dialog editor](../mfc/dialog-editor.md) to design the dialog box and create its dialog-template resource.  
  
2.  Create a dialog class.  
  
3.  Connect the [dialog resource's controls to message handlers](../mfc/adding-event-handlers-for-dialog-box-controls.md) in the dialog class.  
  
4.  Add data members associated with the dialog box's controls and to specify [dialog data exchange](../mfc/dialog-data-exchange.md) and [dialog data validations](../mfc/dialog-data-validation.md) for the controls.  
  
## See Also  
 [Dialog Boxes](../mfc/dialog-boxes.md)   
 [Life Cycle of a Dialog Box](../mfc/life-cycle-of-a-dialog-box.md)

