---
title: "Initializing the Dialog Box | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["initializing dialog boxes [MFC]", "OnInitDialog method [MFC]", "modal dialog boxes [MFC], initializing", "modeless dialog boxes [MFC], initializing", "MFC dialog boxes [MFC], initializing"]
ms.assetid: 968142f5-19f9-4b34-a1d4-8e6412d4379b
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Initializing the Dialog Box
After the dialog box and all of its controls are created but just before the dialog box (of either type) appears on the screen, the dialog object's [OnInitDialog](../mfc/reference/cdialog-class.md#oninitdialog) member function is called. For a modal dialog box, this occurs during the `DoModal` call. For a modeless dialog box, `OnInitDialog` is called when `Create` is called. You typically override `OnInitDialog` to initialize the dialog box's controls, such as setting the initial text of an edit box. You must call the `OnInitDialog` member function of the base class, `CDialog`, from your `OnInitDialog` override.  
  
 If you want to set your dialog box's background color (and that of all other dialog boxes in your application), see [Setting the Dialog Box's Background Color](../mfc/setting-the-dialog-boxs-background-color.md).  
  
## See Also  
 [Life Cycle of a Dialog Box](../mfc/life-cycle-of-a-dialog-box.md)

