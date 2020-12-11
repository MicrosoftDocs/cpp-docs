---
description: "Learn more about: CMFCToolTipInfo Class"
title: "CMFCToolTipInfo Class"
ms.date: "11/04/2016"
f1_keywords: ["CMFCToolTipInfo", "AFXTOOLTIPCTRL/CMFCToolTipInfo", "AFXTOOLTIPCTRL/CMFCToolTipInfo::m_bBalloonTooltip", "AFXTOOLTIPCTRL/CMFCToolTipInfo::m_bBoldLabel", "AFXTOOLTIPCTRL/CMFCToolTipInfo::m_bDrawDescription", "AFXTOOLTIPCTRL/CMFCToolTipInfo::m_bDrawIcon", "AFXTOOLTIPCTRL/CMFCToolTipInfo::m_bDrawSeparator", "AFXTOOLTIPCTRL/CMFCToolTipInfo::m_bRoundedCorners", "AFXTOOLTIPCTRL/CMFCToolTipInfo::m_bVislManagerTheme", "AFXTOOLTIPCTRL/CMFCToolTipInfo::m_clrBorder", "AFXTOOLTIPCTRL/CMFCToolTipInfo::m_clrFill", "AFXTOOLTIPCTRL/CMFCToolTipInfo::m_clrFillGradient", "AFXTOOLTIPCTRL/CMFCToolTipInfo::m_clrText", "AFXTOOLTIPCTRL/CMFCToolTipInfo::m_nGradientAngle", "AFXTOOLTIPCTRL/CMFCToolTipInfo::m_nMaxDescrWidth"]
helpviewer_keywords: ["CMFCToolTipInfo [MFC], m_bBalloonTooltip", "CMFCToolTipInfo [MFC], m_bBoldLabel", "CMFCToolTipInfo [MFC], m_bDrawDescription", "CMFCToolTipInfo [MFC], m_bDrawIcon", "CMFCToolTipInfo [MFC], m_bDrawSeparator", "CMFCToolTipInfo [MFC], m_bRoundedCorners", "CMFCToolTipInfo [MFC], m_bVislManagerTheme", "CMFCToolTipInfo [MFC], m_clrBorder", "CMFCToolTipInfo [MFC], m_clrFill", "CMFCToolTipInfo [MFC], m_clrFillGradient", "CMFCToolTipInfo [MFC], m_clrText", "CMFCToolTipInfo [MFC], m_nGradientAngle", "CMFCToolTipInfo [MFC], m_nMaxDescrWidth"]
ms.assetid: f9d3d7f8-1f08-4342-a7b2-683860e5d2a5
---
# CMFCToolTipInfo Class

Stores information about the visual appearance of tooltips.

## Syntax

```
class CMFCToolTipInfo
```

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMFCToolTipInfo::operator=](#operator_eq)||

### Data Members

|Name|Description|
|----------|-----------------|
|[CMFCToolTipInfo::m_bBalloonTooltip](#m_bballoontooltip)|A Boolean variable that indicates whether the tooltip has a balloon appearance.|
|[CMFCToolTipInfo::m_bBoldLabel](#m_bboldlabel)|A Boolean variable that indicates whether tooltip labels are displayed in a bold font.|
|[CMFCToolTipInfo::m_bDrawDescription](#m_bdrawdescription)|A Boolean variable that indicates whether the tooltip contains a description.|
|[CMFCToolTipInfo::m_bDrawIcon](#m_bdrawicon)|A Boolean variable that indicates whether the tooltip contains an icon.|
|[CMFCToolTipInfo::m_bDrawSeparator](#m_bdrawseparator)|A Boolean variable that indicates whether a separator is displayed between the tooltip label and the tooltip description.|
|[CMFCToolTipInfo::m_bRoundedCorners](#m_broundedcorners)|A Boolean variable that indicates whether the tooltip has rounded corners.|
|[CMFCToolTipInfo::m_bVislManagerTheme](#m_bvislmanagertheme)|A Boolean variable that indicates whether the appearance of the tooltip should be controlled by a visual manager (see [CMFCVisualManager Class](../../mfc/reference/cmfcvisualmanager-class.md)).|
|[CMFCToolTipInfo::m_clrBorder](#m_clrborder)|The color of the tooltip border.|
|[CMFCToolTipInfo::m_clrFill](#m_clrfill)|The color of the tooltip background.|
|[CMFCToolTipInfo::m_clrFillGradient](#m_clrfillgradient)|The color of the gradient fill in the tooltip.|
|[CMFCToolTipInfo::m_clrText](#m_clrtext)|The text color in the tooltip.|
|[CMFCToolTipInfo::m_nGradientAngle](#m_ngradientangle)|The angle of the gradient fill in the tooltip.|
|[CMFCToolTipInfo::m_nMaxDescrWidth](#m_nmaxdescrwidth)|The maximum possible width, in pixels, of the description in the tooltip.|

## Remarks

Use [CMFCToolTipCtrl Class](../../mfc/reference/cmfctooltipctrl-class.md), `CMFCToolTipInfo`, and [CTooltipManager Class](../../mfc/reference/ctooltipmanager-class.md) together to implement customized tooltips in your application. For an example of how to use these tooltip classes, see the [CMFCToolTipCtrl Class](../../mfc/reference/cmfctooltipctrl-class.md) topic.

## Example

The following example demonstrates how to set the values of the various member variables in the `CMFCToolTipInfo` class.

[!code-cpp[NVC_MFC_RibbonApp#42](../../mfc/reference/codesnippet/cpp/cmfctooltipinfo-class_1.cpp)]

## Inheritance Hierarchy

[CMFCToolTipInfo](../../mfc/reference/cmfctooltipinfo-class.md)

## Requirements

**Header:** afxtooltipctrl.h

## <a name="m_bballoontooltip"></a> CMFCToolTipInfo::m_bBalloonTooltip

Specifies the display style of all tooltips.

```
BOOL m_bBalloonTooltip;
```

### Remarks

TRUE indicates that tooltips use the balloon style, FALSE indicates that tooltips use the rectangular style.

## <a name="m_bboldlabel"></a> CMFCToolTipInfo::m_bBoldLabel

Specifies whether the font of the tooltip text is bold.

```
BOOL m_bBoldLabel;
```

### Remarks

Set this member to TRUE to display tooltip text with bold font, or FALSE to display tooltip labels with non-bold font.

## <a name="m_bdrawdescription"></a> CMFCToolTipInfo::m_bDrawDescription

Specifies whether each tooltip displays description text.

```
BOOL m_bDrawDescription;
```

### Remarks

Set this member to TRUE to display the description, or FALSE to hide the description. You can specify the description on a tooltip by calling [CMFCToolTipCtrl::SetDescription](../../mfc/reference/cmfctooltipctrl-class.md#setdescription)

## <a name="m_bdrawicon"></a> CMFCToolTipInfo::m_bDrawIcon

Specifies whether all tooltips display icons.

```
BOOL m_bDrawIcon;
```

### Remarks

Set this member to TRUE to display an icon on each tooltip, or FALSE to display tooltips without icons.

## <a name="m_bdrawseparator"></a> CMFCToolTipInfo::m_bDrawSeparator

Specifies whether each tooltip has a separator between its label and its description.

```
BOOL m_bDrawSeparator;
```

### Remarks

Set this member to TRUE to display separator between tooltip label and description, or FALSE to display tooltips with no separator.

## <a name="m_broundedcorners"></a> CMFCToolTipInfo::m_bRoundedCorners

Specifies whether all tooltips have rounded corners.

```
BOOL m_bRoundedCorners;
```

### Remarks

Set this member to TRUE to display rounded corners on tooltips, or FALSE to display rectangular corners on tooltips.

## <a name="m_clrborder"></a> CMFCToolTipInfo::m_clrBorder

Specifies the color of the borders on all tooltips.

```
COLORREF m_clrBorder;
```

## <a name="m_clrfill"></a> CMFCToolTipInfo::m_clrFill

Specifies the color of tooltip backgrounds.

```
COLORREF m_clrFill;
```

### Remarks

If [CMFCToolTipInfo::m_clrFillGradient](#m_clrfillgradient) is -1, the tooltip background color is `m_clrFill`. Otherwise, `m_clrFill` specifies the color of the beginning of the gradient and `m_clrFillGradient` specifies the color of the end of the gradient. [CMFCToolTipInfo::m_nGradientAngle](#m_ngradientangle) determines the direction of the gradient.

## <a name="m_clrfillgradient"></a> CMFCToolTipInfo::m_clrFillGradient

Specifies the end color for a gradient background for tooltips.

```
COLORREF m_clrFillGradient;
```

### Remarks

If `m_clrFillGradient` is -1, there is no gradient. Otherwise, the gradient initial color is specified by [CMFCToolTipInfo::m_clrFill](#m_clrfill) and the gradient finish color is specified by `m_clrFillGradient`. [CMFCToolTipInfo::m_nGradientAngle](#m_ngradientangle) determines the direction of the gradient.

## <a name="m_clrtext"></a> CMFCToolTipInfo::m_clrText

Specifies text color of all tooltips.

```
COLORREF m_clrText;
```

## <a name="m_ngradientangle"></a> CMFCToolTipInfo::m_nGradientAngle

Specifies the angle at which a gradient is drawn on the background of tooltips.

```
int m_nGradientAngle;
```

### Remarks

`m_nGradientAngle` specifies the angle, in degrees, that the gradient on the background of tooltips is offset from horizontal. If `m_nGradientAngle` is 0, the gradient is drawn from left to right. If `m_nGradientAngle` is between 1 and 360, the gradient is rotating clockwise by that number of degrees. If `m_nGradientAngle` is -1, which is the default value, the gradient is drawn from top to bottom. This is the same as setting `m_nGradientAngle` to 90.

[CMFCToolTipInfo::m_clrFill](#m_clrfill) `clrFill` specifies the color of the beginning of the gradient and [CMFCToolTipInfo::m_clrFillGradient](#m_clrfillgradient) `clrFillGradient` specifies the color of the end of the gradient. If `m_clrFillGradient` is -1, there is no gradient.

## <a name="m_nmaxdescrwidth"></a> CMFCToolTipInfo::m_nMaxDescrWidth

Specifies the maximum width of the description that it displayed in each tooltip. If the description width exceeds the specified value, the text is wrapped.

```
int m_nMaxDescrWidth;
```

## <a name="m_bvislmanagertheme"></a> CMFCToolTipInfo::m_bVislManagerTheme

Specifies whether the visual manager of the application controls the appearance of all tooltips.

```
BOOL m_bVislManagerTheme;
```

### Remarks

If `m_bVislManagerTheme` is TRUE, every tooltip requests a new [CMFCToolTipInfo](../../mfc/reference/cmfctooltipinfo-class.md) from the visual manager of the application before they appear on the screen, and uses the values in that object to determine their appearance. The other members of your [CMFCToolTipInfo](../../mfc/reference/cmfctooltipinfo-class.md) are ignored.

## <a name="operator_eq"></a> CMFCToolTipInfo::operator=

For more detail see the source code located in the **VC\\atlmfc\\src\\mfc** folder of your Visual Studio installation.

```
CMFCToolTipInfo& operator=(CMFCToolTipInfo& src);
```

### Parameters

[in] *src*<br/>

### Return Value

### Remarks

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CTooltipManager Class](../../mfc/reference/ctooltipmanager-class.md)<br/>
[CMFCToolTipCtrl Class](../../mfc/reference/cmfctooltipctrl-class.md)
