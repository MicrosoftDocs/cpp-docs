---
description: "Learn more about: CMFCFontComboBox Class"
title: "CMFCFontComboBox Class"
ms.date: "11/04/2016"
f1_keywords: ["CMFCFontComboBox", "AFXFONTCOMBOBOX/CMFCFontComboBox", "AFXFONTCOMBOBOX/CMFCFontComboBox::CMFCFontComboBox", "AFXFONTCOMBOBOX/CMFCFontComboBox::GetSelFont", "AFXFONTCOMBOBOX/CMFCFontComboBox::SelectFont", "AFXFONTCOMBOBOX/CMFCFontComboBox::Setup", "AFXFONTCOMBOBOX/CMFCFontComboBox::m_bDrawUsingFont"]
helpviewer_keywords: ["CMFCFontComboBox [MFC], CMFCFontComboBox", "CMFCFontComboBox [MFC], GetSelFont", "CMFCFontComboBox [MFC], SelectFont", "CMFCFontComboBox [MFC], Setup", "CMFCFontComboBox [MFC], m_bDrawUsingFont"]
ms.assetid: 9a53fb0c-7b45-486d-8187-2a4c723d9fbb
---
# CMFCFontComboBox Class

The `CMFCFontComboBox` class creates a combo box control that contains a list of fonts.

## Syntax

```
class CMFCFontComboBox : public CComboBox
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CMFCFontComboBox::CMFCFontComboBox](#cmfcfontcombobox)|Constructs a `CMFCFontComboBox` object.|
|`CMFCFontComboBox::~CMFCFontComboBox`|Destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|`CMFCFontComboBox::CompareItem`|Called by the framework to determine the relative position of a new item in the sorted list box of the current font combo box control. (Overrides [CComboBox::CompareItem](../../mfc/reference/ccombobox-class.md#compareitem).)|
|`CMFCFontComboBox::DrawItem`|Called by the framework to draw a specified item in the current font combo box control. (Overrides [CComboBox::DrawItem](../../mfc/reference/ccombobox-class.md#drawitem).)|
|[CMFCFontComboBox::GetSelFont](#getselfont)|Retrieves information about the currently selected font.|
|`CMFCFontComboBox::MeasureItem`|Called by the framework to inform Windows of the dimensions of the list box in the current font combo box control. (Overrides [CComboBox::MeasureItem](../../mfc/reference/ccombobox-class.md#measureitem).)|
|`CMFCFontComboBox::PreTranslateMessage`|Translates window messages before they are dispatched to the [TranslateMessage](/windows/win32/api/winuser/nf-winuser-translatemessage) and [DispatchMessage](/windows/win32/api/winuser/nf-winuser-dispatchmessage) Windows functions. (Overrides [CWnd::PreTranslateMessage](../../mfc/reference/cwnd-class.md#pretranslatemessage).)|
|[CMFCFontComboBox::SelectFont](#selectfont)|Selects the font that matches the specified criteria from the font combo box.|
|[CMFCFontComboBox::Setup](#setup)|Initializes the list of items in the font combo box.|

### Data Members

|Name|Description|
|----------|-----------------|
|[CMFCFontComboBox::m_bDrawUsingFont](#m_bdrawusingfont)|Indicates to the framework which font to use to draw the item labels in the current font combo box.|

## Remarks

To use a `CMFCFontComboBox` object in a dialog box, add a `CMFCFontComboBox` variable to the dialog box class. Then in the `OnInitDialog` method of the dialog box class, call the [CMFCFontComboBox::Setup](#setup) method to initialize the list of items in the combo box control.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CComboBox](../../mfc/reference/ccombobox-class.md)

[CMFCFontComboBox](../../mfc/reference/cmfcfontcombobox-class.md)

## Requirements

**Header:** afxfontcombobox.h

## <a name="cmfcfontcombobox"></a> CMFCFontComboBox::CMFCFontComboBox

Constructs a `CMFCFontComboBox` object.

```
CMFCFontComboBox();
```

### Return Value

### Remarks

## <a name="getselfont"></a> CMFCFontComboBox::GetSelFont

Retrieves information about the currently selected font.

```
CMFCFontInfo* GetSelFont() const;
```

### Return Value

A pointer to [CMFCFontInfo Class](../../mfc/reference/cmfcfontinfo-class.md) object that describes a font. It can be NULL if no font is selected in the combo box.

### Remarks

## <a name="m_bdrawusingfont"></a> CMFCFontComboBox::m_bDrawUsingFont

Indicates to the framework which font to use to draw the item labels in the current font combo box.

```
static BOOL m_bDrawUsingFont;
```

### Remarks

Set this member to TRUE to direct the framework to use the same font to draw each item label. Set this member to FALSE to direct the framework to draw each item label with the font whose name is the same as the label. The default value of this member is FALSE.

## <a name="selectfont"></a> CMFCFontComboBox::SelectFont

Selects the font that matches the specified criteria from the font combo box.

```
BOOL SelectFont(CMFCFontInfo* pDesc);

BOOL SelectFont(
    LPCTSTR lpszName,
    BYTE nCharSet=DEFAULT_CHARSET);
```

### Parameters

*pDesc*<br/>
[in] Points to a font description object.

*lpszName*<br/>
[in] Specifies a font name.

*nCharSet*<br/>
[in] Specifies a character set. The default value is DEFAULT_CHARSET. For more information, see the `lfCharSet` member of the [LOGFONT](/windows/win32/api/wingdi/ns-wingdi-logfontw) structure.

### Return Value

TRUE if an item in the font combo box matches the specified font description object or font name and charset; otherwise, FALSE.

### Remarks

Use this method to select and scroll to the item in the font combo box that corresponds to the specified font.

### Example

The following example demonstrates how to use the `SelectFont` method in the `CMFCFontComboBox` class. This example is part of the [New Controls sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_NewControls#34](../../mfc/reference/codesnippet/cpp/cmfcfontcombobox-class_1.h)]
[!code-cpp[NVC_MFC_NewControls#35](../../mfc/reference/codesnippet/cpp/cmfcfontcombobox-class_2.cpp)]

## <a name="setup"></a> CMFCFontComboBox::Setup

Initializes the list of items in the font combo box.

```
BOOL Setup(
    int nFontType=DEVICE_FONTTYPE|RASTER_FONTTYPE|TRUETYPE_FONTTYPE,
    BYTE nCharSet=DEFAULT_CHARSET,
    BYTE nPitchAndFamily=DEFAULT_PITCH);
```

### Parameters

*nFontType*<br/>
[in] Specifies the font type. The default value is the bitwise combination (OR) of DEVICE_FONTTYPE, RASTER_FONTTYPE, and TRUETYPE_FONTTYPE.

*nCharSet*<br/>
[in] Specifies the font character set. The default value is DEFAULT_CHARSET.

*nPitchAndFamily*<br/>
[in] Specifies the font pitch and family. The default value is DEFAULT_PITCH.

### Return Value

TRUE if the font combo box was initialized successfully; otherwise, FALSE.

### Remarks

This method initializes the font combo box by enumerating the currently installed fonts that match the specified parameters and inserting those font names in the font combo box.

### Example

The following example demonstrates how to use the `Setup` method in the `CMFCFontComboBox` class. This example is part of the [New Controls sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_NewControls#34](../../mfc/reference/codesnippet/cpp/cmfcfontcombobox-class_1.h)]
[!code-cpp[NVC_MFC_NewControls#36](../../mfc/reference/codesnippet/cpp/cmfcfontcombobox-class_3.cpp)]

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CMFCToolBarFontComboBox Class](../../mfc/reference/cmfctoolbarfontcombobox-class.md)<br/>
[CMFCFontInfo Class](../../mfc/reference/cmfcfontinfo-class.md)
