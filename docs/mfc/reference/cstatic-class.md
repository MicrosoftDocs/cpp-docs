---
description: "Learn more about: CStatic Class"
title: "CStatic Class"
ms.date: "11/04/2016"
f1_keywords: ["CStatic", "AFXWIN/CStatic", "AFXWIN/CStatic::CStatic", "AFXWIN/CStatic::Create", "AFXWIN/CStatic::DrawItem", "AFXWIN/CStatic::GetBitmap", "AFXWIN/CStatic::GetCursor", "AFXWIN/CStatic::GetEnhMetaFile", "AFXWIN/CStatic::GetIcon", "AFXWIN/CStatic::SetBitmap", "AFXWIN/CStatic::SetCursor", "AFXWIN/CStatic::SetEnhMetaFile", "AFXWIN/CStatic::SetIcon"]
helpviewer_keywords: ["CStatic [MFC], CStatic", "CStatic [MFC], Create", "CStatic [MFC], DrawItem", "CStatic [MFC], GetBitmap", "CStatic [MFC], GetCursor", "CStatic [MFC], GetEnhMetaFile", "CStatic [MFC], GetIcon", "CStatic [MFC], SetBitmap", "CStatic [MFC], SetCursor", "CStatic [MFC], SetEnhMetaFile", "CStatic [MFC], SetIcon"]
ms.assetid: e7c94cd9-5ebd-428a-aa30-b3e51f8efb95
---
# CStatic Class

Provides the functionality of a Windows static control.

## Syntax

```
class CStatic : public CWnd
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CStatic::CStatic](#cstatic)|Constructs a `CStatic` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CStatic::Create](#create)|Creates the Windows static control and attaches it to the `CStatic` object.|
|[CStatic::DrawItem](#drawitem)|Override to draw an owner-drawn static control.|
|[CStatic::GetBitmap](#getbitmap)|Retrieves the handle of the bitmap previously set with [SetBitmap](#setbitmap).|
|[CStatic::GetCursor](#getcursor)|Retrieves the handle of the cursor image previously set with [SetCursor](#setcursor).|
|[CStatic::GetEnhMetaFile](#getenhmetafile)|Retrieves the handle of the enhanced metafile previously set with [SetEnhMetaFile](#setenhmetafile).|
|[CStatic::GetIcon](#geticon)|Retrieves the handle of the icon previously set with [SetIcon](#seticon).|
|[CStatic::SetBitmap](#setbitmap)|Specifies a bitmap to be displayed in the static control.|
|[CStatic::SetCursor](#setcursor)|Specifies a cursor image to be displayed in the static control.|
|[CStatic::SetEnhMetaFile](#setenhmetafile)|Specifies an enhanced metafile to be displayed in the static control.|
|[CStatic::SetIcon](#seticon)|Specifies an icon to be displayed in the static control.|

## Remarks

A static control displays a text string, box, rectangle, icon, cursor, bitmap, or enhanced metafile. It can be used to label, box, or separate other controls. A static control normally takes no input and provides no output; however, it can notify its parent of mouse clicks if it's created with SS_NOTIFY style.

Create a static control in two steps. First, call the constructor to construct the `CStatic` object, then call the [Create](#create) member function to create the static control and attach it to the `CStatic` object.

If you create a `CStatic` object within a dialog box (through a dialog resource), the `CStatic` object is automatically destroyed when the user closes the dialog box.

If you create a `CStatic` object within a window, you may also need to destroy it. A `CStatic` object created on the stack within a window is automatically destroyed. If you create the `CStatic` object on the heap by using the **`new`** function, you must call **`delete`** on the object to destroy it when you are done with it.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CStatic`

## Requirements

**Header:** afxwin.h

## <a name="create"></a> CStatic::Create

Creates the Windows static control and attaches it to the `CStatic` object.

```
virtual BOOL Create(
    LPCTSTR lpszText,
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID = 0xffff);
```

### Parameters

*lpszText*<br/>
Specifies the text to place in the control. If NULL, no text will be visible.

*dwStyle*<br/>
Specifies the static control's window style. Apply any combination of [static control styles](../../mfc/reference/styles-used-by-mfc.md#static-styles) to the control.

*rect*<br/>
Specifies the position and size of the static control. It can be either a `RECT` structure or a `CRect` object.

*pParentWnd*<br/>
Specifies the `CStatic` parent window, usually a `CDialog` object. It must not be NULL.

*nID*<br/>
Specifies the static control's control ID.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

Construct a `CStatic` object in two steps. First, call the constructor `CStatic`, and then call `Create`, which creates the Windows static control and attaches it to the `CStatic` object.

Apply the following [window styles](../../mfc/reference/styles-used-by-mfc.md#window-styles) to a static control:

- WS_CHILD Always

- WS_VISIBLE Usually

- WS_DISABLED Rarely

If you're going to display a bitmap, cursor, icon, or metafile in the static control, you'll need to apply one of the following [static styles](../../mfc/reference/styles-used-by-mfc.md#static-styles):

- SS_BITMAP Use this style for bitmaps.

- SS_ICON Use this style for cursors and icons.

- SS_ENHMETAFILE Use this style for enhanced metafiles.

For cursors, bitmaps, or icons, you may also want to use the following style:

- SS_CENTERIMAGE Use to center the image in the static control.

### Example

[!code-cpp[NVC_MFC_CStatic#1](../../mfc/reference/codesnippet/cpp/cstatic-class_1.cpp)]

## <a name="cstatic"></a> CStatic::CStatic

Constructs a `CStatic` object.

```
CStatic();
```

### Example

[!code-cpp[NVC_MFC_CStatic#2](../../mfc/reference/codesnippet/cpp/cstatic-class_2.cpp)]

## <a name="drawitem"></a> CStatic::DrawItem

Called by the framework to draw an owner-drawn static control.

```
virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
```

### Parameters

*lpDrawItemStruct*<br/>
A pointer to a [DRAWITEMSTRUCT](/windows/win32/api/winuser/ns-winuser-drawitemstruct) structure. The structure contains information about the item to be drawn and the type of drawing required.

### Remarks

Override this function to implement drawing for an owner-drawn `CStatic` object (the control has the style SS_OWNERDRAW).

## <a name="getbitmap"></a> CStatic::GetBitmap

Gets the handle of the bitmap, previously set with [SetBitmap](#setbitmap), that is associated with `CStatic`.

```
HBITMAP GetBitmap() const;
```

### Return Value

A handle to the current bitmap, or NULL if no bitmap has been set.

### Example

[!code-cpp[NVC_MFC_CStatic#3](../../mfc/reference/codesnippet/cpp/cstatic-class_3.cpp)]

## <a name="getcursor"></a> CStatic::GetCursor

Gets the handle of the cursor, previously set with [SetCursor](#setcursor), that is associated with `CStatic`.

```
HCURSOR GetCursor();
```

### Return Value

A handle to the current cursor, or NULL if no cursor has been set.

### Example

[!code-cpp[NVC_MFC_CStatic#4](../../mfc/reference/codesnippet/cpp/cstatic-class_4.cpp)]

## <a name="getenhmetafile"></a> CStatic::GetEnhMetaFile

Gets the handle of the enhanced metafile, previously set with [SetEnhMetafile](#setenhmetafile), that is associated with `CStatic`.

```
HENHMETAFILE GetEnhMetaFile() const;
```

### Return Value

A handle to the current enhanced metafile, or NULL if no enhanced metafile has been set.

### Example

[!code-cpp[NVC_MFC_CStatic#5](../../mfc/reference/codesnippet/cpp/cstatic-class_5.cpp)]

## <a name="geticon"></a> CStatic::GetIcon

Gets the handle of the icon, previously set with [SetIcon](#seticon), that is associated with `CStatic`.

```
HICON GetIcon() const;
```

### Return Value

A handle to the current icon, or NULL if no icon has been set.

### Example

[!code-cpp[NVC_MFC_CStatic#6](../../mfc/reference/codesnippet/cpp/cstatic-class_6.cpp)]

## <a name="setbitmap"></a> CStatic::SetBitmap

Associates a new bitmap with the static control.

```
HBITMAP SetBitmap(HBITMAP hBitmap);
```

### Parameters

*hBitmap*<br/>
Handle of the bitmap to be drawn in the static control.

### Return Value

The handle of the bitmap that was previously associated with the static control, or NULL if no bitmap was associated with the static control.

### Remarks

The bitmap will be automatically drawn in the static control. By default, it will be drawn in the upper-left corner and the static control will be resized to the size of the bitmap.

You can use various window and static control styles, including these:

- SS_BITMAP   Use this style always for bitmaps.

- SS_CENTERIMAGE   Use to center the image in the static control. If the image is larger than the static control, it will be clipped. If it is smaller than the static control, the empty space around the image will be filled by the color of the pixel in the upper left corner of the bitmap.

- MFC provides the class `CBitmap`, which you can use when you have to do more with a bitmap image than just call the Win32 function `LoadBitmap`. `CBitmap`, which contains one kind of GDI object, is often used in cooperation with `CStatic`, which is a `CWnd` class that is used for displaying a graphic object as a static control.

`CImage` is an ATL/MFC class that lets you more easily work with device independent bitmaps (DIB). For more information, see [CImage Class](../../atl-mfc-shared/reference/cimage-class.md).

- Typical usage is to give `CStatic::SetBitmap` a GDI object that is returned by the HBITMAP operator of a `CBitmap` or `CImage` object. The code to do this resembles the following line.

```
MyStaticControl.SetBitmap(HBITMAP(MyBitmap));
```

The following example creates two `CStatic` objects on the heap. It then loads one with a system bitmap using `CBitmap::LoadOEMBitmap` and the other from a file using `CImage::Load`.

### Example

[!code-cpp[NVC_MFC_CStatic#3](../../mfc/reference/codesnippet/cpp/cstatic-class_3.cpp)]

## <a name="setcursor"></a> CStatic::SetCursor

Associates a new cursor image with the static control.

```
HCURSOR SetCursor(HCURSOR hCursor);
```

### Parameters

*hCursor*<br/>
Handle of the cursor to be drawn in the static control.

### Return Value

The handle of the cursor previously associated with the static control, or NULL if no cursor was associated with the static control.

### Remarks

The cursor will be automatically drawn in the static control. By default, it will be drawn in the upper-left corner and the static control will be resized to the size of the cursor.

You can use various window and static control styles, including the following:

- SS_ICON Use this style always for cursors and icons.

- SS_CENTERIMAGE Use to center in the static control. If the image is larger than the static control, it will be clipped. If it is smaller than the static control, the empty space around the image will be filled with the background color of the static control.

### Example

[!code-cpp[NVC_MFC_CStatic#4](../../mfc/reference/codesnippet/cpp/cstatic-class_4.cpp)]

## <a name="setenhmetafile"></a> CStatic::SetEnhMetaFile

Associates a new enhanced metafile image with the static control.

```
HENHMETAFILE SetEnhMetaFile(HENHMETAFILE hMetaFile);
```

### Parameters

*hMetaFile*<br/>
Handle of the enhanced metafile to be drawn in the static control.

### Return Value

The handle of the enhanced metafile previously associated with the static control, or NULL if no enhanced metafile was associated with the static control.

### Remarks

The enhanced metafile will be automatically drawn in the static control. The enhanced metafile is scaled to fit the size of the static control.

You can use various window and static control styles, including the following:

- SS_ENHMETAFILE Use this style always for enhanced metafiles.

### Example

[!code-cpp[NVC_MFC_CStatic#5](../../mfc/reference/codesnippet/cpp/cstatic-class_5.cpp)]

## <a name="seticon"></a> CStatic::SetIcon

Associates a new icon image with the static control.

```
HICON SetIcon(HICON hIcon);
```

### Parameters

*hIcon*<br/>
Handle of the icon to be drawn in the static control.

### Return Value

The handle of the icon previously associated with the static control, or NULL if no icon was associated with the static control.

### Remarks

The icon will be automatically drawn in the static control. By default, it will be drawn in the upper-left corner and the static control will be resized to the size of the icon.

You can use various window and static control styles, including the following:

- SS_ICON Use this style always for cursors and icons.

- SS_CENTERIMAGE Use to center in the static control. If the image is larger than the static control, it will be clipped. If it is smaller than the static control, the empty space around the image will be filled with the background color of the static control.

### Example

[!code-cpp[NVC_MFC_CStatic#6](../../mfc/reference/codesnippet/cpp/cstatic-class_6.cpp)]

## See also

[CWnd Class](../../mfc/reference/cwnd-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CWnd Class](../../mfc/reference/cwnd-class.md)<br/>
[CButton Class](../../mfc/reference/cbutton-class.md)<br/>
[CComboBox Class](../../mfc/reference/ccombobox-class.md)<br/>
[CEdit Class](../../mfc/reference/cedit-class.md)<br/>
[CListBox Class](../../mfc/reference/clistbox-class.md)<br/>
[CScrollBar Class](../../mfc/reference/cscrollbar-class.md)<br/>
[CDialog Class](../../mfc/reference/cdialog-class.md)
