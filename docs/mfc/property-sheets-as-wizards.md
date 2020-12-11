---
description: "Learn more about: Property Sheets as Wizards"
title: "Property Sheets as Wizards"
ms.date: "11/04/2016"
helpviewer_keywords: ["property sheets, as wizards"]
ms.assetid: 1ea66ecb-23b0-484a-838d-58671a2999b5
---
# Property Sheets as Wizards

A key characteristic of a wizard property sheet is that navigation is provided with Next or Finish, Back, and Cancel buttons instead of tabs. You need to call [CPropertySheet::SetWizardMode](../mfc/reference/cpropertysheet-class.md#setwizardmode) before calling [CPropertySheet::DoModal](../mfc/reference/cpropertysheet-class.md#domodal) on the property sheet object to take advantage of this feature.

The user receives the same [CPropertyPage::OnSetActive](../mfc/reference/cpropertypage-class.md#onsetactive) and [CPropertyPage::OnKillActive](../mfc/reference/cpropertypage-class.md#onkillactive) notifications while moving from one page to another page. Next and Finish buttons are mutually exclusive controls; that is, only one of them will be shown at a time. On the first page, the Next button should be enabled. If the user is on the last page, the Finish button should be enabled. This is not done automatically by the framework. You have to call [CPropertySheet::SetWizardButton](../mfc/reference/cpropertysheet-class.md#setwizardbuttons) on the last page to achieve this.

To display all of the default buttons, you mush show the Finish button and move the Next button. Then move the Back button so that its relative position to the Next button is maintained.

## Example

[!code-cpp[NVC_MFCDocView#5](../mfc/codesnippet/cpp/property-sheets-as-wizards_1.cpp)]

## See also

[Property Sheets](../mfc/property-sheets-mfc.md)
