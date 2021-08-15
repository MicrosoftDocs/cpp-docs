---
description: "Learn more about: CMDITabInfo Class"
title: "CMDITabInfo Class"
ms.date: "11/04/2016"
f1_keywords: ["CMDITabInfo", "AFXMDICLIENTAREAWND/CMDITabInfo", "AFXMDICLIENTAREAWND/CMDITabInfo::Serialize", "AFXMDICLIENTAREAWND/CMDITabInfo::m_bAutoColor", "AFXMDICLIENTAREAWND/CMDITabInfo::m_bDocumentMenu", "AFXMDICLIENTAREAWND/CMDITabInfo::m_bEnableTabSwap", "AFXMDICLIENTAREAWND/CMDITabInfo::m_bFlatFrame", "AFXMDICLIENTAREAWND/CMDITabInfo::m_bTabCloseButton", "AFXMDICLIENTAREAWND/CMDITabInfo::m_bTabCustomTooltips", "AFXMDICLIENTAREAWND/CMDITabInfo::m_bTabIcons", "AFXMDICLIENTAREAWND/CMDITabInfo::m_nTabBorderSize", "AFXMDICLIENTAREAWND/CMDITabInfo::m_style", "AFXMDICLIENTAREAWND/CMDITabInfo::m_tabLocation"]
helpviewer_keywords: ["CMDITabInfo [MFC], Serialize", "CMDITabInfo [MFC], m_bAutoColor", "CMDITabInfo [MFC], m_bDocumentMenu", "CMDITabInfo [MFC], m_bEnableTabSwap", "CMDITabInfo [MFC], m_bFlatFrame", "CMDITabInfo [MFC], m_bTabCloseButton", "CMDITabInfo [MFC], m_bTabCustomTooltips", "CMDITabInfo [MFC], m_bTabIcons", "CMDITabInfo [MFC], m_nTabBorderSize", "CMDITabInfo [MFC], m_style", "CMDITabInfo [MFC], m_tabLocation"]
ms.assetid: 988ae1b7-4f7f-4239-b88f-7e28b3291c5e
---
# CMDITabInfo Class

The `CMDITabInfo` class is used to pass parameters to [CMDIFrameWndEx::EnableMDITabbedGroups](../../mfc/reference/cmdiframewndex-class.md#enablemditabbedgroups) method. Set members of this class to control the behavior of MDI tabbed groups.

## Syntax

```
class CMDITabInfo
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|`CMDITabInfo::CMDITabInfo`|Default constructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMDITabInfo::Serialize](#serialize)|Reads or writes this object from or to an archive.|

### Data Members

|Name|Description|
|----------|-----------------|
|[CMDITabInfo::m_bActiveTabCloseButton;](#m_bactivetabclosebutton_)|Specifies whether a **Close** button is displayed on the label of the active tab.|
|[CMDITabInfo::m_bAutoColor](#m_bautocolor)|Specifies whether to color the MDI tabs.|
|[CMDITabInfo::m_bDocumentMenu](#m_bdocumentmenu)|Specifies whether the tab group displays a popup menu that shows a list of opened documents or displays scroll buttons.|
|[CMDITabInfo::m_bEnableTabSwap](#m_benabletabswap)|Specifies whether the user can swap the positions of tabs by dragging.|
|[CMDITabInfo::m_bFlatFrame](#m_bflatframe)|Specifies whether tabs have a flat frame.|
|[CMDITabInfo::m_bTabCloseButton](#m_btabclosebutton)|Specifies whether each tab label displays a **Close** button.|
|[CMDITabInfo::m_bTabCustomTooltips](#m_btabcustomtooltips)|Specifies whether custom tooltips are enabled.|
|[CMDITabInfo::m_bTabIcons](#m_btabicons)|Specifies whether to display icons on MDI tabs.|
|[CMDITabInfo::m_nTabBorderSize](#m_ntabbordersize)|Specifies the border size of each tab window.|
|[CMDITabInfo::m_style](#m_style)|Specifies the style of the tab labels.|
|[CMDITabInfo::m_tabLocation](#m_tablocation)|Specifies whether the tabs labels are located at the top or the bottom of the page.|

## Remarks

This class specifies the parameters of the MDI tab groups that the framework creates.

## Example

The following example demonstrates how to set the values of the various member variables in `CMDITabInfo` class.

[!code-cpp[NVC_MFC_MDITab#1](../../mfc/reference/codesnippet/cpp/cmditabinfo-class_1.cpp)]

## Inheritance Hierarchy

[CMDITabInfo](../../mfc/reference/cmditabinfo-class.md)

## Requirements

**Header:** afxmdiclientareawnd.h

## <a name="m_bactivetabclosebutton_"></a> CMDITabInfo::m_bActiveTabCloseButton;

Specifies whether a **Close** button is displayed on the label of the active tab.

```
BOOL m_bActiveTabCloseButton;
```

### Remarks

If TRUE, the label of the active tab will display a **Close** button. The **Close** button will be removed from the right top corner of the tab area. Otherwise, the label of the active tab will not display a **Close** button. The **Close** button will appear in the right top corner of the tab area.

## <a name="m_bautocolor"></a> CMDITabInfo::m_bAutoColor

Specifies whether each MDI tab has its own color.

```
BOOL m_bAutoColor;
```

### Remarks

If TRUE, each tab will have its own color. The set of colors is managed by the MFC library. Otherwise, the tabs are displayed in white. The default value is FALSE.

## <a name="m_bdocumentmenu"></a> CMDITabInfo::m_bDocumentMenu

Specifies whether each tab displays a popup menu that shows a list of  opened documents at the right edge of the tab area.

```
BOOL m_bDocumentMenu;
```

### Remarks

If TRUE, each tab windows displays a popup menu that shows a list of opened documents at the right edge of the tab area; Otherwise, the tab window displays scroll buttons at the right edge of the tab area. The default value is FALSE.

## <a name="m_benabletabswap"></a> CMDITabInfo::m_bEnableTabSwap

Specifies whether the user can swap the positions of tabs by dragging.

```
BOOL m_bEnableTabSwap;
```

### Remarks

If TRUE, the user can change the tabs positions by dragging the tabs. Otherwise, the user cannot change the tabs positions. The default value is TRUE.

## <a name="m_bflatframe"></a> CMDITabInfo::m_bFlatFrame

Specifies whether each tab window has a flat frame.

```
BOOL m_bFlatFrame;
```

## <a name="m_btabclosebutton"></a> CMDITabInfo::m_bTabCloseButton

Specifies whether each tab window displays a **Close** button.

```
BOOL m_bTabCloseButton;
```

### Remarks

If TRUE, each tab window displays the **Close** button on the right edge of the tab. Otherwise, the **Close** button is not displayed. The default value is TRUE.

## <a name="m_btabcustomtooltips"></a> CMDITabInfo::m_bTabCustomTooltips

Specifies whether the tabs display tooltips.

```
BOOL m_bTabCustomTooltips;
```

### Remarks

If TRUE, the application sends an AFX_WM_ON_GET_TAB_TOOLTIP message to the main frame. You can handle this message by using the ON_REGISTERED_MESSAGE macro.

## <a name="m_btabicons"></a> CMDITabInfo::m_bTabIcons

Specifies whether to display icons on MDI tabs.

```
BOOL m_bTabIcons;
```

### Remarks

If TRUE, icons are displayed on each MDI tab. Otherwise, icons are not displayed on tabs. The default value is FALSE.

## <a name="m_ntabbordersize"></a> CMDITabInfo::m_nTabBorderSize

Specifies the border size, in pixels, of each tab window.

```
int m_nTabBorderSize;
```

### Remarks

[CMFCVisualManager::GetMDITabsBordersSize](../../mfc/reference/cmfcvisualmanager-class.md#getmditabsborderssize) returns the default value.

## <a name="m_style"></a> CMDITabInfo::m_style

Specifies the style of the tab labels.

```
CMFCTabCtrl::Style m_style
```

### Remarks

Specify one of the following styles for the tab labels:

|Macro|Description|
|-|-|
|STYLE_3D|3D style.  |
|STYLE_3D_ONENOTE|Microsoft OneNote style.  |
|STYLE_3D_VS2005|Microsoft Visual Studio 2005 style.  |
|STYLE_3D_SCROLLED|3D style with rectangle tab labels.  |
|STYLE_FLAT_SHARED_HORZ_SCROLL|Flat style with shared horizontal scroll bar.  |
|STYLE_3D_ROUNDED_SCROLL|3D style with round tab labels.  |

## <a name="m_tablocation"></a> CMDITabInfo::m_tabLocation

Specifies whether the tabs labels are located at the top or the bottom of the page.

```
CMFCTabCtrl::Location m_tabLocation;
```

### Remarks

Apply to the tabs one of the following location flags:

- LOCATION_BOTTOM: the tabs labels are located at the bottom of the page.

- LOCATION_TOP: the tabs labels are located at the top of the page

## <a name="serialize"></a> CMDITabInfo::Serialize

Reads or writes this object from an archive or to an archive.

```cpp
void Serialize(CArchive& ar);
```

### Parameters

*ar*<br/>
[in] A [CArchive Class](../../mfc/reference/carchive-class.md) object to serialize.

## See also

[CMDIFrameWndEx Class](../../mfc/reference/cmdiframewndex-class.md)<br/>
[MDI Tabbed Groups](../../mfc/mdi-tabbed-groups.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)
