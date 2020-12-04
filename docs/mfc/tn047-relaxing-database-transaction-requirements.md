---
description: "Learn more about: TN047: Relaxing Database Transaction Requirements"
title: "TN047: Relaxing Database Transaction Requirements"
ms.date: "11/04/2016"
f1_keywords: ["vc.data"]
helpviewer_keywords: ["TN047"]
ms.assetid: f93c51cf-a8c0-43d0-aa47-7bcb8333d693
---
# TN047: Relaxing Database Transaction Requirements

This tech note, which discussed the transaction requirements of the MFC ODBC database classes, is now obsolete. Before MFC 4.2, the database classes required that cursors be preserved on recordsets after a **CommitTrans** or **Rollback** operation. If the ODBC driver and DBMS did not support this level of cursor preservation, then the database classes did not enable transactions.

Beginning with MFC 4.2, the database classes have relaxed the restriction of requiring cursor preservation. Transactions will be enabled if the driver supports them. However, you must now check the effect of a **CommitTrans** or **Rollback** operation on open recordsets. See the member functions [CDatabase::GetCursorCommitBehavior](../mfc/reference/cdatabase-class.md#getcursorcommitbehavior) and [CDatabase::GetCursorRollbackBehavior](../mfc/reference/cdatabase-class.md#getcursorrollbackbehavior) for more information.

## See also

[Technical Notes by Number](../mfc/technical-notes-by-number.md)<br/>
[Technical Notes by Category](../mfc/technical-notes-by-category.md)
