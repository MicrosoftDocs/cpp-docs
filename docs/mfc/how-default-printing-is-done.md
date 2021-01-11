---
description: "Learn more about: How Default Printing Is Done"
title: "How Default Printing Is Done"
ms.date: "11/04/2016"
helpviewer_keywords: ["default printing", "printing [MFC], default", "defaults, printing"]
ms.assetid: 0f698459-0fc9-4d43-97da-29cf0f65daa2
---
# How Default Printing Is Done

This article explains the default printing process in Windows in terms of the MFC framework.

In MFC applications, the view class has a member function named `OnDraw` that contains all the drawing code. `OnDraw` takes a pointer to a [CDC](reference/cdc-class.md) object as a parameter. That `CDC` object represents the device context to receive the image produced by `OnDraw`. When the window displaying the document receives a [WM_PAINT](/windows/win32/gdi/wm-paint) message, the framework calls `OnDraw` and passes it a device context for the screen (a [CPaintDC](reference/cpaintdc-class.md) object, to be specific). Accordingly, `OnDraw`'s output goes to the screen.

In programming for Windows, sending output to the printer is very similar to sending output to the screen. This is because the Windows graphics device interface (GDI) is hardware-independent. You can use the same GDI functions for screen display or for printing simply by using the appropriate device context. If the `CDC` object that `OnDraw` receives represents the printer, `OnDraw`'s output goes to the printer.

This explains how MFC applications can perform simple printing without requiring extra effort on your part. The framework takes care of displaying the Print dialog box and creating a device context for the printer. When the user selects the Print command from the File menu, the view passes this device context to `OnDraw`, which draws the document on the printer.

However, there are some significant differences between printing and screen display. When you print, you have to divide the document into distinct pages and display them one at a time, rather than display whatever portion is visible in a window. As a corollary, you have to be aware of the size of the paper (whether it's letter size, legal size, or an envelope). You may want to print in different orientations, such as landscape or portrait mode. The Microsoft Foundation Class Library can't predict how your application will handle these issues, so it provides a protocol for you to add these capabilities.

That protocol is described in the article [Multipage Documents](multipage-documents.md).

## See also

[Printing](printing.md)
