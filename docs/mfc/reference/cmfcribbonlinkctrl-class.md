---
description: "Learn more about: CMFCRibbonLinkCtrl Class"
title: "CMFCRibbonLinkCtrl Class"
ms.date: "11/04/2016"
f1_keywords: ["CMFCRibbonLinkCtrl", "AFXRIBBONLINKCTRL/CMFCRibbonLinkCtrl", "AFXRIBBONLINKCTRL/CMFCRibbonLinkCtrl::CMFCRibbonLinkCtrl", "AFXRIBBONLINKCTRL/CMFCRibbonLinkCtrl::CopyFrom", "AFXRIBBONLINKCTRL/CMFCRibbonLinkCtrl::GetCompactSize", "AFXRIBBONLINKCTRL/CMFCRibbonLinkCtrl::GetLink", "AFXRIBBONLINKCTRL/CMFCRibbonLinkCtrl::GetRegularSize", "AFXRIBBONLINKCTRL/CMFCRibbonLinkCtrl::GetToolTipText", "AFXRIBBONLINKCTRL/CMFCRibbonLinkCtrl::IsDrawTooltipImage", "AFXRIBBONLINKCTRL/CMFCRibbonLinkCtrl::OnDraw", "AFXRIBBONLINKCTRL/CMFCRibbonLinkCtrl::OnDrawMenuImage", "AFXRIBBONLINKCTRL/CMFCRibbonLinkCtrl::OnMouseMove", "AFXRIBBONLINKCTRL/CMFCRibbonLinkCtrl::OnSetIcon", "AFXRIBBONLINKCTRL/CMFCRibbonLinkCtrl::OpenLink", "AFXRIBBONLINKCTRL/CMFCRibbonLinkCtrl::SetLink"]
helpviewer_keywords: ["CMFCRibbonLinkCtrl [MFC], CMFCRibbonLinkCtrl", "CMFCRibbonLinkCtrl [MFC], CopyFrom", "CMFCRibbonLinkCtrl [MFC], GetCompactSize", "CMFCRibbonLinkCtrl [MFC], GetLink", "CMFCRibbonLinkCtrl [MFC], GetRegularSize", "CMFCRibbonLinkCtrl [MFC], GetToolTipText", "CMFCRibbonLinkCtrl [MFC], IsDrawTooltipImage", "CMFCRibbonLinkCtrl [MFC], OnDraw", "CMFCRibbonLinkCtrl [MFC], OnDrawMenuImage", "CMFCRibbonLinkCtrl [MFC], OnMouseMove", "CMFCRibbonLinkCtrl [MFC], OnSetIcon", "CMFCRibbonLinkCtrl [MFC], OpenLink", "CMFCRibbonLinkCtrl [MFC], SetLink"]
ms.assetid: 77ae1941-e0ab-4a9d-911e-1752d34c079b
---
# CMFCRibbonLinkCtrl Class

Implements a hyperlink that is positioned on a ribbon. The hyperlink opens a Web page when you click it.
For more detail see the source code located in the **VC\\atlmfc\\src\\mfc** folder of your Visual Studio installation.

## Syntax

```
class CMFCRibbonLinkCtrl : public CMFCRibbonButton
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CMFCRibbonLinkCtrl::CMFCRibbonLinkCtrl](#cmfcribbonlinkctrl)|Constructs and initializes a `CMFCRibbonLinkCtrl` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMFCRibbonLinkCtrl::CopyFrom](#copyfrom)|(Overrides `CMFCRibbonButton::CopyFrom`.)|
|[CMFCRibbonLinkCtrl::GetCompactSize](#getcompactsize)|(Overrides [CMFCRibbonButton::GetCompactSize](../../mfc/reference/cmfcribbonbutton-class.md#getcompactsize).)|
|[CMFCRibbonLinkCtrl::GetLink](#getlink)|Returns the value of the hyperlink.|
|[CMFCRibbonLinkCtrl::GetRegularSize](#getregularsize)|(Overrides [CMFCRibbonButton::GetRegularSize](../../mfc/reference/cmfcribbonbutton-class.md#getregularsize).)|
|[CMFCRibbonLinkCtrl::GetToolTipText](#gettooltiptext)|(Overrides [CMFCRibbonButton::GetToolTipText](../../mfc/reference/cmfcribbonbutton-class.md#gettooltiptext).)|
|[CMFCRibbonLinkCtrl::IsDrawTooltipImage](#isdrawtooltipimage)|(Overrides `CMFCRibbonButton::IsDrawTooltipImage`.)|
|[CMFCRibbonLinkCtrl::OnDraw](#ondraw)|(Overrides [CMFCRibbonButton::OnDraw](../../mfc/reference/cmfcribbonbutton-class.md#ondraw).)|
|[CMFCRibbonLinkCtrl::OnDrawMenuImage](#ondrawmenuimage)|(Overrides [CMFCRibbonBaseElement::OnDrawMenuImage](../../mfc/reference/cmfcribbonbaseelement-class.md#ondrawmenuimage).)|
|[CMFCRibbonLinkCtrl::OnMouseMove](#onmousemove)|(Overrides `CMFCRibbonButton::OnMouseMove`.)|
|[CMFCRibbonLinkCtrl::OnSetIcon](#onseticon)||
|[CMFCRibbonLinkCtrl::OpenLink](#openlink)|Opens the Web page specified in the hyperlink.|
|[CMFCRibbonLinkCtrl::SetLink](#setlink)|Sets the value of the hyperlink.|

## Remarks

After you create a hyperlink, add it to a panel by calling [CMFCRibbonPanel::Add](../../mfc/reference/cmfcribbonpanel-class.md#add).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)\
└&nbsp;[CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)\
&nbsp;&nbsp;&nbsp;&nbsp;└&nbsp;[CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;└&nbsp;[CMFCRibbonLinkCtrl](../../mfc/reference/cmfcribbonlinkctrl-class.md)

## Requirements

**Header:** afxRibbonLinkCtrl.h

## <a name="cmfcribbonlinkctrl"></a> CMFCRibbonLinkCtrl::CMFCRibbonLinkCtrl

Constructs and initializes a [CMFCRibbonLinkCtrl](../../mfc/reference/cmfcribbonlinkctrl-class.md) object.

```
CMFCRibbonLinkCtrl(
    UINT nID,
    LPCTSTR lpszText,
    LPCTSTR lpszLink);
```

### Parameters

*nID*<br/>
[in] Specifies the command ID of the command that executes when the link control is clicked.

*lpszText*<br/>
[in] Specifies the label to display on the link control.

*lpszLink*<br/>
[in] Specifies the hyperlink associated with the link control.

### Example

The following example demonstrates how to use the constructor of the `CMFCRibbonLinkCtrl` class. This code snippet is part of the [Ribbon Gadgets sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_RibbonGadgets#1](../../mfc/reference/codesnippet/cpp/cmfcribbonlinkctrl-class_1.cpp)]

## <a name="copyfrom"></a> CMFCRibbonLinkCtrl::CopyFrom

```
virtual void CopyFrom(const CMFCRibbonBaseElement& src);
```

### Parameters

[in] *src*<br/>

### Remarks

## <a name="getcompactsize"></a> CMFCRibbonLinkCtrl::GetCompactSize

```
virtual CSize GetCompactSize(CDC* pDC);
```

### Parameters

[in] *pDC*<br/>

### Return Value

### Remarks

## <a name="getlink"></a> CMFCRibbonLinkCtrl::GetLink

Returns the value of the hyperlink.

```
LPCTSTR GetLink() const;
```

### Return Value

The current value of the hyperlink.

### Remarks

## <a name="getregularsize"></a> CMFCRibbonLinkCtrl::GetRegularSize

```
virtual CSize GetRegularSize(CDC* pDC);
```

### Parameters

[in] *pDC*<br/>

### Return Value

### Remarks

## <a name="gettooltiptext"></a> CMFCRibbonLinkCtrl::GetToolTipText

```
virtual CString GetToolTipText() const;
```

### Return Value

### Remarks

## <a name="ondrawmenuimage"></a> CMFCRibbonLinkCtrl::OnDrawMenuImage

```
virtual BOOL OnDrawMenuImage(CDC*, CRect);
```

### Parameters

[in] *CDC&#42;*<br/>
[in] *CRect*<br/>

### Return Value

### Remarks

## <a name="isdrawtooltipimage"></a> CMFCRibbonLinkCtrl::IsDrawTooltipImage

```
virtual BOOL IsDrawTooltipImage() const;
```

### Return Value

### Remarks

## <a name="ondraw"></a> CMFCRibbonLinkCtrl::OnDraw

```
virtual void OnDraw(CDC* pDC);
```

### Parameters

[in] *pDC*<br/>

### Remarks

## <a name="onmousemove"></a> CMFCRibbonLinkCtrl::OnMouseMove

```
virtual void OnMouseMove(CPoint point);
```

### Parameters

[in] *point*<br/>

### Remarks

## <a name="onseticon"></a> CMFCRibbonLinkCtrl::OnSetIcon

```
virtual void OnSetIcon();
```

### Remarks

## <a name="openlink"></a> CMFCRibbonLinkCtrl::OpenLink

Opens the Web page specified in the hyperlink.

```
BOOL OpenLink();
```

### Return Value

TRUE if the associated webpage was opened successfully; otherwise, FALSE.

### Remarks

Opens a webpage using the hyperlink associated with the `CMFCRibbonLinkCtrl` object.

## <a name="setlink"></a> CMFCRibbonLinkCtrl::SetLink

Sets the value of the hyperlink.

```cpp
void SetLink(LPCTSTR lpszLink);
```

### Parameters

*lpszLink*<br/>
[in] Specifies the hyperlink text.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CMFCRibbonButton Class](../../mfc/reference/cmfcribbonbutton-class.md)
