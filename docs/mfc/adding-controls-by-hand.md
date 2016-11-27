---
title: "Adding Controls By Hand | Microsoft Docs"
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
  - "Windows common controls [C++], adding"
  - "dialog box controls [C++], adding to dialog boxes"
  - "controlling input focus"
  - "input focus control"
  - "focus, controlling input"
  - "controls [MFC], adding to dialog boxes"
  - "common controls [C++], adding"
ms.assetid: bc843e59-0c51-4b5b-8bf2-343f716469d2
caps.latest.revision: 12
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
# Adding Controls By Hand
You can either [add controls to a dialog box with the dialog editor](../mfc/using-the-dialog-editor-to-add-controls.md) or add them yourself, with code.  
  
 To create a control object yourself, you will usually embed the C++ control object in a C++ dialog or frame-window object. Like many other objects in the framework, controls require two-stage construction. You should call the control's **Create** member function as part of creating the parent dialog box or frame window. For dialog boxes, this is usually done in [OnInitDialog](../mfc/reference/cdialog-class.md#cdialog__oninitdialog), and for frame windows, in [OnCreate](../mfc/reference/cwnd-class.md#cwnd__oncreate).  
  
 The following example shows how you might declare a `CEdit` object in the class declaration of a derived dialog class and then call the **Create** member function in `OnInitDialog`. Because the `CEdit` object is declared as an embedded object, it is automatically constructed when the dialog object is constructed, but it must still be initialized with its own **Create** member function.  
  
 [!code-cpp[NVC_MFCControlLadenDialog#1](../mfc/codesnippet/cpp/adding-controls-by-hand_1.h)]  
  
 The following `OnInitDialog` function sets up a rectangle, then calls **Create** to create the Windows edit control and attach it to the uninitialized `CEdit` object.  
  
 [!code-cpp[NVC_MFCControlLadenDialog#2](../mfc/codesnippet/cpp/adding-controls-by-hand_2.cpp)]  
  
 After creating the edit object, you can also set the input focus to the control by calling the `SetFocus` member function. Finally, you return 0 from `OnInitDialog` to show that you set the focus. If you return a nonzero value, the dialog manager sets the focus to the first control item in the dialog item list. In most cases, you'll want to add controls to your dialog boxes with the dialog editor.  
  
## See Also  
 [Making and Using Controls](../mfc/making-and-using-controls.md)   
 [Controls](../mfc/controls-mfc.md)   
 [CDialog::OnInitDialog](../mfc/reference/cdialog-class.md#cdialog__oninitdialog)

