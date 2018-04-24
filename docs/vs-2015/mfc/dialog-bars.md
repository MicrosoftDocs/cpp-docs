---
title: "Dialog Bars | Microsoft Docs"
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
  - "MFC, control bars"
  - "CDialogBar class, dialog bars"
  - "control bars, dialog bars"
  - "dialog bars"
  - "dialog bars, about dialog bars"
ms.assetid: 485c8055-6bb0-4051-8417-dd2971499321
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Dialog Bars
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Dialog Bars](https://docs.microsoft.com/cpp/mfc/dialog-bars).  
  
  
A dialog bar is a toolbar, a kind of [control bar](../mfc/control-bars.md) that can contain any kind of control. Because it has the characteristics of a modeless dialog box, a [CDialogBar](../mfc/reference/cdialogbar-class.md) object provides a more powerful toolbar.  
  
 There are several key differences between a toolbar and a `CDialogBar` object. A `CDialogBar` object is created from a dialog-template resource, which you can create with the Visual C++ dialog editor and which can contain any kind of Windows control. The user can tab from control to control. And you can specify an alignment style to align the dialog bar with any part of the parent frame window or even to leave it in place if the parent is resized. The following figure shows a dialog bar with a variety of controls.  
  
 ![VC Dialog Bar](../mfc/media/vc378t1.gif "vc378T1")  
A Dialog Bar  
  
 In other respects, working with a `CDialogBar` object is like working with a modeless dialog box. Use the dialog editor to design and create the dialog resource.  
  
 One of the virtues of dialog bars is that they can include controls other than buttons.  
  
 While it is normal to derive your own dialog classes from `CDialog`, you do not typically derive your own class for a dialog bar. Dialog bars are extensions to a main window and any dialog-bar control-notification messages, such as **BN_CLICKED** or **EN_CHANGE**, will be sent to the parent of the dialog bar, the main window.  
  
## See Also  
 [User Interface Elements](../mfc/user-interface-elements-mfc.md)   
 [Sample](../top/visual-cpp-samples.md)





