---
description: "Learn more about: Drawing in a View"
title: "Drawing in a View"
ms.date: "11/04/2016"
helpviewer_keywords: ["drawing [MFC], in views", "views [MFC], printing", "views [MFC], updating", "printing [MFC], views", "views [MFC], rendering", "printing views [MFC]", "paint messages in view class [MFC]", "device contexts, screen drawings"]
ms.assetid: e3761db6-0f19-4482-a4cd-ac38ef7c4d3a
---
# Drawing in a View

Nearly all drawing in your application occurs in the view's `OnDraw` member function, which you must override in your view class. (The exception is mouse drawing, discussed in [Interpreting User Input Through a View](interpreting-user-input-through-a-view.md).) Your `OnDraw` override:

1. Gets data by calling the document member functions you provide.

1. Displays the data by calling member functions of a device-context object that the framework passes to `OnDraw`.

When a document's data changes in some way, the view must be redrawn to reflect the changes. Typically, this happens when the user makes a change through a view on the document. In this case, the view calls the document's [UpdateAllViews](reference/cdocument-class.md#updateallviews) member function to notify all views on the same document to update themselves. `UpdateAllViews` calls each view's [OnUpdate](reference/cview-class.md#onupdate) member function. The default implementation of `OnUpdate` invalidates the view's entire client area. You can override it to invalidate only those regions of the client area that map to the modified portions of the document.

The `UpdateAllViews` member function of class `CDocument` and the `OnUpdate` member function of class `CView` let you pass information describing what parts of the document were modified. This "hint" mechanism lets you limit the area that the view must redraw. `OnUpdate` takes two "hint" arguments. The first, *lHint*, of type **LPARAM**, lets you pass any data you like, while the second, *pHint*, of type `CObject`*, lets you pass a pointer to any object derived from `CObject`.

When a view becomes invalid, Windows sends it a **WM_PAINT** message. The view's [OnPaint](reference/cwnd-class.md#onpaint) handler function responds to the message by creating a device-context object of class [CPaintDC](reference/cpaintdc-class.md) and calls your view's `OnDraw` member function. You do not normally have to write an overriding `OnPaint` handler function.

A [device context](device-contexts.md) is a Windows data structure that contains information about the drawing attributes of a device such as a display or a printer. All drawing calls are made through a device-context object. For drawing on the screen, `OnDraw` is passed a `CPaintDC` object. For drawing on a printer, it is passed a [CDC](reference/cdc-class.md) object set up for the current printer.

Your code for drawing in the view first retrieves a pointer to the document, then makes drawing calls through the device context. The following simple `OnDraw` example illustrates the process:

[!code-cpp[NVC_MFCDocView#1](codesnippet/cpp/drawing-in-a-view_1.cpp)]

In this example, you would define the `GetData` function as a member of your derived document class.

The example prints whatever string it gets from the document, centered in the view. If the `OnDraw` call is for screen drawing, the `CDC` object passed in *pDC* is a `CPaintDC` whose constructor has already called `BeginPaint`. Calls to drawing functions are made through the device-context pointer. For information about device contexts and drawing calls, see class [CDC](reference/cdc-class.md) in the *MFC Reference* and [Working with Window Objects](working-with-window-objects.md).

For more examples of how to write `OnDraw`, see the [MFC Samples](../overview/visual-cpp-samples.md#mfc-samples).

## See also

[Using Views](using-views.md)
