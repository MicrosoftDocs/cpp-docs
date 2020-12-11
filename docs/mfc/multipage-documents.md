---
description: "Learn more about: Multipage Documents"
title: "Multipage Documents"
ms.date: "11/19/2018"
helpviewer_keywords: ["pagination [MFC]", "overriding [MFC], View class functions for printing", "OnPrepareDC method [MFC]", "CPrintInfo structure [MFC], multipage documents", "OnEndPrinting method [MFC]", "protocols [MFC], printing protocol", "document pages vs. printer pages [MFC]", "printer mode [MFC]", "printing [MFC], multipage documents", "printers [MFC], printer mode", "documents [MFC], printing", "OnPreparePrinting method [MFC]", "OnPrint method [MFC]", "DoPreparePrinting method and pagination [MFC]", "OnDraw method [MFC], printing", "pagination [MFC], printing multipage documents", "printing [MFC], protocol", "pages [MFC], printing", "OnBeginPrinting method [MFC]", "multipage documents [MFC]", "printing [MFC], pagination", "documents [MFC], paginating"]
ms.assetid: 69626b86-73ac-4b74-b126-9955034835ef
---
# Multipage Documents

This article describes the Windows printing protocol and explains how to print documents that contain more than one page. The article covers the following topics:

- [Printing protocol](#_core_the_printing_protocol)

- [Overriding view class functions](#_core_overriding_view_class_functions)

- [Pagination](#_core_pagination)

- [Printer pages vs. document pages](#_core_printer_pages_vs.._document_pages)

- [Print-time pagination](#_core_print.2d.time_pagination)

## <a name="_core_the_printing_protocol"></a> The Printing Protocol

To print a multipage document, the framework and view interact in the following manner. First the framework displays the **Print** dialog box, creates a device context for the printer, and calls the [StartDoc](reference/cdc-class.md#startdoc) member function of the [CDC](reference/cdc-class.md) object. Then, for each page of the document, the framework calls the [StartPage](reference/cdc-class.md#startpage) member function of the `CDC` object, instructs the view object to print the page, and calls the [EndPage](reference/cdc-class.md#endpage) member function. If the printer mode must be changed before starting a particular page, the view calls [ResetDC](reference/cdc-class.md#resetdc), which updates the [DEVMODE](/windows/win32/api/wingdi/ns-wingdi-devmodea) structure containing the new printer mode information. When the entire document has been printed, the framework calls the [EndDoc](reference/cdc-class.md#enddoc) member function.

## <a name="_core_overriding_view_class_functions"></a> Overriding View Class Functions

The [CView](reference/cview-class.md) class defines several member functions that are called by the framework during printing. By overriding these functions in your view class, you provide the connections between the framework's printing logic and your view class's printing logic. The following table lists these member functions.

### CView's Overridable Functions for Printing

|Name|Reason for overriding|
|----------|---------------------------|
|[OnPreparePrinting](reference/cview-class.md#onprepareprinting)|To insert values in the Print dialog box, especially the length of the document|
|[OnBeginPrinting](reference/cview-class.md#onbeginprinting)|To allocate fonts or other GDI resources|
|[OnPrepareDC](reference/cview-class.md#onpreparedc)|To adjust attributes of the device context for a given page, or to do print-time pagination|
|[OnPrint](reference/cview-class.md#onprint)|To print a given page|
|[OnEndPrinting](reference/cview-class.md#onendprinting)|To deallocate GDI resources|

You can do printing-related processing in other functions as well, but these functions are the ones that drive the printing process.

The following figure illustrates the steps involved in the printing process and shows where each of `CView`'s printing member functions are called. The rest of this article explains most of these steps in more detail. Additional parts of the printing process are described in the article [Allocating GDI Resources](allocating-gdi-resources.md).

![Printing loop process](../mfc/media/vc37c71.gif "Printing loop process") <br/>
The Printing Loop

## <a name="_core_pagination"></a> Pagination

The framework stores much of the information about a print job in a [CPrintInfo](reference/cprintinfo-structure.md) structure. Several of the values in `CPrintInfo` pertain to pagination; these values are accessible as shown in the following table.

### Page Number Information Stored in CPrintInfo

|Member variable or<br /><br /> function name(s)|Page number referenced|
|-----------------------------------------------|----------------------------|
|`GetMinPage`/`SetMinPage`|First page of document|
|`GetMaxPage`/`SetMaxPage`|Last page of document|
|`GetFromPage`|First page to be printed|
|`GetToPage`|Last page to be printed|
|`m_nCurPage`|Page currently being printed|

Page numbers start at 1, that is, the first page is numbered 1, not 0. For more information about these and other members of [CPrintInfo](reference/cprintinfo-structure.md), see the *MFC Reference*.

At the beginning of the printing process, the framework calls the view's [OnPreparePrinting](reference/cview-class.md#onprepareprinting) member function, passing a pointer to a `CPrintInfo` structure. The Application Wizard provides an implementation of `OnPreparePrinting` that calls [DoPreparePrinting](reference/cview-class.md#doprepareprinting), another member function of `CView`. `DoPreparePrinting` is the function that displays the Print dialog box and creates a printer device context.

At this point the application doesn't know how many pages are in the document. It uses the default values 1 and 0xFFFF for the numbers of the first and last page of the document. If you know how many pages your document has, override `OnPreparePrinting` and call [SetMaxPage]--brokenlink--(reference/cprintinfo-class.md#setmaxpage) for the `CPrintInfo` structure before you send it to `DoPreparePrinting`. This lets you specify the length of your document.

`DoPreparePrinting` then displays the Print dialog box. When it returns, the `CPrintInfo` structure contains the values specified by the user. If the user wishes to print only a selected range of pages, he or she can specify the starting and ending page numbers in the Print dialog box. The framework retrieves these values using the `GetFromPage` and `GetToPage` functions of [CPrintInfo](reference/cprintinfo-structure.md). If the user doesn't specify a page range, the framework calls `GetMinPage` and `GetMaxPage` and uses the values returned to print the entire document.

For each page of a document to be printed, the framework calls two member functions in your view class, [OnPrepareDC](reference/cview-class.md#onpreparedc) and [OnPrint](reference/cview-class.md#onprint), and passes each function two parameters: a pointer to a [CDC](reference/cdc-class.md) object and a pointer to a `CPrintInfo` structure. Each time the framework calls `OnPrepareDC` and `OnPrint`, it passes a different value in the *m_nCurPage* member of the `CPrintInfo` structure. In this way the framework tells the view which page should be printed.

The [OnPrepareDC](reference/cview-class.md#onpreparedc) member function is also used for screen display. It makes adjustments to the device context before drawing takes place. `OnPrepareDC` serves a similar role in printing, but there are a couple of differences: first, the `CDC` object represents a printer device context instead of a screen device context, and second, a `CPrintInfo` object is passed as a second parameter. (This parameter is **NULL** when `OnPrepareDC` is called for screen display.) Override `OnPrepareDC` to make adjustments to the device context based on which page is being printed. For example, you can move the viewport origin and the clipping region to ensure that the appropriate portion of the document gets printed.

The [OnPrint](reference/cview-class.md#onprint) member function performs the actual printing of the page. The article [How Default Printing Is Done](how-default-printing-is-done.md) shows how the framework calls [OnDraw](reference/cview-class.md#ondraw) with a printer device context to perform printing. More precisely, the framework calls `OnPrint` with a `CPrintInfo` structure and a device context, and `OnPrint` passes the device context to `OnDraw`. Override `OnPrint` to perform any rendering that should be done only during printing and not for screen display. For example, to print headers or footers (see the article [Headers and Footers](headers-and-footers.md) for more information). Then call `OnDraw` from the override of `OnPrint` to do the rendering common to both screen display and printing.

The fact that `OnDraw` does the rendering for both screen display and printing means that your application is WYSIWYG: "What you see is what you get." However, suppose you aren't writing a WYSIWYG application. For example, consider a text editor that uses a bold font for printing but displays control codes to indicate bold text on the screen. In such a situation, you use `OnDraw` strictly for screen display. When you override `OnPrint`, substitute the call to `OnDraw` with a call to a separate drawing function. That function draws the document the way it appears on paper, using the attributes that you don't display on the screen.

## <a name="_core_printer_pages_vs.._document_pages"></a> Printer Pages vs. Document Pages

When you refer to page numbers, it's sometimes necessary to distinguish between the printer's concept of a page and a document's concept of a page. From the point of view of the printer, a page is one sheet of paper. However, one sheet of paper doesn't necessarily equal one page of the document. For example, if you're printing a newsletter, where the sheets are to be folded, one sheet of paper might contain both the first and last pages of the document, side by side. Similarly, if you're printing a spreadsheet, the document doesn't consist of pages at all. Instead, one sheet of paper might contain rows 1 through 20, columns 6 through 10.

All the page numbers in the [CPrintInfo](reference/cprintinfo-structure.md) structure refer to printer pages. The framework calls `OnPrepareDC` and `OnPrint` once for each sheet of paper that will pass through the printer. When you override the [OnPreparePrinting](reference/cview-class.md#onprepareprinting) function to specify the length of the document, you must use printer pages. If there is a one-to-one correspondence (that is, one printer page equals one document page), then this is easy. If, on the other hand, document pages and printer pages do not directly correspond, you must translate between them. For example, consider printing a spreadsheet. When overriding `OnPreparePrinting`, you must calculate how many sheets of paper will be required to print the entire spreadsheet and then use that value when calling the `SetMaxPage` member function of `CPrintInfo`. Similarly, when overriding `OnPrepareDC`, you must translate *m_nCurPage* into the range of rows and columns that will appear on that particular sheet and then adjust the viewport origin accordingly.

## <a name="_core_print.2d.time_pagination"></a> Print-Time Pagination

In some situations, your view class may not know in advance how long the document is until it has actually been printed. For example, suppose your application isn't WYSIWYG, so a document's length on the screen doesn't correspond to its length when printed.

This causes a problem when you override [OnPreparePrinting](reference/cview-class.md#onprepareprinting) for your view class: you can't pass a value to the `SetMaxPage` function of the [CPrintInfo](reference/cprintinfo-structure.md) structure, because you don't know the length of a document. If the user doesn't specify a page number to stop at using the Print dialog box, the framework doesn't know when to stop the print loop. The only way to determine when to stop the print loop is to print out the document and see when it ends. Your view class must check for the end of the document while it is being printed, and then inform the framework when the end is reached.

The framework relies on your view class's [OnPrepareDC](reference/cview-class.md#onpreparedc) function to tell it when to stop. After each call to `OnPrepareDC`, the framework checks a member of the `CPrintInfo` structure called *m_bContinuePrinting*. Its default value is **TRUE.** As long as it remains so, the framework continues the print loop. If it is set to **FALSE**, the framework stops. To perform print-time pagination, override `OnPrepareDC` to check whether the end of the document has been reached, and set *m_bContinuePrinting* to **FALSE** when it has.

The default implementation of `OnPrepareDC` sets *m_bContinuePrinting* to **FALSE** if the current page is greater than 1. This means that if the length of the document wasn't specified, the framework assumes the document is one page long. One consequence of this is that you must be careful if you call the base class version of `OnPrepareDC`. Do not assume that *m_bContinuePrinting* will be **TRUE** after calling the base class version.

### What do you want to know more about

- [Headers and footers](headers-and-footers.md)

- [Allocating GDI resources](allocating-gdi-resources.md)

## See also

[Printing](printing.md)<br/>
[CView Class](reference/cview-class.md)<br/>
[CDC Class](reference/cdc-class.md)
