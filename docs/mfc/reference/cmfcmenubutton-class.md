---
description: "Learn more about: CMFCMenuButton Class"
title: "CMFCMenuButton Class"
ms.date: "07/15/2019"
f1_keywords: ["CMFCMenuButton", "AFXMENUBUTTON/CMFCMenuButton", "AFXMENUBUTTON/CMFCMenuButton::CMFCMenuButton", "AFXMENUBUTTON/CMFCMenuButton::PreTranslateMessage", "AFXMENUBUTTON/CMFCMenuButton::SizeToContent", "AFXMENUBUTTON/CMFCMenuButton::m_bOSMenu", "AFXMENUBUTTON/CMFCMenuButton::m_bRightArrow", "AFXMENUBUTTON/CMFCMenuButton::m_bStayPressed", "AFXMENUBUTTON/CMFCMenuButton::m_hMenu", "AFXMENUBUTTON/CMFCMenuButton::m_nMenuResult", "AFXMENUBUTTON/CMFCMenuButton::m_bDefaultClick"]
helpviewer_keywords: ["CMFCMenuButton [MFC], CMFCMenuButton", "CMFCMenuButton [MFC], PreTranslateMessage", "CMFCMenuButton [MFC], SizeToContent", "CMFCMenuButton [MFC], m_bOSMenu", "CMFCMenuButton [MFC], m_bRightArrow", "CMFCMenuButton [MFC], m_bStayPressed", "CMFCMenuButton [MFC], m_hMenu", "CMFCMenuButton [MFC], m_nMenuResult", "CMFCMenuButton [MFC], m_bDefaultClick"]
ms.assetid: 53d3d459-1e5a-47c5-8b7f-2e61f6af5187
---
# CMFCMenuButton Class

A button that displays a pop-up menu and reports on the user's menu selections.

## Syntax

```
class CMFCMenuButton : public CMFCButton
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CMFCMenuButton::CMFCMenuButton](#cmfcmenubutton)|Constructs a `CMFCMenuButton` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMFCMenuButton::PreTranslateMessage](#pretranslatemessage)|Called by the framework to translate window messages before they are dispatched. (Overrides `CMFCButton::PreTranslateMessage`.)|
|[CMFCMenuButton::SizeToContent](#sizetocontent)|Changes the size of the button according to its text and image size.|

### Data Members

|Name|Description|
|----------|-----------------|
|[CMFCMenuButton::m_bOSMenu](#m_bosmenu)|Specifies whether to display the default system pop-up menu or to use [CContextMenuManager::TrackPopupMenu](../../mfc/reference/ccontextmenumanager-class.md#trackpopupmenu).|
|[CMFCMenuButton::m_bRightArrow](#m_brightarrow)|Specifies whether the pop-up menu will appear underneath or to the right of the button.|
|[CMFCMenuButton::m_bStayPressed](#m_bstaypressed)|Specifies whether the menu button changes its state after the user releases the button.|
|[CMFCMenuButton::m_hMenu](#m_hmenu)|A handle to the attached Windows menu.|
|[CMFCMenuButton::m_nMenuResult](#m_nmenuresult)|An identifier that indicates which item the user selected from the pop-up menu.|
|[CMFCMenuButton::m_bDefaultClick](#m_bdefaultclick)| Allow default (on button text/image) processing.|

## Remarks

The `CMFCMenuButton` class is derived from the [CMFCButton Class](../../mfc/reference/cmfcbutton-class.md) which is, in turn, derived from the [CButton Class](../../mfc/reference/cbutton-class.md). Therefore, you can use `CMFCMenuButton` in your code the same way you would use `CButton`.

When you create a `CMFCMenuButton`, you must pass in a handle to the associated pop-up menu. Next, call the function `CMFCMenuButton::SizeToContent`. `CMFCMenuButton::SizeToContent` checks that the button size is sufficient to include an arrow that points to the location where the pop-up window will appear - namely, underneath or to the right of the button.

## Example

The following example demonstrates how to set the handle of the menu attached to the button, resize the button according to its text and image size, and set the pop-up menu that is displayed by the framework. This code snippet is part of the [New Controls sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_NewControls#38](../../mfc/reference/codesnippet/cpp/cmfcmenubutton-class_1.h)]
[!code-cpp[NVC_MFC_NewControls#39](../../mfc/reference/codesnippet/cpp/cmfcmenubutton-class_2.cpp)]

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CButton](../../mfc/reference/cbutton-class.md)

[CMFCButton](../../mfc/reference/cmfcbutton-class.md)

[CMFCMenuButton](../../mfc/reference/cmfcmenubutton-class.md)

## Requirements

**Header:** afxmenubutton.h

## <a name="cmfcmenubutton"></a> CMFCMenuButton::CMFCMenuButton

Constructs a new [CMFCMenuButton](../../mfc/reference/cmfcmenubutton-class.md) object.

```
CMFCMenuButton();
```

## <a name="m_bosmenu"></a> CMFCMenuButton::m_bOSMenu

A Boolean member variable that indicates which pop-up menu the framework displays.

```
BOOL m_bOSMenu;
```

### Remarks

If `m_bOSMenu` is TRUE, the framework calls the inherited `TrackPopupMenu` method for this object. Otherwise, the framework calls [CContextMenuManager::TrackPopupMenu](../../mfc/reference/ccontextmenumanager-class.md#trackpopupmenu).

## <a name="m_brightarrow"></a> CMFCMenuButton::m_bRightArrow

A Boolean member variable that indicates the location of the pop-up menu.

```
BOOL m_bRightArrow;
```

### Remarks

When the user presses the menu button, the application shows a pop-up menu. The framework will display the pop-up menu either under the button or to the right of the button. The button also has a small arrow that indicates where the pop-up menu will appear. If `m_bRightArrow` is TRUE, the framework displays the pop-up menu to the right of the button. Otherwise, it displays the pop-up menu under the button.

## <a name="m_bstaypressed"></a> CMFCMenuButton::m_bStayPressed

A Boolean member variable that indicates whether the menu button appears pressed while the user makes a selection from the pop-up menu.

```
BOOL m_bStayPressed;
```

### Remarks

If the `m_bStayPressed` member is FALSE, the menu button does not become pressed when the uses clicks the button. In this case, the framework displays only the pop-up menu.

If the `m_bStayPressed` member is TRUE, the menu button becomes pressed when the user clicks the button. It stays pressed until after the user closes the pop-up menu, either by making a selection or canceling.

## <a name="m_hmenu"></a> CMFCMenuButton::m_hMenu

The handle to the attached menu.

```
HMENU m_hMenu;
```

### Remarks

The framework displays the menu indicated by this member variable when the user clicks the menu button.

## <a name="m_nmenuresult"></a> CMFCMenuButton::m_nMenuResult

An integer that indicates which item the user selects from the pop-up menu.

```
int m_nMenuResult;
```

### Remarks

The value of this member variable is zero if the user cancels the menu without making a selection or if an error occurs.

## <a name="m_bdefaultclick"></a> CMFCMenuButton::m_bDefaultClick

Allows default processing of text or images on the button.

```
BOOL  m_bDefaultClick;
```

### Remarks

Setting m_bDefaultClick to false causes the button to show the menu when you click anywhere on the button.

## <a name="pretranslatemessage"></a> CMFCMenuButton::PreTranslateMessage

Called by the framework to translate window messages before they are dispatched.

```
virtual BOOL PreTranslateMessage(MSG* pMsg);
```

### Parameters

*pMsg*<br/>
[in] Points to a [MSG](/windows/win32/api/winuser/ns-winuser-msg) structure that contains the message to process.

### Return Value

Nonzero if the message was translated and should not be dispatched; 0 if the message was not translated and should be dispatched.

### Remarks

## <a name="sizetocontent"></a> CMFCMenuButton::SizeToContent

Changes the size of the button according to its text size and image size.

```
virtual CSize SizeToContent(BOOL bCalcOnly = FALSE);
```

### Parameters

*bCalcOnly*<br/>
[in] A Boolean parameter that indicates whether this method resizes the button .

### Return Value

A [CSize](../../atl-mfc-shared/reference/csize-class.md) object that specifies the new size for the button.

### Remarks

If you call this function and *bCalcOnly* is TRUE, `SizeToContent` will calculate only the new size of the button.

The new size of the button is calculated to fit the button text, image, and arrow. The framework also adds in predefined margins of 10 pixels for the horizontal edge and 5 pixels for the vertical edge.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CMFCButton Class](../../mfc/reference/cmfcbutton-class.md)
