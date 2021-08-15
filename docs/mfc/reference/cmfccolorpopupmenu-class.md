---
description: "Learn more about: CMFCColorPopupMenu Class"
title: "CMFCColorPopupMenu Class"
ms.date: "11/04/2016"
f1_keywords: ["CMFCColorPopupMenu", "AFXCOLORPOPUPMENU/CMFCColorPopupMenu", "AFXCOLORPOPUPMENU/CMFCColorPopupMenu::CMFCColorPopupMenu", "AFXCOLORPOPUPMENU/CMFCColorPopupMenu::CreateTearOffBar", "AFXCOLORPOPUPMENU/CMFCColorPopupMenu::GetMenuBar", "AFXCOLORPOPUPMENU/CMFCColorPopupMenu::SetPropList"]
helpviewer_keywords: ["CMFCColorPopupMenu [MFC], CMFCColorPopupMenu", "CMFCColorPopupMenu [MFC], CreateTearOffBar", "CMFCColorPopupMenu [MFC], GetMenuBar", "CMFCColorPopupMenu [MFC], SetPropList"]
ms.assetid: 0bf9efe8-aed5-4ab7-b23b-eb284b4668be
---
# CMFCColorPopupMenu Class

Represents a pop-up menu that users use to select colors in a document or application.

## Syntax

```
class CMFCColorPopupMenu : public CMFCPopupMenu
```

## Members

### Public Constructors

|Name|Description|
|-|-|
|[CMFCColorPopupMenu::CMFCColorPopupMenu](#cmfccolorpopupmenu)|Constructs a `CMFCColorPopupMenu` object.|
|`CMFCColorPopupMenu::~CMFCColorPopupMenu`|Destructor.|

### Public Methods

|Name|Description|
|-|-|
|[CMFCColorPopupMenu::CreateTearOffBar](#createtearoffbar)|Creates a dockable tear-off color bar. (Overrides [CMFCPopupMenu::CreateTearOffBar](../../mfc/reference/cmfcpopupmenu-class.md#createtearoffbar).)|
|[CMFCColorPopupMenu::GetMenuBar](#getmenubar)|Returns the [CMFCPopupMenuBar](../../mfc/reference/cmfcpopupmenubar-class.md) that is embedded inside the pop-up menu. (Overrides [CMFCPopupMenu::GetMenuBar](../../mfc/reference/cmfcpopupmenu-class.md#getmenubar).)|
|`CMFCColorPopupMenu::GetThisClass`|Used by the framework to obtain a pointer to the [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) object that is associated with this class type.|
|[CMFCColorPopupMenu::SetPropList](#setproplist)|Sets the property grid control object of the embedded `CMFCColorBar` object.|

### Data Members

|Name|Description|
|-|-|
|`m_bEnabledInCustomizeMode`|A Boolean value that determines whether to show the color bar.|
|`m_wndColorBar`|The `CMFCColorBar` object that provides color selection.|

### Remarks

This class inherits the pop-up menu functionality of the `CMFCPopupMenu` class and manages a `CMFCColorBar` object that provides color selection. When the toolbar framework is in customization mode and the `m_bEnabledInCustomizeMode` member is set to FALSE, the color bar object is not shown. For more information about customization mode, see [CMFCToolBar::IsCustomizeMode](../../mfc/reference/cmfctoolbar-class.md#iscustomizemode)

For more information about `CMFCColorBar`, see [CMFCColorBar Class](../../mfc/reference/cmfccolorbar-class.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CFrameWnd](../../mfc/reference/cframewnd-class.md)

[CMiniFrameWnd](../../mfc/reference/cminiframewnd-class.md)

[CMFCPopupMenu](../../mfc/reference/cmfcpopupmenu-class.md)

[CMFCColorPopupMenu](../../mfc/reference/cmfccolorpopupmenu-class.md)

## Requirements

**Header:** afxcolorpopupmenu.h

## <a name="cmfccolorpopupmenu"></a> CMFCColorPopupMenu::CMFCColorPopupMenu

Constructs a `CMFCColorPopupMenu` object.

```
CMFCColorPopupMenu(
    const CArray<COLORREF, COLORREF>& colors,
    COLORREF color,
    LPCTSTR lpszAutoColor,
    LPCTSTR lpszOtherColor,
    LPCTSTR lpszDocColors, CList<COLORREF, COLORREF>& lstDocColors,
    int nColumns,
    int nHorzDockRows,
    int nVertDockColumns,
    COLORREF colorAutomatic,
    UINT uiCommandID,
    BOOL bStdColorDlg = FALSE);

CMFCColorPopupMenu(
    CMFCColorButton* pParentBtn,
    const CArray<COLORREF, COLORREF>& colors,
    COLORREF color,
    LPCTSTR lpszAutoColor,
    LPCTSTR lpszOtherColor,
    LPCTSTR lpszDocColors, CList<COLORREF, COLORREF>& lstDocColors,
    int nColumns,
    COLORREF colorAutomatic);

CMFCColorPopupMenu(
    CMFCRibbonColorButton* pParentBtn,
    const CArray<COLORREF, COLORREF>& colors,
    COLORREF color,
    LPCTSTR lpszAutoColor,
    LPCTSTR lpszOtherColor,
    LPCTSTR lpszDocColors, CList<COLORREF, COLORREF>& lstDocColors,
    int nColumns,
    COLORREF colorAutomatic,
    UINT nID);
```

### Parameters

*colors*<br/>
[in] An array of colors that the framework displays on the pop-up menu.

*color*<br/>
[in] The default selected color.

*lpszAutoColor*<br/>
[in] The text label of the *automatic* (default) color button, or NULL.

The standard label for the automatic button is **Automatic**.

*lpszOtherColor*<br/>
[in] The text label of the *other* button, which displays more color choices, or NULL.

The standard label for the other button is **More Colors...**.

*lpszDocColors*<br/>
[in] The text label of the document colors button. The document colors palette lists all the colors that the document currently uses.

*lstDocColors*<br/>
[in] A list of colors that the document currently uses.

*nColumns*<br/>
[in] The number of columns that the array of colors has.

*nHorzDockRows*<br/>
[in] The number of rows that the color bar has when it is docked horizontally.

*nVertDockColumns*<br/>
[in] The number of columns that the color bar has when it is docked vertically.

*colorAutomatic*<br/>
[in] The default color that the framework applies when you click the automatic button.

*uiCommandID*<br/>
[in] The color bar control command ID.

*bStdColorDlg*<br/>
[in] A Boolean that indicates whether to show the standard system color dialog box or the [CMFCColorDialog](../../mfc/reference/cmfccolordialog-class.md) dialog box.

*pParentBtn*<br/>
[in] A pointer to a parent button.

*nID*<br/>
[in] The command ID.

### Remarks

Each overloaded constructor sets the `m_bEnabledInCustomizeMode` member to FALSE.

### Example

The following example demonstrates how to construct a `CMFCColorPopupMenu` object.

[!code-cpp[NVC_MFC_RibbonApp#34](../../mfc/reference/codesnippet/cpp/cmfccolorpopupmenu-class_1.cpp)]

## <a name="createtearoffbar"></a> CMFCColorPopupMenu::CreateTearOffBar

Creates a dockable tear-off color bar.

```
virtual CPane* CreateTearOffBar(
    CFrameWnd* pWndMain,
    UINT uiID,
    LPCTSTR lpszName);
```

### Parameters

*pWndMain*\
[in] Pointer to the parent window of the tear-off bar.

*uiID*\
[in] The command ID of the tear-off bar.

*lpszName*\
[in] The window text of the tear-off bar.

### Return Value

A pointer to the new tear-off control bar object.

### Remarks

This method creates a [CMFCColorBar Class](../../mfc/reference/cmfccolorbar-class.md) object and casts it to a [CPane Class](../../mfc/reference/cpane-class.md) pointer. You can cast this value back to a [CMFCColorBar Class](../../mfc/reference/cmfccolorbar-class.md) pointer by using one of the casting macros described in [Type Casting of MFC Class Objects](../../mfc/reference/type-casting-of-mfc-class-objects.md).

## <a name="getmenubar"></a> CMFCColorPopupMenu::GetMenuBar

Returns the [CMFCPopupMenuBar](../../mfc/reference/cmfcpopupmenubar-class.md) that is embedded inside the pop-up menu.

```
virtual CMFCPopupMenuBar* GetMenuBar();
```

### Return Value

A pointer to the embedded `CMFCPopupMenuBar`.

### Remarks

The color pop-up menu has an embedded [CMFCPopupMenuBar Class](../../mfc/reference/cmfcpopupmenubar-class.md) object. Override this method in a derived class if your application uses a different embedded type.

## <a name="setproplist"></a> CMFCColorPopupMenu::SetPropList

Sets the property grid control object of the embedded `CMFCColorBar` object.

```cpp
void SetPropList(CMFCPropertyGridCtrl* pWndList);
```

### Parameters

*pWndList*<br/>
[in] Pointer to a property grid control object.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)
