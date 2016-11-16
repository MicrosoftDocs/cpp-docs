---
title: "Retrieving Data from the Dialog Object | Microsoft Docs"
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
  - "dialog boxes [C++], retrieving user data"
  - "dialog box data [C++]"
  - "data [MFC], retrieving"
  - "GetDlgItemText method"
  - "SetDlgItemText method"
  - "SetWindowText method"
  - "dialog box data [C++], retrieving"
  - "retrieving data"
  - "user input [C++], retrieving from MFC dialog boxes"
  - "capturing user input"
  - "dialog box controls [C++], initializing values"
  - "DDX (dialog data exchange) [C++]"
  - "MFC dialog boxes, retrieving user input"
  - "data retrieval [C++], dialog boxes"
  - "data [MFC], dialog boxes"
  - "DDX (dialog data exchange) [C++], about DDX"
  - "DDX (dialog data exchange) [C++], retrieving data from Dialog object"
  - "GetWindowText method"
ms.assetid: bdca2b61-6b53-4c2e-b426-8712c7a38ec0
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
# Retrieving Data from the Dialog Object
The framework provides an easy way to initialize the values of controls in a dialog box and to retrieve values from the controls. The more laborious manual approach is to call functions such as the `SetDlgItemText` and `GetDlgItemText` member functions of class `CWnd`, which apply to control windows. With these functions, you access each control individually to set or get its value, calling functions such as `SetWindowText` and `GetWindowText`. The framework's approach automates both initialization and retrieval.  
  
 Dialog data exchange (DDX) lets you exchange data between the controls in the dialog box and member variables in the dialog object more easily. This exchange works both ways. To initialize the controls in the dialog box, you can set the values of data members in the dialog object, and the framework will transfer the values to the controls before the dialog box is displayed. Then you can at any time update the dialog data members with data entered by the user. At that point, you can use the data by referring to the data member variables.  
  
 You can also arrange for the values of dialog controls to be validated automatically with dialog data validation (DDV).  
  
 DDX and DDV are explained in more detail in [Dialog Data Exchange and Validation](../mfc/dialog-data-exchange-and-validation.md).  
  
 For a modal dialog box, you can retrieve any data the user entered when `DoModal` returns **IDOK** but before the dialog object is destroyed. For a modeless dialog box, you can retrieve data from the dialog object at any time by calling `UpdateData` with the argument **TRUE** and then accessing dialog class member variables. This subject is discussed in more detail in [Dialog Data Exchange and Validation](../mfc/dialog-data-exchange-and-validation.md).  
  
## See Also  
 [Life Cycle of a Dialog Box](../mfc/life-cycle-of-a-dialog-box.md)

