---
title: "Creating Modeless Dialog Boxes | Microsoft Docs"
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
  - "MFC dialog boxes, modeless"
  - "modeless dialog boxes, creating"
  - "MFC dialog boxes, creating"
ms.assetid: 70d78c7f-3d40-477b-9f78-0f33c359f88b
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Creating Modeless Dialog Boxes
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Creating Modeless Dialog Boxes](https://docs.microsoft.com/cpp/mfc/creating-modeless-dialog-boxes).  
  
  
For a modeless dialog box, you must provide your own public constructor in your dialog class. To create a modeless dialog box, call your public constructor and then call the dialog object's [Create](../mfc/reference/cdialog-class.md#create) member function to load the dialog resource. You can call **Create** either during or after the constructor call. If the dialog resource has the property **WS_VISIBLE**, the dialog box appears immediately. If not, you must call its [ShowWindow](../mfc/reference/cwnd-class.md#showwindow) member function.  
  
## See Also  
 [Life Cycle of a Dialog Box](../mfc/life-cycle-of-a-dialog-box.md)





