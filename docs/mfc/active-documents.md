---
description: "Learn more about: Active Documents"
title: "Active Documents"
ms.date: "11/04/2016"
helpviewer_keywords: ["active documents [MFC]", "active documents [MFC], requirements", "view objects [MFC], requirements", "OLE [MFC], active documents", "views [MFC], active documents", "active documents [MFC], views"]
ms.assetid: 1378f18e-aaa6-420b-8501-4b974905baa0
---
# Active Documents

Active documents extend the compound document technology of OLE. These extensions are provided in the form of additional interfaces that manage views, so that objects can function within containers and yet retain control over their display and printing functions. This process makes it possible to display documents both in foreign frames (such as the Microsoft Office Binder or Microsoft Internet Explorer) and in native frames (such as the product's own view ports).

This section describes the functional [requirements for active documents](#requirements_for_active_documents). The active document owns a set of data and has access to storage where the data can be saved and retrieved. It can create and manage one or more views on its data. In addition to supporting the usual embedding and in-place activation interfaces of OLE documents, the active document communicates its ability to create views through `IOleDocument`. Through this interface, the container can ask to create (and possibly enumerate) the views that the active document can display. Through this interface, the active document can also provide miscellaneous information about itself, such as whether it supports multiple views or complex rectangles.

The following is the `IOleDocument` interface. Note that the `IEnumOleDocumentViews` interface is a standard OLE enumerator for `IOleDocumentView*` types.

```
interface IOleDocument : IUnknown
    {
    HRESULT CreateView(
        [in] IOleInPlaceSite *pIPSite,
        [in] IStream *pstm,
        [in] DWORD dwReserved,
        [out] IOleDocumentView **ppView);

    HRESULT GetDocMiscStatus([out] DWORD *pdwStatus);

    HRESULT EnumViews(
        [out] IEnumOleDocumentViews **ppEnum,
        [out] IOleDocumentView **ppView);
    }
```

Every active document must have a view frame provider with this interface. If the document is not embedded within a container, the active document server itself must provide the view frame. However, when the active document is embedded in an active document container, the container provides the view frame.

An active document can create one or more types of [views](#requirements_for_view_objects) of its data (for example, normal, outline, page layout, and so on). Views act like filters through which the data can be seen. Even if the document has only one type of view, you may still want to support multiple views as a means of supporting new window functionality (for example, the **New Window** item on the **Window** menu in Office applications).

## <a name="requirements_for_active_documents"></a> Requirements for Active Documents

An active document that can be displayed in an active document container must:

- Use OLE's Compound Files as its storage mechanism by implementing `IPersistStorage`.

- Support the basic embedding features of OLE Documents, including **Create From File**. This necessitates the interfaces `IPersistFile`, `IOleObject`, and `IDataObject`.

- Support one or more views, each of which is capable of in-place activation. That is, the views must support the interface `IOleDocumentView` as well as the interfaces `IOleInPlaceObject` and `IOleInPlaceActiveObject` (using the container's `IOleInPlaceSite` and `IOleInPlaceFrame` interfaces).

- Support the standard active document interfaces `IOleDocument`, `IOleCommandTarget`, and `IPrint`.

Knowledge of when and how to use the container-side interfaces is implied in these requirements.

## <a name="requirements_for_view_objects"></a> Requirements for View Objects

An active document can create one or more views of its data. Functionally, these views are like ports onto a particular method for displaying the data. If an active document only supports a single view, the active document and that single view can be implemented using a single class. `IOleDocument::CreateView` returns the same object's `IOleDocumentView` interface pointer.

To be represented within an active document container, a view component must support `IOleInPlaceObject` and `IOleInPlaceActiveObject` in addition to `IOleDocumentView`:

```
interface IOleDocumentView : IUnknown
    {
    HRESULT SetInPlaceSite([in] IOleInPlaceSite *pIPSite);
    HRESULT GetInPlaceSite([out] IOleInPlaceSite **ppIPSite);
    HRESULT GetDocument([out] IUnknown **ppunk);
    [input_sync] HRESULT SetRect([in] LPRECT prcView);
    HRESULT GetRect([in] LPRECT prcView);
    [input_sync] HRESULT SetRectComplex(
        [in] LPRECT prcView,
        [in] LPRECT prcHScroll,
        [in] LPRECT prcVScroll,
        [in] LPRECT prcSizeBox);
    HRESULT Show([in] BOOL fShow);
    HRESULT UIActivate([in] BOOL fUIActivate);
    HRESULT Open(void);
    HRESULT CloseView([in] DWORD dwReserved);
    HRESULT SaveViewState([in] IStream *pstm);
    HRESULT ApplyViewState([in] IStream *pstm);
    HRESULT Clone(
        [in] IOleInPlaceSite *pIPSiteNew,
        [out] IOleDocumentView **ppViewNew);
    }
```

Every view has an associated view site, which encapsulates the view frame and the view port (HWND and a rectangular area in that window). The site exposes this functionality though the standard `IOleInPlaceSite` interface. Note that it is possible to have more than one view port on a single HWND.

Typically, each type of view has a different printed representation. Hence views and the corresponding view sites should implement the printing interfaces if `IPrint` and `IContinueCallback`, respectively. The view frame must negotiate with the view provider through `IPrint` when printing begins, so that headers, footers, margins, and related elements are printed correctly. The view provider notifies the frame of printing-related events through `IContinueCallback`. For more information on the use of these interfaces, see [Programmatic Printing](programmatic-printing.md).

Note that if an active document only supports a single view, then the active document and that single view can be implemented using a single concrete class. `IOleDocument::CreateView` simply returns the same object's `IOleDocumentView` interface pointer. In short, it is not necessary that there be two separate object instances when only one view is required.

A view object can also be a command target. By implementing `IOleCommandTarget` a view can receive commands that originate in the container's user interface (such as **New**, **Open**, **Save As**, **Print** on the **File** menu; and **Copy**, **Paste**, **Undo** on the **Edit** menu). For more information, see [Message Handling and Command Targets](message-handling-and-command-targets.md).

## See also

[Active Document Containment](active-document-containment.md)
