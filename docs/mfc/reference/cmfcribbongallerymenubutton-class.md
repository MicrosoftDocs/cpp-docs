---
description: "Learn more about: CMFCRibbonGalleryMenuButton Class"
title: "CMFCRibbonGalleryMenuButton Class"
ms.date: "11/04/2016"
f1_keywords: ["CMFCRibbonGalleryMenuButton", "AFXRIBBONPALETTEGALLERY/CMFCRibbonGalleryMenuButton", "AFXRIBBONPALETTEGALLERY/CMFCRibbonGalleryMenuButton::CMFCRibbonGalleryMenuButton", "AFXRIBBONPALETTEGALLERY/CMFCRibbonGalleryMenuButton::CopyFrom", "AFXRIBBONPALETTEGALLERY/CMFCRibbonGalleryMenuButton::CreatePopupMenu", "AFXRIBBONPALETTEGALLERY/CMFCRibbonGalleryMenuButton::GetPalette", "AFXRIBBONPALETTEGALLERY/CMFCRibbonGalleryMenuButton::HasButton", "AFXRIBBONPALETTEGALLERY/CMFCRibbonGalleryMenuButton::IsEmptyMenuAllowed"]
helpviewer_keywords: ["CMFCRibbonGalleryMenuButton [MFC], CMFCRibbonGalleryMenuButton", "CMFCRibbonGalleryMenuButton [MFC], CopyFrom", "CMFCRibbonGalleryMenuButton [MFC], CreatePopupMenu", "CMFCRibbonGalleryMenuButton [MFC], GetPalette", "CMFCRibbonGalleryMenuButton [MFC], HasButton", "CMFCRibbonGalleryMenuButton [MFC], IsEmptyMenuAllowed"]
ms.assetid: 4d459d9b-8b1a-4371-92f6-dc4ce6cc42c8
---
# CMFCRibbonGalleryMenuButton Class

Implements a ribbon menu button that contains ribbon galleries.
For more detail see the source code located in the **VC\\atlmfc\\src\\mfc** folder of your Visual Studio installation.

## Syntax

```
class CMFCRibbonGalleryMenuButton : public CMFCToolBarMenuButton
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CMFCRibbonGalleryMenuButton::CMFCRibbonGalleryMenuButton](#cmfcribbongallerymenubutton)|Constructs and initializes a `CMFCRibbonGalleryMenuButton` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMFCRibbonGalleryMenuButton::CopyFrom](#copyfrom)|(Overrides [CMFCToolBarMenuButton::CopyFrom](../../mfc/reference/cmfctoolbarmenubutton-class.md#copyfrom).)|
|[CMFCRibbonGalleryMenuButton::CreatePopupMenu](#createpopupmenu)|(Overrides [CMFCToolBarMenuButton::CreatePopupMenu](../../mfc/reference/cmfctoolbarmenubutton-class.md#createpopupmenu).)|
|[CMFCRibbonGalleryMenuButton::GetPalette](#getpalette)||
|[CMFCRibbonGalleryMenuButton::HasButton](#hasbutton)|(Overrides `CMFCToolBarMenuButton::HasButton`.)|
|[CMFCRibbonGalleryMenuButton::IsEmptyMenuAllowed](#isemptymenuallowed)|(Overrides [CMFCToolBarMenuButton::IsEmptyMenuAllowed](../../mfc/reference/cmfctoolbarmenubutton-class.md#isemptymenuallowed).)|

### Remarks

The gallery menu button is displayed as a pop-up menu with an arrow. When the user clicks this button, a gallery of images is displayed. When you construct a gallery menu button, you must specify an image list that contains those images.

## Example

The following example demonstrates how to display a gallery of bullets in a menu button:

```cpp
BOOL CMainFrame::OnShowPopupMenu (CMFCPopupMenu* pMenuPopup)
{
    int nBulletIndex = pMenuBar->CommandToIndex (ID_PARA_BULLETS);

    if (nBulletIndex>= 0)
    {
        CMFCToolBarButton* pExButton =
        pMenuBar->GetButton(nBulletIndex);
        ASSERT_VALID (pExButton);

        CMFCRibbonGalleryMenuButton paletteBullet (
        pExButton->m_nID,
        pExButton->GetImage (),
        pExButton->m_strText);

        InitBulletPalette (&paletteBullet.GetPalette ());

        pMenuBar->ReplaceButton (ID_PARA_BULLETS,
        paletteBullet);
    }
}
```

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)\
└&nbsp;[CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)\
&nbsp;&nbsp;&nbsp;&nbsp;└&nbsp;[CMFCToolBarMenuButton](../../mfc/reference/cmfctoolbarmenubutton-class.md)\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;└&nbsp;[CMFCRibbonGalleryMenuButton](../../mfc/reference/cmfcribbongallerymenubutton-class.md)

## Requirements

**Header:** afxRibbonPaletteGallery.h

## <a name="copyfrom"></a> CMFCRibbonGalleryMenuButton::CopyFrom

```
virtual void CopyFrom(const CMFCToolBarButton& src);
```

### Parameters

[in] *src*<br/>

### Remarks

## <a name="cmfcribbongallerymenubutton"></a> CMFCRibbonGalleryMenuButton::CMFCRibbonGalleryMenuButton

Constructs and initializes a [CMFCRibbonGalleryMenuButton](../../mfc/reference/cmfcribbongallerymenubutton-class.md) object.

```
CMFCRibbonGalleryMenuButton(
    UINT uiID,
    int iImage,
    LPCTSTR lpszText,
    CMFCToolBarImages& imagesPalette);

CMFCRibbonGalleryMenuButton(
    UINT uiID,
    int iImage,
    LPCTSTR lpszText,
    UINT uiImagesPaletteResID = 0,
    int cxPaletteImage = 0);
```

### Parameters

*uiID*<br/>
The command ID of the button. This is the value sent in the WM_COMMAND message when the user clicks this button.

*iImage*<br/>
The index of the image to display with the gallery menu button. The images are stored in the *imagesPalette* parameter.

*lpszText*<br/>
The text to display on the menu button.

*imagesPalette*<br/>
Contains the list of images to display on the gallery.

*uiImagesPaletteResID*<br/>
The resource ID of the image list for the images to display on the gallery.

*cxPaletteImage*<br/>
Specifies the width in pixels of the image to display on the gallery.

### Remarks

The gallery menu button is displayed as a pop-up menu that has an arrow. When the user clicks this button, a gallery of images is displayed.

### Example

The following example demonstrates how to use the constructor of the `CMFCRibbonGalleryMenuButton` class. This code snippet is part of the [MS Office 2007 Demo sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_MSOffice2007Demo#8](../../mfc/reference/codesnippet/cpp/cmfcribbongallerymenubutton-class_1.cpp)]

## <a name="createpopupmenu"></a> CMFCRibbonGalleryMenuButton::CreatePopupMenu

```
virtual CMFCPopupMenu* CreatePopupMenu();
```

### Return Value

### Remarks

## <a name="getpalette"></a> CMFCRibbonGalleryMenuButton::GetPalette

```
CMFCRibbonGallery& GetPalette();
```

### Return Value

### Remarks

## <a name="hasbutton"></a> CMFCRibbonGalleryMenuButton::HasButton

```
virtual BOOL HasButton() const;
```

### Return Value

### Remarks

## <a name="isemptymenuallowed"></a> CMFCRibbonGalleryMenuButton::IsEmptyMenuAllowed

```
virtual BOOL IsEmptyMenuAllowed() const;
```

### Return Value

### Remarks

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CMFCToolBarMenuButton Class](../../mfc/reference/cmfctoolbarmenubutton-class.md)<br/>
[CMFCRibbonGallery Class](../../mfc/reference/cmfcribbongallery-class.md)
