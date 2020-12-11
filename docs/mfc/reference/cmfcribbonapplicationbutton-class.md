---
description: "Learn more about: CMFCRibbonApplicationButton Class"
title: "CMFCRibbonApplicationButton Class"
ms.date: "11/04/2016"
f1_keywords: ["CMFCRibbonApplicationButton", "AFXRIBBONBAR/CMFCRibbonApplicationButton", "AFXRIBBONBAR/CMFCRibbonApplicationButton::CMFCRibbonApplicationButton", "AFXRIBBONBAR/CMFCRibbonApplicationButton::SetImage"]
helpviewer_keywords: ["CMFCRibbonApplicationButton [MFC], CMFCRibbonApplicationButton", "CMFCRibbonApplicationButton [MFC], SetImage"]
ms.assetid: beb81757-fabd-4641-9130-876ba8505b78
---
# CMFCRibbonApplicationButton Class

Implements a special button located in the top-left corner of the application window. When clicked, the button opens a menu that usually contains common **File** commands like **Open**, **Save**, and **Exit**.

## Syntax

```
class CMFCRibbonApplicationButton : public CMFCRibbonButton
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CMFCRibbonApplicationButton::CMFCRibbonApplicationButton](#cmfcribbonapplicationbutton)|Constructs and initializes a `CMFCRibbonApplicationButton` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|`CMFCRibbonApplicationButton::CreateObject`|Used by the framework to create a dynamic instance of this class type.|
|`CMFCRibbonApplicationButton::GetThisClass`|Used by the framework to obtain a pointer to the [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) object that is associated with this class type.|
|[CMFCRibbonApplicationButton::SetImage](#setimage)|Assigns an image to the ribbon application button.|

## Example

The following example demonstrates how to use various methods in the `CMFCRibbonApplicationButton` class. The example shows how to assign an image to the application button, and how to set its tooltip. This code snippet is part of the [Draw Client sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_DrawClient#4](../../mfc/reference/codesnippet/cpp/cmfcribbonapplicationbutton-class_1.h)]
[!code-cpp[NVC_MFC_DrawClient#5](../../mfc/reference/codesnippet/cpp/cmfcribbonapplicationbutton-class_2.cpp)]

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)

[CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)

[CMFCRibbonApplicationButton](../../mfc/reference/cmfcribbonapplicationbutton-class.md)

## Requirements

**Header:** afxRibbonBar.h

## <a name="cmfcribbonapplicationbutton"></a> CMFCRibbonApplicationButton::CMFCRibbonApplicationButton

Constructs and initializes a [CMFCRibbonApplicationButton](../../mfc/reference/cmfcribbonapplicationbutton-class.md) object.

```
CMFCRibbonApplicationButton();
CMFCRibbonApplicationButton(UINT uiBmpResID);
CMFCRibbonApplicationButton(HBITMAP hBmp);
```

### Parameters

*uiBmpResID*<br/>
The resource ID of the image to display on the application button.

*hBmp*<br/>
A handle to a bitmap to display on the application button.

### Remarks

The ribbon application button is a special button that is located in the upper-left corner of the application window. When a user clicks this button, the application opens a menu that usually contains common **File** commands, such as **Open**, **Save**, and **Exit**.

## <a name="setimage"></a> CMFCRibbonApplicationButton::SetImage

Assigns an image to the application button.

```cpp
void SetImage(UINT uiBmpResID);
void SetImage(HBITMAP hBmp);
```

### Parameters

*uiBmpResID*<br/>
[in] The resource ID of the image to display on the application button.

*hBmp*<br/>
[in] A handle to a bitmap to display on the application button.

### Remarks

Use this method to assign a new image to the ribbon application button after you create the button. The application button is located in the upper-left corner of the application window.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CMFCRibbonButton Class](../../mfc/reference/cmfcribbonbutton-class.md)
