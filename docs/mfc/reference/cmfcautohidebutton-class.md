---
description: "Learn more about: CMFCAutoHideButton Class"
title: "CMFCAutoHideButton Class"
ms.date: "10/18/2018"
f1_keywords: ["CMFCAutoHideButton", "AFXAUTOHIDEBUTTON/CMFCAutoHideButton", "AFXAUTOHIDEBUTTON/CMFCAutoHideButton::BringToTop", "AFXAUTOHIDEBUTTON/CMFCAutoHideButton::Create", "AFXAUTOHIDEBUTTON/CMFCAutoHideButton::GetAlignment", "AFXAUTOHIDEBUTTON/CMFCAutoHideButton::GetAutoHideWindow", "AFXAUTOHIDEBUTTON/CMFCAutoHideButton::GetParentToolBar", "AFXAUTOHIDEBUTTON/CMFCAutoHideButton::GetRect", "AFXAUTOHIDEBUTTON/CMFCAutoHideButton::GetSize", "AFXAUTOHIDEBUTTON/CMFCAutoHideButton::GetTextSize", "AFXAUTOHIDEBUTTON/CMFCAutoHideButton::HighlightButton", "AFXAUTOHIDEBUTTON/CMFCAutoHideButton::IsActive", "AFXAUTOHIDEBUTTON/CMFCAutoHideButton::IsHighlighted", "AFXAUTOHIDEBUTTON/CMFCAutoHideButton::IsHorizontal", "AFXAUTOHIDEBUTTON/CMFCAutoHideButton::IsTop", "AFXAUTOHIDEBUTTON/CMFCAutoHideButton::IsVisible", "AFXAUTOHIDEBUTTON/CMFCAutoHideButton::Move", "AFXAUTOHIDEBUTTON/CMFCAutoHideButton::OnDraw", "AFXAUTOHIDEBUTTON/CMFCAutoHideButton::OnDrawBorder", "AFXAUTOHIDEBUTTON/CMFCAutoHideButton::OnFillBackground", "AFXAUTOHIDEBUTTON/CMFCAutoHideButton::ReplacePane", "AFXAUTOHIDEBUTTON/CMFCAutoHideButton::ShowAttachedWindow", "AFXAUTOHIDEBUTTON/CMFCAutoHideButton::ShowButton", "AFXAUTOHIDEBUTTON/CMFCAutoHideButton::UnSetAutoHideMode"]
helpviewer_keywords: ["CMFCAutoHideButton [MFC], BringToTop", "CMFCAutoHideButton [MFC], Create", "CMFCAutoHideButton [MFC], GetAlignment", "CMFCAutoHideButton [MFC], GetAutoHideWindow", "CMFCAutoHideButton [MFC], GetParentToolBar", "CMFCAutoHideButton [MFC], GetRect", "CMFCAutoHideButton [MFC], GetSize", "CMFCAutoHideButton [MFC], GetTextSize", "CMFCAutoHideButton [MFC], HighlightButton", "CMFCAutoHideButton [MFC], IsActive", "CMFCAutoHideButton [MFC], IsHighlighted", "CMFCAutoHideButton [MFC], IsHorizontal", "CMFCAutoHideButton [MFC], IsTop", "CMFCAutoHideButton [MFC], IsVisible", "CMFCAutoHideButton [MFC], Move", "CMFCAutoHideButton [MFC], OnDraw", "CMFCAutoHideButton [MFC], OnDrawBorder", "CMFCAutoHideButton [MFC], OnFillBackground", "CMFCAutoHideButton [MFC], ReplacePane", "CMFCAutoHideButton [MFC], ShowAttachedWindow", "CMFCAutoHideButton [MFC], ShowButton", "CMFCAutoHideButton [MFC], UnSetAutoHideMode"]
ms.assetid: c80e6b8b-25ca-4d12-9d27-457731028ab0
---
# CMFCAutoHideButton Class

A button that displays or hides a [CDockablePane Class](../../mfc/reference/cdockablepane-class.md) that is configured to hide.

For more detail see the source code located in the **VC\\atlmfc\\src\\mfc** folder of your Visual Studio installation.

## Syntax

```
class CMFCAutoHideButton : public CObject
```

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMFCAutoHideButton::BringToTop](#bringtotop)||
|[CMFCAutoHideButton::Create](#create)|Creates and initializes the auto-hide button.|
|[CMFCAutoHideButton::GetAlignment](#getalignment)|Retrieves the alignment of the auto-hide button.|
|[CMFCAutoHideButton::GetAutoHideWindow](#getautohidewindow)|Returns the [CDockablePane](../../mfc/reference/cdockablepane-class.md) object associated with the auto-hide button.|
|[CMFCAutoHideButton::GetParentToolBar](#getparenttoolbar)||
|[CMFCAutoHideButton::GetRect](#getrect)||
|[CMFCAutoHideButton::GetSize](#getsize)|Determines the size of the auto-hide button.|
|[CMFCAutoHideButton::GetTextSize](#gettextsize)|Returns the size of the text label for the auto-hide button.|
|[CMFCAutoHideButton::HighlightButton](#highlightbutton)|Highlights auto hide button.|
|[CMFCAutoHideButton::IsActive](#isactive)|Indicates whether the auto-hide button is active.|
|[CMFCAutoHideButton::IsHighlighted](#ishighlighted)|Returns highlight state of auto hide button.|
|[CMFCAutoHideButton::IsHorizontal](#ishorizontal)|Determines whether the auto-hide button is horizontal or vertical.|
|[CMFCAutoHideButton::IsTop](#istop)||
|[CMFCAutoHideButton::IsVisible](#isvisible)|Indicates whether the button is visible.|
|[CMFCAutoHideButton::Move](#move)||
|[CMFCAutoHideButton::OnDraw](#ondraw)|The framework calls this method when it draws the auto-hide button.|
|[CMFCAutoHideButton::OnDrawBorder](#ondrawborder)|The framework calls this method when it draws the border of an auto-hide button.|
|[CMFCAutoHideButton::OnFillBackground](#onfillbackground)|The framework calls this method when it fills the background of an auto-hide button.|
|[CMFCAutoHideButton::ReplacePane](#replacepane)||
|[CMFCAutoHideButton::ShowAttachedWindow](#showattachedwindow)|Shows or hides the associated [CDockablePane Class](../../mfc/reference/cdockablepane-class.md).|
|[CMFCAutoHideButton::ShowButton](#showbutton)|Shows or hides the auto-hide button.|
|[CMFCAutoHideButton::UnSetAutoHideMode](#unsetautohidemode)||

## Remarks

On creation, the `CMFCAutoHideButton` object is attached to a [CDockablePane Class](../../mfc/reference/cdockablepane-class.md). The `CDockablePane` object is hidden or displayed as the user interacts with the `CMFCAutoHideButton` object.

By default, the framework automatically creates a `CMFCAutoHideButton` when the user turns on auto-hide. The framework can create an element of a custom UI class instead of the `CMFCAutoHideButton` class. To specify which custom UI class the framework should use, set the static member variable `CMFCAutoHideBar::m_pAutoHideButtonRTS` equal to the custom UI class. By default, this variable is set to `CMFCAutoHideButton`.

## Example

The following example demonstrates how to construct a `CMFCAutoHideButton` object and use various methods in the `CMFCAutoHideButton` class. The example shows how to initialize a `CMFCAutoHideButton` object by using its `Create` method, show the associated `CDockablePane` class, and show the auto-hide button.

[!code-cpp[NVC_MFC_RibbonApp#32](../../mfc/reference/codesnippet/cpp/cmfcautohidebutton-class_1.cpp)]

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

`CMFCAutoHideButton`

## Requirements

**Header:** afxautohidebutton.h

## <a name="bringtotop"></a> CMFCAutoHideButton::BringToTop

```cpp
void BringToTop();
```

### Remarks

## <a name="create"></a> CMFCAutoHideButton::Create

Creates and initializes an auto-hide button.

```
virtual BOOL Create(
    CMFCAutoHideBar* pParentBar,
    CDockablePane* pAutoHideWnd,
    DWORD dwAlignment);
```

### Parameters

*pParentBar*<br/>
[in] A pointer to the parent toolbar.

*pAutoHideWnd*<br/>
[in] A pointer to a [CDockablePane](../../mfc/reference/cdockablepane-class.md) object. This auto-hide button hides and shows that `CDockablePane`.

*dwAlignment*<br/>
[in] A value that specifies the alignment of the button with the main frame window.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

When you create a `CMFCAutoHideButton` object, you must associate the auto-hide button with a specific `CDockablePane`. The user can use the auto-hide button to hide and show the associated `CDockablePane`.

The *dwAlignment* parameter indicates where the auto-hide button resides in the application. The parameter can be any one of the following values:

- CBRS_ALIGN_LEFT

- CBRS_ALIGN_RIGHT

- CBRS_ALIGN_TOP

- CBRS_ALIGN_BOTTOM

## <a name="getalignment"></a> CMFCAutoHideButton::GetAlignment

Retrieves the alignment of the auto-hide button.

```
DWORD GetAlignment() const;
```

### Return Value

A DWORD value that contains the current alignment of the auto-hide button.

### Remarks

The alignment of the auto-hide button indicates where the button resides on the application. It can be any one of the following values:

- CBRS_ALIGN_LEFT

- CBRS_ALIGN_RIGHT

- CRBS_ALIGN_TOP

- CBRS_ALIGN_BOTTOM

## <a name="getautohidewindow"></a> CMFCAutoHideButton::GetAutoHideWindow

Returns the [CDockablePane](../../mfc/reference/cdockablepane-class.md) object associated with the auto-hide button.

```
CDockablePane* GetAutoHideWindow() const;
```

### Return Value

A pointer to the associated `CDockablePane` object.

### Remarks

To associate an auto-hide button with a `CDockablePane`, pass the `CDockablePane` as a parameter to the [CMFCAutoHideButton::Create](#create) method.

## <a name="getparenttoolbar"></a> CMFCAutoHideButton::GetParentToolBar

```
CMFCAutoHideBar* GetParentToolBar();
```

### Return Value

### Remarks

## <a name="getrect"></a> CMFCAutoHideButton::GetRect

```
CRect GetRect() const;
```

### Return Value

### Remarks

## <a name="getsize"></a> CMFCAutoHideButton::GetSize

Determines the size of the auto-hide button.

```
CSize GetSize() const;
```

### Return Value

A `CSize` object that contains the button size.

### Remarks

The calculated size includes the size of the border of the auto-hide button.

## <a name="gettextsize"></a> CMFCAutoHideButton::GetTextSize

Returns the size of the text label for the auto-hide button.

```
virtual CSize GetTextSize() const;
```

### Return Value

A [CSize](../../atl-mfc-shared/reference/csize-class.md) object that contains the size of the text for the auto-hide button.

## <a name="isactive"></a> CMFCAutoHideButton::IsActive

Indicates whether the auto-hide button is active.

```
BOOL IsActive() const;
```

### Return Value

TRUE if the auto-hide button is active; FALSE otherwise.

### Remarks

An auto-hide button is active when the associated [CDockablePane Class](../../mfc/reference/cdockablepane-class.md) window is shown.

## <a name="ishorizontal"></a> CMFCAutoHideButton::IsHorizontal

Determines whether the auto-hide button is horizontal or vertical.

```
BOOL IsHorizontal() const;
```

### Return Value

Nonzero if the button is horizontal; 0 otherwise.

### Remarks

The framework sets the orientation of a [CMFCAutoHideButton](../../mfc/reference/cmfcautohidebutton-class.md) object when you create it.  You can control the orientation by using the *dwAlignment* parameter in the [CMFCAutoHideButton::Create](#create) method.

## <a name="istop"></a> CMFCAutoHideButton::IsTop

```
BOOL IsTop() const;
```

### Return Value

### Remarks

## <a name="isvisible"></a> CMFCAutoHideButton::IsVisible

Indicates whether the auto-hide button is visible.

```
virtual BOOL IsVisible() const;
```

### Return Value

TRUE if the button is visible; FALSE otherwise.

## <a name="ondraw"></a> CMFCAutoHideButton::OnDraw

The framework calls this method when it draws the auto-hide button.

```
virtual void OnDraw(CDC* pDC);
```

### Parameters

*pDC*<br/>
[in] A pointer to a device context.

### Remarks

If you want to customize the appearance of auto-hide buttons in your application, create a new class derived from `CMFCAutoHideButton`. In your derived class, override this method.

## <a name="ondrawborder"></a> CMFCAutoHideButton::OnDrawBorder

The framework calls this method when it draws the border of an auto-hide button.

```
virtual void OnDrawBorder(
    CDC* pDC,
    CRect rectBounds,
    CRect rectBorderSize);
```

### Parameters

*pDC*<br/>
[in] A pointer to a device context.

*rectBounds*<br/>
[in] The bounding rectangle of the auto-hide button.

*rectBorderSize*<br/>
[in] The border thickness for each side of the auto-hide button.

### Remarks

If you want to customize the border of each auto-hide button in your application, create a new class derived from the `CMFCAutoHideButton`. In your derived class, override this method.

## <a name="onfillbackground"></a> CMFCAutoHideButton::OnFillBackground

The framework calls this method when it fills the background of an auto-hide button.

```
virtual void OnFillBackground(
    CDC* pDC,
    CRect rect);
```

### Parameters

*pDC*<br/>
[in] A pointer to a device context.

*rect*<br/>
[in] The bounding rectangle of the auto-hide button.

### Remarks

If you want to customize the background for auto-hide buttons in your application, create a new class derived from the `CMFCAutoHideButton`. In your derived class, override this method.

## <a name="showattachedwindow"></a> CMFCAutoHideButton::ShowAttachedWindow

Shows or hides the associated [CDockablePane Class](../../mfc/reference/cdockablepane-class.md).

```cpp
void ShowAttachedWindow(BOOL bShow);
```

### Parameters

*bShow*<br/>
[in] A Boolean that specifies whether this method shows the attached `CDockablePane`.

## <a name="showbutton"></a> CMFCAutoHideButton::ShowButton

Shows or hides the auto-hide button.

```
virtual void ShowButton(BOOL bShow);
```

### Parameters

*bShow*<br/>
[in] A Boolean that specifies whether to show the auto-hide button.

## <a name="move"></a> CMFCAutoHideButton::Move

```cpp
void Move(int nOffset);
```

### Parameters

[in] *nOffset*<br/>

### Remarks

## <a name="replacepane"></a> CMFCAutoHideButton::ReplacePane

```cpp
void ReplacePane(CDockablePane* pNewBar);
```

### Parameters

[in] *pNewBar*<br/>

### Remarks

## <a name="unsetautohidemode"></a> CMFCAutoHideButton::UnSetAutoHideMode

Disable auto-hide mode.

```
virtual void UnSetAutoHideMode(CDockablePane* pFirstBarInGroup);
```

### Parameters

*pFirstBarInGroup*<br/>
[in] A pointer to the first bar in the group.

### Remarks

## <a name="highlightbutton"></a> CMFCAutoHideButton::HighlightButton

Highlights the auto hide button.

```
virtual void HighlightButton(BOOL bHighlight);
```

### Parameters

*bHighlight*<br/>
Specifies the new auto hide button state. TRUE indicates the button is highlighted, FALSE indicates the button is not highlighted.

### Remarks

## <a name="ishighlighted"></a> CMFCAutoHideButton::IsHighlighted

Returns the highlight state of the auto hide button.

```
virtual BOOL IsHighlighted() const;
```

### Return Value

Returns TRUE if the auto hide button is highlighted; otherwise FALSE.

### Remarks

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CMFCAutoHideBar Class](../../mfc/reference/cmfcautohidebar-class.md)<br/>
[CAutoHideDockSite Class](../../mfc/reference/cautohidedocksite-class.md)
