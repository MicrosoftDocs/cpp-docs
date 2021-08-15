---
description: "Learn more about: Printing"
title: "Printing"
ms.date: "11/04/2016"
helpviewer_keywords: ["view classes [MFC], print operations", "documents [MFC], printing", "printing [MFC], from framework", "printing [MFC]"]
ms.assetid: be465e8d-b0c9-4fc5-9fa8-d10486064f76
---
# Printing

Microsoft Windows implements device-independent display. In MFC, this means that the same drawing calls, in the `OnDraw` member function of your view class, are responsible for drawing on the display and on other devices, such as printers. For print preview, the target device is a simulated printer output to the display.

## <a name="_core_your_role_in_printing_vs.._the_framework.92.s_role"></a> Your Role in Printing vs. the Framework's Role

Your view class has the following responsibilities:

- Inform the framework how many pages are in the document.

- When asked to print a specified page, draw that portion of the document.

- Allocate and deallocate any fonts or other graphics device interface (GDI) resources needed for printing.

- If necessary, send any escape codes needed to change the printer mode before printing a given page, for example, to change the printing orientation on a per-page basis.

The framework's responsibilities are as follows:

- Display the **Print** dialog box.

- Create a [CDC](reference/cdc-class.md) object for the printer.

- Call the [StartDoc](reference/cdc-class.md#startdoc) and [EndDoc](reference/cdc-class.md#enddoc) member functions of the `CDC` object.

- Repeatedly call the [StartPage](reference/cdc-class.md#startpage) member function of the `CDC` object, inform the view class which page should be printed, and call the [EndPage](reference/cdc-class.md#endpage) member function of the `CDC` object.

- Call overridable functions in the view at the appropriate times.

The following articles discuss how the framework supports printing and print preview:

### What do you want to know more about

- [How default printing is done](how-default-printing-is-done.md)

- [Multipage documents](multipage-documents.md)

- [Headers and footers](headers-and-footers.md)

- [Allocating GDI resources for printing](allocating-gdi-resources.md)

- [Print preview](print-preview-architecture.md)

## See also

[Printing and Print Preview](printing-and-print-preview.md)
