---
title: "Adding Controls to a Property Sheet | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["controls [MFC], adding to property sheets", "property sheets, adding controls"]
ms.assetid: 24ad4c0b-c1db-4850-b9f0-34aae8d74571
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Adding Controls to a Property Sheet
By default, a property sheet allocates window area for the property pages, the tab index, and the OK, Cancel, and Apply buttons. (A modeless property sheet does not have the OK, Cancel, and Apply buttons.) You can add other controls to the property sheet. For example, you can add a preview window to the right of the property page area to show the user what the current settings would look like if applied to an external object.  
  
 You can add controls to the property sheet dialog in the `OnCreate` handler. Accommodating additional controls usually requires expanding the size of the property sheet dialog. After calling the base class **CPropertySheet::OnCreate**, call [GetWindowRect](../mfc/reference/cwnd-class.md#getwindowrect) to get the width and height of the currently allocated property sheet window, expand the rectangle's dimensions, and call [MoveWindow](../mfc/reference/cwnd-class.md#movewindow) to change the size of the property sheet window.  
  
## See Also  
 [Property Sheets](../mfc/property-sheets-mfc.md)   
 [CPropertyPage Class](../mfc/reference/cpropertypage-class.md)   
 [CPropertySheet Class](../mfc/reference/cpropertysheet-class.md)
