---
description: "Learn more about: Header Items in a Header Control"
title: "Header Items in a Header Control"
ms.date: "11/04/2016"
helpviewer_keywords: ["header controls [MFC], header items in", "header items in header controls [MFC]", "CHeaderCtrl class [MFC], header items in", "controls [MFC], header"]
ms.assetid: ac79ef1f-a671-4ab2-93e9-b1aa016a48bf
---
# Header Items in a Header Control

You have considerable control over the appearance and behavior of the header items that make up a header control ([CHeaderCtrl](reference/cheaderctrl-class.md)). Each header item can have a string, a bitmapped image, an image from an associated image list, or an application-defined 32-bit value associated with it. The string, bitmap, or image is displayed in the header item.

You can customize the appearance and contents of new items when they are created by making a call [CHeaderCtrl::InsertItem](reference/cheaderctrl-class.md#insertitem) or by modifying an existing item, with a call to [CHeaderCtrl::GetItem](reference/cheaderctrl-class.md#getitem) and [CHeaderCtrl::SetItem](reference/cheaderctrl-class.md#setitem).

## What do you want to know more about

- [Customizing the header item's appearance](customizing-the-header-item-s-appearance.md)

- [Ordering items in the header control](ordering-items-in-the-header-control.md)

- [Providing drag-and-drop support for the header items](providing-drag-and-drop-support-for-header-items.md)

- [Using image lists with header controls](using-image-lists-with-header-controls.md)

## See also

[Using CHeaderCtrl](using-cheaderctrl.md)
