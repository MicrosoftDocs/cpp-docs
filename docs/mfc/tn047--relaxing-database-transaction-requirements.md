---
title: "TN047: Relaxing Database Transaction Requirements"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "vc.data"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "TN047"
ms.assetid: f93c51cf-a8c0-43d0-aa47-7bcb8333d693
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
# TN047: Relaxing Database Transaction Requirements
This tech note, which discussed the transaction requirements of the MFC ODBC database classes, is now obsolete. Before MFC 4.2, the database classes required that cursors be preserved on recordsets after a **CommitTrans** or **Rollback** operation. If the ODBC driver and DBMS did not support this level of cursor preservation, then the database classes did not enable transactions.  
  
 Beginning with MFC 4.2, the database classes have relaxed the restriction of requiring cursor preservation. Transactions will be enabled if the driver supports them. However, you must now check the effect of a **CommitTrans** or **Rollback** operation on open recordsets. See the member functions [CDatabase::GetCursorCommitBehavior](../Topic/CDatabase::GetCursorCommitBehavior.md) and [CDatabase::GetCursorRollbackBehavior](../Topic/CDatabase::GetCursorRollbackBehavior.md) for more information.  
  
## See Also  
 [Technical Notes by Number](../mfc/technical-notes-by-number.md)   
 [Technical Notes by Category](../mfc/technical-notes-by-category.md)