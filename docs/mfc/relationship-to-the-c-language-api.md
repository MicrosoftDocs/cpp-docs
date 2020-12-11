---
description: "Learn more about: Relationship to the C-Language API"
title: "Relationship to the C-Language API"
ms.date: "11/04/2016"
helpviewer_keywords: ["books [MFC], about MFC and Windows SDK", "books [MFC]", "MFC, Windows API", "Visual C, Windows API calls", "Windows API [MFC], and MFC"]
ms.assetid: 334e8efc-f3cc-4018-bc2e-02908b2a39fe
---
# Relationship to the C-Language API

The single characteristic that sets the Microsoft Foundation Class (MFC) Library apart from other class libraries for Windows is the very close mapping to the Windows API written in the C language. Further, you can generally mix calls to the class library freely with direct calls to the Windows API. This direct access does not, however, imply that the classes are a complete replacement for that API. Developers must still occasionally make direct calls to some Windows functions, such as [SetCursor](/windows/win32/api/winuser/nf-winuser-setcursor) and [GetSystemMetrics](/windows/win32/api/winuser/nf-winuser-getsystemmetrics), for example. A Windows function is wrapped by a class member function only when there is a clear advantage to doing so.

Because you sometimes need to make native Windows function calls, you should have access to the C-language Windows API documentation. This documentation is included with Microsoft Visual C++.

> [!NOTE]
> For an overview of how the MFC Library framework operates, see [Using the Classes to Write Applications for Windows](../mfc/using-the-classes-to-write-applications-for-windows.md).

## See also

[General Class Design Philosophy](../mfc/general-class-design-philosophy.md)
