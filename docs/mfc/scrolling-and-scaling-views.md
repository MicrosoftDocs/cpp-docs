---
description: "Learn more about: Scrolling and Scaling Views"
title: "Scrolling and Scaling Views"
ms.date: "11/04/2016"
helpviewer_keywords: ["message handlers [MFC]", "scaling views [MFC]", "message handling [MFC], scroll bars in view class [MFC]", "scroll bars [MFC], messages", "scrolling views [MFC]"]
ms.assetid: f98a3421-c336-407e-97ee-dbb2ffd76fbd
---
# Scrolling and Scaling Views

MFC supports views that scroll and views that are automatically scaled to the size of the frame window that displays them. Class `CScrollView` supports both kinds of views.

For more information about scrolling and scaling, see class [CScrollView](../mfc/reference/cscrollview-class.md) in the *MFC Reference*. For a scrolling example, see the [Scribble sample](../overview/visual-cpp-samples.md).

## What do you want to know more about

- Scrolling a view

- Scaling a view

- [View coordinates](/windows/win32/gdi/window-coordinate-system)

## <a name="_core_scrolling_a_view"></a> Scrolling a View

Frequently the size of a document is greater than the size its view can display. This may occur because the document's data increases or the user shrinks the window that frames the view. In such cases, the view must support scrolling.

Any view can handle scroll-bar messages in its `OnHScroll` and `OnVScroll` member functions. You can either implement scroll-bar message handling in these functions, doing all the work yourself, or you can use the `CScrollView` class to handle scrolling for you.

`CScrollView` does the following:

- Manages window and viewport sizes and mapping modes

- Scrolls automatically in response to scroll-bar messages

You can specify how much to scroll for a "page" (when the user clicks in a scroll-bar shaft) and a "line" (when the user clicks in a scroll arrow). Plan these values to suit the nature of your view. For example, you might want to scroll in 1-pixel increments for a graphics view but in increments based on the line height in text documents.

## <a name="_core_scaling_a_view"></a> Scaling a View

When you want the view to automatically fit the size of its frame window, you can use `CScrollView` for scaling instead of scrolling. The logical view is stretched or shrunk to fit the window's client area exactly. A scaled view has no scroll bars.

## See also

[Using Views](../mfc/using-views.md)
