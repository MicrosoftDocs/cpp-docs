---
description: "Learn more about: CMFCCaptionButton Class"
title: "CMFCCaptionButton Class"
ms.date: "11/04/2016"
f1_keywords: ["CMFCCaptionButton", "AFXCAPTIONBUTTON/CMFCCaptionButton", "AFXCAPTIONBUTTON/CMFCCaptionButton::CMFCCaptionButton", "AFXCAPTIONBUTTON/CMFCCaptionButton::GetHit", "AFXCAPTIONBUTTON/CMFCCaptionButton::GetIconID", "AFXCAPTIONBUTTON/CMFCCaptionButton::GetRect", "AFXCAPTIONBUTTON/CMFCCaptionButton::GetSize", "AFXCAPTIONBUTTON/CMFCCaptionButton::IsMiniFrameButton", "AFXCAPTIONBUTTON/CMFCCaptionButton::Move", "AFXCAPTIONBUTTON/CMFCCaptionButton::OnDraw", "AFXCAPTIONBUTTON/CMFCCaptionButton::SetMiniFrameButton"]
helpviewer_keywords: ["CMFCCaptionButton [MFC], CMFCCaptionButton", "CMFCCaptionButton [MFC], GetHit", "CMFCCaptionButton [MFC], GetIconID", "CMFCCaptionButton [MFC], GetRect", "CMFCCaptionButton [MFC], GetSize", "CMFCCaptionButton [MFC], IsMiniFrameButton", "CMFCCaptionButton [MFC], Move", "CMFCCaptionButton [MFC], OnDraw", "CMFCCaptionButton [MFC], SetMiniFrameButton"]
ms.assetid: c5774b38-c0dd-414a-9ede-3b2f78f233ec
---
# CMFCCaptionButton Class

The `CMFCCaptionButton` class implements a button that is displayed on the caption bar for a docking pane or a mini-frame window. Typically, the framework creates caption buttons automatically.

## Syntax

```
class CMFCCaptionButton : public CObject
```

## Members

### Constructors

|Name|Description|
|----------|-----------------|
|[CMFCCaptionButton::CMFCCaptionButton](#cmfccaptionbutton)|Constructs a CMFCCaptionButton object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMFCCaptionButton::GetHit](#gethit)|Returns the command represented by the button.|
|[CMFCCaptionButton::GetIconID](#geticonid)|Returns the image ID associated with the button.|
|[CMFCCaptionButton::GetRect](#getrect)|Returns the rectangle occupied by the button.|
|[CMFCCaptionButton::GetSize](#getsize)|Returns the width and height of the button.|
|[CMFCCaptionButton::IsMiniFrameButton](#isminiframebutton)|Indicates whether the title bar height is set to mini size.|
|[CMFCCaptionButton::Move](#move)|Sets the button draw location and window show state.|
|[CMFCCaptionButton::OnDraw](#ondraw)|Draws the caption button.|
|[CMFCCaptionButton::SetMiniFrameButton](#setminiframebutton)|Sets the mini size of the title bar.|

## Remarks

You can derive a class from [CPaneFrameWnd Class](../../mfc/reference/cpaneframewnd-class.md) and use the protected method, `AddButton`, to add caption buttons to a mini frame window.

CPaneFrameWnd.h defines command IDs for two types of caption buttons:

- AFX_CAPTION_BTN_PIN, which displays a pin button when the docking pane supports auto-hide mode.

- AFX_CAPTION_BTN_CLOSE, which displays a **Close** button when the pane can be closed or hidden.

## Example

The following example demonstrates how to construct a `CMFCCaptionButton` object and set the mini size of the title bar.

[!code-cpp[NVC_MFC_RibbonApp#43](../../mfc/reference/codesnippet/cpp/cmfccaptionbutton-class_1.cpp)]

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CMFCCaptionButton](../../mfc/reference/cmfccaptionbutton-class.md)

## Requirements

**Header:** afxcaptionbutton.h

## <a name="cmfccaptionbutton"></a> CMFCCaptionButton::CMFCCaptionButton

Constructs a `CMFCCaptionButton` object.

```
CMFCCaptionButton();

CMFCCaptionButton(
    UINT nHit,
    BOOL bLeftAlign = FALSE);
```

### Parameters

*nHit*<br/>
[in] The command associated with the button.

*bLeftAlign*<br/>
[in] Specifies whether the button is aligned to the left.

The following table lists possible values for the *nHit* parameter.

|Value|Command|
|-----------|-------------|
|AFX_HTCLOSE|Close button.|
|HTMINBUTTON|Minimize button.|
|HTMAXBUTTON|Maximize button.|
|AFX_HTLEFTBUTTON|Left arrow button.|
|AFX_HTRIGHTBUTTON|Right arrow button.|
|AFX_HTMENU|Down arrow menu button.|
|HTNOWHERE|The default value; represents no command.|

### Remarks

By default, caption buttons are not associated with a command.

Caption buttons are aligned either on the right or left.

## <a name="gethit"></a> CMFCCaptionButton::GetHit

Returns the command represented by the button.

```
UINT GetHit() const;
```

### Return Value

The command represented by the button.

The following table lists possible return values.

|Value|Command|
|-----------|-------------|
|AFX_HTCLOSE|Close button.|
|HTMINBUTTON|Minimize button.|
|HTMAXBUTTON|Maximize button.|
|AFX_HTLEFTBUTTON|Left arrow button.|
|AFX_HTRIGHTBUTTON|Right arrow button.|
|AFX_HTMENU|Down arrow menu button.|
|HTNOWHERE|The default value; represents no command.|

## <a name="geticonid"></a> CMFCCaptionButton::GetIconID

Returns the image ID associated with the button.

```
virtual CMenuImages::IMAGES_IDS GetIconID(
    BOOL bHorz,
    BOOL bMaximized = FALSE) const;
```

### Parameters

*bHorz*<br/>
[in] TRUE for left or right arrow image IDs; FALSE for up or down arrow image IDs.

*bMaximized*<br/>
[in] TRUE for a maximize image ID; FALSE for a minimize image ID.

### Return Value

The image ID.

### Remarks

The parameters specify image IDs for minimize or maximize caption buttons.

## <a name="getrect"></a> CMFCCaptionButton::GetRect

Returns the rectangle occupied by the button.

```
virtual CRect GetRect() const;
```

### Return Value

The rectangle that represents the location of the button.

### Remarks

If you cannot see the button, the size returned is 0.

## <a name="getsize"></a> CMFCCaptionButton::GetSize

Returns the width and height of the button.

```
static CSize GetSize();
```

### Return Value

The outer dimensions of the button.

### Remarks

The size returned includes button margin and border.

## <a name="isminiframebutton"></a> CMFCCaptionButton::IsMiniFrameButton

Indicates whether the title bar height is set to mini size.

```
BOOL IsMiniFrameButton() const;
```

### Return Value

TRUE if the caption is set to mini size; otherwise FALSE.

### Remarks

## <a name="move"></a> CMFCCaptionButton::Move

Sets the button draw location and window show state.

```cpp
void Move(
    const CPoint& ptTo,
    BOOL bHide = FALSE);
```

### Parameters

*ptTo*<br/>
[in] The new location.

*bHide*<br/>
[in] Whether to show the button.

## <a name="ondraw"></a> CMFCCaptionButton::OnDraw

Draws the caption button.

```
virtual void OnDraw(
    CDC* pDC,
    BOOL bActive,
    BOOL bHorz = TRUE,
    BOOL bMaximized = TRUE,
    BOOL bDisabled = FALSE);
```

### Parameters

*pDC*<br/>
[in] Pointer to a device context for the button.

*bActive*<br/>
[in] Whether to draw an active button image.

*bHorz*<br/>
[in] Reserved for use in a derived class.

*bMaximized*<br/>
[in] Whether to draw a maximized button image.

*bDisabled*<br/>
[in] Whether to draw an enabled button image.

### Remarks

The *bMaximized* parameter is used when the button is a maximize or minimize button.

## <a name="setminiframebutton"></a> CMFCCaptionButton::SetMiniFrameButton

Sets the mini size of the title bar.

```cpp
void SetMiniFramebutton(BOOL bSet = TRUE);
```

### Parameters

*bSet*<br/>
[in] TRUE for mini title bar height; FALSE for default title bar height.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CPaneFrameWnd Class](../../mfc/reference/cpaneframewnd-class.md)<br/>
[CDockablePane Class](../../mfc/reference/cdockablepane-class.md)
