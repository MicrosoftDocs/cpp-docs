---
description: "Learn more about: Providing Drag-and-Drop Support for Header Items"
title: "Providing Drag-and-Drop Support for Header Items"
ms.date: "11/04/2016"
helpviewer_keywords: ["HDS_DRAGDROP style", "header items in header controls", "CHeaderCtrl class [MFC], drag and drop support", "HDN_ notifications [MFC]"]
ms.assetid: 93a152ec-804f-488f-b260-b3a438d0dc0f
---
# Providing Drag-and-Drop Support for Header Items

To provide drag-and-drop support for header items, specify the HDS_DRAGDROP style. Drag-and-drop support for header items gives the user the ability to reorder the header items of a header control. The default behavior provides a semitransparent drag image of the header item being dragged and a visual indicator of the new position, if the header item is dropped.

As with common drag-and-drop functionality, you can extend the default drag-and-drop behavior by handling the HDN_BEGINDRAG and HDN_ENDDRAG notifications. You can also customize the appearance of the drag image by overriding the [CHeaderCtrl::CreateDragImage](../mfc/reference/cheaderctrl-class.md#createdragimage) member function.

> [!NOTE]
> If you are providing drag-and-drop support for an embedded header control in a list control, see the Extended Style section in the [Changing List Control Styles](../mfc/changing-list-control-styles.md) topic.

## See also

[Using CHeaderCtrl](../mfc/using-cheaderctrl.md)
