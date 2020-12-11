---
description: "Learn more about: CMFCLinkCtrl Class"
title: "CMFCLinkCtrl Class"
ms.date: "11/04/2016"
f1_keywords: ["CMFCLinkCtrl", "AFXLINKCTRL/CMFCLinkCtrl", "AFXLINKCTRL/CMFCLinkCtrl::SetURL", "AFXLINKCTRL/CMFCLinkCtrl::SetURLPrefix", "AFXLINKCTRL/CMFCLinkCtrl::SizeToContent", "AFXLINKCTRL/CMFCLinkCtrl::OnDrawFocusRect"]
helpviewer_keywords: ["CMFCLinkCtrl [MFC], SetURL", "CMFCLinkCtrl [MFC], SetURLPrefix", "CMFCLinkCtrl [MFC], SizeToContent", "CMFCLinkCtrl [MFC], OnDrawFocusRect"]
ms.assetid: 80f3874d-7cc8-410e-9ff1-62a225f5034b
---
# CMFCLinkCtrl Class

The `CMFCLinkCtrl` class displays a button as a hyperlink and invokes the link's target when the button is clicked.

## Syntax

```
class CMFCLinkCtrl : public CMFCButton
```

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMFCLinkCtrl::SetURL](#seturl)|Displays a specified URL as the button text.|
|[CMFCLinkCtrl::SetURLPrefix](#seturlprefix)|Sets the implicit protocol (for example, "http:") of the URL.|
|[CMFCLinkCtrl::SizeToContent](#sizetocontent)|Resizes the button to contain the button text or bitmap.|

### Protected Methods

|Name|Description|
|----------|-----------------|
|[CMFCLinkCtrl::OnDrawFocusRect](#ondrawfocusrect)|Called by the framework before the focus rectangle of the button is drawn.|

## Remarks

When you click a button that is derived from the `CMFCLinkCtrl` class, the framework passes the URL of the button as a parameter to the `ShellExecute` method. Then the `ShellExecute` method opens the target of the URL.

## Example

The following example demonstrates how to set the size of a `CMFCLinkCtrl` object, and how to set a url and a tooltip in a `CMFCLinkCtrl` object. This example is part of the [New Controls sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_NewControls#9](../../mfc/reference/codesnippet/cpp/cmfclinkctrl-class_1.h)]
[!code-cpp[NVC_MFC_NewControls#10](../../mfc/reference/codesnippet/cpp/cmfclinkctrl-class_2.cpp)]

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CButton](../../mfc/reference/cbutton-class.md)

[CMFCButton](../../mfc/reference/cmfcbutton-class.md)

[CMFCLinkCtrl](../../mfc/reference/cmfclinkctrl-class.md)

## Requirements

**Header:** afxlinkctrl.h

## <a name="ondrawfocusrect"></a> CMFCLinkCtrl::OnDrawFocusRect

Called by the framework before the focus rectangle of the button is drawn.

```
virtual void OnDrawFocusRect(
    CDC* pDC,
    const CRect& rectClient);
```

### Parameters

*pDC*<br/>
[in] A pointer to a device context.

*rectClient*<br/>
[in] A rectangle that bounds the link control.

### Remarks

Override this method when you want to use your own code to draw the button's focus rectangle.

## <a name="seturl"></a> CMFCLinkCtrl::SetURL

Displays a specified URL as the button text.

```cpp
void SetURL(LPCTSTR lpszURL);
```

### Parameters

*lpszURL*<br/>
[in] The button text to display.

### Remarks

## <a name="seturlprefix"></a> CMFCLinkCtrl::SetURLPrefix

Sets the implicit protocol (for example, "http:") of the URL.

```cpp
void SetURLPrefix(LPCTSTR lpszPrefix);
```

### Parameters

*lpszPrefix*<br/>
[in] The prefix of the URL protocol.

### Remarks

Use this method to set the URL prefix. The prefix is not displayed on the button's face, but you can use it to help browse to the URL's target.

## <a name="sizetocontent"></a> CMFCLinkCtrl::SizeToContent

Resizes the button to contain the button text or bitmap.

```
virtual CSize SizeToContent(
    BOOL bVCenter=FALSE,
    BOOL bHCenter=FALSE);
```

### Parameters

*bVCenter*<br/>
[in] TRUE to center the button text and bitmap vertically between the top and bottom of the link control; otherwise, FALSE. The default value is FALSE.

*bHCenter*<br/>
[in] TRUE to center the button text and bitmap horizontally between the left and right sides of the link control; otherwise, FALSE. The default value is FALSE.

### Return Value

A [CSize](../../atl-mfc-shared/reference/csize-class.md) object that contains the new size of the link control.

### Remarks

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CLinkCtrl Class](../../mfc/reference/clinkctrl-class.md)<br/>
[CMFCButton Class](../../mfc/reference/cmfcbutton-class.md)
