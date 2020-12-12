---
description: "Learn more about: Property Sheets and Property Pages in MFC"
title: "Property Sheets and Property Pages in MFC"
ms.date: "11/04/2016"
helpviewer_keywords: ["property pages [MFC], MFC", "controls [MFC], property sheets", "property sheets, MFC", "tab dialog boxes"]
ms.assetid: e1bede2b-0285-4b88-a052-0f8a372807a2
---
# Property Sheets and Property Pages in MFC

A property sheet, also known as a tab dialog box, is a dialog box that contains property pages. Each property page is based on a dialog template resource and contains controls. It is enclosed on a page with a tab on top. The tab names the page and indicates its purpose. Users click a tab in the property sheet to select a set of controls.

Use pages to group the controls in the property sheet into meaningful sets. The contained property sheet typically has several controls of its own. These apply to all pages.

Property sheets are based on class [CPropertySheet](../mfc/reference/cpropertysheet-class.md). Property pages are based on class [CPropertyPage](../mfc/reference/cpropertypage-class.md).

A property sheet is a special kind of dialog box that is generally used to modify the attributes of some external object, such as the current selection in a view. The property sheet has three main parts: the containing dialog box, one or more property pages shown one at a time, and a tab at the top of each page that the user clicks to select that page. Property sheets are useful for situations where you have several similar groups of settings or options to change. A property sheet groups information in an easily understood manner.

> [!NOTE]
> When you are trying to show a property sheet by using `CPropertySheet::DoModal`, the system might generate a first-chance exception. This exception occurs because the system is trying to change the [Window Styles](../mfc/reference/styles-used-by-mfc.md#window-styles) of the object before the object has been created. For more information about this exception, and also how to avoid it or handle it, see [CPropertySheet::DoModal](../mfc/reference/cpropertysheet-class.md#domodal).

## See also

[Property Sheets](../mfc/property-sheets-mfc.md)
