---
description: "Learn more about: Dragging Images from an Image List"
title: "Dragging Images from an Image List"
ms.date: "11/04/2016"
helpviewer_keywords: ["CImageList class [MFC], dragging images from", "dragging images from image lists [MFC]", "image lists [MFC], dragging images from", "images [MFC], dragging from image lists"]
ms.assetid: af691db8-e4f0-4046-b7b9-9acc68d3713d
---
# Dragging Images from an Image List

[CImageList](reference/cimagelist-class.md) includes functions for dragging an image on the screen. The dragging functions move an image smoothly, in color, and without any flashing of the cursor. Both masked and unmasked images can be dragged.

The [BeginDrag](reference/cimagelist-class.md#begindrag) member function begins a drag operation. The parameters include the index of the image to drag and the location of the hot spot within the image. The hot spot is a single pixel that the dragging functions recognize as the exact screen location of the image. Typically, an application sets the hot spot so that it coincides with the hot spot of the mouse cursor. The [DragMove](reference/cimagelist-class.md#dragmove) member function moves the image to a new location.

The [DragEnter](reference/cimagelist-class.md#dragenter) member function sets the initial position of the drag image within a window and draws the image at the position. The parameters include a pointer to the window in which to draw the image and a point that specifies the coordinates of the initial position within the window. The coordinates are relative to the window's upper-left corner, not the client area. The same is true for all of the image-dragging functions that take coordinates as parameters. This means you must compensate for the widths of window elements, such as the border, title bar, and menu bar, when specifying the coordinates. If you specify a **NULL** window handle when calling `DragEnter`, the dragging functions draw the image in the device context associated with the desktop window, and the coordinates are relative to the upper-left corner of the screen.

`DragEnter` locks all other updates to the given window during the drag operation. If you need to do any drawing during a drag operation, such as highlighting the target of a drag-and-drop operation, you can temporarily hide the dragged image by using the [DragLeave](reference/cimagelist-class.md#dragleave) member function. You can also use the [DragShowNoLock](reference/cimagelist-class.md#dragshownolock) member function.

Call [EndDrag](reference/cimagelist-class.md#enddrag) when you're done dragging the image.

The [SetDragCursorImage](reference/cimagelist-class.md#setdragcursorimage) member function creates a new drag image by combining the given image (typically a mouse cursor image) with the current drag image. Because the dragging functions use the new image during a drag operation, you should use the Windows [ShowCursor](/windows/win32/api/winuser/nf-winuser-showcursor) function to hide the actual mouse cursor after calling `SetDragCursorImage`. Otherwise, the system may appear to have two mouse cursors for the duration of the drag operation.

When an application calls `BeginDrag`, the system creates a temporary, internal image list and copies the specified drag image to the internal list. You can retrieve a pointer to the temporary drag image list by using the [GetDragImage](reference/cimagelist-class.md#getdragimage) member function. The function also retrieves the current drag position and the offset of the drag image relative to the drag position.

## See also

[Using CImageList](using-cimagelist.md)<br/>
[Controls](controls-mfc.md)
