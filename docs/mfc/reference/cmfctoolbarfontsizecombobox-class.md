---
description: "Learn more about: CMFCToolBarFontSizeComboBox Class"
title: "CMFCToolBarFontSizeComboBox Class"
ms.date: "11/04/2016"
f1_keywords: ["CMFCToolBarFontSizeComboBox", "AFXTOOLBARFONTCOMBOBOX/CMFCToolBarFontSizeComboBox", "AFXTOOLBARFONTCOMBOBOX/CMFCToolBarFontSizeComboBox::CMFCToolBarFontSizeComboBox", "AFXTOOLBARFONTCOMBOBOX/CMFCToolBarFontSizeComboBox::GetTwipSize", "AFXTOOLBARFONTCOMBOBOX/CMFCToolBarFontSizeComboBox::RebuildFontSizes", "AFXTOOLBARFONTCOMBOBOX/CMFCToolBarFontSizeComboBox::SetTwipSize"]
helpviewer_keywords: ["CMFCToolBarFontSizeComboBox [MFC], CMFCToolBarFontSizeComboBox", "CMFCToolBarFontSizeComboBox [MFC], GetTwipSize", "CMFCToolBarFontSizeComboBox [MFC], RebuildFontSizes", "CMFCToolBarFontSizeComboBox [MFC], SetTwipSize"]
ms.assetid: 72e0c44c-6a0e-4194-a71f-ab64e3afb9b5
---
# CMFCToolBarFontSizeComboBox Class

A toolbar button that contains a combo box control that enables the user to select a font size.

## Syntax

```
class CMFCToolBarFontSizeComboBox : public CMFCToolBarComboBoxButton
```

## Members

### Protected Constructors

|Name|Description|
|----------|-----------------|
|[CMFCToolBarFontSizeComboBox::CMFCToolBarFontSizeComboBox](#cmfctoolbarfontsizecombobox)|Constructs a `CMFCToolBarFontSizeComboBox` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMFCToolBarFontSizeComboBox::GetTwipSize](#gettwipsize)|Returns the selected font size in twips.|
|[CMFCToolBarFontSizeComboBox::RebuildFontSizes](#rebuildfontsizes)|Fills the combo box list with all supported font sizes for a specified font.|
|[CMFCToolBarFontSizeComboBox::SetTwipSize](#settwipsize)|Sets the font size in twips.|

## Remarks

You can use a `CMFCToolBarFontSizeComboBox` object together with a [CMFCToolBarFontComboBox Class](../../mfc/reference/cmfctoolbarfontcombobox-class.md) object to enable a user to select a font and font size.

You can add a font size combo box button to a toolbar just as you add a font combo box button. For more information, see [CMFCToolBarFontComboBox Class](../../mfc/reference/cmfctoolbarfontcombobox-class.md).

When the user selects a new font in a `CMFCToolBarFontComboBox` object, you can fill the font size combo box with the supported sizes for that font by using the [CMFCToolBarFontSizeComboBox::RebuildFontSizes](#rebuildfontsizes) method.

## Example

The following example demonstrates how to use various methods in the `CMFCToolBarFontSizeComboBox` class to configure a `CMFCToolBarFontSizeComboBox` object. The example illustrates how to retrieve the font size, in twips, from the text box, fill the font size combo box with all valid sizes of the given font, and specify the font size in twips. This code snippet is part of the [Word Pad sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_WordPad#8](../../mfc/reference/codesnippet/cpp/cmfctoolbarfontsizecombobox-class_1.cpp)]

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)

[CMFCToolBarComboBoxButton](../../mfc/reference/cmfctoolbarcomboboxbutton-class.md)

[CMFCToolBarFontSizeComboBox](../../mfc/reference/cmfctoolbarfontsizecombobox-class.md)

## Requirements

**Header:** afxtoolbarfontcombobox.h

## <a name="cmfctoolbarfontsizecombobox"></a> CMFCToolBarFontSizeComboBox::CMFCToolBarFontSizeComboBox

Constructs a `CMFCToolBarFontSizeComboBox` object.

```
CMFCToolBarFontSizeComboBox();
```

## <a name="gettwipsize"></a> CMFCToolBarFontSizeComboBox::GetTwipSize

Retrieves the font size, in twips, from the text box of a font size combo box.

```
int GetTwipSize() const;
```

### Return Value

If the return value is positive, it is the font size in twips. It is -1 if the text box of the combo box is empty. It is -2 if an error occurs.

## <a name="rebuildfontsizes"></a> CMFCToolBarFontSizeComboBox::RebuildFontSizes

Fills a font size combo box with all valid sizes of the given font.

```cpp
void RebuildFontSizes(const CString& strFontName);
```

### Parameters

*strFontName*<br/>
[in] Specifies a font name.

### Remarks

Call this function when you want to synchronize between selection in a font combo box and a font size combo box, such as a [CMFCToolBarFontComboBox Class](../../mfc/reference/cmfctoolbarfontcombobox-class.md).

## <a name="settwipsize"></a> CMFCToolBarFontSizeComboBox::SetTwipSize

Rounds the specified size (in twips) to the nearest size in points, and then sets the selected size in the combo box to that value.

```cpp
void SetTwipSize(int nSize);
```

### Parameters

*nSize*<br/>
[in] Specifies the font size (in twips) to set.

### Remarks

You can retrieve the previous valid font size later by calling the [CMFCToolBarFontSizeComboBox::GetTwipSize](#gettwipsize) method.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CMFCToolBar Class](../../mfc/reference/cmfctoolbar-class.md)<br/>
[CMFCToolBarButton Class](../../mfc/reference/cmfctoolbarbutton-class.md)<br/>
[CMFCToolBarComboBoxButton Class](../../mfc/reference/cmfctoolbarcomboboxbutton-class.md)<br/>
[CMFCFontInfo Class](../../mfc/reference/cmfcfontinfo-class.md)<br/>
[CMFCToolBar::ReplaceButton](../../mfc/reference/cmfctoolbar-class.md#replacebutton)<br/>
[Walkthrough: Putting Controls On Toolbars](../../mfc/walkthrough-putting-controls-on-toolbars.md)
