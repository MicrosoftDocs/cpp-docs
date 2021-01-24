---
description: "Learn more about: Standard Command and Window IDs"
title: "Standard Command and Window IDs"
ms.date: "11/04/2016"
helpviewer_keywords: ["standard command and Window IDs"]
ms.assetid: 0424805c-fff8-4531-8f0c-15cfb13aa612
---
# Standard Command and Window IDs

The Microsoft Foundation Class Library defines a number of standard command and window IDs in Afxres.h. These IDs are most commonly used within the resource editors and the [Class Wizard](mfc-class-wizard.md) to map messages to your handler functions. All standard commands have an **ID_** prefix. For example, when you use the menu editor, you normally bind the File Open menu item to the standard ID_FILE_OPEN command ID.

For most standard commands, application code does not need to refer to the command ID, because the framework itself handles the commands through message maps in its primary framework classes (`CWinThread`, `CWinApp`, `CView`, `CDocument`, and so on).

In addition to standard command IDs, a number of other standard IDs are defined which have a prefix of **AFX_ID**. These IDs include standard window IDs (prefix      **AFX_IDW_**), string IDs (prefix **AFX_IDS_**), and several other types.

IDs that begin with the **AFX_ID** prefix are rarely used by programmers, but you might need to refer to these IDs when overriding framework functions that also refer to the **AFX_ID**s.

IDs are not individually documented in this reference. You can find more information on them in Technical Notes [20](../../mfc/tn020-id-naming-and-numbering-conventions.md), [21](../../mfc/tn021-command-and-message-routing.md), and [22](../../mfc/tn022-standard-commands-implementation.md).

> [!NOTE]
> The header file Afxres.h is indirectly included in Afxwin.h. You must explicitly include the following statement in your application's resource script (.rc) file:

[!code-cpp[NVC_MFC_Utilities#47](../../mfc/codesnippet/cpp/standard-command-and-window-ids_1.h)]

## See also

[Macros and Globals](../../mfc/reference/mfc-macros-and-globals.md)
