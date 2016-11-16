---
title: "Type-Safe Access to Controls in a Dialog Box | Microsoft Docs"
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
  - "common controls [C++], in dialog boxes"
  - "Windows common controls [C++], in dialog boxes"
  - "safe access to dialog box controls"
  - "dialog boxes [C++], type-safe access to controls"
  - "controls [MFC], accessing in dialog boxes"
  - "type-safe access to dialog box controls"
  - "MFC dialog boxes, type-safe access to controls"
ms.assetid: 67021025-dd93-4d6a-8bed-a1348fe50685
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
# Type-Safe Access to Controls in a Dialog Box
The controls in a dialog box can use the interfaces of MFC control classes such as `CListBox` and `CEdit`. You can create a control object and attach it to a dialog control. Then you can access the control through its class interface, calling member functions to operate on the control. The methods described here are designed to give you type-safe access to a control. This is especially useful for controls such as edit boxes and list boxes.  
  
 There are two approaches to making a connection between a control in a dialog box and a C++ control member variable in a `CDialog`-derived class:  
  
-   [Without Code Wizards](../mfc/type-safe-access-to-controls-without-code-wizards.md)  
  
-   [With Code Wizards](../mfc/type-safe-access-to-controls-with-code-wizards.md)  
  
## See Also  
 [Dialog Boxes](../mfc/dialog-boxes.md)

