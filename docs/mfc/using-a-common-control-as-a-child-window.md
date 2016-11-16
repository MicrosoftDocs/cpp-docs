---
title: "Using a Common Control as a Child Window | Microsoft Docs"
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
  - "controls [MFC], using as child windows"
  - "windows [C++], common controls as"
  - "child windows, common controls as"
  - "common controls [C++], child windows"
  - "Windows common controls [C++], child windows"
ms.assetid: 608f7d47-7854-4fce-bde9-856c51e76753
caps.latest.revision: 10
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
# Using a Common Control as a Child Window
Any of the Windows common controls can be used as a child window of any other window. The following procedure describes how to create a common control dynamically and then work with it.  
  
### To use a common control as a child window  
  
1.  Define the control in the related class or handler.  
  
2.  Use the control's override of the [CWnd::Create](../mfc/reference/cwnd-class.md#cwnd__create) method to create the Windows control.  
  
3.  After the control has been created (as early as the `OnCreate` handler if you subclass the control), you can manipulate the control using its member functions. See the descriptions of individual controls at [Controls](../mfc/controls-mfc.md) for details on methods.  
  
4.  When you are finished with the control, use [CWnd::DestroyWindow](../mfc/reference/cwnd-class.md#cwnd__destroywindow) to destroy the control.  
  
## See Also  
 [Making and Using Controls](../mfc/making-and-using-controls.md)   
 [Controls](../mfc/controls-mfc.md)

