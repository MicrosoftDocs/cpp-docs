---
description: "Learn more about: Using an Image List"
title: "Using an Image List"
ms.date: "11/04/2016"
helpviewer_keywords: ["lists [MFC], image", "CImageList class [MFC], using", "image lists [MFC]"]
ms.topic: concept-article
---
# Using an Image List

>[!NOTE]
> The Microsoft Foundation Classes (MFC) library continues to be supported. However, we're no longer adding features or updating the documentation.

Typical usage of an image list follows the pattern below:

- Construct a [CImageList](../mfc/reference/cimagelist-class.md) object and call one of the overloads of its [Create](../mfc/reference/cimagelist-class.md#create) function to create an image list and attach it to the `CImageList` object.

- If you didn't add images when you created the image list, add images to the image list by calling the [Add](../mfc/reference/cimagelist-class.md#add) or [Read](../mfc/reference/cimagelist-class.md#read) member function.

- Associate the image list with a control by calling the appropriate member function of that control, or draw images from the image list yourself using the image list's [Draw](../mfc/reference/cimagelist-class.md#draw) member function.

- Perhaps allow the user to drag an image, using the image list's built-in support for dragging.

> [!NOTE]
> If the image list was created with the **`new`** operator, you must destroy the `CImageList` object when you are done with it.

## See also

[Using CImageList](../mfc/using-cimagelist.md)<br/>
[Controls](../mfc/controls-mfc.md)
