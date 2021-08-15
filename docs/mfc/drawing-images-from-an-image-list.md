---
description: "Learn more about: Drawing Images from an Image List"
title: "Drawing Images from an Image List"
ms.date: "11/04/2016"
helpviewer_keywords: ["CImageList class [MFC], drawing images from", "drawing [MFC], images from image lists", "image lists [MFC], drawing images from", "images [MFC], drawing"]
ms.assetid: 2f6063fb-1c28-45f8-a333-008c064db11c
---
# Drawing Images from an Image List

To draw an image, use the [CImageList::Draw](reference/cimagelist-class.md#draw) member function. You'll specify a pointer to a device context object, the index of the image to draw, the location in the device context at which to draw the image, and a set of flags to indicate the drawing style.

When you specify the **ILD_TRANSPARENT** style, `Draw` uses a two-step process to draw a masked image. First, it performs a logical-AND operation on the bits of the image and the bits of the mask. Then it performs a logical-XOR operation on the results of the first operation and the background bits of the destination device context. This process creates transparent areas in the resulting image; that is, each white bit in the mask causes the corresponding bit in the resulting image to be transparent.

Before drawing a masked image on a solid color background, you should use the [SetBkColor](reference/cimagelist-class.md#setbkcolor) member function to set the background color of the image list to the same color as the destination. Setting the color eliminates the need to create transparent areas in the image and enables `Draw` to simply copy the image to the destination device context, resulting in a significant increase in performance. To draw the image, specify the **ILD_NORMAL** style when you call `Draw`.

You can set the background color for a masked image list ([CImageList](reference/cimagelist-class.md)) at any time so that it draws correctly on any solid background. Setting the background color to **CLR_NONE** causes images to be drawn transparently by default. To retrieve the background color of an image list, use the [GetBkColor](reference/cimagelist-class.md#getbkcolor) member function.

The **ILD_BLEND25** and **ILD_BLEND50** styles dither the image with the system highlight color. These styles are useful if you use a masked image to represent an object that the user can select. For example, you can use the **ILD_BLEND50** style to draw the image when the user selects it.

A nonmasked image is copied to the destination device context using the `SRCCOPY` raster operation. The colors in the image appear the same regardless of the background color of the device context. The drawing styles specified in `Draw` also have no effect on the appearance of a nonmasked image.

In addition to the Draw member function, another function, [DrawIndirect](reference/cimagelist-class.md#drawindirect), extends the ability to render an image. `DrawIndirect` takes, as a parameter, an [IMAGELISTDRAWPARAMS](/windows/win32/api/commctrl/ns-commctrl-imagelistdrawparams) structure. This structure can be used to customize the rendering of the current image, including the use of raster operation (ROP) codes. For more information on ROP codes, see [Raster Operation Codes](/windows/win32/gdi/raster-operation-codes) and [Bitmaps as Brushes](/windows/win32/gdi/bitmaps-as-brushes) in the Windows SDK.

## See also

[Using CImageList](using-cimagelist.md)<br/>
[Controls](controls-mfc.md)
