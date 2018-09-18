---
title: "Frame Window Classes (Architecture) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
f1_keywords: ["vc.classes.frame"]
dev_langs: ["C++"]
helpviewer_keywords: ["frame window classes [MFC], document/view architecture"]
ms.assetid: 5da01fb4-f531-46cc-914f-e422e4f07f5d
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Frame Window Classes (Architecture)

In document/view architecture, frame windows are windows that contain a view window. They also support having control bars attached to them.

In multiple document interface (MDI) applications, the main window is derived from `CMDIFrameWnd`. It indirectly contains the documents' frames, which are `CMDIChildWnd` objects. The `CMDIChildWnd` objects, in turn, contain the documents' views.

In single document interface (SDI) applications, the main window, derived from `CFrameWnd`, contains the view of the current document.

[CFrameWnd](../mfc/reference/cframewnd-class.md)<br/>
The base class for an SDI application's main frame window. Also the base class for all other frame window classes.

[CMDIFrameWnd](../mfc/reference/cmdiframewnd-class.md)<br/>
The base class for an MDI application's main frame window.

[CMDIChildWnd](../mfc/reference/cmdichildwnd-class.md)<br/>
The base class for an MDI application's document frame windows.

[COleIPFrameWnd](../mfc/reference/coleipframewnd-class.md)<br/>
Provides the frame window for a view when a server document is being edited in place.

## See Also

[Class Overview](../mfc/class-library-overview.md)

