---
title: "Exchanging Data | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["property sheets [MFC], data exchange", "exchanging data with property sheets [MFC]", "DDX (dialog data exchange) [MFC], property sheets"]
ms.assetid: 689f02d0-51a9-455b-8ffb-5b44f0aefa28
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Exchanging Data
As with most dialog boxes, the exchange of data between the property sheet and the application is one of the most important functions of the property sheet. This article describes how to accomplish this task.  
  
 Exchanging data with a property sheet is actually a matter of exchanging data with the individual property pages of the property sheet. The procedure for exchanging data with a property page is the same as for exchanging data with a dialog box, since a [CPropertyPage](../mfc/reference/cpropertypage-class.md) object is just a specialized [CDialog](../mfc/reference/cdialog-class.md) object. The procedure takes advantage of the framework's dialog data exchange (DDX) facility, which exchanges data between controls in a dialog box and member variables of the dialog box object.  
  
 The important difference between exchanging data with a property sheet and with a normal dialog box is that the property sheet has multiple pages, so you must exchange data with all the pages in the property sheet. For more information on DDX, see [Dialog Data Exchange and Validation](../mfc/dialog-data-exchange-and-validation.md).  
  
 The following example illustrates exchanging data between a view and two pages of a property sheet:  
  
 [!code-cpp[NVC_MFCDocView#4](../mfc/codesnippet/cpp/exchanging-data_1.cpp)]  
  
## See Also  
 [Property Sheets](../mfc/property-sheets-mfc.md)

