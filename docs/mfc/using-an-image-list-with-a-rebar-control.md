---
description: "Learn more about: Using an Image List with a Rebar Control"
title: "Using an Image List with a Rebar Control"
ms.date: "11/04/2016"
helpviewer_keywords: ["image lists [MFC], rebar controls", "rebar controls [MFC], image lists"]
ms.assetid: 1a5836ac-019a-46aa-8741-b35c3376b839
---
# Using an Image List with a Rebar Control

Each rebar band can contain, among other things, an image from an associated image list. The following procedure details the necessary steps for displaying an image in a rebar band.

### To display images in a rebar band

1. Attach an image list to your rebar control object by making a call to [SetImageList](../mfc/reference/crebarctrl-class.md#setimagelist), passing a pointer to an existing image list.

1. Modify the **REBARBANDINFO** structure to assign an image to a rebar band:

   - Set the *fMask* member to `RBBIM_IMAGE`, using the bitwise OR operator to include additional flags as necessary.

   - Set the *iImage* member to the image list index of the image to be displayed.

1. Initialize any remaining data members, such as the size, text, and handle of the contained child window, with the necessary information.

1. Insert the new band (with the image) with a call to [CReBarCtrl::InsertBand](../mfc/reference/crebarctrl-class.md#insertband), passing the **REBARBANDINFO** structure.

The following example assumes that an existing image list object with two images was attached to the rebar control object (`m_wndReBar`). A new rebar band (defined by `rbi`), containing the first image, is added with a call to `InsertBand`:

[!code-cpp[NVC_MFCControlLadenDialog#28](../mfc/codesnippet/cpp/using-an-image-list-with-a-rebar-control_1.cpp)]

## See also

[Using CReBarCtrl](../mfc/using-crebarctrl.md)<br/>
[Controls](../mfc/controls-mfc.md)
