---
description: "Learn more about: TN041: MFC/OLE1 Migration to MFC/OLE 2"
title: "TN041: MFC-OLE1 Migration to MFC-OLE 2"
ms.date: "10/18/2018"
helpviewer_keywords: ["OLE1 [MFC]", "migrating OLE1 to OLE2", "migration [MFC], OLE1 to OLE2", "OLE2 [MFC]", "porting OLE1 to OLE2", "converting OLE1 to OLE2", "upgrading Visual C++ applications [MFC], OLE1 to OLE2", "TN041"]
ms.assetid: 67f55552-4b04-4ddf-af0b-4d9eaf5da957
---
# TN041: MFC/OLE1 Migration to MFC/OLE 2

> [!NOTE]
> The following technical note has not been updated since it was first included in the online documentation. As a result, some procedures and topics might be out of date or incorrect. For the latest information, it is recommended that you search for the topic of interest in the online documentation index.

## General Issues Relating to Migration

One of the design goals for the OLE 2 classes in MFC 2.5 (and higher) was to retain much of the same architecture put in place in MFC 2.0 for OLE 1.0 support. As a result, many of the same OLE classes in MFC 2.0 still exist in this version of MFC (`COleDocument`, `COleServerDoc`, `COleClientItem`, `COleServerItem`). In addition, many of the APIs in these classes are exactly the same. However, OLE 2 is drastically different from OLE 1.0 so you can expect that some of the details have changed. If you are familiar with MFC 2.0's OLE1 support, you'll feel at home with MFC's 2.0 support.

If you are taking an existing MFC/OLE1 application and adding OLE 2 functionality to it, you should read this note first. This note covers some general issues you may encounter while porting your OLE1 functionality to MFC/OLE 2 and then discusses the problems uncovered while porting two applications included in MFC 2.0: the MFC OLE samples [OCLIENT](../overview/visual-cpp-samples.md) and [HIERSVR](../overview/visual-cpp-samples.md).

## MFC Document/View Architecture Is Important

If your application does not use MFC's Document/View architecture and you want to add OLE 2 support to your application, now is the time to move to Document/View. Many of the benefits of MFC's OLE 2 classes are only realized once your application is using the built-in architecture and components of MFC.

Implementing a server or container without using the MFC architecture is possible, but not recommended.

## Use MFC Implementation Instead of Your Own

MFC "canned implementation" classes such as `CToolBar`, `CStatusBar`, and `CScrollView` have built-in special case code for OLE 2 support. So, if you can use these classes in your application you'll benefit from the effort put into them to make them OLE aware. Again, it is possible to "roll-your-own" classes here for these purposes, but it is not suggested. If you need to implement similar functionality, the MFC source code is an excellent reference for dealing with some of the finer points of OLE (especially when it comes to in-place activation).

## Examine the MFC Sample Code

There are a number of MFC samples that include OLE functionality. Each of these applications implements OLE from a different angle:

- [HIERSVR](../overview/visual-cpp-samples.md) Meant mostly for use as a server application. It was included in MFC 2.0 as an MFC/OLE1 application and has been ported to MFC/OLE 2 and then extended such that it implements many OLE features available in OLE 2.

- [OCLIENT](../overview/visual-cpp-samples.md) This is a stand-alone container application, meant to demonstrate many of the OLE features from a container standpoint. It too was ported from MFC 2.0, and then extended to support many of the more advanced OLE features, such as custom clipboard formats and links to embedded items.

- [DRAWCLI](../overview/visual-cpp-samples.md) This application implements OLE container support much like OCLIENT does, except that it does so within the framework of an existing object-oriented drawing program. It shows you how you might implement OLE container support and integrate it into your existing application.

- [SUPERPAD](../overview/visual-cpp-samples.md) This application, as well as being a fine stand-alone application, is also an OLE server. The server support it implements is quite minimalist. Of particular interest is how it uses OLE clipboard services to copy data to the clipboard, but uses the functionality built into the Windows "edit" control to implement clipboard paste functionality. This shows an interesting mix of traditional Windows API usage as well as integration with the new OLE APIs.

For more information on the sample applications, see the "MFC Sample Help".

## Case Study: OCLIENT from MFC 2.0

As discussed above, [OCLIENT](../overview/visual-cpp-samples.md) was included in MFC 2.0 and implemented OLE with MFC/OLE1. The steps by which this application was initially converted to use the MFC/OLE 2 classes are described below. A number of features were added after the initial port was completed to better illustrate the MFC/OLE classes. These features will not be covered here; refer to the sample itself for more information on those advanced features.

> [!NOTE]
> The compiler errors and step-by-step process was created with Visual C++ 2.0. Specific error messages and locations may have changed with Visual C++ 4.0, but the conceptual information remains valid.

### Getting It Up and Running

The approach taken to port the OCLIENT sample to MFC/OLE is to start by building it and fixing the obvious compiler errors that will result. If you take the OCLIENT sample from MFC 2.0 and compile it under this version of MFC, you'll find that there are not that many errors to resolve. The errors in the order in which they occurred are described below.

### Compile and Fix Errors

```Output
\oclient\mainview.cpp(104) : error C2660: 'Draw' : function does not take 4 parameters
```

The first error concerns `COleClientItem::Draw`. In MFC/OLE1 it took more parameters than the MFC/OLE version takes. The extra parameters were often not necessary and usually NULL (as in this example). This version of MFC can automatically determine the values for the lpWBounds when the CDC that is being drawn to is a metafile DC. In addition, the pFormatDC parameter is no longer necessary since the framework will build one from the "attribute DC" of the pDC passed in. So to fix this problem, you simply remove the two extra NULL parameters to the Draw call.

```Output
\oclient\mainview.cpp(273) : error C2065: 'OLE_MAXNAMESIZE' : undeclared identifier
\oclient\mainview.cpp(273) : error C2057: expected constant expression
\oclient\mainview.cpp(280) : error C2664: 'CreateLinkFromClipboard' : cannot convert parameter 1 from 'char [1]' to 'enum ::tagOLERENDER '
\oclient\mainview.cpp(286) : error C2664: 'CreateFromClipboard' : cannot convert parameter 1 from 'char [1]' to 'enum ::tagOLERENDER '
\oclient\mainview.cpp(288) : error C2664: 'CreateStaticFromClipboard' : cannot convert parameter 1 from 'char [1]' to 'enum ::tagOLERENDER '
```

The errors above result from the fact that all of the `COleClientItem::CreateXXXX` functions in MFC/OLE1 required that a unique name be passed to represent the item. This was a requirement of the underlying OLE API. This is not necessary in MFC/OLE 2 since OLE 2 does not use DDE as the underlying communications mechanism (the name was used in DDE conversations). To fix this problem, you can remove the `CreateNewName` function as well as all references to it. It is easy to find out what each MFC/OLE function is expecting in this version simply by placing your cursor on the call and pressing F1.

Another area that is significantly different is OLE 2 clipboard handling. With OLE1, you used the Windows clipboard APIs interact with the clipboard. With OLE 2 this is done with a different mechanism. The MFC/OLE1 APIs assumed that the clipboard was open before copying a `COleClientItem` object to the clipboard. This is no longer necessary and will cause all MFC/OLE clipboard operations to fail. While you edit the code to remove dependencies on `CreateNewName`, you should also remove the code that opens and closes the Windows clipboard.

```Output
\oclient\mainview.cpp(332) : error C2065: 'AfxOleInsertDialog' : undeclared identifier
\oclient\mainview.cpp(332) : error C2064: term does not evaluate to a function
\oclient\mainview.cpp(344) : error C2057: expected constant expression
\oclient\mainview.cpp(347) : error C2039: 'CreateNewObject' : is not a member of 'CRectItem'
```

These errors result from the `CMainView::OnInsertObject` handler. Handling the "Insert New Object" command is another area where things have changed quite a bit. In this case, it is easiest to simply merge the original implementation with that provided by AppWizard for a new OLE Container application. In fact, this is a technique that you can apply to porting other applications. In MFC/OLE1, you displayed the "Insert Object" dialog by calling `AfxOleInsertDialog` function. In this version you construct a `COleInsertObject` dialog object and call `DoModal`. In addition, new OLE items are created with a **CLSID** instead of a classname string. The end result should look something like this

```cpp
COleInsertDialog dlg;
if (dlg.DoModal() != IDOK)
    return;

BeginWaitCursor();

CRectItem* pItem = NULL;
TRY
{
    // First create the C++ object
    pItem = GetDocument()->CreateItem();
    ASSERT_VALID(pItem);

    // Initialize the item from the dialog data.
    if (!dlg.CreateItem(pItem))
        AfxThrowMemoryException();
            // any exception will do
    ASSERT_VALID(pItem);

    // run the object if appropriate
    if (dlg.GetSelectionType() == COleInsertDialog::createNewItem)
        pItem->DoVerb(OLEIVERB_SHOW, this);

    // update right away
    pItem->UpdateLink();
    pItem->UpdateItemRectFromServer();

    // set selection to newly inserted item
    SetSelection(pItem);
    pItem->Invalidate();
}
CATCH (CException, e)
{
    // clean up item
    if (pItem != NULL)
        GetDocument()->DeleteItem(pItem);

    AfxMessageBox(IDP_FAILED_TO_CREATE);
}
END_CATCH

EndWaitCursor();
```

> [!NOTE]
> Insert New Object may be different for your application):

It is also necessary to include \<afxodlgs.h>, which contains the declaration for the `COleInsertObject` dialog class as well as the other standard dialogs provided by MFC.

```Output
\oclient\mainview.cpp(367) : error C2065: 'OLEVERB_PRIMARY' : undeclared identifier
\oclient\mainview.cpp(367) : error C2660: 'DoVerb' : function does not take 1 parameters
```

These errors are caused by the fact that some OLE1 constants have changed in OLE 2, even though in concept they are the same. In this case `OLEVERB_PRIMARY` has changed to `OLEIVERB_PRIMARY`. In both OLE1 and OLE 2, the primary verb is usually executed by a container when the user double-clicks on an item.

In addition, `DoVerb` now takes an extra parameter — a pointer to a view (`CView`*). This parameter is only used to implement "Visual Editing" (or in-place activation). For now you set that parameter to NULL, because you are not implementing this feature at this time.

To make sure that the framework never attempts to in-place activate, you should override `COleClientItem::CanActivate` as follows:

```cpp
BOOL CRectItem::CanActivate()
{
    return FALSE;
}
```

```Output
\oclient\rectitem.cpp(53) : error C2065: 'GetBounds' : undeclared identifier
\oclient\rectitem.cpp(53) : error C2064: term does not evaluate to a function
\oclient\rectitem.cpp(84) : error C2065: 'SetBounds' : undeclared identifier
\oclient\rectitem.cpp(84) : error C2064: term does not evaluate to a function
```

In MFC/OLE1, `COleClientItem::GetBounds` and `SetBounds` were used to query and manipulate the extent of an item (the `left` and `top` members were always zero). In MFC/OLE 2 this is more directly supported by `COleClientItem::GetExtent` and `SetExtent`, which deal with a **SIZE** or `CSize` instead.

The code for your new SetItemRectToServer, and UpdateItemRectFromServer calls look like this:

```cpp
BOOL CRectItem::UpdateItemRectFromServer()
{
    ASSERT(m_bTrackServerSize);
    CSize size;
    if (!GetExtent(&size))
        return FALSE;    // blank

    // map from HIMETRIC to screen coordinates
    {
        CClientDC screenDC(NULL);
        screenDC.SetMapMode(MM_HIMETRIC);
        screenDC.LPtoDP(&size);
    }
    // just set the item size
    if (m_rect.Size() != size)
    {
        // invalidate the old size/position
        Invalidate();
        m_rect.right = m_rect.left + size.cx;
        m_rect.bottom = m_rect.top + size.cy;
        // as well as the new size/position
        Invalidate();
    }
    return TRUE;
}

BOOL CRectItem::SetItemRectToServer()
{
    // set the official bounds for the embedded item
    CSize size = m_rect.Size();
    {
        CClientDC screenDC(NULL);
        screenDC.SetMapMode(MM_HIMETRIC);
        screenDC.DPtoLP(&size);
    }
    TRY
    {
        SetExtent(size);    // may do a wait
    }
    CATCH(CException, e)
    {
        return FALSE;  // links will not allow SetBounds
    }
    END_CATCH
    return TRUE;
}
```

```Output
\oclient\frame.cpp(50) : error C2039: 'InWaitForRelease' : is not a member of 'COleClientItem'
\oclient\frame.cpp(50) : error C2065: 'InWaitForRelease' : undeclared identifier
\oclient\frame.cpp(50) : error C2064: term does not evaluate to a function
```

In MFC/OLE1 synchronous API calls from a container to a server were *simulated*, because OLE1 was inherently asynchronous in many cases. It was necessary to check for an outstanding asynchronous call in progress before processing commands from the user. MFC/OLE1 provided the `COleClientItem::InWaitForRelease` function for doing so. In MFC/OLE 2 this is not necessary, so you can to remove the override of OnCommand in CMainFrame all together.

At this point OCLIENT will compile and link.

### Other Necessary Changes

There are few things that are not done that will keep OCLIENT from running, however. It is better to fix these problems now instead of later.

First, it is necessary to initialize the OLE libraries. This is done by calling `AfxOleInit` from `InitInstance`:

```cpp
if (!AfxOleInit())
{
    AfxMessageBox("Failed to initialize OLE libraries");
    return FALSE;
}
```

It is also a good idea to check for virtual functions for parameter list changes. One such function is `COleClientItem::OnChange`, overridden in every MFC/OLE container application. By looking at online help, you'll see that an extra 'DWORD dwParam' was added. The new CRectItem::OnChange looks as follows:

```cpp
void
CRectItem::OnChange(OLE_NOTIFICATION wNotification, DWORD dwParam)
{
    if (m_bTrackServerSize && !UpdateItemRectFromServer())
    {
        // Blank object
        if (wNotification == OLE_CLOSED)
        {
            // no data received for the object - destroy it
            ASSERT(!IsVisible());
            GetDocument()->DeleteItem(this);
            return; // no update (item is gone now)
        }
    }
    if (wNotification != OLE_CLOSED)
        Dirty();
    Invalidate();
    // any change will cause a redraw
}
```

In MFC/OLE1, container applications derived the document class from `COleClientDoc`. In MFC/OLE 2 this class has been removed and replaced by `COleDocument` (this new organization makes it easier to build container/server applications). There is a **#define** that maps `COleClientDoc` to `COleDocument` to simplify porting of MFC/OLE1 applications to MFC/OLE 2, such as OCLIENT. One of the features not supplied by `COleDocument` that was provided by `COleClientDoc` is the standard command message map entries. This is done so that server applications, which also use `COleDocument` (indirectly), do not carry with them the overhead of these command handlers unless they are a container/server application. You need to add the following entries to the CMainDoc message map:

```cpp
ON_UPDATE_COMMAND_UI(ID_EDIT_PASTE, OnUpdatePasteMenu)
ON_UPDATE_COMMAND_UI(ID_EDIT_PASTE_LINK, OnUpdatePasteLinkMenu)
ON_UPDATE_COMMAND_UI(ID_OLE_EDIT_LINKS, OnUpdateEditLinksMenu)
ON_COMMAND(ID_OLE_EDIT_LINKS, COleDocument::OnEditLinks)
ON_UPDATE_COMMAND_UI(ID_OLE_VERB_FIRST, OnUpdateObjectVerbMenu)
ON_UPDATE_COMMAND_UI(ID_OLE_EDIT_CONVERT, OnUpdateObjectVerbMenu)
ON_COMMAND(ID_OLE_EDIT_CONVERT, OnEditConvert)
```

The implementation of all of these commands is in `COleDocument`, which is the base class for your document.

At this point, OCLIENT is a functional OLE container application. It is possible to insert items of any type (OLE1 or OLE 2). Since the necessary code to enable in-place activation is not implemented, items are edited in a separate window much like with OLE1. The next section discusses the necessary changes to enable in-place editing (sometimes called "Visual Editing").

### Adding "Visual Editing"

One of the most interesting features of OLE is in-place activation (or "Visual Editing"). This feature allows the server application to take over portions of the container's user interface to provided a more seamless editing interface for the user. To implement in-place activation to OCLIENT, some special resources need to be added, as well as some additional code. These resources and the code are normally provided by AppWizard — in fact, much of the code here was borrowed directly from a fresh AppWizard application with "Container" support.

First of all, it is necessary to add a menu resource to be used when there is an item which is in-place active. You can create this extra menu resource in Visual C++ by copying the IDR_OCLITYPE resource and removing all but the File and Window pop-ups. Two separator bars are inserted between the File and Window pop-ups to indicate the separation of groups (it should look like: File &#124;&#124; Window). For more information on what these separators mean and how the server and container menus are merged see [Menus and Resources: Menu Merging](../mfc/menus-and-resources-menu-merging.md).

Once you have these menus created, you need to let the framework know about them. This is done by calling `CDocTemplate::SetContainerInfo` for the document template before you add it to the document template list in your InitInstance. The new code to register the document template looks like this:

```cpp
CDocTemplate* pTemplate = new CMultiDocTemplate(
    IDR_OLECLITYPE,
    RUNTIME_CLASS(CMainDoc),
    RUNTIME_CLASS(CMDIChildWnd), // standard MDI child frame
    RUNTIME_CLASS(CMainView));

pTemplate->SetContainerInfo(IDR_OLECLITYPE_INPLACE);

AddDocTemplate(pTemplate);
```

The IDR_OLECLITYPE_INPLACE resource is the special in-place resource created in Visual C++.

To enable in-place activation, there are some things that need to change in both the `CView` (CMainView) derived class as well as the `COleClientItem` derived class (CRectItem). All of these overrides are provided by AppWizard and most of the implementation will come directly from a default AppWizard application.

In the first step of this port, in-place activation was disabled entirely by overriding `COleClientItem::CanActivate`. This override should be removed to allow in-place activation. In addition, NULL was passed to all calls to `DoVerb` (there are two of them) because providing the view was only necessary for in-place activation. To fully implement in-place activation, it is necessary to pass the correct view in the `DoVerb` call. One of these calls is in `CMainView::OnInsertObject`:

```cpp
pItem->DoVerb(OLEIVERB_SHOW, this);
```

Another is in `CMainView::OnLButtonDblClk`:

```cpp
m_pSelection->DoVerb(OLEIVERB_PRIMARY, this);
```

It is necessary to override `COleClientItem::OnGetItemPosition`. This tells the server where to put its window relative to the container's window when the item is in-place activated. For OCLIENT, the implementation is trivial:

```cpp
void CRectItem::OnGetItemPosition(CRect& rPosition)
{
    rPosition = m_rect;
}
```

Most servers also implement what is called "in-place resizing." This allows the server window to be sized and moved while the user is editing the item. The container must participate in this action, since moving or resizing the window usually affects the position and size within the container document itself. The implementation for OCLIENT synchronizes the internal rectangle maintained by m_rect with the new position and size.

```cpp
BOOL CRectItem::OnChangeItemPosition(const CRect& rectPos)
{
    ASSERT_VALID(this);

    if (!COleClientItem::OnChangeItemPosition(rectPos))
        return FALSE;

    Invalidate();
    m_rect = rectPos;
    Invalidate();
    GetDocument()->SetModifiedFlag();

    return TRUE;
}
```

At this point, there is enough code to allow an item to be in-place activated and to deal with sizing and moving the item when it is active, but no code will allow the user to exit the editing session. Although some servers will provide this functionality themselves by handling the escape key, it is suggested that containers provide two ways to deactivate an item: (1) by clicking outside the item, and (2) by pressing the ESCAPE key.

For the ESCAPE key, add an accelerator with Visual C++ that maps the VK_ESCAPE key to a command, ID_CANCEL_EDIT is added to the resources. The handler for this command follows:

```cpp
// The following command handler provides the standard
// keyboard user interface to cancel an in-place
// editing session.void CMainView::OnCancelEdit()
{
    // Close any in-place active item on this view.
    COleClientItem* pActiveItem =
        GetDocument()->GetInPlaceActiveItem(this);
    if (pActiveItem != NULL)
        pActiveItem->Close();
    ASSERT(GetDocument()->GetInPlaceActiveItem(this) == NULL);
}
```

To handle the case where the user clicks outside the item, you add the following code to the start of `CMainView::SetSelection`:

```cpp
if (pNewSel != m_pSelection || pNewSel == NULL)
{
    COleClientItem* pActiveItem =
        GetDocument()->GetInPlaceActiveItem(this);
    if (pActiveItem != NULL&& pActiveItem != pNewSel)
        pActiveItem->Close();
}
```

When an item is in-place active, it should have the focus. To make sure this is the case you handle OnSetFocus so that focus is always transferred to the active item when your view receives the focus:

```cpp
// Special handling of OnSetFocus and OnSize are required
// when an object is being edited in-place.
void CMainView::OnSetFocus(CWnd* pOldWnd)
{
    COleClientItem* pActiveItem =
        GetDocument()->GetInPlaceActiveItem(this);

    if (pActiveItem != NULL &&
        pActiveItem->GetItemState() == COleClientItem::activeUIState)
    {
        // need to set focus to this item if it is same view
        CWnd* pWnd = pActiveItem->GetInPlaceWindow();
        if (pWnd != NULL)
        {
            pWnd->SetFocus();   // don't call the base class
            return;
        }
    }

    CView::OnSetFocus(pOldWnd);
}
```

When the view is resized, you need to notify the active item that the clipping rectangle has changed. To do this you provide a handler for `OnSize`:

```cpp
void CMainView::OnSize(UINT nType, int cx, int cy)
{
    CView::OnSize(nType, cx, cy);
    COleClientItem* pActiveItem =
        GetDocument()->GetInPlaceActiveItem(this);
    if (pActiveItem != NULL)
        pActiveItem->SetItemRects();
}
```

## Case Study: HIERSVR from MFC 2.0

[HIERSVR](../overview/visual-cpp-samples.md) was also included in MFC 2.0 and implemented OLE with MFC/OLE1. This note briefly describes the steps by which this application was initially converted to use the MFC/OLE 2 classes. A number of features were added after the initial port was completed to better illustrate the MFC/OLE 2 classes. These features will not be covered here; refer to the sample itself for more information on those advanced features.

> [!NOTE]
> The compiler errors and step-by-step process was created with Visual C++ 2.0. Specific error messages and locations may have changed with Visual C++ 4.0, but the conceptual information remains valid.

### Getting It Up and Running

The approach taken to port the HIERSVR sample to MFC/OLE is to start by building it and fixing the obvious compiler errors that will result. If you take the HIERSVR sample from MFC 2.0 and compile it under this version of MFC, you'll find that there are not many errors to resolve (although there are more than with the OCLIENT sample). The errors in the order in which they usually occur are described below.

### Compile and Fix Errors

```Output
\hiersvr\hiersvr.cpp(83) : error C2039: 'RunEmbedded' : is not a member of 'COleTemplateServer'
```

This first error points out a much larger problem with the `InitInstance` function for servers. The initialization required for an OLE server is probably one of the biggest changes you'll have to make to your MFC/OLE1 application to get it running. The best thing to do is look at what AppWizard creates for an OLE server and modify your code as appropriate. Here are some points to keep in mind:

It is necessary to initialize the OLE libraries by calling `AfxOleInit`

Call SetServerInfo on the document template object to set server resource handles and runtime class information that you can't set with the `CDocTemplate` constructor.

Don't show the main window of your application if /Embedding is present on the command line.

You'll need a **GUID** for your document. This is a unique identifier for your document's type (128 bits). AppWizard will create one for you — so if you use the technique described here of copying the new code from a new AppWizard generated server application, you can simply "steal" the GUID from that application. If not, you can use the GUIDGEN.EXE utility in the BIN directory.

It is necessary to "connect" your `COleTemplateServer` object to the document template by calling `COleTemplateServer::ConnectTemplate`.

Update the system registry when your application is run stand-alone. This way, if the user moves the .EXE for your application, running it from its new location will update the Windows system registration database to point to the new location.

After applying all of these changes based on what AppWizard creates for `InitInstance`, the `InitInstance` (and related GUID) for HIERSVR should read as follows:

```cpp
// this is the GUID for HIERSVR documents
static const GUID BASED_CODE clsid =
{ 0xA0A16360L, 0xC19B, 0x101A, { 0x8C, 0xE5, 0x00, 0xDD, 0x01, 0x11, 0x3F, 0x12 } };

/////////////////////////////////////////////////////////////////////////////
// COLEServerApp initialization

BOOL COLEServerApp::InitInstance()
{
    // OLE 2 initialization
    if (!AfxOleInit())
    {
        AfxMessageBox("Initialization of the OLE failed!");
        return FALSE;
    }

    // Standard initialization
    LoadStdProfileSettings();   // Load standard INI file options

    // Register document templates
    CDocTemplate* pDocTemplate;
    pDocTemplate = new CMultiDocTemplate(IDR_HIERSVRTYPE,
        RUNTIME_CLASS(CServerDoc),
        RUNTIME_CLASS(CMDIChildWnd),
        RUNTIME_CLASS(CServerView));
    pDocTemplate->SetServerInfo(IDR_HIERSVRTYPE_SRVR_EMB);
    AddDocTemplate(pDocTemplate);

    // create main MDI Frame window
    CMainFrame* pMainFrame = new CMainFrame;
    if (!pMainFrame->LoadFrame(IDR_MAINFRAME))
        return FALSE;
    m_pMainWnd = pMainFrame;

    SetDialogBkColor(); // gray look

    // enable file manager drag/drop and DDE Execute open
    m_pMainWnd->DragAcceptFiles();
    EnableShellOpen();

    m_server.ConnectTemplate(clsid, pDocTemplate, FALSE);
    COleTemplateServer::RegisterAll();

    // try to launch as an OLE server
    if (RunEmbedded())
    {
        // "short-circuit" initialization -- run as server!
        return TRUE;
    }
    m_server.UpdateRegistry();
    RegisterShellFileTypes();

    // not run as OLE server, so show the main window
    if (m_lpCmdLine[0] == '\0')
    {
        // create a new (empty) document
        OnFileNew();
    }
    else
    {
        // open an existing document
        OpenDocumentFile(m_lpCmdLine);
    }

    pMainFrame->ShowWindow(m_nCmdShow);
    pMainFrame->UpdateWindow();

    return TRUE;
}
```

You will notice that the code above refers to a new resource ID, IDR_HIERSVRTYPE_SRVR_EMB. This is the menu resource to be used when a document that is embedded in another container is edited. In MFC/OLE1 the menu items specific to editing an embedded item were modified on the fly. Using an entirely different menu structure when editing an embedded item instead of editing a file-based document makes it much easier to provide different user interfaces for these two separate modes. As you'll see later, an entirely separate menu resource is used when editing an embedded object in-place.

To create this resource, load the resource script into Visual C++ and copy the existing IDR_HIERSVRTYPE menu resource. Rename the new resource to IDR_HIERSVRTYPE_SRVR_EMB (this is the same naming convention that AppWizard uses). Next change "File Save" to "File Update"; give it command ID ID_FILE_UPDATE. Also change "File Save As" to "File Save Copy As"; give it command ID ID_FILE_SAVE_COPY_AS. The framework provides the implementation of both of these commands.

```Output
\hiersvr\svritem.h(60) : error C2433: 'OLESTATUS' : 'virtual' not permitted on data declarations
\hiersvr\svritem.h(60) : error C2501: 'OLESTATUS' : missing decl-specifiers
\hiersvr\svritem.h(60) : error C2146: syntax error : missing ';' before identifier 'OnSetData'
\hiersvr\svritem.h(60) : error C2061: syntax error : identifier 'OLECLIPFORMAT'
\hiersvr\svritem.h(60) : error C2501: 'OnSetData' : missing decl-specifiers
```

There are a number of errors resulting from the override of `OnSetData`, since it is referring to the **OLESTATUS** type. **OLESTATUS** was the way OLE1 returned errors. This has changed to **HRESULT** in OLE 2, although MFC usually converts an **HRESULT** into a `COleException` containing the error. In this particular case, the override of `OnSetData` is no longer necessary, so the easiest thing to do is to remove it.

```Output
\hiersvr\svritem.cpp(30) : error C2660: 'COleServerItem::COleServerItem' : function does not take 1 parameters
```

The `COleServerItem` constructor takes an extra 'BOOL' parameter. This flag determines how memory management is done on the `COleServerItem` objects. By setting it to TRUE, the framework handles the memory management of these objects — deleting them when they are no longer necessary. HIERSVR uses `CServerItem` (derived from `COleServerItem`) objects as part of its native data, so you'll set this flag to FALSE. This lets HIERSVR determine when each server item is deleted.

```Output
\hiersvr\svritem.cpp(44) : error C2259: 'CServerItem' : illegal attempt to instantiate abstract class
\hiersvr\svritem.cpp(44) : error C2259: 'CServerItem' : illegal attempt to instantiate abstract class
```

As these errors imply, there are some 'pure-virtual' functions that have not been overridden in CServerItem. Most likely this is caused by the fact that OnDraw's parameter list has changed. To fix this error, change `CServerItem::OnDraw` as follows (as well as the declaration in svritem.h):

```cpp
BOOL CServerItem::OnDraw(CDC* pDC, CSize& rSize)
{
    // request from OLE to draw node
    pDC->SetMapMode(MM_TEXT); // always in pixels
    return DoDraw(pDC, CPoint(0, 0), FALSE);
}
```

The new parameter is 'rSize'. This allows you to fill in the size of the drawing, if convenient. This size must be in **HIMETRIC**. In this case, it is not convenient to fill this value in, so the framework calls `OnGetExtent` to retrieve the extent. For that to work, you'll have to implement `OnGetExtent`:

```cpp
BOOL CServerItem::OnGetExtent(DVASPECT dwDrawAspect, CSize& rSize)
{
    if (dwDrawAspect != DVASPECT_CONTENT)
        return COleServerItem::OnGetExtent(dwDrawAspect, rSize);

    rSize = CalcNodeSize();
    return TRUE;
}
```

```Output
\hiersvr\svritem.cpp(104) : error C2065: 'm_rectBounds' : undeclared identifier
\hiersvr\svritem.cpp(104) : error C2228: left of '.SetRect' must have class/struct/union type
\hiersvr\svritem.cpp(106) : error C2664: 'void __pascal __far DPtoLP(struct ::tagPOINT __far *,
    int)__far const ' : cannot convert parameter 1 from 'int __far *' to 'struct ::tagPOINT __far *'
```

In the CServerItem::CalcNodeSize function the item size is converted to **HIMETRIC** and stored in *m_rectBounds*. The undocumented '*m_rectBounds*' member of `COleServerItem` does not exist (it has been partially replaced by *m_sizeExtent*, but in OLE 2 this member has a slightly different usage than *m_rectBounds* did in OLE1). Instead of setting the **HIMETRIC** size into this member variable, you'll return it. This return value is used in `OnGetExtent`, implemented previously.

```cpp
CSize CServerItem::CalcNodeSize()
{
    CClientDC dcScreen(NULL);

    m_sizeNode = dcScreen.GetTextExtent(m_strDescription,
        m_strDescription.GetLength());
    m_sizeNode += CSize(CX_INSET * 2, CY_INSET * 2);

    // set suggested HIMETRIC size
    CSize size(m_sizeNode.cx, m_sizeNode.cy);
    dcScreen.SetMapMode(MM_HIMETRIC);
    dcScreen.DPtoLP(&size);
    return size;
}
```

CServerItem also overrides `COleServerItem::OnGetTextData`. This function is obsolete in MFC/OLE and is replaced by a different mechanism. The MFC 3.0 version of the MFC OLE sample [HIERSVR](../overview/visual-cpp-samples.md) implements this functionality by overriding `COleServerItem::OnRenderFileData`. This functionality is not important for this basic port, so you can remove the OnGetTextData override.

There are many more errors in svritem.cpp that have not been addressed. They are not "real" errors — just errors caused by previous errors.

```Output
\hiersvr\svrview.cpp(325) : error C2660: 'CopyToClipboard' : function does not take 2 parameters
```

`COleServerItem::CopyToClipboard` no longer supports the `bIncludeNative` flag. The native data (the data written out by the server item's Serialize function) is always copied, so you remove the first parameter. In addition, `CopyToClipboard` will throw an exception when an error happens instead of returning FALSE. Change the code for CServerView::OnEditCopy as follows:

```cpp
void CServerView::OnEditCopy()
{
    if (m_pSelectedNode == NULL)
        AfxThrowNotSupportedException();

    TRY
    {
        m_pSelectedNode->CopyToClipboard(TRUE);
    }
    CATCH_ALL(e)
    {
        AfxMessageBox("Copy to clipboard failed");
    }
    END_CATCH_ALL
}
```

Although there were more errors resulting from the compilation of the MFC 2.0 version of HIERSVR than there were for the same version of OCLIENT, there were actually fewer changes.

At this point HIERSVR will compile and link and function as an OLE server, but without the in-place editing feature, which will be implemented next.

### Adding "Visual Editing"

To add "Visual Editing" (or in-place activation) to this server application, there are only a few things you must take care of:

- You need a special menu resource to be used when the item is in-place active.

- This application has a toolbar, so you'll need a toolbar with only a subset of the normal toolbar to match the menu commands available from the server (matches the menu resource mentioned above).

- You need a new class derived from `COleIPFrameWnd` that provides the in-place user interface (much like CMainFrame, derived from `CMDIFrameWnd`, provides the MDI user interface).

- You need to tell the framework about these special resources and classes.

The menu resource is easy to create. Run Visual C++, copy the menu resource IDR_HIERSVRTYPE to a menu resource called IDR_HIERSVRTYPE_SRVR_IP. Modify the menu so that only the Edit and Help menu popups are left. Add two separators to the menu in between the Edit and Help menus (it should look like: Edit &#124;&#124; Help). For more information on what these separators mean and how the server and container menus are merged, see [Menus and Resources: Menu Merging](../mfc/menus-and-resources-menu-merging.md).

The bitmap for the subset toolbar can be easily created by copying the one from a fresh AppWizard generated application with a "Server" option checked. This bitmap can then be imported into Visual C++. Be sure to give the bitmap an ID of IDR_HIERSVRTYPE_SRVR_IP.

The class derived from `COleIPFrameWnd` can be copied from an AppWizard generated application with server support as well. Copy both files, IPFRAME.CPP and IPFRAME.H and add them to the project. Make sure that the `LoadBitmap` call refers to IDR_HIERSVRTYPE_SRVR_IP, the bitmap created in the previous step.

Now that all the new resources and classes are created, add the necessary code so that the framework knows about these (and knows that this application now supports in-place editing). This is done by adding some more parameters to the `SetServerInfo` call in the `InitInstance` function:

```cpp
pDocTemplate->SetServerInfo(IDR_HIERSVRTYPE_SRVR_EMB,
    IDR_HIERSVRTYPE_SRVR_IP,
    RUNTIME_CLASS(CInPlaceFrame));
```

It is now ready to run in-place in any container that also supports in-place activation. But, there is one minor bug still lurking in the code. HIERSVR supports a context menu, displayed when the user presses the right mouse button. This menu works when HIERSVR is fully open, but does not work when editing an embedding in-place. The reason can be pinned down to this single line of code in CServerView::OnRButtonDown:

```cpp
pMenu->TrackPopupMenu(TPM_CENTERALIGN | TPM_RIGHTBUTTON,
    point.x,
    point.y,
    AfxGetApp()->m_pMainWnd);
```

Notice the reference to `AfxGetApp()->m_pMainWnd`. When the server is in-place activated, it has a main window and m_pMainWnd is set, but it is usually invisible. Furthermore, this window refers to the *main* window of the application, the MDI frame window that appears when the server is fully open or run stand-alone. It does not refer to the active frame window — which when in-place activated is a frame window derived from `COleIPFrameWnd`. To get the correct active window even when in-place editing, this version of MFC adds a new function, `AfxGetMainWnd`. Generally, you should use this function instead of `AfxGetApp()->m_pMainWnd`. This code needs to change as follows:

```cpp
pMenu->TrackPopupMenu(TPM_CENTERALIGN | TPM_RIGHTBUTTON,
    point.x,
    point.y,
    AfxGetMainWnd());
```

Now you have an OLE server minimally enabled for functional in-place activation. But there are still many features available with MFC/OLE 2 that were not available in MFC/OLE1. See the HIERSVR sample for more ideas on features you might want to implement. Some of the features that HIERSVR implements are listed below:

- Zooming, for true WYSIWYG behavior with respect to the container.

- Drag / drop and a custom clipboard format.

- Scrolling the container window as the selection is changed.

The HIERSVR sample in MFC 3.0 also uses a slightly different design for its server items. This helps conserve memory and makes your links more flexible. With the 2.0 version of HIERSVR each node in the tree *is-a* `COleServerItem`. `COleServerItem` carries a bit more overhead than is strictly necessary for each of these nodes, but a `COleServerItem` is required for each active link. But for the most part, there are very few active links at any given time. To make this more efficient, the HIERSVR in this version of MFC separates the node from the `COleServerItem`. It has both a CServerNode and a `CServerItem` class. The `CServerItem` (derived from `COleServerItem`) is only created as necessary. Once the container (or containers) stop using that particular link to that particular node, the CServerItem object associated with the CServerNode is deleted. This design is more efficient and more flexible. Its flexibility comes in when dealing with multiple selection links. Neither of these two versions of HIERSVR support multiple selection, but it would be much easier to add (and to support links to such selections) with the MFC 3.0 version of HIERSVR, since the `COleServerItem` is separated from the native data.

## See also

[Technical Notes by Number](../mfc/technical-notes-by-number.md)<br/>
[Technical Notes by Category](../mfc/technical-notes-by-category.md)
