---
description: "Learn more about: Window Procedure Entry Points"
title: "Window Procedure Entry Points"
ms.date: "11/04/2016"
helpviewer_keywords: ["state management, window procedures", "MFC, managing state data", "window procedure entry points", "entry points, window procedures"]
---
# Window Procedure Entry Points

>[!NOTE]
> The Microsoft Foundation Classes (MFC) library continues to be supported. However, we're no longer adding features or updating the documentation.

To protect MFC window procedures, a module static links with a special window procedure implementation. The linkage occurs automatically when the module is linked with MFC. This window procedure uses the AFX_MANAGE_STATE macro to properly set the effective module state, then it calls `AfxWndProc`, which in turn delegates to the `WindowProc` member function of the appropriate `CWnd`-derived object.

## See also

[Managing the State Data of MFC Modules](../mfc/managing-the-state-data-of-mfc-modules.md)
