---
description: "Learn more about: CImageList Class"
title: "CImageList Class"
ms.date: "11/04/2016"
f1_keywords: ["CImageList", "AFXCMN/CImageList", "AFXCMN/CImageList::CImageList", "AFXCMN/CImageList::Add", "AFXCMN/CImageList::Attach", "AFXCMN/CImageList::BeginDrag", "AFXCMN/CImageList::Copy", "AFXCMN/CImageList::Create", "AFXCMN/CImageList::DeleteImageList", "AFXCMN/CImageList::DeleteTempMap", "AFXCMN/CImageList::Detach", "AFXCMN/CImageList::DragEnter", "AFXCMN/CImageList::DragLeave", "AFXCMN/CImageList::DragMove", "AFXCMN/CImageList::DragShowNolock", "AFXCMN/CImageList::Draw", "AFXCMN/CImageList::DrawEx", "AFXCMN/CImageList::DrawIndirect", "AFXCMN/CImageList::EndDrag", "AFXCMN/CImageList::ExtractIcon", "AFXCMN/CImageList::FromHandle", "AFXCMN/CImageList::FromHandlePermanent", "AFXCMN/CImageList::GetBkColor", "AFXCMN/CImageList::GetDragImage", "AFXCMN/CImageList::GetImageCount", "AFXCMN/CImageList::GetImageInfo", "AFXCMN/CImageList::GetSafeHandle", "AFXCMN/CImageList::Read", "AFXCMN/CImageList::Remove", "AFXCMN/CImageList::Replace", "AFXCMN/CImageList::SetBkColor", "AFXCMN/CImageList::SetDragCursorImage", "AFXCMN/CImageList::SetImageCount", "AFXCMN/CImageList::SetOverlayImage", "AFXCMN/CImageList::Write", "AFXCMN/CImageList::m_hImageList"]
helpviewer_keywords: ["CImageList [MFC], CImageList", "CImageList [MFC], Add", "CImageList [MFC], Attach", "CImageList [MFC], BeginDrag", "CImageList [MFC], Copy", "CImageList [MFC], Create", "CImageList [MFC], DeleteImageList", "CImageList [MFC], DeleteTempMap", "CImageList [MFC], Detach", "CImageList [MFC], DragEnter", "CImageList [MFC], DragLeave", "CImageList [MFC], DragMove", "CImageList [MFC], DragShowNolock", "CImageList [MFC], Draw", "CImageList [MFC], DrawEx", "CImageList [MFC], DrawIndirect", "CImageList [MFC], EndDrag", "CImageList [MFC], ExtractIcon", "CImageList [MFC], FromHandle", "CImageList [MFC], FromHandlePermanent", "CImageList [MFC], GetBkColor", "CImageList [MFC], GetDragImage", "CImageList [MFC], GetImageCount", "CImageList [MFC], GetImageInfo", "CImageList [MFC], GetSafeHandle", "CImageList [MFC], Read", "CImageList [MFC], Remove", "CImageList [MFC], Replace", "CImageList [MFC], SetBkColor", "CImageList [MFC], SetDragCursorImage", "CImageList [MFC], SetImageCount", "CImageList [MFC], SetOverlayImage", "CImageList [MFC], Write", "CImageList [MFC], m_hImageList"]
ms.assetid: b6d1a704-1c82-4548-8a8f-77972adc98a5
---
# CImageList Class

Provides the functionality of the Windows common image list control.

## Syntax

```
class CImageList : public CObject
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CImageList::CImageList](#cimagelist)|Constructs a `CImageList` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CImageList::Add](#add)|Adds an image or images to an image list.|
|[CImageList::Attach](#attach)|Attaches an image list to a `CImageList` object.|
|[CImageList::BeginDrag](#begindrag)|Begins dragging an image.|
|[CImageList::Copy](#copy)|Copies an image within a `CImageList` object.|
|[CImageList::Create](#create)|Initializes an image list and attaches it to a `CImageList` object.|
|[CImageList::DeleteImageList](#deleteimagelist)|Deletes an image list.|
|[CImageList::DeleteTempMap](#deletetempmap)|Called by the [CWinApp](../../mfc/reference/cwinapp-class.md) idle-time handler to delete any temporary `CImageList` object created by `FromHandle`.|
|[CImageList::Detach](#detach)|Detaches an image list object from a `CImageList` object and returns a handle to an image list.|
|[CImageList::DragEnter](#dragenter)|Locks updates during a drag operation and displays the drag image at a specified position.|
|[CImageList::DragLeave](#dragleave)|Unlocks the window and hides the drag image so that the window can be updated.|
|[CImageList::DragMove](#dragmove)|Moves the image that is being dragged during a drag-and-drop operation.|
|[CImageList::DragShowNolock](#dragshownolock)|Shows or hides the drag image during a drag operation, without locking the window.|
|[CImageList::Draw](#draw)|Draws the image that is being dragged during a drag-and-drop operation.|
|[CImageList::DrawEx](#drawex)|Draws an image list item in the specified device context. The function uses the specified drawing style and blends the image with the specified color.|
|[CImageList::DrawIndirect](#drawindirect)|Draws an image from an image list.|
|[CImageList::EndDrag](#enddrag)|Ends a drag operation.|
|[CImageList::ExtractIcon](#extracticon)|Creates an icon based on an image and mask in an image list.|
|[CImageList::FromHandle](#fromhandle)|Returns a pointer to a `CImageList` object when given a handle to an image list. If a `CImageList` object is not attached to the handle, a temporary `CImageList` object is created and attached.|
|[CImageList::FromHandlePermanent](#fromhandlepermanent)|Returns a pointer to a `CImageList` object when given a handle to an image list. If a `CImageList` object is not attached to the handle, NULL is returned.|
|[CImageList::GetBkColor](#getbkcolor)|Retrieves the current background color for an image list.|
|[CImageList::GetDragImage](#getdragimage)|Gets the temporary image list that is used for dragging.|
|[CImageList::GetImageCount](#getimagecount)|Retrieves the number of images in an image list.|
|[CImageList::GetImageInfo](#getimageinfo)|Retrieves information about an image.|
|[CImageList::GetSafeHandle](#getsafehandle)|Retrieves `m_hImageList`.|
|[CImageList::Read](#read)|Reads an image list from an archive.|
|[CImageList::Remove](#remove)|Removes an image from an image list.|
|[CImageList::Replace](#replace)|Replaces an image in an image list with a new image.|
|[CImageList::SetBkColor](#setbkcolor)|Sets the background color for an image list.|
|[CImageList::SetDragCursorImage](#setdragcursorimage)|Creates a new drag image.|
|[CImageList::SetImageCount](#setimagecount)|Resets the count of images in an image list.|
|[CImageList::SetOverlayImage](#setoverlayimage)|Adds the zero-based index of an image to the list of images to be used as overlay masks.|
|[CImageList::Write](#write)|Writes an image list to an archive.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CImageList::operator HIMAGELIST](#operator_himagelist)|Returns the HIMAGELIST attached to the `CImageList`.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CImageList::m_hImageList](#m_himagelist)|A handle containing the image list attached to this object.|

## Remarks

An "image list" is a collection of same-sized images, each of which can be referred to by its zero-based index. Image lists are used to efficiently manage large sets of icons or bitmaps. All images in an image list are contained in a single, wide bitmap in screen device format. An image list may also include a monochrome bitmap that contains masks used to draw images transparently (icon style). The Microsoft Win32 application programming interface (API) provides image list functions that enable you to draw images, create and destroy image lists, add and remove images, replace images, merge images, and drag images.

This control (and therefore the `CImageList` class) is available only to programs running under Windows 95/98 and Windows NT version 3.51 and later.

For more information on using `CImageList`, see [Controls](../../mfc/controls-mfc.md) and [Using CImageList](../../mfc/using-cimagelist.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

`CImageList`

## Requirements

**Header:** afxcmn.h

## <a name="add"></a> CImageList::Add

Call this function to add one or more images or an icon to an image list.

```
int Add(
    CBitmap* pbmImage,
    CBitmap* pbmMask);

int Add(
    CBitmap* pbmImage,
    COLORREF crMask);

int Add(HICON hIcon);
```

### Parameters

*pbmImage*<br/>
Pointer to the bitmap containing the image or images. The number of images is inferred from the width of the bitmap.

*pbmMask*<br/>
Pointer to the bitmap containing the mask. If no mask is used with the image list, this parameter is ignored.

*crMask*<br/>
Color used to generate the mask. Each pixel of this color in the given bitmap is changed to black and the corresponding bit in the mask is set to one.

*hIcon*<br/>
Handle of the icon that contains the bitmap and mask for the new image.

### Return Value

Zero-based index of the first new image if successful; otherwise - 1.

### Remarks

You are responsible for releasing the icon handle when you are done with it.

### Example

[!code-cpp[NVC_MFC_CImageList#1](../../mfc/reference/codesnippet/cpp/cimagelist-class_1.cpp)]

## <a name="attach"></a> CImageList::Attach

Call this function to attach an image list to a `CImageList` object.

```
BOOL Attach(HIMAGELIST hImageList);
```

### Parameters

*hImageList*<br/>
A handle to an image list object.

### Return Value

Nonzero if the attachment was successful; otherwise 0.

### Example

[!code-cpp[NVC_MFC_CImageList#2](../../mfc/reference/codesnippet/cpp/cimagelist-class_2.cpp)]

## <a name="begindrag"></a> CImageList::BeginDrag

Call this function to begin dragging an image.

```
BOOL BeginDrag(
    int nImage,
    CPoint ptHotSpot);
```

### Parameters

*nImage*<br/>
Zero-based index of the image to drag.

*ptHotSpot*<br/>
Coordinates of the starting drag position (typically, the cursor position). The coordinates are relative to the upper left corner of the image.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

This function creates a temporary image list that is used for dragging. The image combines the specified image and its mask with the current cursor. In response to subsequent WM_MOUSEMOVE messages, you can move the drag image by using the `DragMove` member function. To end the drag operation, you can use the `EndDrag` member function.

### Example

[!code-cpp[NVC_MFC_CImageList#3](../../mfc/reference/codesnippet/cpp/cimagelist-class_3.cpp)]

## <a name="cimagelist"></a> CImageList::CImageList

Constructs a `CImageList` object.

```
CImageList();
```

## <a name="copy"></a> CImageList::Copy

This member function implements the behavior of the Win32 function [ImageList_Copy](/windows/win32/api/commctrl/nf-commctrl-imagelist_copy), as described in the Windows SDK.

```
BOOL Copy(
    int iDst,
    int iSrc,
    UINT uFlags = ILCF_MOVE);

BOOL Copy(
    int iDst,
    CImageList* pSrc,
    int iSrc,
    UINT uFlags = ILCF_MOVE);
```

### Parameters

*iDst*<br/>
The zero-based index of the image to be used as the destination of the copy operation.

*iSrc*<br/>
The zero-based index of the image to be used as the source of the copy operation.

*uFlags*<br/>
The bit flag value that specifies the type of copy operation to be made. This parameter can be one of the following values:

|Value|Meaning|
|-----------|-------------|
|ILCF_MOVE|The source image is copied to the destination image's index. This operation results in multiple instances of a given image. ILCF_MOVE is the default.|
|ILCF_SWAP|The source and destination images exchange positions within the image list.|

*pSrc*<br/>
A pointer to a `CImageList` object that is the target of the copy operation.

### Return Value

Nonzero if successful; otherwise zero.

### Example

[!code-cpp[NVC_MFC_CImageList#6](../../mfc/reference/codesnippet/cpp/cimagelist-class_4.cpp)]

## <a name="create"></a> CImageList::Create

Initializes an image list and attaches it to a [CImageList](../../mfc/reference/cimagelist-class.md) object.

```
BOOL Create(
    int cx,
    int cy,
    UINT nFlags,
    int nInitial,
    int nGrow);

BOOL Create(
    UINT nBitmapID,
    int cx,
    int nGrow,
    COLORREF crMask);

BOOL Create(
    LPCTSTR lpszBitmapID,
    int cx,
    int nGrow,
    COLORREF crMask);

BOOL Create(
    CImageList& imagelist1,
    int nImage1,
    CImageList& imagelist2,
    int nImage2,
    int dx,
    int dy);

BOOL Create(CImageList* pImageList);
```

### Parameters

*cx*<br/>
Dimensions of each image, in pixels.

*cy*<br/>
Dimensions of each image, in pixels.

*nFlags*<br/>
Specifies the type of image list to create. This parameter can be a combination of the following values, but it can include only one of the `ILC_COLOR` values.

|Value|Meaning|
|-----------|-------------|
|ILC_COLOR|Use the default behavior if none of the other ILC_COLOR* flags is specified. Typically, the default is ILC_COLOR4; but for older display drivers, the default is ILC_COLORDDB.|
|ILC_COLOR4|Use a 4-bit (16 color) device-independent bitmap (DIB) section as the bitmap for the image list.|
|ILC_COLOR8|Use an 8-bit DIB section. The colors used for the color table are the same colors as the halftone palette.|
|ILC_COLOR16|Use a 16-bit (32/64k color) DIB section.|
|ILC_COLOR24|Use a 24-bit DIB section.|
|ILC_COLOR32|Use a 32-bit DIB section.|
|ILC_COLORDDB|Use a device-dependent bitmap.|
|ILC_MASK|Uses a mask. The image list contains two bitmaps, one of which is a monochrome bitmap used as a mask. If this value is not included, the image list contains only one bitmap. See [Drawing Images from an Image List](../../mfc/drawing-images-from-an-image-list.md) for additional information on masked images.|

*nInitial*<br/>
Number of images that the image list initially contains.

*nGrow*<br/>
Number of images by which the image list can grow when the system needs to resize the list to make room for new images. This parameter represents the number of new images the resized image list can contain.

*nBitmapID*<br/>
Resource IDs of the bitmap to be associated with the image list.

*crMask*<br/>
Color used to generate a mask. Each pixel of this color in the specified bitmap is changed to black, and the corresponding bit in the mask is set to one.

*lpszBitmapID*<br/>
A string containing the resource IDs of the images.

*imagelist1*<br/>
A reference to a `CImageList` object.

*nImage1*<br/>
Index of the first existing image.

*imagelist2*<br/>
A reference to a `CImageList` object.

*nImage2*<br/>
Index of the second existing image.

*dx*<br/>
Offset of the x-axis of the second image in relationship to the first image, in pixels.

*dy*<br/>
Offset of the y-axis of the second image in relationship to the first image, in pixels.

*pImageList*<br/>
A pointer to a `CImageList` object.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

You construct a `CImageList` in two steps. First, call the constructor and then call `Create`, which creates the image list and attaches it to the `CImageList` object.

### Example

[!code-cpp[NVC_MFC_CImageList#7](../../mfc/reference/codesnippet/cpp/cimagelist-class_5.cpp)]

## <a name="deleteimagelist"></a> CImageList::DeleteImageList

Call this function to delete an image list.

```
BOOL DeleteImageList();
```

### Return Value

Nonzero if successful; otherwise 0.

### Example

[!code-cpp[NVC_MFC_CImageList#8](../../mfc/reference/codesnippet/cpp/cimagelist-class_6.cpp)]

## <a name="deletetempmap"></a> CImageList::DeleteTempMap

Called automatically by the `CWinApp` idle-time handler, `DeleteTempMap` deletes any temporary `CImageList` objects created by [FromHandle](#fromhandle), but does not destroy any handles ( `hImageList`) temporarily associated with the `ImageList` objects.

```
static void PASCAL DeleteTempMap();
```

### Example

[!code-cpp[NVC_MFC_CImageList#9](../../mfc/reference/codesnippet/cpp/cimagelist-class_7.cpp)]

## <a name="detach"></a> CImageList::Detach

Call this function to detach an image list object from a `CImageList` object.

```
HIMAGELIST Detach();
```

### Return Value

A handle to an image list object.

### Remarks

This function returns a handle to the image list object.

### Example

  See the example for [CImageList::Attach](#attach).

## <a name="dragenter"></a> CImageList::DragEnter

During a drag operation, locks updates to the window specified by *pWndLock* and displays the drag image at the position specified by *point*.

```
static BOOL PASCAL DragEnter(
    CWnd* pWndLock,
    CPoint point);
```

### Parameters

*pWndLock*<br/>
Pointer to the window that owns the drag image.

*point*<br/>
Position at which to display the drag image. Coordinates are relative to the upper left corner of the window (not the client area).

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

The coordinates are relative to the window's upper left corner, so you must compensate for the widths of window elements, such as the border, title bar, and menu bar, when specifying the coordinates.

If *pWndLock* is NULL, this function draws the image in the display context associated with the desktop window, and coordinates are relative to the upper left corner of the screen.

This function locks all other updates to the given window during the drag operation. If you need to do any drawing during a drag operation, such as highlighting the target of a drag-and-drop operation, you can temporarily hide the dragged image by using the [CImageList::DragLeave](#dragleave) function.

### Example

  See the example for [CImageList::BeginDrag](#begindrag).

## <a name="dragleave"></a> CImageList::DragLeave

Unlocks the window specified by *pWndLock* and hides the drag image, allowing the window to be updated.

```
static BOOL PASCAL DragLeave(CWnd* pWndLock);
```

### Parameters

*pWndLock*<br/>
Pointer to the window that owns the drag image.

### Return Value

Nonzero if successful; otherwise 0.

### Example

  See the example for [CImageList::EndDrag](#enddrag).

## <a name="dragmove"></a> CImageList::DragMove

Call this function to move the image that is being dragged during a drag-and-drop operation.

```
static BOOL PASCAL DragMove(CPoint pt);
```

### Parameters

*pt*<br/>
New drag position.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

This function is typically called in response to a WM_MOUSEMOVE message. To begin a drag operation, use the `BeginDrag` member function.

### Example

[!code-cpp[NVC_MFC_CImageList#4](../../mfc/reference/codesnippet/cpp/cimagelist-class_8.cpp)]

## <a name="dragshownolock"></a> CImageList::DragShowNolock

Shows or hides the drag image during a drag operation, without locking the window.

```
static BOOL PASCAL DragShowNolock(BOOL bShow);
```

### Parameters

*bShow*<br/>
Specifies whether the drag image is to be shown.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

The [CImageList::DragEnter](#dragenter) function locks all updates to the window during a drag operation. This function, however, does not lock the window.

## <a name="draw"></a> CImageList::Draw

Call this function to draw the image that is being dragged during a drag-and-drop operation.

```
BOOL Draw(
    CDC* pDC,
    int nImage,
    POINT pt,
    UINT nStyle);
```

### Parameters

*pDC*<br/>
Pointer to the destination device context.

*nImage*<br/>
Zero-based index of the image to draw.

*pt*<br/>
Location at which to draw within the specified device context.

*nStyle*<br/>
Flag specifying the drawing style. It can be one or more of these values:

|Value|Meaning|
|-----------|-------------|
|ILD_BLEND25, ILD_FOCUS|Draws the image, blending 25 percent with the system highlight color. This value has no effect if the image list does not contain a mask.|
|ILD_BLEND50, ILD_SELECTED, ILD_BLEND|Draws the image, blending 50 percent with the system highlight color. This value has no effect if the image list does not contain a mask.|
|ILD_MASK|Draws the mask.|
|ILD_NORMAL|Draws the image using the background color for the image list. If the background color is the CLR_NONE value, the image is drawn transparently using the mask.|
|ILD_TRANSPARENT|Draws the image transparently using the mask, regardless of the background color.|

### Return Value

Nonzero if successful; otherwise 0.

### Example

  See the example for [CImageList::SetOverlayImage](#setoverlayimage).

## <a name="drawex"></a> CImageList::DrawEx

Draws an image list item in the specified device context.

```
BOOL DrawEx(
    CDC* pDC,
    int nImage,
    POINT pt,
    SIZE sz,
    COLORREF clrBk,
    COLORREF clrFg,
    UINT nStyle);
```

### Parameters

*pDC*<br/>
Pointer to the destination device context.

*nImage*<br/>
Zero-based index of the image to draw.

*pt*<br/>
Location at which to draw within the specified device context.

*sz*<br/>
Size of the portion of the image to draw relative to the upper-left corner of the image. See *dx* and *dy* in [ImageList_DrawEx](/windows/win32/api/commctrl/nf-commctrl-imagelist_drawex) in the Windows SDK.

*clrBk*<br/>
Background color of the image. See *rgbBk* in [ImageList_DrawEx](/windows/win32/api/commctrl/nf-commctrl-imagelist_drawex) in the Windows SDK.

*clrFg*<br/>
Foreground color of the image. See *rgbFg* in [ImageList_DrawEx](/windows/win32/api/commctrl/nf-commctrl-imagelist_drawex) in the Windows SDK.

*nStyle*<br/>
Flag specifying the drawing style. See *fStyle* in [ImageList_DrawEx](/windows/win32/api/commctrl/nf-commctrl-imagelist_drawex) in the Windows SDK.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

The function uses the specified drawing style and blends the image with the specified color.

### Example

[!code-cpp[NVC_MFC_CImageList#10](../../mfc/reference/codesnippet/cpp/cimagelist-class_9.cpp)]

## <a name="drawindirect"></a> CImageList::DrawIndirect

Call this member function to draw an image from an image list.

```
BOOL DrawIndirect(IMAGELISTDRAWPARAMS* pimldp);

BOOL DrawIndirect(
    CDC* pDC,
    int nImage,
    POINT pt,
    SIZE sz,
    POINT ptOrigin,
    UINT fStyle = ILD_NORMAL,
    DWORD dwRop = SRCCOPY,
    COLORREF rgbBack = CLR_DEFAULT,
    COLORREF rgbFore = CLR_DEFAULT,
    DWORD fState = ILS_NORMAL,
    DWORD Frame = 0,
    COLORREF crEffect = CLR_DEFAULT);
```

### Parameters

*pimldp*<br/>
A pointer to an [IMAGELISTDRAWPARAMS](/windows/win32/api/commctrl/ns-commctrl-imagelistdrawparams) structure that contains information about the draw operation.

*pDC*<br/>
A pointer to the destination device context. You must delete this [CDC](../../mfc/reference/cdc-class.md) object when you are done with it.

*nImage*<br/>
The zero-based index of the image to be drawn.

*pt*<br/>
A [POINT](/windows/win32/api/windef/ns-windef-point) structure containing the x- and y- coordinates where the image will be drawn.

*sz*<br/>
A [SIZE](/windows/win32/api/windef/ns-windef-size) structure indicating the size of the image to be drawn.

*ptOrigin*<br/>
A [POINT](/windows/win32/api/windef/ns-windef-point) structure containing the x- and y-coordinates specifying the upper left corner of the drawing operation with respect to the image itself. Pixels of the image that are to the left of the x-coordinate and above the y-coordinate are not drawn.

*fStyle*<br/>
Flag specifying the drawing style and, optionally, the overlay image. See the Remarks section for information on the overlay image. The MFC default implementation, ILD_NORMAL, draws the image using the background color for the image list. If the background color is the CLR_NONE value, the image is drawn transparently using a mask.

Other possible styles are described under the *fStyle* member of the [IMAGELISTDRAWPARAMS](/windows/win32/api/commctrl/ns-commctrl-imagelistdrawparams) structure.

*dwRop*<br/>
Value specifying a raster-operation code. These codes define how the color data for the source rectangle will be combined with the color data for the destination rectangle to achieve the final color. MFC's default implementation, SRCCOPY, copies the source rectangle directly to the destination rectangle. This parameter is ignored if the *fStyle* parameter does not include the ILD_ROP flag.

Other possible values are described under the *dwRop* member of the [IMAGELISTDRAWPARAMS](/windows/win32/api/commctrl/ns-commctrl-imagelistdrawparams) structure.

*rgbBack*<br/>
The image background color, by default CLR_DEFAULT. This parameter can be an application-defined RGB value or one of the following values:

|Value|Meaning|
|-----------|-------------|
|CLR_DEFAULT|Default background color. The image is drawn using the image list background color.|
|CLR_NONE|No background color. The image is drawn transparently.|

*rgbFore*<br/>
Image foreground color, by default CLR_DEFAULT. This parameter can be an application-defined RGB value or one of the following values:

|Value|Meaning|
|-----------|-------------|
|CLR_DEFAULT|Default foreground color. The image is drawn using the system highlight color as the foreground color.|
|CLR_NONE|No blend color. The image is blended with the color of the destination device context.|

This parameter is used only if *fStyle* includes the ILD_BLEND25 or ILD_BLEND50 flag.

*fState*<br/>
Flag specifying the drawing state. This member can contain one or more image list state flags.

*Frame*<br/>
Affects the behavior of saturate and alpha-blending effects.

When used with ILS_SATURATE, this member holds the value that is added to each color component of the RGB triplet for each pixel in the icon.

When used with ILS_APLHA, this member holds the value for the alpha channel. This value can be from 0 to 255, with 0 being completely transparent, and 255 being completely opaque.

*crEffect*<br/>
A [COLORREF](/windows/win32/gdi/colorref) value used for glow and shadow effects.

### Return Value

TRUE if the image is successfully drawn; otherwise FALSE.

### Remarks

Use the first version if you want to fill the Win32 structure yourself. Use the second version if you want to take advantage of one or more of MFC's default arguments, or avoid managing the structure.

An overlay image is an image that is drawn on top of the primary image, specified in this member function by the *nImage* parameter. Draw an overlay mask by using the [Draw](#draw) member function with the one-based index of the overlay mask specified by using the [INDEXTOOVERLAYMASK](/windows/win32/api/commctrl/nf-commctrl-indextooverlaymask) macro.

### Example

[!code-cpp[NVC_MFC_CImageList#11](../../mfc/reference/codesnippet/cpp/cimagelist-class_10.cpp)]

## <a name="enddrag"></a> CImageList::EndDrag

Call this function to end a drag operation.

```
static void PASCAL EndDrag();
```

### Remarks

To begin a drag operation, use the `BeginDrag` member function.

### Example

[!code-cpp[NVC_MFC_CImageList#5](../../mfc/reference/codesnippet/cpp/cimagelist-class_11.cpp)]

## <a name="extracticon"></a> CImageList::ExtractIcon

Call this function to create an icon based on an image and its related mask in an image list.

```
HICON ExtractIcon(int nImage);
```

### Parameters

*nImage*<br/>
Zero-based index of the image.

### Return Value

Handle of the icon if successful; otherwise NULL.

### Remarks

This method relies on the behavior of the [ImageList_ExtractIcon](/windows/win32/api/commctrl/nf-commctrl-imagelist_extracticon) macro to create the icon. Refer to the [ImageList_ExtractIcon](/windows/win32/api/commctrl/nf-commctrl-imagelist_extracticon) macro for more information on icon creation and cleanup.

### Example

[!code-cpp[NVC_MFC_CImageList#12](../../mfc/reference/codesnippet/cpp/cimagelist-class_12.cpp)]

## <a name="fromhandle"></a> CImageList::FromHandle

Returns a pointer to a `CImageList` object when given a handle to an image list.

```
static CImageList* PASCAL FromHandle(HIMAGELIST hImageList);
```

### Parameters

*hImageList*<br/>
Specifies the image list.

### Return Value

A pointer to a `CImageList` object if successful; otherwise NULL.

### Remarks

If a `CImageList` is not already attached to the handle, a temporary `CImageList` object is created and attached. This temporary `CImageList` object is valid only until the next time the application has idle time in its event loop, at which time all temporary objects are deleted.

### Example

[!code-cpp[NVC_MFC_CImageList#13](../../mfc/reference/codesnippet/cpp/cimagelist-class_13.cpp)]

## <a name="fromhandlepermanent"></a> CImageList::FromHandlePermanent

Returns a pointer to a `CImageList` object when given a handle to an image list.

```
static CImageList* PASCAL FromHandlePermanent(HIMAGELIST hImageList);
```

### Parameters

*hImageList*<br/>
Specifies the image list.

### Return Value

A pointer to a `CImageList` object if successful; otherwise NULL.

### Remarks

If a `CImageList` object is not attached to the handle, NULL is returned.

### Example

[!code-cpp[NVC_MFC_CImageList#14](../../mfc/reference/codesnippet/cpp/cimagelist-class_14.cpp)]

## <a name="getbkcolor"></a> CImageList::GetBkColor

Call this function to retrieve the current background color for an image list.

```
COLORREF GetBkColor() const;
```

### Return Value

The RGB color value of the `CImageList` object background color.

### Example

  See the example for [CImageList::SetBkColor](#setbkcolor).

## <a name="getdragimage"></a> CImageList::GetDragImage

Gets the temporary image list that is used for dragging.

```
static CImageList* PASCAL GetDragImage(
    LPPOINT lpPoint,
    LPPOINT lpPointHotSpot);
```

### Parameters

*lpPoint*<br/>
Address of a [POINT](/windows/win32/api/windef/ns-windef-point) structure that receives the current drag position.

*lpPointHotSpot*<br/>
Address of a `POINT` structure that receives the offset of the drag image relative to the drag position.

### Return Value

If successful, a pointer to the temporary image list that is used for dragging; otherwise, NULL.

## <a name="getimagecount"></a> CImageList::GetImageCount

Call this function to retrieve the number of images in an image list.

```
int GetImageCount() const;
```

### Return Value

The number of images.

### Example

  See the example for [CImageList::ExtractIcon](#extracticon).

## <a name="getimageinfo"></a> CImageList::GetImageInfo

Call this function to retrieve information about an image.

```
BOOL GetImageInfo(
    int nImage,
    IMAGEINFO* pImageInfo) const;
```

### Parameters

*nImage*<br/>
Zero-based index of the image.

*pImageInfo*<br/>
Pointer to an [IMAGEINFO](/windows/win32/api/commctrl/ns-commctrl-imageinfo) structure that receives information about the image. The information in this structure can be used to directly manipulate the bitmaps for the image.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

The `IMAGEINFO` structure contains information about an image in an image list.

## <a name="getsafehandle"></a> CImageList::GetSafeHandle

Call this function to retrieve the `m_hImageList` data member.

```
HIMAGELIST GetSafeHandle() const;
```

### Return Value

A handle to the attached image list; otherwise NULL if no object is attached.

### Example

[!code-cpp[NVC_MFC_CImageList#15](../../mfc/reference/codesnippet/cpp/cimagelist-class_15.cpp)]

## <a name="m_himagelist"></a> CImageList::m_hImageList

A handle of the image list attached to this object.

`HIMAGELIST m_hImageList;`

### Remarks

The `m_hImageList` data member is a public variable of type HIMAGELIST.

### Example

[!code-cpp[NVC_MFC_CImageList#23](../../mfc/reference/codesnippet/cpp/cimagelist-class_16.cpp)]

## <a name="operator_himagelist"></a> CImageList::operator HIMAGELIST

Use this operator to get the attached handle of the `CImageList` object.

```
operator HIMAGELIST() const;
```

### Return Value

If successful, a handle to the image list represented by the `CImageList` object; otherwise NULL.

### Remarks

This operator is a casting operator, which supports direct use of an HIMAGELIST object.

### Example

[!code-cpp[NVC_MFC_CImageList#16](../../mfc/reference/codesnippet/cpp/cimagelist-class_17.cpp)]

## <a name="read"></a> CImageList::Read

Call this function to read an image list from an archive.

```
BOOL Read(CArchive* pArchive);
```

### Parameters

*pArchive*<br/>
A pointer to a `CArchive` object from which the image list is to be read.

### Return Value

Nonzero if successful; otherwise 0.

### Example

[!code-cpp[NVC_MFC_CImageList#18](../../mfc/reference/codesnippet/cpp/cimagelist-class_18.cpp)]

## <a name="remove"></a> CImageList::Remove

Call this function to remove an image from an image list object.

```
BOOL Remove(int nImage);
```

### Parameters

*nImage*<br/>
Zero-based index of the image to remove.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

All items following *nImage* now move down one position. For example, if an image list contains two items, deleting the first item will cause the remaining item to now be in the first position. *nImage*=0 for the item in the first position.

### Example

[!code-cpp[NVC_MFC_CImageList#19](../../mfc/reference/codesnippet/cpp/cimagelist-class_19.cpp)]

## <a name="replace"></a> CImageList::Replace

Call this function to replace an image in an image list with a new image.

```
BOOL Replace(
    int nImage,
    CBitmap* pbmImage,
    CBitmap* pbmMask);

int Replace(
    int nImage,
    HICON hIcon);
```

### Parameters

*nImage*<br/>
Zero-based index of the image to replace.

*pbmImage*<br/>
A pointer to the bitmap containing the image.

*pbmMask*<br/>
A pointer to the bitmap containing the mask. If no mask is used with the image list, this parameter is ignored.

*hIcon*<br/>
A handle to the icon that contains the bitmap and mask for the new image.

### Return Value

The version returning BOOL returns nonzero if successful; otherwise 0.

The version returning **`int`** returns the zero-based index of the image if successful; otherwise - 1.

### Remarks

Call this member function after calling [SetImageCount](#setimagecount) to assign the new, valid images to the placeholder image index numbers.

### Example

  See the example for [CImageList::SetImageCount](#setimagecount).

## <a name="setbkcolor"></a> CImageList::SetBkColor

Call this function to set the background color for an image list.

```
COLORREF SetBkColor(COLORREF cr);
```

### Parameters

*cr*<br/>
Background color to set. It can be CLR_NONE. In that case, images are drawn transparently using the mask.

### Return Value

The previous background color if successful; otherwise CLR_NONE.

### Example

[!code-cpp[NVC_MFC_CImageList#20](../../mfc/reference/codesnippet/cpp/cimagelist-class_20.cpp)]

## <a name="setdragcursorimage"></a> CImageList::SetDragCursorImage

Creates a new drag image by combining the given image (typically a mouse cursor image) with the current drag image.

```
BOOL SetDragCursorImage(
    int nDrag,
    CPoint ptHotSpot);
```

### Parameters

*nDrag*<br/>
Index of the new image to be combined with the drag image.

*ptHotSpot*<br/>
Position of the hot spot within the new image.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

Because the dragging functions use the new image during a drag operation, you should use the Windows [ShowCursor](/windows/win32/api/winuser/nf-winuser-showcursor) function to hide the actual mouse cursor after calling `CImageList::SetDragCursorImage`. Otherwise, the system may appear to have two mouse cursors for the duration of the drag operation.

## <a name="setimagecount"></a> CImageList::SetImageCount

Call this member function to reset the number of images in a `CImageList` object.

```
BOOL SetImageCount(UINT uNewCount);
```

### Parameters

*uNewCount*<br/>
The value specifying the new total number of images in the image list.

### Return Value

Nonzero if successful; otherwise zero.

### Remarks

If you call this member function to increase the number of images in the image list, then call [Replace](#replace) for each additional image to assign the new indexes to valid images. If you fail to assign the indexes to valid images, draw operations that create the new images will be unpredictable.

If you decrease the size of an image list by using this function, the truncated images are freed.

### Example

[!code-cpp[NVC_MFC_CImageList#21](../../mfc/reference/codesnippet/cpp/cimagelist-class_21.cpp)]

## <a name="setoverlayimage"></a> CImageList::SetOverlayImage

Call this function to add the zero-based index of an image to the list of images to be used as overlay masks.

```
BOOL SetOverlayImage(
    int nImage,
    int nOverlay);
```

### Parameters

*nImage*<br/>
Zero-based index of the image to use as an overlay mask.

*nOverlay*<br/>
One-based index of the overlay mask.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

Up to four indices can be added to the list.

An overlay mask is an image drawn transparently over another image. Draw an overlay mask over an image by using the [CImageList::Draw](#draw) member function with the one-based index of the overlay mask specified by using the INDEXTOOVERLAYMASK macro.

### Example

[!code-cpp[NVC_MFC_CImageList#22](../../mfc/reference/codesnippet/cpp/cimagelist-class_22.cpp)]

## <a name="write"></a> CImageList::Write

Call this function to write an image list object to an archive.

```
BOOL Write(CArchive* pArchive);
```

### Parameters

*pArchive*<br/>
A pointer to a `CArchive` object in which the image list is to be stored.

### Return Value

Nonzero if successful; otherwise 0.

### Example

[!code-cpp[NVC_MFC_CImageList#17](../../mfc/reference/codesnippet/cpp/cimagelist-class_23.cpp)]

## See also

[CObject Class](../../mfc/reference/cobject-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CListCtrl Class](../../mfc/reference/clistctrl-class.md)<br/>
[CTabCtrl Class](../../mfc/reference/ctabctrl-class.md)
