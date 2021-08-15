---
description: "Learn more about: Classes Related to Rich Edit Controls"
title: "Classes Related to Rich Edit Controls"
ms.date: "11/04/2016"
helpviewer_keywords: ["rich edit controls [MFC], and CRichEditItem", "CRichEditCtrl class [MFC], related classes", "CRichEditDoc class [MFC], Rich Edit controls", "rich edit controls [MFC], classes related to", "classes [MFC], related to rich edit controls", "rich edit controls [MFC], and CRichEditView", "CRichEditCtrlItem class and CRichEditCtrl", "rich edit controls [MFC], and CRichEditDoc", "CRichEditView class [MFC], and CRichEditCtrl"]
ms.assetid: 4b31c2cc-6ea1-4146-b7c5-b0b5b419f14d
---
# Classes Related to Rich Edit Controls

The [CRichEditView](reference/cricheditview-class.md), [CRichEditDoc](reference/cricheditdoc-class.md), and [CRichEditCntrItem](reference/cricheditcntritem-class.md) classes provide the functionality of the rich edit control ([CRichEditCtrl](reference/cricheditctrl-class.md)) within the context of MFC's document/view architecture. `CRichEditView` maintains the text and formatting characteristic of text. `CRichEditDoc` maintains the list of OLE client items that are in the view. `CRichEditCntrItem` provides container-side access to the OLE client item. To modify the contents of a `CRichEditView`, use [CRichEditView::GetRichEditCtrl](reference/cricheditview-class.md#getricheditctrl) to access the underlying rich edit control.

## See also

[Using CRichEditCtrl](using-cricheditctrl.md)<br/>
[Controls](controls-mfc.md)
