---
title: "TN047: Relaxing Database Transaction Requirements | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.data"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "TN047"
ms.assetid: f93c51cf-a8c0-43d0-aa47-7bcb8333d693
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# TN047: Relaxing Database Transaction Requirements
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [TN047: Relaxing Database Transaction Requirements](https://docs.microsoft.com/cpp/mfc/tn047-relaxing-database-transaction-requirements).  
  
  
This tech note, which discussed the transaction requirements of the MFC ODBC database classes, is now obsolete. Before MFC 4.2, the database classes required that cursors be preserved on recordsets after a **CommitTrans** or **Rollback** operation. If the ODBC driver and DBMS did not support this level of cursor preservation, then the database classes did not enable transactions.  
  
 Beginning with MFC 4.2, the database classes have relaxed the restriction of requiring cursor preservation. Transactions will be enabled if the driver supports them. However, you must now check the effect of a **CommitTrans** or **Rollback** operation on open recordsets. See the member functions [CDatabase::GetCursorCommitBehavior](../mfc/reference/cdatabase-class.md#cdatabase__getcursorcommitbehavior) and [CDatabase::GetCursorRollbackBehavior](../mfc/reference/cdatabase-class.md#cdatabase__getcursorrollbackbehavior) for more information.  
  
## See Also  
 [Technical Notes by Number](../mfc/technical-notes-by-number.md)   
 [Technical Notes by Category](../mfc/technical-notes-by-category.md)





