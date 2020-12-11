---
description: "Learn more about: Using Image Lists with Header Controls"
title: "Using Image Lists with Header Controls"
ms.date: "11/04/2016"
helpviewer_keywords: ["header controls [MFC], image lists", "CHeaderCtrl class [MFC], image lists", "image lists [MFC], header controls"]
ms.assetid: d5e9b310-6278-406c-909c-eefa09549a47
---
# Using Image Lists with Header Controls

Header items have the ability to display an image within a header item. This image, stored in an associated image list, is 16 x 16 pixels and has the same characteristics as the icon images used in a list view control. In order to implement this behavior successfully, you must first create and initialize the image list, associate the list with the header control, and then modify the attributes of the header item that will display the image.

The following procedure illustrates the details, using a pointer to a header control (`m_pHdrCtrl`) and a pointer to an image list (`m_pHdrImages`).

### To display an image in a header item

1. Construct a new image list (or use an existing image list object) using the [CImageList](../mfc/reference/cimagelist-class.md) constructor, storing the resultant pointer.

1. Initialize the new image list object by calling [CImageList::Create](../mfc/reference/cimagelist-class.md#create). The following code is one example of this call.

   [!code-cpp[NVC_MFCControlLadenDialog#15](../mfc/codesnippet/cpp/using-image-lists-with-header-controls_1.cpp)]

1. Add the images for each header item. The following code adds two predefined images.

   [!code-cpp[NVC_MFCControlLadenDialog#16](../mfc/codesnippet/cpp/using-image-lists-with-header-controls_2.cpp)]

1. Associate the image list with the header control with a call to [CHeaderCtrl::SetImageList](../mfc/reference/cheaderctrl-class.md#setimagelist).

1. Modify the header item to display an image from the associated image list. The following example assigns the first image, from `m_phdrImages`, to the first header item, `m_pHdrCtrl`.

   [!code-cpp[NVC_MFCControlLadenDialog#17](../mfc/codesnippet/cpp/using-image-lists-with-header-controls_3.cpp)]

For detailed information on the parameter values used, consult the pertinent [CHeaderCtrl](../mfc/reference/cheaderctrl-class.md).

> [!NOTE]
> It is possible to have multiple controls using the same image list. For instance, in a standard list view control, there could be an image list (of 16 x 16 pixel images) used by both the small icon view of a list view control and the header items of the list view control.

## See also

[Using CHeaderCtrl](../mfc/using-cheaderctrl.md)
