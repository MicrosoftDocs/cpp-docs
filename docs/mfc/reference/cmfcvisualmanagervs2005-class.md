---
description: "Learn more about: CMFCVisualManagerVS2005 Class"
title: "CMFCVisualManagerVS2005 Class"
ms.date: "11/04/2016"
f1_keywords: ["CMFCVisualManagerVS2005", "AFXVISUALMANAGERVS2005/CMFCVisualManagerVS2005", "AFXVISUALMANAGERVS2005/CMFCVisualManagerVS2005::GetDockingTabsBordersSize", "AFXVISUALMANAGERVS2005/CMFCVisualManagerVS2005::GetMDITabsBordersSize", "AFXVISUALMANAGERVS2005/CMFCVisualManagerVS2005::GetPropertyGridGroupColor", "AFXVISUALMANAGERVS2005/CMFCVisualManagerVS2005::GetTabFrameColors", "AFXVISUALMANAGERVS2005/CMFCVisualManagerVS2005::HasOverlappedAutoHideButtons", "AFXVISUALMANAGERVS2005/CMFCVisualManagerVS2005::OnDrawAutoHideButtonBorder", "AFXVISUALMANAGERVS2005/CMFCVisualManagerVS2005::OnDrawCaptionButton", "AFXVISUALMANAGERVS2005/CMFCVisualManagerVS2005::OnDrawPaneCaption", "AFXVISUALMANAGERVS2005/CMFCVisualManagerVS2005::OnDrawSeparator", "AFXVISUALMANAGERVS2005/CMFCVisualManagerVS2005::OnDrawTab", "AFXVISUALMANAGERVS2005/CMFCVisualManagerVS2005::OnDrawToolBoxFrame", "AFXVISUALMANAGERVS2005/CMFCVisualManagerVS2005::OnEraseTabsArea", "AFXVISUALMANAGERVS2005/CMFCVisualManagerVS2005::OnFillAutoHideButtonBackground", "AFXVISUALMANAGERVS2005/CMFCVisualManagerVS2005::OnFillHighlightedArea", "AFXVISUALMANAGERVS2005/CMFCVisualManagerVS2005::OnFillMiniFrameCaption", "AFXVISUALMANAGERVS2005/CMFCVisualManagerVS2005::OnUpdateSystemColors"]
helpviewer_keywords: ["CMFCVisualManagerVS2005 [MFC], GetDockingTabsBordersSize", "CMFCVisualManagerVS2005 [MFC], GetMDITabsBordersSize", "CMFCVisualManagerVS2005 [MFC], GetPropertyGridGroupColor", "CMFCVisualManagerVS2005 [MFC], GetTabFrameColors", "CMFCVisualManagerVS2005 [MFC], HasOverlappedAutoHideButtons", "CMFCVisualManagerVS2005 [MFC], OnDrawAutoHideButtonBorder", "CMFCVisualManagerVS2005 [MFC], OnDrawCaptionButton", "CMFCVisualManagerVS2005 [MFC], OnDrawPaneCaption", "CMFCVisualManagerVS2005 [MFC], OnDrawSeparator", "CMFCVisualManagerVS2005 [MFC], OnDrawTab", "CMFCVisualManagerVS2005 [MFC], OnDrawToolBoxFrame", "CMFCVisualManagerVS2005 [MFC], OnEraseTabsArea", "CMFCVisualManagerVS2005 [MFC], OnFillAutoHideButtonBackground", "CMFCVisualManagerVS2005 [MFC], OnFillHighlightedArea", "CMFCVisualManagerVS2005 [MFC], OnFillMiniFrameCaption", "CMFCVisualManagerVS2005 [MFC], OnUpdateSystemColors"]
ms.assetid: ea39b9ae-327e-4a51-bce7-dc84c78f005b
---
# CMFCVisualManagerVS2005 Class

`CMFCVisualManagerVS2005` gives an application a Microsoft Visual Studio 2005 appearance.

## Syntax

```
class CMFCVisualManagerVS2005 : public CMFCVisualManagerOffice2003
```

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMFCVisualManagerVS2005::GetDockingTabsBordersSize](#getdockingtabsborderssize)|The framework calls this method when it draws a pane that is docked and tabbed. (Overrides [CMFCVisualManager::GetDockingTabsBordersSize](../../mfc/reference/cmfcvisualmanager-class.md#getdockingtabsborderssize).)|
|[CMFCVisualManagerVS2005::GetMDITabsBordersSize](#getmditabsborderssize)|The framework calls this method to determine the border size of a MDITabs window before it draws the window. (Overrides [CMFCVisualManager::GetMDITabsBordersSize](../../mfc/reference/cmfcvisualmanager-class.md#getmditabsborderssize).)|
|[CMFCVisualManagerVS2005::GetPropertyGridGroupColor](#getpropertygridgroupcolor)|(Overrides [CMFCVisualManagerOffice2003::GetPropertyGridGroupColor](../../mfc/reference/cmfcvisualmanageroffice2003-class.md#getpropertygridgroupcolor).)|
|[CMFCVisualManagerVS2005::GetTabFrameColors](#gettabframecolors)|(Overrides [CMFCVisualManagerOffice2003::GetTabFrameColors](../../mfc/reference/cmfcvisualmanageroffice2003-class.md#gettabframecolors).)|
|[CMFCVisualManagerVS2005::HasOverlappedAutoHideButtons](#hasoverlappedautohidebuttons)|Returns whether auto-hide buttons overlap in the current visual manager. (Overrides [CMFCVisualManager::HasOverlappedAutoHideButtons](../../mfc/reference/cmfcvisualmanager-class.md#hasoverlappedautohidebuttons).)|
|[CMFCVisualManagerVS2005::OnDrawAutoHideButtonBorder](#ondrawautohidebuttonborder)|(Overrides [CMFCVisualManagerOffice2003::OnDrawAutoHideButtonBorder](../../mfc/reference/cmfcvisualmanageroffice2003-class.md#ondrawautohidebuttonborder).)|
|[CMFCVisualManagerVS2005::OnDrawCaptionButton](#ondrawcaptionbutton)|(Overrides `CMFCVisualManagerOfficeXP::OnDrawCaptionButton`.)|
|[CMFCVisualManagerVS2005::OnDrawPaneCaption](#ondrawpanecaption)|(Overrides [CMFCVisualManagerOffice2003::OnDrawPaneCaption](../../mfc/reference/cmfcvisualmanageroffice2003-class.md#ondrawpanecaption).)|
|[CMFCVisualManagerVS2005::OnDrawSeparator](#ondrawseparator)|(Overrides [CMFCVisualManagerOffice2003::OnDrawSeparator](../../mfc/reference/cmfcvisualmanageroffice2003-class.md#ondrawseparator).)|
|[CMFCVisualManagerVS2005::OnDrawTab](#ondrawtab)|(Overrides [CMFCVisualManagerOffice2003::OnDrawTab](../../mfc/reference/cmfcvisualmanageroffice2003-class.md#ondrawtab).)|
|[CMFCVisualManagerVS2005::OnDrawToolBoxFrame](#ondrawtoolboxframe)|(Overrides [CMFCVisualManager::OnDrawToolBoxFrame](../../mfc/reference/cmfcvisualmanager-class.md#ondrawtoolboxframe).)|
|[CMFCVisualManagerVS2005::OnEraseTabsArea](#onerasetabsarea)|(Overrides [CMFCVisualManagerOffice2003::OnEraseTabsArea](../../mfc/reference/cmfcvisualmanageroffice2003-class.md#onerasetabsarea).)|
|[CMFCVisualManagerVS2005::OnFillAutoHideButtonBackground](#onfillautohidebuttonbackground)|(Overrides [CMFCVisualManagerOffice2003::OnFillAutoHideButtonBackground](../../mfc/reference/cmfcvisualmanageroffice2003-class.md#onfillautohidebuttonbackground).)|
|[CMFCVisualManagerVS2005::OnFillHighlightedArea](#onfillhighlightedarea)|(Overrides [CMFCVisualManagerOffice2003::OnFillHighlightedArea](../../mfc/reference/cmfcvisualmanageroffice2003-class.md#onfillhighlightedarea).)|
|[CMFCVisualManagerVS2005::OnFillMiniFrameCaption](#onfillminiframecaption)|(Overrides `CMFCVisualManagerOfficeXP::OnFillMiniFrameCaption`.)|
|[CMFCVisualManagerVS2005::OnUpdateSystemColors](#onupdatesystemcolors)|(Overrides [CMFCVisualManagerOffice2003::OnUpdateSystemColors](../../mfc/reference/cmfcvisualmanageroffice2003-class.md#onupdatesystemcolors).)|

## Remarks

You use the CMFCVisualManagerVS2005 class to change the visual appearance of your application to resemble that of the Microsoft Visual Studio 2005.

All of the members of this class are virtual functions that are derived from the ancestor of this class, [CMFCVisualManager Class](../../mfc/reference/cmfcvisualmanager-class.md).

## Example

The following example demonstrates how to use the visual manager VS 2005. This code snippet is part of the [Desktop Alert Demo sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_DesktopAlertDemo#9](../../mfc/reference/codesnippet/cpp/cmfcvisualmanagervs2005-class_1.cpp)]

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CMFCBaseVisualManager](../../mfc/reference/cmfcbasevisualmanager-class.md)

[CMFCVisualManager](../../mfc/reference/cmfcvisualmanager-class.md)

[CMFCVisualManagerOfficeXP](../../mfc/reference/cmfcvisualmanagerofficexp-class.md)

[CMFCVisualManagerOffice2003](../../mfc/reference/cmfcvisualmanageroffice2003-class.md)

[CMFCVisualManagerVS2005](../../mfc/reference/cmfcvisualmanagervs2005-class.md)

## Requirements

**Header:** afxvisualmanagervs2005.h

## <a name="getdockingtabsborderssize"></a> CMFCVisualManagerVS2005::GetDockingTabsBordersSize

```
virtual int GetDockingTabsBordersSize();
```

### Return Value

### Remarks

## <a name="getmditabsborderssize"></a> CMFCVisualManagerVS2005::GetMDITabsBordersSize

```
virtual int GetMDITabsBordersSize();
```

### Return Value

### Remarks

## <a name="getpropertygridgroupcolor"></a> CMFCVisualManagerVS2005::GetPropertyGridGroupColor

```
virtual COLORREF GetPropertyGridGroupColor(CMFCPropertyGridCtrl* pPropList);
```

### Parameters

[in] *pPropList*<br/>

### Return Value

### Remarks

## <a name="gettabframecolors"></a> CMFCVisualManagerVS2005::GetTabFrameColors

```
virtual void GetTabFrameColors(
    const CMFCBaseTabCtrl* pTabWnd,
    COLORREF& clrDark,
    COLORREF& clrBlack,
    COLORREF& clrHighlight,
    COLORREF& clrFace,
    COLORREF& clrDarkShadow,
    COLORREF& clrLight,
    CBrush*& pbrFace,
    CBrush*& pbrBlack);
```

### Parameters

[in] *pTabWnd*<br/>
[in] *clrDark*<br/>
[in] *clrBlack*<br/>
[in] *clrHighlight*<br/>
[in] *clrFace*<br/>
[in] *clrDarkShadow*<br/>
[in] *clrLight*<br/>
[in] *pbrFace*<br/>
[in] *pbrBlack*<br/>

### Remarks

## <a name="hasoverlappedautohidebuttons"></a> CMFCVisualManagerVS2005::HasOverlappedAutoHideButtons

```
virtual BOOL HasOverlappedAutoHideButtons() const;
```

### Return Value

### Remarks

## <a name="ondrawautohidebuttonborder"></a> CMFCVisualManagerVS2005::OnDrawAutoHideButtonBorder

```
virtual void OnDrawAutoHideButtonBorder(
    CDC* pDC,
    CRect rectBounds,
    CRect rectBorderSize,
    CMFCAutoHideButton* pButton);
```

### Parameters

[in] *pDC*<br/>
[in] *rectBounds*<br/>
[in] *rectBorderSize*<br/>
[in] *pButton*<br/>

### Remarks

## <a name="ondrawcaptionbutton"></a> CMFCVisualManagerVS2005::OnDrawCaptionButton

```
virtual void OnDrawCaptionButton(
    CDC* pDC,
    CMFCCaptionButton* pButton,
    BOOL bActive,
    BOOL bHorz,
    BOOL bMaximized,
    BOOL bDisabled,
    int nImageID = -1);
```

### Parameters

[in] *pDC*<br/>
[in] *pButton*<br/>
[in] *bActive*<br/>
[in] *bHorz*<br/>
[in] *bMaximized*<br/>
[in] *bDisabled*<br/>
[in] *nImageID*<br/>

### Remarks

## <a name="ondrawpanecaption"></a> CMFCVisualManagerVS2005::OnDrawPaneCaption

```
virtual COLORREF OnDrawPaneCaption(
    CDC* pDC,
    CDockablePane* pBar,
    BOOL bActive,
    CRect rectCaption,
    CRect rectButtons);
```

### Parameters

[in] *pDC*<br/>
[in] *pBar*<br/>
[in] *bActive*<br/>
[in] *rectCaption*<br/>
[in] *rectButtons*<br/>

### Return Value

### Remarks

## <a name="ondrawseparator"></a> CMFCVisualManagerVS2005::OnDrawSeparator

```
virtual void OnDrawSeparator(
    CDC* pDC,
    CBasePane* pBar,
    CRect rect,
    BOOL bIsHoriz);
```

### Parameters

[in] *pDC*<br/>
[in] *pBar*<br/>
[in] *rect*<br/>
[in] *bIsHoriz*<br/>

### Remarks

## <a name="ondrawtab"></a> CMFCVisualManagerVS2005::OnDrawTab

```
virtual void OnDrawTab(
    CDC* pDC,
    CRect rectTab,
    int iTab,
    BOOL bIsActive,
    const CMFCBaseTabCtrl* pTabWnd);
```

### Parameters

[in] *pDC*<br/>
[in] *rectTab*<br/>
[in] *iTab*<br/>
[in] *bIsActive*<br/>
[in] *pTabWnd*<br/>

### Remarks

## <a name="ondrawtoolboxframe"></a> CMFCVisualManagerVS2005::OnDrawToolBoxFrame

```
virtual void OnDrawToolBoxFrame(
    CDC* pDC,
    const CRect& rect);
```

### Parameters

[in] *pDC*<br/>
[in] *rect*<br/>

### Remarks

## <a name="onerasetabsarea"></a> CMFCVisualManagerVS2005::OnEraseTabsArea

```
virtual void OnEraseTabsArea(
    CDC* pDC,
    CRect rect,
    const CMFCBaseTabCtrl* pTabWnd);
```

### Parameters

[in] *pDC*<br/>
[in] *rect*<br/>
[in] *pTabWnd*<br/>

### Remarks

## <a name="onfillautohidebuttonbackground"></a> CMFCVisualManagerVS2005::OnFillAutoHideButtonBackground

```
virtual void OnFillAutoHideButtonBackground(
    CDC* pDC,
    CRect rect,
    CMFCAutoHideButton* pButton);
```

### Parameters

[in] *pDC*<br/>
[in] *rect*<br/>
[in] *pButton*<br/>

### Remarks

## <a name="onfillhighlightedarea"></a> CMFCVisualManagerVS2005::OnFillHighlightedArea

```
virtual void OnFillHighlightedArea(
    CDC* pDC,
    CRect rect,
    CBrush* pBrush,
    CMFCToolBarButton* pButton);
```

### Parameters

[in] *pDC*<br/>
[in] *rect*<br/>
[in] *pBrush*<br/>
[in] *pButton*<br/>

### Remarks

## <a name="onfillminiframecaption"></a> CMFCVisualManagerVS2005::OnFillMiniFrameCaption

```
virtual COLORREF OnFillMiniFrameCaption(
    CDC* pDC,
    CRect rectCaption,
    CPaneFrameWnd* pFrameWnd,
    BOOL bActive);
```

### Parameters

[in] *pDC*<br/>
[in] *rectCaption*<br/>
[in] *pFrameWnd*<br/>
[in] *bActive*<br/>

### Return Value

### Remarks

## <a name="onupdatesystemcolors"></a> CMFCVisualManagerVS2005::OnUpdateSystemColors

```
virtual void OnUpdateSystemColors();
```

### Remarks

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CMFCVisualManager Class](../../mfc/reference/cmfcvisualmanager-class.md)<br/>
[CMFCVisualManagerOfficeXP Class](../../mfc/reference/cmfcvisualmanagerofficexp-class.md)<br/>
[CMFCVisualManagerWindows Class](../../mfc/reference/cmfcvisualmanagerwindows-class.md)<br/>
[CMFCVisualManagerOffice2003 Class](../../mfc/reference/cmfcvisualmanageroffice2003-class.md)
