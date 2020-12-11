---
description: "Learn more about: Working with Window Objects"
title: "Working with Window Objects"
ms.date: "11/04/2016"
helpviewer_keywords: ["child windows [MFC], working with", "window objects [MFC], working with"]
ms.assetid: f73aa254-90e3-46a9-8e9b-d78b7054a331
---
# Working with Window Objects

Working with windows calls for two kinds of activity:

- Handling Windows messages

- Drawing in the window

To handle Windows messages in any window, including your own child windows, see [Mapping Messages to Functions](../mfc/reference/mapping-messages-to-functions.md) to map the messages to your C++ window class. Then write message-handler member functions in your class.

Most drawing in a framework application occurs in the view, whose [OnDraw](../mfc/reference/cview-class.md#ondraw) member function is called whenever the window's contents must be drawn. If your window is a child of the view, you might delegate some of the view's drawing to your child window by having `OnDraw` call one of your window's member functions.

In any case, you will need a device context for drawing. You can use the stock pen, brush, and other graphic objects contained in the device context associated with your window. Or you can modify these objects to get the drawing effects you need. With your device context set up as you like, call member functions of class [CDC](../mfc/reference/cdc-class.md) (device-context class) to draw lines, shapes, and text; to use colors; and to work with a coordinate system.

## What do you want to know more about

- [Message handling and mapping](../mfc/message-handling-and-mapping.md)

- [Drawing in a view](../mfc/drawing-in-a-view.md)

- [Device contexts](../mfc/device-contexts.md)

- [Graphic objects](../mfc/graphic-objects.md)

## See also

[Window Objects](../mfc/window-objects.md)
