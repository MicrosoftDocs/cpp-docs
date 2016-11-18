---
title: "Destroying the Dialog Box | Microsoft Docs"
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
  - "dialog boxes, deleting"
  - "destruction, dialog box"
  - "dialog boxes, destroying"
  - "dialog boxes, removing"
  - "modeless dialog boxes, destroying"
  - "MFC dialog boxes, destroying"
  - "modal dialog boxes, destroying"
ms.assetid: dabceee7-3639-4d85-bf34-73515441b3d0
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
# Destroying the Dialog Box
Modal dialog boxes are normally created on the stack frame and destroyed when the function that created them ends. The dialog object's destructor is called when the object goes out of scope.  
  
 Modeless dialog boxes are normally created and owned by a parent view or frame window — the application's main frame window or a document frame window. The default [OnClose](../mfc/reference/cwnd-class.md#cwnd__onclose) handler calls [DestroyWindow](../mfc/reference/cwnd-class.md#cwnd__destroywindow), which destroys the dialog-box window. If the dialog box stands alone, with no pointers to it or other special ownership semantics, you should override [PostNcDestroy](../mfc/reference/cwnd-class.md#cwnd__postncdestroy) to destroy the C++ dialog object. You should also override [OnCancel](../mfc/reference/cdialog-class.md#cdialog__oncancel) and call `DestroyWindow` from within it. If not, the owner of the dialog box should destroy the C++ object when it is no longer necessary.  
  
## See Also  
 [Life Cycle of a Dialog Box](../mfc/life-cycle-of-a-dialog-box.md)

