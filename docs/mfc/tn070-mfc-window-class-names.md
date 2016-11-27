---
title: "TN070: MFC Window Class Names | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.mfc.classes"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "window class names"
  - "TN070"
ms.assetid: 90617912-dd58-4a7c-9082-ced71736d7cd
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
# TN070: MFC Window Class Names
> [!NOTE]
>  The following technical note has not been updated since it was first included in the online documentation. As a result, some procedures and topics might be out of date or incorrect. For the latest information, it is recommended that you search for the topic of interest in the online documentation index.  
  
 MFC windows use a dynamically created class name that reflects the features of the window. MFC generates class names dynamically for frame windows, views, and popup windows produced by the application. Dialog boxes and controls produced by an MFC application have the Windows-supplied name for the class of window in question.  
  
 You can replace the dynamically provided class name by registering your own window class and using it in an override of [PreCreateWindow](../mfc/reference/cwnd-class.md#cwnd__precreatewindow). Their MFC-supplied class names fit one of the two following forms:  
  
```  
Afx:%x:%x  
Afx:%x:%x:%x:%x:%x  
```  
  
 The hex digits that replace the `%x` characters are filled in from data from the [WNDCLASS](http://msdn.microsoft.com/library/windows/desktop/ms633576) structure. MFC uses this technique so that multiple C++ classes requiring identical **WNDCLASS** structures can share the same registered window class. Unlike most simple Win32 applications, MFC applications have only one **WNDPROC**, so you can easily share **WNDCLASS** structures to save time and memory. The replaceable values for the `%x` characters shown above are as follows:  
  
- **WNDCLASS.hInstance**  
  
- **WNDCLASS.style**  
  
- **WNDCLASS.hCursor**  
  
- **WNDCLASS.hbrBackground**  
  
- **WNDCLASS.hIcon**  
  
 The first form (`Afx:%x:%x`) is used when **hCursor**, **hbrBackground**, and **hIcon** are all **NULL**.  
  
## See Also  
 [Technical Notes by Number](../mfc/technical-notes-by-number.md)   
 [Technical Notes by Category](../mfc/technical-notes-by-category.md)   
 [TN020: ID Naming and Numbering Conventions](../mfc/tn020-id-naming-and-numbering-conventions.md)

