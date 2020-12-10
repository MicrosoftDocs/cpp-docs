---
description: "Learn more about: CMFCDynamicLayout Class"
title: "CMFCDynamicLayout Class"
ms.date: "08/29/2019"
f1_keywords: ["CMFCDynamicLayout", "AFXLAYOUT/CMFCDynamicLayout", "AFXLAYOUT/CMFCDynamicLayout::AddItem", "AFXLAYOUT/CMFCDynamicLayout::Adjust", "AFXLAYOUT/CMFCDynamicLayout::Create", "AFXLAYOUT/CMFCDynamicLayout::GetHostWnd", "AFXLAYOUT/CMFCDynamicLayout::GetMinSize", "AFXLAYOUT/CMFCDynamicLayout::GetWindowRect", "AFXLAYOUT/CMFCDynamicLayout::HasItem", "AFXLAYOUT/CMFCDynamicLayout::IsEmpty", "AFXLAYOUT/CMFCDynamicLayout::LoadResource", "AFXLAYOUT/CMFCDynamicLayout::SetMinSize"]
ms.assetid: c2df2976-f049-47fc-9cf0-abe3e01948bc
---
# CMFCDynamicLayout Class

Specifies how controls in a window are moved and resized as the user resizes the window.

## Syntax

```
class CMFCDynamicLayout : public CObject
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|`CMFCDynamicLayout::CMFCDynamicLayout`|Constructs a `CMFCDynamicLayout` object.|
|`CMFCDynamicLayout::~CMFCDynamicLayout`|Destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMFCDynamicLayout::AddItem](#additem)|Adds a child window, typically a control, to the list of windows that are controlled by the dynamic layout manager.|
|[CMFCDynamicLayout::Adjust](#adjust)|Adds a child window, typically a control, to the list of windows that are controlled by the dynamic layout manager.|
|[CMFCDynamicLayout::Create](#create)|Stores and validates the host window.|
|[CMFCDynamicLayout::GetHostWnd](#gethostwnd)|Returns a pointer to a host window.|
|[CMFCDynamicLayout::GetMinSize](#getminsize)|Returns the window size below which layout is not adjusted.|
|[CMFCDynamicLayout::GetWindowRect](#getwindowrect)|Retrieves the rectangle for the window's current client area.|
|[CMFCDynamicLayout::HasItem](#hasitem)|Checks if a child control was added to dynamic layout.|
|[CMFCDynamicLayout::IsEmpty](#isempty)|Checks if a dynamic layout has no child windows added.|
|[CMFCDynamicLayout::LoadResource](#loadresource)|Reads the dynamic layout from AFX_DIALOG_LAYOUT resource and then applies the layout to the host window.|
|static [CMFCDynamicLayout::MoveHorizontal](#movehorizontal)|Gets a [MoveSettings](#movesettings_structure) value that defines how much a child control is moved horizontally when the user resizes its hosting window.|
|static [CMFCDynamicLayout::MoveHorizontalAndVertical](#movehorizontalandvertical)|Gets a [MoveSettings](#movesettings_structure) value that defines how much a child control is moved horizontally when the user resizes its hosting window.|
|static [CMFCDynamicLayout::MoveNone](#movenone)|Gets a [MoveSettings](#movesettings_structure) value that represents no motion, vertical or horizontal, for a child control.|
|static [CMFCDynamicLayout::MoveVertical](#movevertical)|Gets a [MoveSettings](#movesettings_structure) value that defines how much a child control is moved vertically when the user resizes its hosting window.|
|[CMFCDynamicLayout::SetMinSize](#setminsize)|Sets the window size below which layout is not adjusted.|
|static [CMFCDynamicLayout::SizeHorizontal](#sizehorizontal)|Gets a [SizeSettings](#sizesettings_structure) value that defines how much a child control is resized horizontally when the user resizes its hosting window.|
|static [CMFCDynamicLayout::SizeHorizontalAndVertical](#sizehorizontalandvertical)|Gets a [SizeSettings](#sizesettings_structure) value that defines how much a child control is resized horizontally when the user resizes its hosting window.|
|static [CMFCDynamicLayout::SizeNone](#sizenone)|Gets a [SizeSettings](#sizesettings_structure) value that represents no change in size for a child control.|
|static [CMFCDynamicLayout::SizeVertical](#sizevertical)|Gets a [SizeSettings](#sizesettings_structure) value that defines how much a child control is resized vertically when the user resizes its hosting window.|

## Nested Types

|Name|Description|
|----------|-----------------|
|[CMFCDynamicLayout::MoveSettings Structure](#movesettings_structure)|Encapsulates move data for controls in a dynamic layout.|
|[CMFCDynamicLayout::SizeSettings Structure](#sizesettings_structure)|Encapsulates size change data for controls in a dynamic layout.|

## Remarks

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CMFCDynamicLayout](../../mfc/reference/cmfctoolbarbutton-class.md)

## Requirements

**Header:** afxlayout.h

## <a name="additem"></a> CMFCDynamicLayout::AddItem

Adds a child window, typically a control, to the list of windows that are controlled by the dynamic layout manager.

```
BOOL AddItem(
    HWND hwnd,
    MoveSettings moveSettings SizeSettings sizeSettings);

BOOL AddItem(
    int nID,
    MoveSettings moveSettings SizeSettings sizeSettings);
```

### Parameters

*hwnd*<br/>
The handle to the window to add.

*nID*<br/>
The ID of the child control to add.

*moveSettings*<br/>
A structure that describes how the control should be moved as the window size changes.

*sizeSettings*<br/>
A structure that describes how the control should be resized as the window size changes.

### Return Value

TRUE if the item was added successfully; otherwise FALSE.

### Remarks

The position and size of a child control is changed dynamically when a hosting window is being resized.

## <a name="adjust"></a> CMFCDynamicLayout::Adjust

Adds a child window, typically a control, to the list of windows that are controlled by the dynamic layout manager.

```cpp
void Adjust();
```

### Remarks

The position and size of a child control is changed dynamically when a hosting window is being resized.

## <a name="create"></a> CMFCDynamicLayout::Create

Stores and validates the host window.

```
BOOL Create(CWnd* pHostWnd);
```

### Parameters

*pHostWnd*<br/>
A pointer to the host window.

### Return Value

TRUE if creation succeeded; otherwise FALSE.

### Remarks

## <a name="gethostwnd"></a> CMFCDynamicLayout::GetHostWnd

Returns a pointer to a host window.

```
CWnd* GetHostWnd();
```

### Return Value

A pointer to the host window.

### Remarks

By default all child control positions recalculated relative to this window.

## <a name="getminsize"></a> CMFCDynamicLayout::GetMinSize

Returns the window size below which layout is not adjusted.

```
CSize GetMinSize();
```

### Return Value

The window size below which layout is not adjusted.

### Remarks

The position and size of a child control is changed dynamically when a hosting window is being resized, but there is a minimum size below which the layout is not adjusted. The user can resize the window to a smaller size, but parts of the window are then hidden from view.

## <a name="getwindowrect"></a> CMFCDynamicLayout::GetWindowRect

Retrieves the rectangle for the window's current client area.

```cpp
void GetHostWndRect(CRect& rect,);
```

### Parameters

*rect*<br/>
After the function returns, this parameter contains the bounding rectangle of the layout area. This is an out parameter; the input value is overwritten.

### Remarks

## <a name="hasitem"></a> CMFCDynamicLayout::HasItem

Checks if a child control was added to dynamic layout.

```
BOOL HasItem(HWND hwnd);
```

### Parameters

*hwnd*<br/>
The window handle for the control.

### Return Value

TRUE if layout already has this item; otherwise FALSE.

### Remarks

## <a name="isempty"></a> CMFCDynamicLayout::IsEmpty

Checks if a dynamic layout has no child windows added.

```
BOOL IsEmpty();
```

### Return Value

TRUE if layout has no items; otherwise FALSE.

### Remarks

## <a name="loadresource"></a> CMFCDynamicLayout::LoadResource

Reads the dynamic layout from AFX_DIALOG_LAYOUT resource and then applies the layout to the host window.

```
static BOOL LoadResource(CWnd* pHostWnd,
    LPVOID lpResource,
    DWORD dwSize);
```

### Parameters

*pHostWnd*<br/>
A pointer to the host window.

*lpResource*<br/>
A pointer to the buffer that contains the AFX_DIALOG_LAYOUT resource.

*dwSize*<br/>
The buffer size in bytes.

### Return Value

TRUE if resource is loaded and applied to the host window; otherwise FALSE.

### Remarks

## <a name="movehorizontal"></a> CMFCDynamicLayout::MoveHorizontal

Gets a [MoveSettings](#movesettings_structure) value that defines how much a child control is moved horizontally when the user resizes its hosting window.

```
static MoveSettings MoveHorizontal(int nRatio);
```

### Parameters

*nRatio*<br/>
Defines as a percentage how far a child control is moved horizontally when the user resizes the host window.

### Return Value

A [MoveSettings](#movesettings_structure) value that encapsulates the requested move ratio.

### Remarks

## <a name="movehorizontalandvertical"></a> CMFCDynamicLayout::MoveHorizontalAndVertical

Gets a [MoveSettings](#movesettings_structure) value that defines how much a child control is moved horizontally when the user resizes its hosting window.

```
static MoveSettings MoveHorizontalAndVertical(int nXRatio int nYRatio);
```

### Parameters

*nXRatio*<br/>
Defines as a percentage how far a child control is moved horizontally when the user resizes the host window.

*nYRatio*<br/>
Defines as a percentage how far a child control is moved vertically when the user resizes the host window.

### Return Value

A [MoveSettings](#movesettings_structure) value that encapsulates the requested move ratio.

### Remarks

## <a name="movenone"></a> CMFCDynamicLayout::MoveNone

Gets a [MoveSettings](#movesettings_structure) value that represents no motion, vertical or horizontal, for a child control.

```
static MoveSettings MoveNone();
```

### Return Value

A [MoveSettings](#movesettings_structure) value that fixes the control in place, so that it does not move as the user resizes the host window.

### Remarks

## <a name="movesettings_structure"></a> CMFCDynamicLayout::MoveSettings Structure

Encapsulates move data for controls in a dynamic layout.

```
struct CMFCDynamicLayout::MoveSettings;
```

### Remarks

This is a nested class inside `CMFCDynamicLayout`.

## CMFCDynamicLayout::MoveSettings::IsHorizontal

Check if the move data specifies a nonzero horizontal move.

```
BOOL IsHorizontal() const
```

### Return Value

TRUE if the `MoveSettings` object specifies a nonzero horizontal move.

## CMFCDynamicLayout::MoveSettings::IsNone

Check if the move data specifies no movement.

```
BOOL IsNone() const
```

### Return Value

TRUE if the `MoveSettings` object specifies no movement.

## CMFCDynamicLayout::MoveSettings::IsVertical

Check if the move data specifies a nonzero vertical movement.

```
BOOL IsVertical() const
```

### Return Value

TRUE if the `MoveSettings` object specifies a nonzero vertical movement.

## <a name="movevertical"></a> CMFCDynamicLayout::MoveVertical

Gets a [MoveSettings](#movesettings_structure) value that defines how much a child control is moved vertically when the user resizes its hosting window.

```
static MoveSettings MoveVertical(int nRatio);
```

### Parameters

*nRatio*<br/>
Defines as a percentage how far a child control is moved vertically when the user resizes the host window.

### Return Value

A [MoveSettings](#movesettings_structure) value that encapsulates the requested move ratio.

### Remarks

## <a name="setminsize"></a> CMFCDynamicLayout::SetMinSize

Sets the window size below which layout is not adjusted.

```cpp
void SetMinSize(const CSize& size);
```

### Parameters

*size*<br/>
The desired size below which layout is not adjusted.

### Remarks

The position and size of a child control is changed dynamically when a hosting window is being resized, but there is a minimum size below which the layout is not adjusted. The user can resize the window to a smaller size, but parts of the window are then hidden from view.

## <a name="sizehorizontal"></a> CMFCDynamicLayout::SizeHorizontal

Gets a [SizeSettings](#sizesettings_structure) value that defines how much a child control is resized horizontally when the user resizes its hosting window.

```
static SizeSettings SizeHorizontal(int nRatio);
```

### Parameters

*nRatio*<br/>
Defines as a percentage how far a child control is resized horizontally when the user resizes the host window.

### Return Value

A [SizeSettings](#sizesettings_structure) value that encapsulates the requested size ratio.

### Remarks

## <a name="sizehorizontalandvertical"></a> CMFCDynamicLayout::SizeHorizontalAndVertical

Gets a [SizeSettings](#sizesettings_structure) value that defines how much a child control is resized horizontally when the user resizes its hosting window.

```
static SizeSettings SizeHorizontalAndVertical(int nXRatio int nYRatio);
```

### Parameters

*nXRatio*<br/>
Defines as a percentage how far a child control is resized horizontally when the user resizes the host window.

*nYRatio*<br/>
Defines as a percentage how far a child control is resized vertically when the user resizes the host window.

### Return Value

A [SizeSettings](#sizesettings_structure) value that encapsulates the requested size ratio.

### Remarks

## <a name="sizenone"></a> CMFCDynamicLayout::SizeNone

Gets a [SizeSettings](#sizesettings_structure) value that represents no change in size for a child control.

```
static SizeSettings SizeNone();
```

### Return Value

A [SizeSettings](#sizesettings_structure) value that fixes the control at a certain size, so that it does not change size as the user resizes the host window.

### Remarks

## <a name="sizesettings_structure"></a> CMFCDynamicLayout::SizeSettings Structure

Encapsulates size change data for controls in a dynamic layout.

```
struct CMFCDynamicLayout::SizeSettings;
```

### Remarks

This is a nested class inside `CMFCDynamicLayout`.

## CMFCDynamicLayout::SizeSettings::IsHorizontal

Checks if the resize data specifies a nonzero horizontal resizing.

```
BOOL IsHorizontal() const
```

### Return Value

TRUE if the `SizeSettings` object specifies a nonzero horizontal resizing.

## CMFCDynamicLayout::SizeSettings::IsNone

Checks if the resize data specifies no resizing.

```
BOOL IsNone() const
```

### Return Value

TRUE if the `SizeSettings` object specifies no resizing.

## CMFCDynamicLayout::SizeSettings::IsVertical

Checks if the resize data specifies a nonzero vertical resizing.

```
BOOL IsVertical() const
```

### Return Value

TRUE if the `SizeSettings` object specifies a nonzero vertical resizing.

## <a name="sizevertical"></a> CMFCDynamicLayout::SizeVertical

Gets a [SizeSettings](#sizesettings_structure) value that defines how much a child control is resized vertically when the user resizes its hosting window.

```
static SizeSettings SizeVertical(int nRatio);
```

### Parameters

*nRatio*<br/>
Defines as a percentage how far a child control is resized vertically when the user resizes the host window.

### Return Value

A [SizeSettings](#sizesettings_structure) value that encapsulates the requested size ratio.

### Remarks

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)
