---
description: "Learn more about: CPrintInfo Structure"
title: "CPrintInfo Structure"
ms.date: "11/04/2016"
f1_keywords: ["CPrintInfo"]
helpviewer_keywords: ["CPrintInfo structure [MFC]"]
ms.assetid: 0b3de849-d050-4386-9a14-f4c1a25684f7
---
# CPrintInfo Structure

Stores information about a print or print-preview job.

## Syntax

```
struct CPrintInfo
```

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[CPrintInfo::GetFromPage](#getfrompage)|Returns the number of the first page being printed.|
|[CPrintInfo::GetMaxPage](#getmaxpage)|Returns the number of the last page of the document.|
|[CPrintInfo::GetMinPage](#getminpage)|Returns the number of the first page of the document.|
|[CPrintInfo::GetOffsetPage](#getoffsetpage)|Returns the number of the pages preceding the first page of a DocObject item being printed in a combined DocObject print job.|
|[CPrintInfo::GetToPage](#gettopage)|Returns the number of the last page being printed.|
|[CPrintInfo::SetMaxPage](#setmaxpage)|Sets the number of the last page of the document.|
|[CPrintInfo::SetMinPage](#setminpage)|Sets the number of the first page of the document.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CPrintInfo::m_bContinuePrinting](#m_bcontinueprinting)|Contains a flag indicating whether the framework should continue the print loop.|
|[CPrintInfo::m_bDirect](#m_bdirect)|Contains a flag indicating whether the document is being printed directly (without displaying the Print dialog box).|
|[CPrintInfo::m_bDocObject](#m_bdocobject)|Contains a flag indicating whether the document being printed is a DocObject.|
|[CPrintInfo::m_bPreview](#m_bpreview)|Contains a flag indicating whether the document is being previewed.|
|[CPrintInfo::m_dwFlags](#m_dwflags)|Specifies DocObject printing operations.|
|[CPrintInfo::m_lpUserData](#m_lpuserdata)|Contains a pointer to a user-created structure.|
|[CPrintInfo::m_nCurPage](#m_ncurpage)|Identifies the number of the page currently being printed.|
|[CPrintInfo::m_nJobNumber](#m_njobnumber)|Specifies the job number assigned by the operating system for the current print job|
|[CPrintInfo::m_nNumPreviewPages](#m_nnumpreviewpages)|Identifies the number of pages displayed in the preview window; either 1 or 2.|
|[CPrintInfo::m_nOffsetPage](#m_noffsetpage)|Specifies offset of a particular DocObject's first page in a combined DocObject print job.|
|[CPrintInfo::m_pPD](#m_ppd)|Contains a pointer to the `CPrintDialog` object used for the Print dialog box.|
|[CPrintInfo::m_rectDraw](#m_rectdraw)|Specifies a rectangle defining the current usable page area.|
|[CPrintInfo::m_strPageDesc](#m_strpagedesc)|Contains a format string for page-number display.|

## Remarks

`CPrintInfo` is a structure and does not have a base class.

The framework creates an object of `CPrintInfo` each time the Print or Print Preview command is chosen and destroys it when the command is completed.

`CPrintInfo` contains information about both the print job as a whole, such as the range of pages to be printed, and the current status of the print job, such as the page currently being printed. Some information is stored in an associated [CPrintDialog](../../mfc/reference/cprintdialog-class.md) object; this object contains the values entered by the user in the Print dialog box.

A `CPrintInfo` object is passed between the framework and your view class during the printing process and is used to exchange information between the two. For example, the framework informs the view class which page of the document to print by assigning a value to the `m_nCurPage` member of `CPrintInfo`; the view class retrieves the value and performs the actual printing of the specified page.

Another example is the case in which the length of the document is not known until it is printed. In this situation, the view class tests for the end of the document each time a page is printed. When the end is reached, the view class sets the `m_bContinuePrinting` member of `CPrintInfo` to FALSE; this informs the framework to stop the print loop.

`CPrintInfo` is used by the member functions of `CView` listed under "See Also." For more information about the printing architecture provided by the Microsoft Foundation Class Library, see [Frame Windows](../../mfc/frame-windows.md) and [Document/View Architecture](../../mfc/document-view-architecture.md) and the articles [Printing](../../mfc/printing.md) and [Printing: Multipage Documents](../../mfc/multipage-documents.md).

## Inheritance Hierarchy

`CPrintInfo`

## Requirements

**Header:** afxext.h

## <a name="getfrompage"></a> CPrintInfo::GetFromPage

Call this function to retrieve the number of the first page to be printed.

```
UINT GetFromPage() const;
```

### Return Value

The number of the first page to be printed.

### Remarks

This is the value specified by the user in the Print dialog box, and it is stored in the `CPrintDialog` object referenced by the `m_pPD` member. If the user has not specified a value, the default is the first page of the document.

## <a name="getmaxpage"></a> CPrintInfo::GetMaxPage

Call this function to retrieve the number of the last page of the document.

```
UINT GetMaxPage() const;
```

### Return Value

The number of the last page of the document.

### Remarks

This value is stored in the `CPrintDialog` object referenced by the `m_pPD` member.

## <a name="getminpage"></a> CPrintInfo::GetMinPage

Call this function to retrieve the number of the first page of the document.

```
UINT GetMinPage() const;
```

### Return Value

The number of the first page of the document.

### Remarks

This value is stored in the `CPrintDialog` object referenced by the `m_pPD` member.

## <a name="getoffsetpage"></a> CPrintInfo::GetOffsetPage

Call this function to retrieve the offset when printing multiple DocObject items from a DocObject client.

```
UINT GetOffsetPage() const;
```

### Return Value

The number of pages preceding the first page of a DocObject item being printed in a combined DocObject print job.

### Remarks

This value is referenced by the `m_nOffsetPage` member. The first page of your document will be numbered the `m_nOffsetPage` value + 1 when printed as a DocObject with other active documents. The `m_nOffsetPage` member is valid only if the `m_bDocObject` value is TRUE.

## <a name="gettopage"></a> CPrintInfo::GetToPage

Call this function to retrieve the number of the last page to be printed.

```
UINT GetToPage() const;
```

### Return Value

The number of the last page to be printed.

### Remarks

This is the value specified by the user in the Print dialog box, and it is stored in the `CPrintDialog` object referenced by the `m_pPD` member. If the user has not specified a value, the default is the last page of the document.

## <a name="m_bcontinueprinting"></a> CPrintInfo::m_bContinuePrinting

Contains a flag indicating whether the framework should continue the print loop.

### Remarks

If you are doing print-time pagination, you can set this member to FALSE in your override of `CView::OnPrepareDC` once the end of the document has been reached. You do not have to modify this variable if you have specified the length of the document at the beginning of the print job using the `SetMaxPage` member function. The `m_bContinuePrinting` member is a public variable of type BOOL.

## <a name="m_bdirect"></a> CPrintInfo::m_bDirect

The framework sets this member to TRUE if the Print dialog box will be bypassed for direct printing; FALSE otherwise.

### Remarks

The Print dialog is normally bypassed when you print from the shell or when printing is done using the command ID ID_FILE_PRINT_DIRECT.

You normally don't change this member, but if you do change it, change it before you call [CView::DoPreparePrinting](../../mfc/reference/cview-class.md#doprepareprinting) in your override of [CView::OnPreparePrinting](../../mfc/reference/cview-class.md#onprepareprinting).

## <a name="m_bdocobject"></a> CPrintInfo::m_bDocObject

Contains a flag indicating whether the document being printed is a DocObject.

### Remarks

Data members `m_dwFlags` and `m_nOffsetPage` are invalid unless this flag is TRUE.

## <a name="m_bpreview"></a> CPrintInfo::m_bPreview

Contains a flag indicating whether the document is being previewed.

### Remarks

This is set by the framework depending on which command the user executed. The Print dialog box is not displayed for a print-preview job. The `m_bPreview` member is a public variable of type BOOL.

## <a name="m_dwflags"></a> CPrintInfo::m_dwFlags

Contains a combination of flags specifying DocObject printing operations.

### Remarks

Valid only if data member `m_bDocObject` is TRUE.

The flags can be one or more of the following values:

- PRINTFLAG_MAYBOTHERUSER

- PRINTFLAG_PROMPTUSER

- PRINTFLAG_USERMAYCHANGEPRINTER

- PRINTFLAG_RECOMPOSETODEVICE

- PRINTFLAG_DONTACTUALLYPRINT

- PRINTFLAG_FORCEPROPERTIES

- PRINTFLAG_PRINTTOFILE

## <a name="m_lpuserdata"></a> CPrintInfo::m_lpUserData

Contains a pointer to a user-created structure.

### Remarks

You can use this to store printing-specific data that you do not want to store in your view class. The `m_lpUserData` member is a public variable of type LPVOID.

## <a name="m_ncurpage"></a> CPrintInfo::m_nCurPage

Contains the number of the current page.

### Remarks

The framework calls `CView::OnPrepareDC` and `CView::OnPrint` once for each page of the document, specifying a different value for this member each time; its values range from the value returned by `GetFromPage` to that returned by `GetToPage`. Use this member in your overrides of `CView::OnPrepareDC` and `CView::OnPrint` to print the specified page of the document.

When preview mode is first invoked, the framework reads the value of this member to determine which page of the document should be previewed initially. You can set the value of this member in your override of `CView::OnPreparePrinting` to maintain the user's current position in the document when entering preview mode. The `m_nCurPage` member is a public variable of type UINT.

## <a name="m_njobnumber"></a> CPrintInfo::m_nJobNumber

Indicates the job number assigned by the operating system for the current print job.

### Remarks

This value may be SP_ERROR if the job hasn't yet printed (that is, if the `CPrintInfo` object is newly constructed and has not yet been used to print), or if there was an error in starting the job.

## <a name="m_nnumpreviewpages"></a> CPrintInfo::m_nNumPreviewPages

Contains the number of pages displayed in preview mode; it can be either 1 or 2.

### Remarks

The `m_nNumPreviewPages` member is a public variable of type UINT.

## <a name="m_noffsetpage"></a> CPrintInfo::m_nOffsetPage

Contains the number of pages preceding the first page of a particular DocObject in a combined DocObject print job.

## <a name="m_ppd"></a> CPrintInfo::m_pPD

Contains a pointer to the `CPrintDialog` object used to display the Print dialog box for the print job.

### Remarks

The `m_pPD` member is a public variable declared as a pointer to `CPrintDialog`.

## <a name="m_rectdraw"></a> CPrintInfo::m_rectDraw

Specifies the usable drawing area of the page in logical coordinates.

### Remarks

You may want to refer to this in your override of `CView::OnPrint`. You can use this member to keep track of what area remains usable after you print headers, footers, and so on. The `m_rectDraw` member is a public variable of type `CRect`.

## <a name="m_strpagedesc"></a> CPrintInfo::m_strPageDesc

Contains a format string used to display the page numbers during print preview; this string consists of two substrings, one for single-page display and one for double-page display, each terminated by a '\n' character.

### Remarks

The framework uses "Page %u\nPages %u-%u\n" as the default value. If you want a different format for the page numbers, specify a format string in your override of `CView::OnPreparePrinting`. The `m_strPageDesc` member is a public variable of type `CString`.

## <a name="setmaxpage"></a> CPrintInfo::SetMaxPage

Call this function to specify the number of the last page of the document.

```cpp
void SetMaxPage(UINT nMaxPage);
```

### Parameters

*nMaxPage*<br/>
Number of the last page of the document.

### Remarks

This value is stored in the `CPrintDialog` object referenced by the `m_pPD` member. If the length of the document is known before it is printed, call this function from your override of `CView::OnPreparePrinting`. If the length of the document depends on a setting specified by the user in the Print dialog box, call this function from your override of `CView::OnBeginPrinting`. If the length of the document is not known until it is printed, use the `m_bContinuePrinting` member to control the print loop.

### Example

  See the example for [CView::OnPreparePrinting](../../mfc/reference/cview-class.md#onprepareprinting).

## <a name="setminpage"></a> CPrintInfo::SetMinPage

Call this function to specify the number of the first page of the document.

```cpp
void SetMinPage(UINT nMinPage);
```

### Parameters

*nMinPage*<br/>
Number of the first page of the document.

### Remarks

Page numbers normally start at 1. This value is stored in the `CPrintDialog` object referenced by the `m_pPD` member.

## See also

[MFC Sample DIBLOOK](../../overview/visual-cpp-samples.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CView::OnBeginPrinting](../../mfc/reference/cview-class.md#onbeginprinting)<br/>
[CView::OnEndPrinting](../../mfc/reference/cview-class.md#onendprinting)<br/>
[CView::OnEndPrintPreview](../../mfc/reference/cview-class.md#onendprintpreview)<br/>
[CView::OnPrepareDC](../../mfc/reference/cview-class.md#onpreparedc)<br/>
[CView::OnPreparePrinting](../../mfc/reference/cview-class.md#onprepareprinting)<br/>
[CView::OnPrint](../../mfc/reference/cview-class.md#onprint)
