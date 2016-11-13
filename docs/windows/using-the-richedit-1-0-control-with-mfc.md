---
title: "Using the RichEdit 1.0 Control with MFC | Microsoft Docs"
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
  - "RichEdit 1.0 control"
  - "rich edit controls, RichEdit 1.0"
ms.assetid: 5a9060dd-44d8-4ef3-956e-16152f7e23d2
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
# Using the RichEdit 1.0 Control with MFC
To use a RichEdit control, you must first call [AfxInitRichEdit2](../mfc/reference/application-information-and-management.md#afxinitrichedit2) to load the RichEdit 2.0 Control (RICHED20.DLL), or call [AfxInitRichEdit](../mfc/reference/application-information-and-management.md#afxinitrichedit) to load the older RichEdit 1.0 Control (RICHED32.DLL).  
  
 You may use the current [CRichEditCtrl](../mfc/reference/cricheditctrl-class.md) class with the older RichEdit 1.0 control, but **CRichEditCtrl** is only designed to support the RichEdit 2.0 control. Because RichEdit 1.0 and RichEdit 2.0 are very similar, most methods will work; however, note there are some differences between the 1.0 and 2.0 controls, so some methods might work incorrectly or not work at all.  
  
## Requirements  
 MFC  
  
## See Also  
 [Troubleshooting the Dialog Editor](../mfc/troubleshooting-the-dialog-editor.md)   
 [Dialog Editor](../mfc/dialog-editor.md)

