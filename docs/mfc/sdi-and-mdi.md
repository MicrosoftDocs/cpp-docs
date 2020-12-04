---
description: "Learn more about: SDI and MDI"
title: "SDI and MDI"
ms.date: "11/04/2016"
helpviewer_keywords: ["frame windows [MFC], SDI applications", "frame windows [MFC], MDI applications", "MFC, windows", "single document interface (SDI) [MFC], applications", "MDI [MFC], vs. SDI"]
ms.assetid: bb7239d9-4759-4f63-bfff-44a04b48c067
---
# SDI and MDI

MFC makes it easy to work with both single-document interface (SDI) and multiple-document interface (MDI) applications.

SDI applications allow only one open document frame window at a time. MDI applications allow multiple document frame windows to be open in the same instance of an application. An MDI application has a window within which multiple MDI child windows, which are frame windows themselves, can be opened, each containing a separate document. In some applications, the child windows can be of different types, such as chart windows and spreadsheet windows. In that case, the menu bar can change as MDI child windows of different types are activated.

> [!NOTE]
> Under Windows 95 and later, applications are commonly SDI because the operating system has adopted a "document-centered" view.

For more information, see [Documents, Views, and the Framework](../mfc/documents-views-and-the-framework.md).

## See also

[Using the Classes to Write Applications for Windows](../mfc/using-the-classes-to-write-applications-for-windows.md)
