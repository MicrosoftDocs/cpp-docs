---
description: "Learn more about: Frame Window Classes (Architecture)"
title: "Frame Window Classes (Architecture)"
ms.date: "11/04/2016"
helpviewer_keywords: ["frame window classes [MFC], document/view architecture"]
---
# Frame Window Classes (Architecture)

>[!NOTE]
> The Microsoft Foundation Classes (MFC) library continues to be supported. However, we're no longer adding features or updating the documentation.

In document/view architecture, frame windows are windows that contain a view window. They also support having control bars attached to them.

In multiple document interface (MDI) applications, the main window is derived from `CMDIFrameWnd`. It indirectly contains the documents' frames, which are `CMDIChildWnd` objects. The `CMDIChildWnd` objects, in turn, contain the documents' views.

In single document interface (SDI) applications, the main window, derived from `CFrameWnd`, contains the view of the current document.

[CFrameWnd](reference/cframewnd-class.md)<br/>
The base class for an SDI application's main frame window. Also the base class for all other frame window classes.

[CMDIFrameWnd](reference/cmdiframewnd-class.md)<br/>
The base class for an MDI application's main frame window.

[CMDIChildWnd](reference/cmdichildwnd-class.md)<br/>
The base class for an MDI application's document frame windows.

[COleIPFrameWnd](reference/coleipframewnd-class.md)<br/>
Provides the frame window for a view when a server document is being edited in place.

## See also

[Class Overview](class-library-overview.md)
