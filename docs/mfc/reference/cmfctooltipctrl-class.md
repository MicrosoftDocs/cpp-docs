---
description: "Learn more about: CMFCToolTipCtrl Class"
title: "CMFCToolTipCtrl Class"
ms.date: "11/04/2016"
f1_keywords: ["CMFCToolTipCtrl", "AFXTOOLTIPCTRL/CMFCToolTipCtrl", "AFXTOOLTIPCTRL/CMFCToolTipCtrl::GetIconSize", "AFXTOOLTIPCTRL/CMFCToolTipCtrl::GetParams", "AFXTOOLTIPCTRL/CMFCToolTipCtrl::OnDrawBorder", "AFXTOOLTIPCTRL/CMFCToolTipCtrl::OnDrawDescription", "AFXTOOLTIPCTRL/CMFCToolTipCtrl::OnDrawIcon", "AFXTOOLTIPCTRL/CMFCToolTipCtrl::OnDrawLabel", "AFXTOOLTIPCTRL/CMFCToolTipCtrl::OnDrawSeparator", "AFXTOOLTIPCTRL/CMFCToolTipCtrl::OnFillBackground", "AFXTOOLTIPCTRL/CMFCToolTipCtrl::SetDescription", "AFXTOOLTIPCTRL/CMFCToolTipCtrl::SetFixedWidth", "AFXTOOLTIPCTRL/CMFCToolTipCtrl::SetHotRibbonButton", "AFXTOOLTIPCTRL/CMFCToolTipCtrl::SetLocation", "AFXTOOLTIPCTRL/CMFCToolTipCtrl::SetParams"]
helpviewer_keywords: ["CMFCToolTipCtrl [MFC], GetIconSize", "CMFCToolTipCtrl [MFC], GetParams", "CMFCToolTipCtrl [MFC], OnDrawBorder", "CMFCToolTipCtrl [MFC], OnDrawDescription", "CMFCToolTipCtrl [MFC], OnDrawIcon", "CMFCToolTipCtrl [MFC], OnDrawLabel", "CMFCToolTipCtrl [MFC], OnDrawSeparator", "CMFCToolTipCtrl [MFC], OnFillBackground", "CMFCToolTipCtrl [MFC], SetDescription", "CMFCToolTipCtrl [MFC], SetFixedWidth", "CMFCToolTipCtrl [MFC], SetHotRibbonButton", "CMFCToolTipCtrl [MFC], SetLocation", "CMFCToolTipCtrl [MFC], SetParams"]
ms.assetid: 9fbfcfb1-a8ab-417f-ae29-9a9ca85ee58f
---
# CMFCToolTipCtrl Class

An extended tooltip implementation based on the [CToolTipCtrl Class](../../mfc/reference/ctooltipctrl-class.md). A tooltip based on the `CMFCToolTipCtrl` class can display an icon, a label, and a description. You can customize its visual appearance by using a gradient fill, custom text and border colors, bold text, rounded corners, or a balloon style.

For more detail see the source code located in the **VC\\atlmfc\\src\\mfc** folder of your Visual Studio installation.

## Syntax

```cpp
class CMFCToolTipCtrl : public CToolTipCtrl
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|`CMFCToolTipCtrl::CMFCToolTipCtrl`|Default constructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMFCToolTipCtrl::GetIconSize](#geticonsize)|Returns the size of an icon in a tooltip.|
|[CMFCToolTipCtrl::GetParams](#getparams)|Returns the display settings of a tooltip.|
|[CMFCToolTipCtrl::OnDrawBorder](#ondrawborder)|Draws the border of a tooltip.|
|[CMFCToolTipCtrl::OnDrawDescription](#ondrawdescription)||
|[CMFCToolTipCtrl::OnDrawIcon](#ondrawicon)|Displays an icon in a tooltip.|
|[CMFCToolTipCtrl::OnDrawLabel](#ondrawlabel)|Draws the label of a tooltip, or calculates the size of the label.|
|[CMFCToolTipCtrl::OnDrawSeparator](#ondrawseparator)|Draws the separator between the label and the description in a tooltip.|
|[CMFCToolTipCtrl::OnFillBackground](#onfillbackground)|Fills the tooltip background.|
|[CMFCToolTipCtrl::SetDescription](#setdescription)|Sets the description to be displayed by the tooltip.|
|[CMFCToolTipCtrl::SetFixedWidth](#setfixedwidth)||
|[CMFCToolTipCtrl::SetHotRibbonButton](#sethotribbonbutton)||
|[CMFCToolTipCtrl::SetLocation](#setlocation)||
|[CMFCToolTipCtrl::SetParams](#setparams)|Specifies the visual appearance of a tooltip by using a `CMFCToolTipInfo` object.|

## Remarks

Use `CMFCToolTipCtrl`, `CMFCToolTipInfo`, and [CTooltipManager Class](../../mfc/reference/ctooltipmanager-class.md) objects together to implement customized tooltips in your application.

For example, to use balloon-style tooltips, follow these steps:

1. Use the [CWinAppEx Class](../../mfc/reference/cwinappex-class.md) method to initialize the tooltip manager in your application.

2. Create a `CMFCToolTipInfo` structure to specify the visual style that you want:

    ```cpp
    CMFCToolTipInfo params;
    params.m_bBoldLabel = FALSE;
    params.m_bDrawDescription = FALSE;
    params.m_bDrawIcon = FALSE;
    params.m_bRoundedCorners = TRUE;
    params.m_bDrawSeparator = FALSE;
    if (m_bCustomColors)
    {
        params.m_clrFill = RGB (255, 255, 255);
        params.m_clrFillGradient = RGB (228, 228, 240);
        params.m_clrText = RGB (61, 83, 80);
        params.m_clrBorder = RGB (144, 149, 168);

    }
    ```

3. Use the [CTooltipManager::SetTooltipParams](../../mfc/reference/ctooltipmanager-class.md#settooltipparams) method to set the visual style for all tooltips in the application by using the styles defined in the `CMFCToolTipInfo` object:

    ```cpp
    theApp.GetTooltipManager ()->SetTooltipParams (AFX_TOOLTIP_TYPE_ALL,
        RUNTIME_CLASS (CMFCToolTipCtrl), &params);
    ```

You can also derive a new class from `CMFCToolTipCtrl` to control tooltip behavior and rendering. To specify a new tooltip control class, use the `CTooltipManager::SetTooltipParams` method:

```cpp
myApp.GetTooltipManager ()->SetTooltipParams (AFX_TOOLTIP_TYPE_ALL,
    RUNTIME_CLASS (CMyToolTipCtrl))
```

To restore the default tooltip control class and reset the tooltip appearance to its default state, specify NULL in the runtime class and tooltip info parameters of `SetTooltipParams`:

```cpp
theApp.GetTooltipManager ()->SetTooltipParams (AFX_TOOLTIP_TYPE_ALL,
    NULL,
    NULL);
```

## Example

The following example demonstrates how to construct a `CMFCToolTipCtrl` object, set the description that the tooltip displays, and set the width of the tooltip control.

[!code-cpp[NVC_MFC_RibbonApp#41](../../mfc/reference/codesnippet/cpp/cmfctooltipctrl-class_1.cpp)]

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CToolTipCtrl](../../mfc/reference/ctooltipctrl-class.md)

[CMFCToolTipCtrl](../../mfc/reference/cmfctooltipctrl-class.md)

## Requirements

**Header:** afxtooltipctrl.h

## <a name="cmfctooltipctrl"></a> CMFCToolTipCtrl::CMFCToolTipCtrl

```cpp
CMFCToolTipCtrl(CMFCToolTipInfo* pParams = NULL);
```

### Parameters

[in] *pParams*<br/>

### Remarks

## <a name="geticonsize"></a> CMFCToolTipCtrl::GetIconSize

Returns the size of an icon in a tooltip.

```cpp
virtual CSize GetIconSize();
```

### Return Value

The size of the icon, in pixels.

## <a name="getparams"></a> CMFCToolTipCtrl::GetParams

Returns the display settings of a tooltip.

```cpp
const CMFCToolTipInfo& GetParams() const;
```

### Return Value

The current tooltip display settings , which are stored in a [CMFCToolTipInfo Class](../../mfc/reference/cmfctooltipinfo-class.md) object.

## <a name="ondrawborder"></a> CMFCToolTipCtrl::OnDrawBorder

Draws the border of a tooltip.

```cpp
virtual void OnDrawBorder(
    CDC* pDC,
    CRect rect,
    COLORREF clrLine);
```

### Parameters

*pDC*<br/>
[in] Pointer to a device context.

*rect*<br/>
[in] The bounding rectangle of the tooltip.

*clrLine*<br/>
[in] Border color.

### Remarks

Override this method in a derived class to customize the appearance of the tooltip border.

## <a name="ondrawdescription"></a> CMFCToolTipCtrl::OnDrawDescription

```cpp
virtual CSize OnDrawDescription(
    CDC* pDC,
    CRect rect,
    BOOL bCalcOnly);
```

### Parameters

[in] *pDC*<br/>
[in] *rect*<br/>
[in] *bCalcOnly*<br/>

### Return Value

### Remarks

## <a name="ondrawicon"></a> CMFCToolTipCtrl::OnDrawIcon

Displays an icon in a tooltip.

```cpp
virtual BOOL OnDrawIcon(
    CDC* pDC,
    CRect rectImage);
```

### Parameters

*pDC*<br/>
[in] A pointer to a device context.

*rectImage*<br/>
[in] Coordinates of the icon.

### Return Value

TRUE if the icon was drawn. Otherwise FALSE.

### Remarks

Override this method in a derived class to display a custom icon. You must also override [CMFCToolTipCtrl::GetIconSize](#geticonsize) to enable the tooltip to correctly calculate the layout of text and description.

## <a name="ondrawlabel"></a> CMFCToolTipCtrl::OnDrawLabel

Draws the label of a tooltip, or calculates the size of the label.

```cpp
virtual CSize OnDrawLabel(
    CDC* pDC,
    CRect rect,
    BOOL bCalcOnly);
```

### Parameters

*pDC*<br/>
[in] A pointer to a device context.

*rect*<br/>
[in] Bounding rectangle of the label area.

*bCalcOnly*<br/>
[in] If TRUE, the label will not be drawn.

### Return Value

Size of the label, in pixels.

### Remarks

Override this method in a derived class if you want to customize the appearance of the tooltip label.

## <a name="ondrawseparator"></a> CMFCToolTipCtrl::OnDrawSeparator

Draws the separator between the label and the description in a tooltip.

```cpp
virtual void OnDrawSeparator(
    CDC* pDC,
    int x1,
    int x2,
    int y);
```

### Parameters

*pDC*<br/>
[in] A pointer to a device context.

*x1*<br/>
[in] Horizontal coordinate of the left end of the separator.

*x2*<br/>
[in] Horizontal coordinate of the right end of the separator.

*Y*<br/>
[in] Vertical coordinate of the separator.

### Remarks

The default implementation draws a line from the point (x1, y) to the point (x2, y).

Override this method in a derived class to customize the appearance of the separator.

## <a name="onfillbackground"></a> CMFCToolTipCtrl::OnFillBackground

Fills the tooltip background.

```cpp
virtual void OnFillBackground(
    CDC* pDC,
    CRect rect,
    COLORREF& clrText,
    COLORREF& clrLine);
```

### Parameters

*pDC*<br/>
[in] A pointer to a device context.

*rect*<br/>
[in] Specifies the bounding rectangle of the area to fill.

*clrText*<br/>
[in] Tooltip foreground color.

*clrLine*<br/>
[in] Color of borders and the delimiter line between label and description.

### Remarks

The default implementation fills the rectangle that is specified by *rect* with the color or pattern specified by the most recent call to [CMFCToolTipCtrl::SetParams](#setparams).

Override this method in a derived class if you want to customize the appearance of the tooltip.

## <a name="setdescription"></a> CMFCToolTipCtrl::SetDescription

Sets the description to be displayed by the tooltip.

```cpp
virtual void SetDescription(const CString strDesrciption);
```

### Parameters

*strDesrciption*<br/>
[in] Description text.

### Remarks

The description text is displayed on the tooltip under the separator.

## <a name="setfixedwidth"></a> CMFCToolTipCtrl::SetFixedWidth

```cpp
void SetFixedWidth(
    int nWidthRegular,
    int nWidthLargeImage);
```

### Parameters

[in] *nWidthRegular*<br/>
[in] *nWidthLargeImage*<br/>

### Remarks

## <a name="sethotribbonbutton"></a> CMFCToolTipCtrl::SetHotRibbonButton

```cpp
void SetHotRibbonButton(CMFCRibbonButton* pRibbonButton);
```

### Parameters

[in] *pRibbonButton*<br/>

### Remarks

## <a name="setlocation"></a> CMFCToolTipCtrl::SetLocation

```cpp
void SetLocation(CPoint pt);
```

### Parameters

[in] *pt*<br/>

### Remarks

## <a name="setparams"></a> CMFCToolTipCtrl::SetParams

Specifies the visual appearance of a tooltip by using a [CMFCToolTipInfo Class](../../mfc/reference/cmfctooltipinfo-class.md) object.

```cpp
void SetParams(CMFCToolTipInfo* pParams);
```

### Parameters

*pParams*<br/>
[in] Pointer to a [CMFCToolTipInfo Class](../../mfc/reference/cmfctooltipinfo-class.md) object that contains  the display parameters.

### Remarks

Whenever the tooltip is displayed, it is drawn by using the colors and visual styles that *pParams* specifies. The value of *pParams* is stored in the protected member `m_Params`, which can be accessed by a derived class that overrides [CMFCToolTipCtrl::OnDrawBorder](#ondrawborder), [CMFCToolTipCtrl::OnDrawIcon](#ondrawicon), [CMFCToolTipCtrl::OnDrawLabel](#ondrawlabel), [CMFCToolTipCtrl::OnDrawSeparator](#ondrawseparator), or [CMFCToolTipCtrl::OnFillBackground](#onfillbackground) to maintain the specified appearance.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CToolTipCtrl Class](../../mfc/reference/ctooltipctrl-class.md)<br/>
[CTooltipManager Class](../../mfc/reference/ctooltipmanager-class.md)<br/>
[CMFCToolTipInfo Class](../../mfc/reference/cmfctooltipinfo-class.md)<br/>
[CWinAppEx Class](../../mfc/reference/cwinappex-class.md)
