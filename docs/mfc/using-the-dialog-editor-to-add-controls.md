---
title: "Using the Dialog Editor to Add Controls | Microsoft Docs"
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
  - "controls [MFC], adding to dialog boxes"
  - "Dialog editor, creating controls"
  - "common controls [C++], adding"
ms.assetid: d3f9f994-7e54-4656-a545-42c204557c36
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
# Using the Dialog Editor to Add Controls
When you create your dialog-template resource with the [dialog editor](../mfc/dialog-editor.md), you drag controls from a controls palette and drop them into the dialog box. This adds the specifications for that control type to the dialog-template resource. When you construct a dialog object and call its **Create** or `DoModal` member function, the framework creates a Windows control and places it in the dialog window on screen.  
  
 You can instead [create controls by hand](../mfc/adding-controls-by-hand.md) if you want. This is more work.  
  
## See Also  
 [Making and Using Controls](../mfc/making-and-using-controls.md)   
 [Controls](../mfc/controls-mfc.md)

