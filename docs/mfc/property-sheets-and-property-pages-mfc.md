---
title: "Property Sheets and Property Pages (MFC) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["MFC dialog boxes [MFC], tabs", "property pages [MFC], property sheets", "CPropertyPage class [MFC], property sheets and pages", "CPropertySheet class [MFC], property sheets and pages", "property sheets, propert pages"]
ms.assetid: de8fea12-6c35-4cef-8625-b8073a379446
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Property Sheets and Property Pages (MFC)
An MFC [dialog box](../mfc/dialog-boxes.md) can take on a "tab dialog" look by incorporating property sheets and property pages. Called a "property sheet" in MFC, this kind of dialog box, similar to many dialog boxes in Microsoft Word, Excel, and Visual C++, appears to contain a stack of tabbed sheets, much like a stack of file folders seen from front to back, or a group of cascaded windows. Controls on the front tab are visible; only the labeled tab is visible on the rear tabs. Property sheets are particularly useful for managing large numbers of properties or settings that fall fairly neatly into several groups. Typically, one property sheet can simplify a user interface by replacing several separate dialog boxes.  
  
 As of MFC version 4.0, property sheets and property pages are implemented using the common controls that come with Windows 95 and Windows NT version 3.51 and later.  
  
 Property sheets are implemented with classes [CPropertySheet](../mfc/reference/cpropertysheet-class.md) and [CPropertyPage](../mfc/reference/cpropertypage-class.md) (described in the *MFC Reference*). `CPropertySheet` defines the overall dialog box, which can contain multiple "pages" based on `CPropertyPage`.  
  
 For information on creating and working with property sheets, see the topic [Property Sheets](../mfc/property-sheets-mfc.md).  
  
## See Also  
 [Dialog Boxes](../mfc/dialog-boxes.md)   
 [Life Cycle of a Dialog Box](../mfc/life-cycle-of-a-dialog-box.md)   
 [Property Sheets and Property Pages in MFC](../mfc/property-sheets-and-property-pages-in-mfc.md)   
 [Exchanging Data](../mfc/exchanging-data.md)   
 [Creating a Modeless Property Sheet](../mfc/creating-a-modeless-property-sheet.md)   
 [Handling the Apply Button](../mfc/handling-the-apply-button.md)

