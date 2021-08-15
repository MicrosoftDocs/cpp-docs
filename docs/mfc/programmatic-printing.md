---
description: "Learn more about: Programmatic Printing"
title: "Programmatic Printing"
ms.date: "11/04/2016"
helpviewer_keywords: ["printing [MFC], active documents", "active documents [MFC], printing", "printing [MFC], programmatic", "IPrint interface", "printing [MFC]"]
ms.assetid: 3db0945b-5e13-4be4-86a0-6aecdae565bd
---
# Programmatic Printing

OLE provided the means to uniquely identify persistent documents (`GetClassFile`) and load them into their associated code (`CoCreateInstance`, `QueryInterface(IID_IPersistFile)`, `QueryInterface(IID_IPersistStorage)`, `IPersistFile::Load`, and `IPersistStorage::Load`). To further enable printing documents, active document containment (using an existing OLE design not shipped with OLE 2.0 originally) introduces a base-standard printing interface, `IPrint`, generally available through any object that can load the persistent state of the document type. Each view of an active document can optionally support the `IPrint` interface to provide these capabilities.

The `IPrint` interface is defined as follows:

```
interface IPrint : IUnknown
    {
    HRESULT SetInitialPageNum([in] LONG nFirstPage);
    HRESULT GetPageInfo(
        [out] LONG *pnFirstPage,
        [out] LONG *pcPages);
    HRESULT Print(
        [in] DWORD grfFlags,
        [in,out] DVTARGETDEVICE **pptd,
        [in,out] PAGESET ** ppPageSet,
        [in,out] STGMEDIUM **ppstgmOptions,
        [in] IContinueCallback* pCallback,
        [in] LONG nFirstPage,
        [out] LONG *pcPagesPrinted,
        [out] LONG *pnPageLast);
    };
```

Clients and containers simply use `IPrint::Print` to instruct the document to print itself once that document is loaded, specifying printing control flags, the target device, the pages to print, and additional options. The client can also control the continuation of printing through the interface `IContinueCallback` (see below).

In addition, `IPrint::SetInitialPageNum` supports the ability to print a series of documents as one by numbering pages seamlessly, obviously a benefit for active document containers like Office Binder. `IPrint::GetPageInfo` makes displaying pagination information simple by allowing the caller to retrieve the starting page number previously passed to `SetInitialPageNum` (or the document's internal default starting page number) and the number of pages in the document.

Objects that support `IPrint` are marked in the registry with the "Printable" key stored under the object's CLSID:

HKEY_CLASSES_ROOT\CLSID\\{...}\Printable

`IPrint` is usually implemented on the same object that supports either `IPersistFile` or `IPersistStorage`. Callers note the capability to programmatically print the persistent state of some class by looking in the registry for the "Printable" key. Currently, "Printable" indicates support for at least `IPrint`; other interfaces may be defined in the future which would then be available through `QueryInterface` where `IPrint` simply represents the base level of support.

During a print procedure, you may want the client or container that initiated the printing to control whether or not the printing should continue. For example, the container may support a "Stop Print" command that should terminate the print job as soon as possible. To support this capability, the client of a printable object can implement a small notification sink object with the interface `IContinueCallback`:

```
interface IContinueCallback : IUnknown
    {
    HRESULT FContinue(void);
    HRESULT FContinuePrinting(
        [in] LONG cPagesPrinted,
        [in] LONG nCurrentPage,
        [in] LPOLESTR pszPrintStatus);
    };
```

This interface is designed to be useful as a generic continuation callback function that takes the place of the various continuation procedures in the Win32 API (such as the `AbortProc` for printing and the `EnumMetafileProc` for metafile enumeration). Thus this interface design is useful in a wide variety of time-consuming processes.

In the most generic cases, the `IContinueCallback::FContinue` function is called periodically by any lengthy process. The sink object returns S_OK to continue the operation, and S_FALSE to stop the procedure as soon as possible.

`FContinue`, however, is not used in the context of `IPrint::Print`; rather, printing uses `IContinueCallback::FContinuePrint`. Any printing object should periodically call `FContinuePrinting` passing the number of pages that have been printing, the number of the page being printed, and an additional string describing the print status that the client may choose to display to the user (such as "Page 5 of 19").

## See also

[Active Document Containers](../mfc/active-document-containers.md)
