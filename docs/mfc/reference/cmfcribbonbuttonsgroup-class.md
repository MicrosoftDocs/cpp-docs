---
description: "Learn more about: CMFCRibbonButtonsGroup Class"
title: "CMFCRibbonButtonsGroup Class"
ms.date: "11/04/2016"
f1_keywords: ["CMFCRibbonButtonsGroup", "AFXRIBBONBUTTONSGROUP/CMFCRibbonButtonsGroup", "AFXRIBBONBUTTONSGROUP/CMFCRibbonButtonsGroup::CMFCRibbonButtonsGroup", "AFXRIBBONBUTTONSGROUP/CMFCRibbonButtonsGroup::AddButton", "AFXRIBBONBUTTONSGROUP/CMFCRibbonButtonsGroup::AddButtons", "AFXRIBBONBUTTONSGROUP/CMFCRibbonButtonsGroup::GetButton", "AFXRIBBONBUTTONSGROUP/CMFCRibbonButtonsGroup::GetCount", "AFXRIBBONBUTTONSGROUP/CMFCRibbonButtonsGroup::GetImageSize", "AFXRIBBONBUTTONSGROUP/CMFCRibbonButtonsGroup::GetRegularSize", "AFXRIBBONBUTTONSGROUP/CMFCRibbonButtonsGroup::HasImages", "AFXRIBBONBUTTONSGROUP/CMFCRibbonButtonsGroup::OnDrawImage", "AFXRIBBONBUTTONSGROUP/CMFCRibbonButtonsGroup::RemoveAll", "AFXRIBBONBUTTONSGROUP/CMFCRibbonButtonsGroup::SetImages", "AFXRIBBONBUTTONSGROUP/CMFCRibbonButtonsGroup::SetParentCategory"]
helpviewer_keywords: ["CMFCRibbonButtonsGroup [MFC], CMFCRibbonButtonsGroup", "CMFCRibbonButtonsGroup [MFC], AddButton", "CMFCRibbonButtonsGroup [MFC], AddButtons", "CMFCRibbonButtonsGroup [MFC], GetButton", "CMFCRibbonButtonsGroup [MFC], GetCount", "CMFCRibbonButtonsGroup [MFC], GetImageSize", "CMFCRibbonButtonsGroup [MFC], GetRegularSize", "CMFCRibbonButtonsGroup [MFC], HasImages", "CMFCRibbonButtonsGroup [MFC], OnDrawImage", "CMFCRibbonButtonsGroup [MFC], RemoveAll", "CMFCRibbonButtonsGroup [MFC], SetImages", "CMFCRibbonButtonsGroup [MFC], SetParentCategory"]
ms.assetid: b993d93e-fc1a-472f-a87f-1d7b7b499845
---
# CMFCRibbonButtonsGroup Class

The `CMFCRibbonButtonsGroup` class allows you to organize a set of ribbon buttons into a group. All buttons in the group are directly adjacent to each other horizontally and enclosed in a border.

## Syntax

```
class CMFCRibbonButtonsGroup : public CMFCRibbonBaseElement
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CMFCRibbonButtonsGroup::CMFCRibbonButtonsGroup](#cmfcribbonbuttonsgroup)|Constructs a `CMFCRibbonButtonsGroup` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMFCRibbonButtonsGroup::AddButton](#addbutton)|Adds a button to a group.|
|[CMFCRibbonButtonsGroup::AddButtons](#addbuttons)|Adds a list of buttons to a group.|
|[CMFCRibbonButtonsGroup::GetButton](#getbutton)|Returns a pointer to the button that is located at a specified index.|
|[CMFCRibbonButtonsGroup::GetCount](#getcount)|Returns the number of buttons in the group.|
|[CMFCRibbonButtonsGroup::GetImageSize](#getimagesize)|Returns the image size of the normal images in the ribbon group (overrides [CMFCRibbonBaseElement::GetImageSize](../../mfc/reference/cmfcribbonbaseelement-class.md#getimagesize).)|
|[CMFCRibbonButtonsGroup::GetRegularSize](#getregularsize)|Returns the regular size of the ribbon element (overrides [CMFCRibbonBaseElement::GetRegularSize](../../mfc/reference/cmfcribbonbaseelement-class.md#getregularsize).)|
|[CMFCRibbonButtonsGroup::HasImages](#hasimages)|Reports whether the `CMFCRibbonButtonsGroup` object contains toolbar images.|
|[CMFCRibbonButtonsGroup::OnDrawImage](#ondrawimage)|Draws the appropriate image for a specified button, depending on whether the button is normal, highlighted or disabled.|
|[CMFCRibbonButtonsGroup::RemoveAll](#removeall)|Removes all buttons from the `CMFCRibbonButtonsGroup` object.|
|[CMFCRibbonButtonsGroup::SetImages](#setimages)|Assigns images to the group.|
|[CMFCRibbonButtonsGroup::SetParentCategory](#setparentcategory)|Sets the parent `CMFCRibbonCategory` of the `CMFCRibbonButtonsGroup` object and all the buttons within it (overrides [CMFCRibbonBaseElement::SetParentCategory](../../mfc/reference/cmfcribbonbaseelement-class.md#setparentcategory).)|

## Remarks

The group is derived from [CMFCBaseRibbonElement](../../mfc/reference/cmfcribbonbaseelement-class.md) and can be manipulated as a single entity. You can position the group on any panel or popup menu.

## Example

The following example demonstrates how to use various methods in the `CMFCRibbonButtonsGroup` class. The example shows how to construct a `CMFCRibbonButtonsGroup` object, assign images to the group of ribbon buttons, and add a button to the group of ribbon buttons. This code snippet is part of the [Draw Client sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_DrawClient#2](../../mfc/reference/codesnippet/cpp/cmfcribbonbuttonsgroup-class_1.cpp)]

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)

[CMFCRibbonButtonsGroup](../../mfc/reference/cmfcribbonbuttonsgroup-class.md)

## Requirements

**Header:** afxribbonbuttonsgroup.h

## <a name="addbutton"></a> CMFCRibbonButtonsGroup::AddButton

Adds a button to a group.

```cpp
void AddButton(CMFCRibbonBaseElement* pButton);
```

### Parameters

*pButton*<br/>
[in] A pointer to a button to add.

## <a name="addbuttons"></a> CMFCRibbonButtonsGroup::AddButtons

Adds a list of buttons to a group.

```cpp
void AddButtons(
    const CList<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>& lstButtons);
```

### Parameters

*lstButtons*<br/>
[in] A list of pointers to the buttons that you want to add.

## <a name="cmfcribbonbuttonsgroup"></a> CMFCRibbonButtonsGroup::CMFCRibbonButtonsGroup

Constructs a `CMFCRibbonButtonsGroup` object.

```
CMFCRibbonButtonsGroup();
CMFCRibbonButtonsGroup(CMFCRibbonBaseElement* pButton);
```

### Parameters

*pButton*<br/>
[in] Specifies a button to add to the newly created `CMFCRibbonButtonsGroup` object.

### Return Value

### Remarks

## <a name="getbutton"></a> CMFCRibbonButtonsGroup::GetButton

Returns a pointer to the button that is located at a specified index.

```
CMFCRibbonBaseElement* GetButton(int i) const;
```

### Parameters

*i*<br/>
[in] A zero-based index of a button to return.

### Return Value

A pointer to the button that is located at the specified index. NULL if the specified index is out of range.

### Remarks

## <a name="getcount"></a> CMFCRibbonButtonsGroup::GetCount

Returns the number of buttons in the group.

```
int GetCount() const;
```

### Return Value

The number of buttons in the group.

## <a name="getimagesize"></a> CMFCRibbonButtonsGroup::GetImageSize

Retrieves the source image size of the protected `CMFCToolBarImages` member `m_Images`.

```
const CSize GetImageSize() const;
```

### Return Value

Returns the source image size of the toolbar images, if any are present, or a `CSize` of zero if not.

### Remarks

## <a name="getregularsize"></a> CMFCRibbonButtonsGroup::GetRegularSize

Retrieves the maximum possible size of the ribbon group element.

```
virtual CSize GetRegularSize(CDC* pDC);
```

### Parameters

*pDC*<br/>
[in] Pointer to the device context of the ribbon group.

### Return Value

### Remarks

## <a name="hasimages"></a> CMFCRibbonButtonsGroup::HasImages

Reports whether the `CMFCRibbonButtonsGroup` object contains toolbar images.

```
BOOL HasImages() const;
```

### Return Value

Returns TRUE if the protected `CMFCToolBarImages` member `m_Images` contains any images, or FALSE if not.

### Remarks

## <a name="ondrawimage"></a> CMFCRibbonButtonsGroup::OnDrawImage

Draws the appropriate image for a specified button, depending on whether the button is normal, highlighted or disabled.

```
virtual void OnDrawImage(
    CDC* pDC,
    CRect rectImage,
    CMFCRibbonBaseElement* pButton,
    int nImageIndex);
```

### Parameters

*pDC*<br/>
[in] Pointer to the device context of the `CMFCRibbonButtonsGroup` object.

*rectImage*<br/>
[in] The rectangle within which to draw the image.

*pButton*<br/>
[in] The button for which to draw the image.

*nImageIndex*<br/>
[in] The index of the image to draw on the button (in one of the three image arrays for normal, highlighted or disabled buttons).

### Remarks

## <a name="removeall"></a> CMFCRibbonButtonsGroup::RemoveAll

Removes all buttons from the `CMFCRibbonButtonsGroup` object.

```cpp
void RemoveAll();
```

### Remarks

## <a name="setimages"></a> CMFCRibbonButtonsGroup::SetImages

Assigns images to the group of ribbon buttons.

```cpp
void SetImages(
    CMFCToolBarImages* pImages,
    CMFCToolBarImages* pHotImages,
    CMFCToolBarImages* pDisabledImages);
```

### Parameters

*pImages*<br/>
[in] Regular images.

*pHotImages*<br/>
[in] Hot images.

*pDisabledImages*<br/>
[in] Disabled images.

### Remarks

Call `SetImages` before you add buttons to a group. The number of images must be greater or equal to the number of buttons to be added to the group.

> [!NOTE]
> Hot images are images that are displayed when the user hovers over the button. Disabled images are images that are displayed when the button is disabled.

## <a name="setparentcategory"></a> CMFCRibbonButtonsGroup::SetParentCategory

Sets the parent `CMFCRibbonCategory` of the `CMFCRibbonButtonsGroup` object and all the buttons within it.

```
virtual void SetParentCategory(CMFCRibbonCategory* pCategory);
```

### Parameters

*pCategory*<br/>
[in] Pointer to the parent category to set (the tabbed groups in ribbon controls are called categories).

### Remarks

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)
