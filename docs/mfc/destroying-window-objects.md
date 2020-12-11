---
description: "Learn more about: Destroying Window Objects"
title: "Destroying Window Objects"
ms.date: "11/04/2016"
helpviewer_keywords: ["frame windows [MFC], destroying", "window objects [MFC], deleting", "window objects [MFC], destroying", "window objects [MFC], removing"]
ms.assetid: 3241fea0-c614-4a25-957d-20f21bd5fd0c
---
# Destroying Window Objects

Care must be taken with your own child windows to destroy the C++ window object when the user is finished with the window. If these objects are not destroyed, your application will not recover their memory. Fortunately, the framework manages window destruction as well as creation for frame windows, views, and dialog boxes. If you create additional windows, you are responsible for destroying them.

## What do you want to know more about

- [Window destruction sequence](window-destruction-sequence.md)

- [Allocating and deallocating window memory](allocating-and-deallocating-window-memory.md)

- [Detaching a CWnd from its HWND](detaching-a-cwnd-from-its-hwnd.md)

- [General Window Creation Sequence](general-window-creation-sequence.md)

- [Destroying frame windows](destroying-frame-windows.md)

## See also

[Window Objects](window-objects.md)
