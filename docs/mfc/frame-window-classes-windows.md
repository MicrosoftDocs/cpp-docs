---
description: "Learn more about: Frame Window Classes (Windows)"
title: "Frame Window Classes (Windows)"
ms.date: "11/04/2016"
f1_keywords: ["vc.classes.frame"]
helpviewer_keywords: ["frame window classes [MFC], reference"]
ms.assetid: 6342ec5f-f922-4da8-a78e-2f5f994c7142
---
# Frame Window Classes (Windows)

Frame windows are windows that frame an application or a part of an application. Frame windows usually contain other windows, such as views, tool bars, and status bars. In the case of `CMDIFrameWnd`, they may contain `CMDIChildWnd` objects indirectly.

[CFrameWnd](reference/cframewnd-class.md)<br/>
The base class for an SDI application's main frame window. Also the base class for all other frame window classes.

[CMDIFrameWnd](reference/cmdiframewnd-class.md)<br/>
The base class for an MDI application's main frame window.

[CMDIChildWnd](reference/cmdichildwnd-class.md)<br/>
The base class for an MDI application's document frame windows.

[CMiniFrameWnd](reference/cminiframewnd-class.md)<br/>
A half-height frame window typically seen around floating toolbars.

[COleIPFrameWnd](reference/coleipframewnd-class.md)<br/>
Provides the frame window for a view when a server document is being edited in place.

## Related Class

Class `CMenu` provides an interface through which to access your application's menus. It is useful for manipulating menus dynamically at run time; for example, when adding or deleting menu items according to context. Although menus are most often used with frame windows, they can also be used with dialog boxes and other nonchild windows.

[CMenu](reference/cmenu-class.md)<br/>
Encapsulates an `HMENU` handle to the application's menu bar and pop-up menus.

## See also

[Class Overview](class-library-overview.md)
