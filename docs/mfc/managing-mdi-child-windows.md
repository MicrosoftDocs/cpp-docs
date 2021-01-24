---
description: "Learn more about: Managing MDI Child Windows"
title: "Managing MDI Child Windows"
ms.date: "11/19/2018"
f1_keywords: ["MDICLIENT"]
helpviewer_keywords: ["MDI [MFC], child windows", "child windows [MFC], and MDICLIENT window", "MDICLIENT window [MFC]", "windows [MFC], MDI", "frame windows [MFC], MDI child windows", "child windows [MFC]", "MDI [MFC], frame windows"]
ms.assetid: 1828d96e-a561-48ae-a661-ba9701de6bee
---
# Managing MDI Child Windows

MDI main frame windows (one per application) contain a special child window called the MDICLIENT window. The MDICLIENT window manages the client area of the main frame window, and itself has child windows: the document windows, derived from `CMDIChildWnd`. Because the document windows are frame windows themselves (MDI child windows), they can also have their own children. In all of these cases, the parent window manages its child windows and forwards some commands to them.

In an MDI frame window, the frame window manages the MDICLIENT window, repositioning it in conjunction with control bars. The MDICLIENT window, in turn, manages all MDI child frame windows. The following figure shows the relationship between an MDI frame window, its MDICLIENT window, and its child document frame windows.

![Child windows in an MDI frame window](../mfc/media/vc37gb1.gif "Child windows in an MDI frame window") <br/>
MDI Frame Windows and Children

An MDI frame window also works in conjunction with the current MDI child window, if there is one. The MDI frame window delegates command messages to the MDI child before it tries to handle them itself.

## What do you want to know more about

- [Creating document frame windows](creating-document-frame-windows.md)

- [Frame-window styles](frame-window-styles-cpp.md)

## See also

[Using Frame Windows](using-frame-windows.md)
