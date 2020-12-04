---
description: "Learn more about: CMFCRibbonFontComboBox Class"
title: "CMFCRibbonFontComboBox Class"
ms.date: "11/04/2016"
f1_keywords: ["CMFCRibbonFontComboBox", "AFXRIBBONCOMBOBOX/CMFCRibbonFontComboBox", "AFXRIBBONCOMBOBOX/CMFCRibbonFontComboBox::CMFCRibbonFontComboBox", "AFXRIBBONCOMBOBOX/CMFCRibbonFontComboBox::BuildFonts", "AFXRIBBONCOMBOBOX/CMFCRibbonFontComboBox::GetCharSet", "AFXRIBBONCOMBOBOX/CMFCRibbonFontComboBox::GetFontDesc", "AFXRIBBONCOMBOBOX/CMFCRibbonFontComboBox::GetFontType", "AFXRIBBONCOMBOBOX/CMFCRibbonFontComboBox::GetPitchAndFamily", "AFXRIBBONCOMBOBOX/CMFCRibbonFontComboBox::RebuildFonts", "AFXRIBBONCOMBOBOX/CMFCRibbonFontComboBox::SetFont"]
helpviewer_keywords: ["CMFCRibbonFontComboBox [MFC], CMFCRibbonFontComboBox", "CMFCRibbonFontComboBox [MFC], BuildFonts", "CMFCRibbonFontComboBox [MFC], GetCharSet", "CMFCRibbonFontComboBox [MFC], GetFontDesc", "CMFCRibbonFontComboBox [MFC], GetFontType", "CMFCRibbonFontComboBox [MFC], GetPitchAndFamily", "CMFCRibbonFontComboBox [MFC], RebuildFonts", "CMFCRibbonFontComboBox [MFC], SetFont"]
ms.assetid: 33b4db50-df4f-45fa-8f05-2e6e73c31435
---
# CMFCRibbonFontComboBox Class

Implements a combo box that contains a list of fonts. You place the combo box on a ribbon panel.

## Syntax

```
class CMFCRibbonFontComboBox : public CMFCRibbonComboBox
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|`CMFCRibbonFontComboBox::~CMFCRibbonFontComboBox`|Destructor.|

### Protected Constructors

|Name|Description|
|----------|-----------------|
|[CMFCRibbonFontComboBox::CMFCRibbonFontComboBox](#cmfcribbonfontcombobox)|Constructs and initializes a `CMFCRibbonFontComboBox` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMFCRibbonFontComboBox::BuildFonts](#buildfonts)|Populates the ribbon font combo box with fonts of the specified font type, character set, and pitch and family.|
|`CMFCRibbonFontComboBox::CreateObject`|Used by the framework to create a dynamic instance of this class type.|
|[CMFCRibbonFontComboBox::GetCharSet](#getcharset)|Returns the specified character set.|
|[CMFCRibbonFontComboBox::GetFontDesc](#getfontdesc)||
|[CMFCRibbonFontComboBox::GetFontType](#getfonttype)|Returns which font types to display in the combo box. Valid options are DEVICE_FONTTYPE, RASTER_FONTTYPE, and TRUETYPE_FONTTYPE, or any bitwise combination thereof.|
|[CMFCRibbonFontComboBox::GetPitchAndFamily](#getpitchandfamily)|Returns the pitch and the family of the fonts that are displayed in the combo box.|
|`CMFCRibbonFontComboBox::GetThisClass`|Used by the framework to obtain a pointer to the [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) object that is associated with this class type.|
|[CMFCRibbonFontComboBox::RebuildFonts](#rebuildfonts)|Populates the ribbon font combo box with fonts of the previously specified font type, character set, and pitch and family.|
|[CMFCRibbonFontComboBox::SetFont](#setfont)|Selects the specified font in the combo box.|

## Remarks

After you create a `CMFCRibbonFontComboBox` object, add it to a ribbon panel by calling [CMFCRibbonPanel::Add](../../mfc/reference/cmfcribbonpanel-class.md#add).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)

[CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)

[CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md)

[CMFCRibbonComboBox](../../mfc/reference/cmfcribboncombobox-class.md)

[CMFCRibbonFontComboBox](../../mfc/reference/cmfcribbonfontcombobox-class.md)

## Requirements

**Header:** afxRibbonComboBox.h

## <a name="buildfonts"></a> CMFCRibbonFontComboBox::BuildFonts

Populates the combo box on the ribbon with fonts.

```cpp
void BuildFonts(
    int nFontType = DEVICE_FONTTYPE | RASTER_FONTTYPE | TRUETYPE_FONTTYPE,
    BYTE nCharSet = DEFAULT_CHARSET,
    BYTE nPitchAndFamily = DEFAULT_PITCH);
```

### Parameters

*nFontType*<br/>
[in] Specifies the font type of the fonts to add.

*nCharSet*<br/>
[in] Specifies the character set of the fonts to add.

*nPitchAndFamily*<br/>
[in] Specifies the pitch and family of the fonts to add.

## <a name="cmfcribbonfontcombobox"></a> CMFCRibbonFontComboBox::CMFCRibbonFontComboBox

Constructs and initializes a [CMFCRibbonFontComboBox](../../mfc/reference/cmfcribbonfontcombobox-class.md) object.

```
CMFCRibbonFontComboBox(
    UINT nID,
    int nFontType = DEVICE_FONTTYPE | RASTER_FONTTYPE | TRUETYPE_FONTTYPE,
    BYTE nCharSet = DEFAULT_CHARSET,
    BYTE nPitchAndFamily = DEFAULT_PITCH,
    int nWidth = -1);
```

### Parameters

*nID*<br/>
[in] The command ID of the command that executes when the user selects an item from the combo box.

*nFontType*<br/>
[in] Specifies which font types to display in the combo box. Valid options are DEVICE_FONTTYPE, RASTER_FONTTYPE, and TRUETYPE_FONTTYPE, or any bitwise combination thereof.

*nCharSet*<br/>
[in] Filters the fonts in the combo box to those that belong to the specified character set..

*nPitchAndFamily*<br/>
[in] Specifies the pitch and the family of the fonts that are displayed in the combo box.

*nWidth*<br/>
[in] Specifies the width, in pixels, of the combo box.

### Remarks

For more information about possible *nFontType* parameter values, see [EnumFontFamProc](/previous-versions/dd162621\(v=vs.85\)) in the Windows SDK documentation.

For more information about valid character sets that can be assigned to *nCharSet*, and valid values that can be assigned to *nPitchAndFamily*, see [LOGFONT](/windows/win32/api/wingdi/ns-wingdi-logfontw) in the Windows SDK documentation.

## <a name="getfontdesc"></a> CMFCRibbonFontComboBox::GetFontDesc

For more detail see the source code located in the **VC\\atlmfc\\src\\mfc** folder of your Visual Studio installation.

```
const CMFCFontInfo* GetFontDesc(int iIndex = -1) const;
```

### Parameters

[in] *iIndex*<br/>

### Return Value

### Remarks

## <a name="rebuildfonts"></a> CMFCRibbonFontComboBox::RebuildFonts

Populates the combo box on the ribbon with fonts of a previously specified font type, character set, and pitch and family.

```cpp
void RebuildFonts();
```

### Remarks

You can specify the font type, character set, and pitch and family of the fonts to include in the ribbon font combo box in the [constructor](#cmfcribbonfontcombobox) for this class, or by calling [CMFCRibbonFontComboBox::BuildFonts](#buildfonts).

## <a name="setfont"></a> CMFCRibbonFontComboBox::SetFont

Selects the specified font in the combo box.

```
BOOL SetFont(
    LPCTSTR lpszName,
    BYTE nCharSet = DEFAULT_CHARSET,
    BOOL bExact = FALSE);
```

### Parameters

`lpszName*
Specifies the name of the font to select.

*nCharSet*<br/>
Specifies the character set for the selected font.

*bExact*<br/>
TRUE to specify that the character set must match when selecting a font; FALSE to specify that the character set can be ignored when selecting a font.

### Return Value

Nonzero if the specified font was found and selected; otherwise, zero.

### Remarks

## <a name="getcharset"></a> CMFCRibbonFontComboBox::GetCharSet

Returns the specified character set.

```
BYTE GetCharSet() const;
```

### Return Value

Character set (see LOGFONT in the Windows SDK documentation).

### Remarks

## <a name="getfonttype"></a> CMFCRibbonFontComboBox::GetFontType

Returns which font types to display in the combo box. Valid options are DEVICE_FONTTYPE, RASTER_FONTTYPE, and TRUETYPE_FONTTYPE, or any bitwise combination thereof.

```
int GetFontType() const;
```

### Return Value

Font types (see EnumFontFamProc in the Windows SDK documentation).

### Remarks

## <a name="getpitchandfamily"></a> CMFCRibbonFontComboBox::GetPitchAndFamily

Returns the pitch and the family of the fonts that are displayed in the combo box.

```
BYTE GetPitchAndFamily() const;
```

### Return Value

Pitch and the family (see LOGFONT in the Windows SDK documentation).

### Remarks

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CMFCRibbonComboBox Class](../../mfc/reference/cmfcribboncombobox-class.md)
