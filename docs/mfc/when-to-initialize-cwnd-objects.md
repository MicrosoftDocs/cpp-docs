---
description: "Learn more about: When to Initialize CWnd Objects"
title: "When to Initialize CWnd Objects"
ms.date: "11/04/2016"
helpviewer_keywords: ["window objects [MFC], when to initialize CWnd", "initializing CWnd objects [MFC]", "initializing objects [MFC], CWnd", "CWnd objects [MFC], when HWND is attached", "HWND, when attached to CWnd object", "CWnd objects [MFC], when to initialize"]
ms.assetid: 4d31bcb1-73db-4f2f-b71c-89b087569a10
---
# When to Initialize CWnd Objects

You cannot create your own child windows or call any Windows API functions in the constructor of a `CWnd`-derived object. This is because the `HWND` for the `CWnd` object has not been created yet. Most Windows-specific initialization, such as adding child windows, must be done in an [OnCreate](../mfc/reference/cwnd-class.md#oncreate) message handler.

## What do you want to know more about

- [Creating document frame windows](../mfc/creating-document-frame-windows.md)

- [Document/view creation](../mfc/document-view-creation.md)

## See also

[Using Frame Windows](../mfc/using-frame-windows.md)
