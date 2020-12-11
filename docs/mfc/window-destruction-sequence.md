---
description: "Learn more about: Window Destruction Sequence"
title: "Window Destruction Sequence"
ms.date: "11/04/2016"
helpviewer_keywords: ["destruction, windows", "destroying windows", "sequence [MFC], window destruction", "CWnd objects [MFC], destruction sequence", "sequence [MFC]", "windows [MFC], destroying"]
ms.assetid: 2d819196-6240-415f-a308-db43745e616c
---
# Window Destruction Sequence

In the MFC framework, when the user closes the frame window, the window's default [OnClose](../mfc/reference/cwnd-class.md#onclose) handler calls [DestroyWindow](../mfc/reference/cwnd-class.md#destroywindow). The last member function called when the Windows window is destroyed is [OnNcDestroy](../mfc/reference/cwnd-class.md#onncdestroy), which does some cleanup, calls the [Default](../mfc/reference/cwnd-class.md#default) member function to perform Windows cleanup, and lastly calls the virtual member function [PostNcDestroy](../mfc/reference/cwnd-class.md#postncdestroy). The [CFrameWnd](../mfc/reference/cframewnd-class.md) implementation of `PostNcDestroy` deletes the C++ window object.

## What do you want to know more about

- [Allocating and deallocating window memory](../mfc/allocating-and-deallocating-window-memory.md)

- [Detaching a CWnd from its HWND](../mfc/detaching-a-cwnd-from-its-hwnd.md)

## See also

[Destroying Window Objects](../mfc/destroying-window-objects.md)
