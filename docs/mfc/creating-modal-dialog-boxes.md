---
title: "Creating Modal Dialog Boxes"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "modal dialog boxes, creating"
  - "MFC dialog boxes, creating"
  - "MFC dialog boxes, modal"
ms.assetid: 26c7a68c-79f6-4862-a5a8-6024984644d2
caps.latest.revision: 7
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
# Creating Modal Dialog Boxes
To create a modal dialog box, call either of the two public constructors declared in [CDialog](../mfcref/cdialog-class.md). Next, call the dialog object's [DoModal](../Topic/CDialog::DoModal.md) member function to display the dialog box and manage interaction with it until the user chooses OK or Cancel. This management by `DoModal` is what makes the dialog box modal. For modal dialog boxes, `DoModal` loads the dialog resource.  
  
## See Also  
 [Life Cycle of a Dialog Box](../mfc/life-cycle-of-a-dialog-box.md)