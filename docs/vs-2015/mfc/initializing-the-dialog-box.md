---
title: "Initializing the Dialog Box | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "initializing dialog boxes"
  - "OnInitDialog method"
  - "modal dialog boxes, initializing"
  - "modeless dialog boxes, initializing"
  - "MFC dialog boxes, initializing"
ms.assetid: 968142f5-19f9-4b34-a1d4-8e6412d4379b
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Initializing the Dialog Box
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Initializing the Dialog Box](https://docs.microsoft.com/cpp/mfc/initializing-the-dialog-box).  
  
  
After the dialog box and all of its controls are created but just before the dialog box (of either type) appears on the screen, the dialog object's [OnInitDialog](../mfc/reference/cdialog-class.md#oninitdialog) member function is called. For a modal dialog box, this occurs during the `DoModal` call. For a modeless dialog box, `OnInitDialog` is called when **Create** is called. You typically override `OnInitDialog` to initialize the dialog box's controls, such as setting the initial text of an edit box. You must call the `OnInitDialog` member function of the base class, `CDialog`, from your `OnInitDialog` override.  
  
 If you want to set your dialog box's background color (and that of all other dialog boxes in your application), see [Setting the Dialog Box's Background Color](../mfc/setting-the-dialog-box’s-background-color.md).  
  
## See Also  
 [Life Cycle of a Dialog Box](../mfc/life-cycle-of-a-dialog-box.md)





