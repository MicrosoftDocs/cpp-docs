---
title: "Printing | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: ["C++"]
helpviewer_keywords: ["view classes [MFC], print operations", "documents [MFC], printing", "printing [MFC], from framework", "printing [MFC]"]
ms.assetid: be465e8d-b0c9-4fc5-9fa8-d10486064f76
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# Printing
Microsoft Windows implements device-independent display. In MFC, this means that the same drawing calls, in the `OnDraw` member function of your view class, are responsible for drawing on the display and on other devices, such as printers. For print preview, the target device is a simulated printer output to the display.  
  
##  <a name="_core_your_role_in_printing_vs.._the_framework.92.s_role"></a> Your Role in Printing vs. the Framework's Role  
 Your view class has the following responsibilities:  
  
-   Inform the framework how many pages are in the document.  
  
-   When asked to print a specified page, draw that portion of the document.  
  
-   Allocate and deallocate any fonts or other graphics device interface (GDI) resources needed for printing.  
  
-   If necessary, send any escape codes needed to change the printer mode before printing a given page, for example, to change the printing orientation on a per-page basis.  
  
 The framework's responsibilities are as follows:  
  
-   Display the **Print** dialog box.  
  
-   Create a [CDC](../mfc/reference/cdc-class.md) object for the printer.  
  
-   Call the [StartDoc](../mfc/reference/cdc-class.md#startdoc) and [EndDoc](../mfc/reference/cdc-class.md#enddoc) member functions of the `CDC` object.  
  
-   Repeatedly call the [StartPage](../mfc/reference/cdc-class.md#startpage) member function of the `CDC` object, inform the view class which page should be printed, and call the [EndPage](../mfc/reference/cdc-class.md#endpage) member function of the `CDC` object.  
  
-   Call overridable functions in the view at the appropriate times.  
  
 The following articles discuss how the framework supports printing and print preview:  
  
### What do you want to know more about  
  
-   [How default printing is done](../mfc/how-default-printing-is-done.md)  
  
-   [Multipage documents](../mfc/multipage-documents.md)  
  
-   [Headers and footers](../mfc/headers-and-footers.md)  
  
-   [Allocating GDI resources for printing](../mfc/allocating-gdi-resources.md)  
  
-   [Print preview](../mfc/print-preview-architecture.md)  
  
## See Also  
 [Printing and Print Preview](../mfc/printing-and-print-preview.md)

