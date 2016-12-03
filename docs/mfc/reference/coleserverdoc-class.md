---
title: "COleServerDoc Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "COleServerDoc"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "servers, OLE"
  - "OLE server applications, managing server documents"
  - "container/server applications"
  - "OLE server documents"
  - "COleServerDoc class"
  - "server documents, OLE"
  - "OLE containers, server documents"
ms.assetid: a9cdd96a-e0ac-43bb-9203-2c29237e965c
caps.latest.revision: 24
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# COleServerDoc Class
The base class for OLE server documents.  
  
## Syntax  
  
```  
class AFX_NOVTABLE COleServerDoc : public COleLinkingDoc  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[COleServerDoc::COleServerDoc](#coleserverdoc__coleserverdoc)|Constructs a `COleServerDoc` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[COleServerDoc::ActivateDocObject](#coleserverdoc__activatedocobject)|Activates the associated DocObject document.|  
|[COleServerDoc::ActivateInPlace](#coleserverdoc__activateinplace)|Activates the document for in-place editing.|  
|[COleServerDoc::DeactivateAndUndo](#coleserverdoc__deactivateandundo)|Deactivates the server's user interface.|  
|[COleServerDoc::DiscardUndoState](#coleserverdoc__discardundostate)|Discards undo-state information.|  
|[COleServerDoc::GetClientSite](#coleserverdoc__getclientsite)|Retrieves a pointer to the underlying `IOleClientSite` interface.|  
|[COleServerDoc::GetEmbeddedItem](#coleserverdoc__getembeddeditem)|Returns a pointer to an item representing the entire document.|  
|[COleServerDoc::GetItemClipRect](#coleserverdoc__getitemcliprect)|Returns the current clipping rectangle for in-place editing.|  
|[COleServerDoc::GetItemPosition](#coleserverdoc__getitemposition)|Returns the current position rectangle, relative to the container application's client area, for in-place editing.|  
|[COleServerDoc::GetZoomFactor](#coleserverdoc__getzoomfactor)|Returns the zoom factor in pixels.|  
|[COleServerDoc::IsDocObject](#coleserverdoc__isdocobject)|Determines if the document is a DocObject.|  
|[COleServerDoc::IsEmbedded](#coleserverdoc__isembedded)|Indicates whether the document is embedded in a container document or running stand-alone.|  
|[COleServerDoc::IsInPlaceActive](#coleserverdoc__isinplaceactive)|Returns `TRUE` if the item is currently activated in place.|  
|[COleServerDoc::NotifyChanged](#coleserverdoc__notifychanged)|Notifies containers that the user has changed the document.|  
|[COleServerDoc::NotifyClosed](#coleserverdoc__notifyclosed)|Notifies containers that the user has closed the document.|  
|[COleServerDoc::NotifyRename](#coleserverdoc__notifyrename)|Notifies containers that the user has renamed the document.|  
|[COleServerDoc::NotifySaved](#coleserverdoc__notifysaved)|Notifies containers that the user has saved the document.|  
|[COleServerDoc::OnDeactivate](#coleserverdoc__ondeactivate)|Called by the framework when the user deactivates an item that was activated in place.|  
|[COleServerDoc::OnDeactivateUI](#coleserverdoc__ondeactivateui)|Called by the framework to destroy controls and other user-interface elements created for in-place activation.|  
|[COleServerDoc::OnDocWindowActivate](#coleserverdoc__ondocwindowactivate)|Called by the framework when the container's document frame window is activated or deactivated.|  
|[COleServerDoc::OnResizeBorder](#coleserverdoc__onresizeborder)|Called by the framework when the container application's frame window or document window is resized.|  
|[COleServerDoc::OnShowControlBars](#coleserverdoc__onshowcontrolbars)|Called by the framework to show or hide control bars for in-place editing.|  
|[COleServerDoc::OnUpdateDocument](#coleserverdoc__onupdatedocument)|Called by the framework when a server document that is an embedded item is saved, updating the container's copy of the item.|  
|[COleServerDoc::RequestPositionChange](#coleserverdoc__requestpositionchange)|Changes the position of the in-place editing frame.|  
|[COleServerDoc::SaveEmbedding](#coleserverdoc__saveembedding)|Tells the container application to save the document.|  
|[COleServerDoc::ScrollContainerBy](#coleserverdoc__scrollcontainerby)|Scrolls the container document.|  
|[COleServerDoc::UpdateAllItems](#coleserverdoc__updateallitems)|Notifies containers that the user has changed the document.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[COleServerDoc::CreateInPlaceFrame](#coleserverdoc__createinplaceframe)|Called by the framework to create a frame window for in-place editing.|  
|[COleServerDoc::DestroyInPlaceFrame](#coleserverdoc__destroyinplaceframe)|Called by the framework to destroy a frame window for in-place editing.|  
|[COleServerDoc::GetDocObjectServer](#coleserverdoc__getdocobjectserver)|Override this function to create a new `CDocObjectServer` object and indicate that this document is a DocObject container.|  
|[COleServerDoc::OnClose](#coleserverdoc__onclose)|Called by the framework when a container requests to close the document.|  
|[COleServerDoc::OnExecOleCmd](#coleserverdoc__onexecolecmd)|Executes a specified command or displays help for the command.|  
|[COleServerDoc::OnFrameWindowActivate](#coleserverdoc__onframewindowactivate)|Called by the framework when the container's frame window is activated or deactivated.|  
|[COleServerDoc::OnGetEmbeddedItem](#coleserverdoc__ongetembeddeditem)|Called to get a `COleServerItem` that represents the entire document; used to get an embedded item. Implementation required.|  
|[COleServerDoc::OnReactivateAndUndo](#coleserverdoc__onreactivateandundo)|Called by the framework to undo changes made during in-place editing.|  
|[COleServerDoc::OnSetHostNames](#coleserverdoc__onsethostnames)|Called by the framework when a container sets the window title for an embedded object.|  
|[COleServerDoc::OnSetItemRects](#coleserverdoc__onsetitemrects)|Called by the framework to position the in-place editing frame window within the container application's window.|  
|[COleServerDoc::OnShowDocument](#coleserverdoc__onshowdocument)|Called by the framework to show or hide the document.|  
  
## Remarks  
 A server document can contain [COleServerItem](../../mfc/reference/coleserveritem-class.md) objects, which represent the server interface to embedded or linked items. When a server application is launched by a container to edit an embedded item, the item is loaded as its own server document; the `COleServerDoc` object contains just one `COleServerItem` object, consisting of the entire document. When a server application is launched by a container to edit a linked item, an existing document is loaded from disk; a portion of the document's contents is highlighted to indicate the linked item.  
  
 `COleServerDoc` objects can also contain items of the [COleClientItem](../../mfc/reference/coleclientitem-class.md) class. This allows you to create container-server applications. The framework provides functions to properly store the `COleClientItem` items while servicing the `COleServerItem` objects.  
  
 If your server application does not support links, a server document will always contain only one server item, which represents the entire embedded object as a document. If your server application does support links, it must create a server item each time a selection is copied to the Clipboard.  
  
 To use `COleServerDoc`, derive a class from it and implement the [OnGetEmbeddedItem](#coleserverdoc__ongetembeddeditem) member function, which allows your server to support embedded items. Derive a class from `COleServerItem` to implement the items in your documents, and return objects of that class from `OnGetEmbeddedItem`.  
  
 To support linked items, `COleServerDoc` provides the [OnGetLinkedItem](../../mfc/reference/colelinkingdoc-class.md#colelinkingdoc__ongetlinkeditem) member function. You can use the default implementation or override it if you have your own way of managing document items.  
  
 You need one `COleServerDoc`-derived class for each type of server document your application supports. For example, if your server application supports worksheets and charts, you need two `COleServerDoc`-derived classes.  
  
 For more information on servers, see the article [Servers: Implementing a Server](../../mfc/servers-implementing-a-server.md).  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CDocument](../../mfc/reference/cdocument-class.md)  
  
 [COleDocument](../../mfc/reference/coledocument-class.md)  
  
 [COleLinkingDoc](../../mfc/reference/colelinkingdoc-class.md)  
  
 `COleServerDoc`  
  
## Requirements  
 **Header:** afxole.h  
  
##  <a name="coleserverdoc__activatedocobject"></a>  COleServerDoc::ActivateDocObject  
 Activates the associated DocObject document.  
  
```  
void ActivateDocObject();
```  
  
### Remarks  
 By default, `COleServerDoc` does not support Active documents (also referred to as DocObjects). To enable this support, see [GetDocObjectServer](#coleserverdoc__getdocobjectserver) and class [CDocObjectServer](../../mfc/reference/cdocobjectserver-class.md).  
  
##  <a name="coleserverdoc__activateinplace"></a>  COleServerDoc::ActivateInPlace  
 Activates the item for in-place editing.  
  
```  
BOOL ActivateInPlace();
```  
  
### Return Value  
 Nonzero if successful; otherwise 0, which indicates that the item is fully open.  
  
### Remarks  
 This function performs all operations necessary for in-place activation. It creates an in-place frame window, activates it and sizes it to the item, sets up shared menus and other controls, scrolls the item into view, and sets the focus to the in-place frame window.  
  
 This function is called by the default implementation of [COleServerItem::OnShow](../../mfc/reference/coleserveritem-class.md#coleserveritem__onshow). Call this function if your application supports another verb for in-place activation (such as Play).  
  
##  <a name="coleserverdoc__coleserverdoc"></a>  COleServerDoc::COleServerDoc  
 Constructs a `COleServerDoc` object without connecting with the OLE system DLLs.  
  
```  
COleServerDoc();
```  
  
### Remarks  
 You must call [COleLinkingDoc::Register](../../mfc/reference/colelinkingdoc-class.md#colelinkingdoc__register) to open communications with OLE. If you are using [COleTemplateServer](../../mfc/reference/coletemplateserver-class.md) in your application, `COleLinkingDoc::Register` is called for you by `COleLinkingDoc`'s implementation of `OnNewDocument`, `OnOpenDocument`, and `OnSaveDocument`.  
  
##  <a name="coleserverdoc__createinplaceframe"></a>  COleServerDoc::CreateInPlaceFrame  
 The framework calls this function to create a frame window for in-place editing.  
  
```  
virtual COleIPFrameWnd* CreateInPlaceFrame(CWnd* pParentWnd);
```  
  
### Parameters  
 `pParentWnd`  
 Pointer to the container application's parent window.  
  
### Return Value  
 A pointer to the in-place frame window, or **NULL** if unsuccessful.  
  
### Remarks  
 The default implementation uses information specified in the document template to create the frame. The view used is the first view created for the document. This view is temporarily detached from the original frame and attached to the newly created frame.  
  
 This is an advanced overridable.  
  
##  <a name="coleserverdoc__deactivateandundo"></a>  COleServerDoc::DeactivateAndUndo  
 Call this function if your application supports Undo and the user chooses Undo after activating an item but before editing it.  
  
```  
BOOL DeactivateAndUndo();
```  
  
### Return Value  
 Nonzero on success; otherwise 0.  
  
### Remarks  
 If the container application is written using the Microsoft Foundation Class Library, calling this function causes [COleClientItem::OnDeactivateAndUndo](../../mfc/reference/coleclientitem-class.md#coleclientitem__ondeactivateandundo) to be called, which deactivates the server's user interface.  
  
##  <a name="coleserverdoc__destroyinplaceframe"></a>  COleServerDoc::DestroyInPlaceFrame  
 The framework calls this function to destroy an in-place frame window and return the server application's document window to its state before in-place activation.  
  
```  
virtual void DestroyInPlaceFrame(COleIPFrameWnd* pFrameWnd);
```  
  
### Parameters  
 `pFrameWnd`  
 Pointer to the in-place frame window to be destroyed.  
  
### Remarks  
 This is an advanced overridable.  
  
##  <a name="coleserverdoc__discardundostate"></a>  COleServerDoc::DiscardUndoState  
 If the user performs an editing operation that cannot be undone, call this function to force the container application to discard its undo-state information.  
  
```  
BOOL DiscardUndoState();
```  
  
### Return Value  
 Nonzero on success; otherwise 0.  
  
### Remarks  
 This function is provided so that servers that support Undo can free resources that would otherwise be consumed by undo-state information that cannot be used.  
  
##  <a name="coleserverdoc__getclientsite"></a>  COleServerDoc::GetClientSite  
 Retrieves a pointer to the underlying `IOleClientSite` interface.  
  
```  
LPOLECLIENTSITE GetClientSite() const;

 
```  
  
### Return Value  
 Retrieves a pointer to the underlying [IOleClientSite](http://msdn.microsoft.com/library/windows/desktop/ms693706) interface.  
  
##  <a name="coleserverdoc__getdocobjectserver"></a>  COleServerDoc::GetDocObjectServer  
 Override this function to create a new `CDocObjectServer` item and return a pointer to it.  
  
```  
virtual CDocObjectServer* GetDocObjectServer(LPOLEDOCUMENTSITE pDocSite);
```  
  
### Parameters  
 `pDocSite`  
 Pointer to the `IOleDocumentSite` interface that will connect this document to the server.  
  
### Return Value  
 A pointer to a `CDocObjectServer`; **NULL** if the operation failed.  
  
### Remarks  
 When a DocObject server is activated, the return of a non- **NULL** pointer shows that the client can support DocObjects. The default implementation returns **NULL**.  
  
 A typical implementation for a document that supports DocObjects will simply allocate a new `CDocObjectServer` object and return it to the caller. For example:  
  
 [!code-cpp[NVC_MFCOleServer#3](../../mfc/codesnippet/cpp/coleserverdoc-class_1.cpp)]  
  
##  <a name="coleserverdoc__getembeddeditem"></a>  COleServerDoc::GetEmbeddedItem  
 Call this function to get a pointer to an item representing the entire document.  
  
```  
COleServerItem* GetEmbeddedItem();
```  
  
### Return Value  
 A pointer to an item representing the entire document; **NULL** if the operation failed.  
  
### Remarks  
 It calls [COleServerDoc::OnGetEmbeddedItem](#coleserverdoc__ongetembeddeditem), a virtual function with no default implementation.  
  
##  <a name="coleserverdoc__getitemcliprect"></a>  COleServerDoc::GetItemClipRect  
 Call the `GetItemClipRect` member function to get the clipping-rectangle coordinates of the item that is being edited in place.  
  
```  
void GetItemClipRect(LPRECT lpClipRect) const;

 
```  
  
### Parameters  
 `lpClipRect`  
 Pointer to a `RECT` structure or a `CRect` object to receive the clipping-rectangle coordinates of the item.  
  
### Remarks  
 Coordinates are in pixels relative to the container application window's client area.  
  
 Drawing should not occur outside the clipping rectangle. Usually, drawing is automatically restricted. Use this function to determine whether the user has scrolled outside the visible portion of the document; if so, scroll the container document as needed by means of a call to [ScrollContainerBy](#coleserverdoc__scrollcontainerby).  
  
##  <a name="coleserverdoc__getitemposition"></a>  COleServerDoc::GetItemPosition  
 Call the `GetItemPosition` member function to get the coordinates of the item being edited in place.  
  
```  
void GetItemPosition(LPRECT lpPosRect) const;

 
```  
  
### Parameters  
 `lpPosRect`  
 Pointer to a `RECT` structure or a `CRect` object to receive the coordinates of the item.  
  
### Remarks  
 Coordinates are in pixels relative to the container application window's client area.  
  
 The item's position can be compared with the current clipping rectangle to determine the extent to which the item is visible (or not visible) on the screen.  
  
##  <a name="coleserverdoc__getzoomfactor"></a>  COleServerDoc::GetZoomFactor  
 The `GetZoomFactor` member function determines the "zoom factor" of an item that has been activated for in-place editing.  
  
```  
BOOL GetZoomFactor(
    LPSIZE lpSizeNum = NULL,  
    LPSIZE lpSizeDenom = NULL,  
    LPCRECT lpPosRect = NULL) const;

 
```  
  
### Parameters  
 *lpSizeNum*  
 Pointer to an object of class `CSize` that will hold the zoom factor's numerator. Can be **NULL**.  
  
 *lpSizeDenom*  
 Pointer to an object of class `CSize` that will hold the zoom factor's denominator. Can be **NULL**.  
  
 `lpPosRect`  
 Pointer to an object of class `CRect` that describes the item's new position. If this argument is **NULL**, the function uses the item's current position.  
  
### Return Value  
 Nonzero if the item is activated for in-place editing and its zoom factor is other than 100% (1:1); otherwise 0.  
  
### Remarks  
 The zoom factor, in pixels, is the proportion of the item's size to its current extent. If the container application has not set the item's extent, its natural extent (as determined by [COleServerItem::OnGetExtent](../../mfc/reference/coleserveritem-class.md#coleserveritem__ongetextent)) is used.  
  
 The function sets its first two arguments to the numerator and denominator of the item's "zoom factor." If the item is not being edited in place, the function sets these arguments to a default value of 100% (or 1:1) and returns zero. For further information, see Technical Note 40, [MFC/OLE In-Place Resizing and Zooming](../../mfc/tn040-mfc-ole-in-place-resizing-and-zooming.md).  
  
##  <a name="coleserverdoc__isdocobject"></a>  COleServerDoc::IsDocObject  
 Determines if the document is a DocObject.  
  
```  
BOOL IsDocObject() const;

 
```  
  
### Return Value  
 **TRUE** if the document is a DocObject; otherwise **FALSE**.  
  
##  <a name="coleserverdoc__isembedded"></a>  COleServerDoc::IsEmbedded  
 Call the `IsEmbedded` member function to determine whether the document represents an object embedded in a container.  
  
```  
BOOL IsEmbedded() const;

 
```  
  
### Return Value  
 Nonzero if the `COleServerDoc` object is a document that represents an object embedded in a container; otherwise 0.  
  
### Remarks  
 A document loaded from a file is not embedded although it may be manipulated by a container application as a link. A document that is embedded in a container document is considered to be embedded.  
  
##  <a name="coleserverdoc__isinplaceactive"></a>  COleServerDoc::IsInPlaceActive  
 Call the `IsInPlaceActive` member function to determine whether the item is currently in the in-place active state.  
  
```  
BOOL IsInPlaceActive() const;

 
```  
  
### Return Value  
 Nonzero if the `COleServerDoc` object is active in place; otherwise 0.  
  
##  <a name="coleserverdoc__notifychanged"></a>  COleServerDoc::NotifyChanged  
 Call this function to notify all linked items connected to the document that the document has changed.  
  
```  
void NotifyChanged();
```  
  
### Remarks  
 Typically, you call this function after the user changes some global attribute such as the dimensions of the server document. If an OLE item is linked to the document with an automatic link, the item is updated to reflect the changes. In container applications written with the Microsoft Foundation Class Library, the [OnChange](../../mfc/reference/coleclientitem-class.md#coleclientitem__onchange) member function of `COleClientItem` is called.  
  
> [!NOTE]
>  This function is included for compatibility with OLE 1. New applications should use [UpdateAllItems](#coleserverdoc__updateallitems).  
  
##  <a name="coleserverdoc__notifyclosed"></a>  COleServerDoc::NotifyClosed  
 Call this function to notify the container(s) that the document has been closed.  
  
```  
void NotifyClosed();
```  
  
### Remarks  
 When the user chooses the Close command from the File menu, `NotifyClosed` is called by `COleServerDoc`'s implementation of the [OnCloseDocument](../../mfc/reference/cdocument-class.md#cdocument__onclosedocument) member function. In container applications written with the Microsoft Foundation Class Library, the [OnChange](../../mfc/reference/coleclientitem-class.md#coleclientitem__onchange) member function of `COleClientItem` is called.  
  
##  <a name="coleserverdoc__notifyrename"></a>  COleServerDoc::NotifyRename  
 Call this function after the user renames the server document.  
  
```  
void NotifyRename(LPCTSTR lpszNewName);
```  
  
### Parameters  
 `lpszNewName`  
 Pointer to a string specifying the new name of the server document; this is typically a fully qualified path.  
  
### Remarks  
 When the user chooses the Save As command from the File menu, `NotifyRename` is called by `COleServerDoc`'s implementation of the [OnSaveDocument](../../mfc/reference/cdocument-class.md#cdocument__onsavedocument) member function. This function notifies the OLE system DLLs, which in turn notify the containers. In container applications written with the Microsoft Foundation Class Library, the [OnChange](../../mfc/reference/coleclientitem-class.md#coleclientitem__onchange) member function of `COleClientItem` is called.  
  
##  <a name="coleserverdoc__notifysaved"></a>  COleServerDoc::NotifySaved  
 Call this function after the user saves the server document.  
  
```  
void NotifySaved();
```  
  
### Remarks  
 When the user chooses the Save command from the File menu, `NotifySaved` is called for you by `COleServerDoc`'s implementation of [OnSaveDocument](../../mfc/reference/cdocument-class.md#cdocument__onsavedocument). This function notifies the OLE system DLLs, which in turn notify the containers. In container applications written with the Microsoft Foundation Class Library, the [OnChange](../../mfc/reference/coleclientitem-class.md#coleclientitem__onchange) member function of `COleClientItem` is called.  
  
##  <a name="coleserverdoc__onclose"></a>  COleServerDoc::OnClose  
 Called by the framework when a container requests that the server document be closed.  
  
```  
virtual void OnClose(OLECLOSE dwCloseOption);
```  
  
### Parameters  
 `dwCloseOption`  
 A value from the enumeration `OLECLOSE`. This parameter can have one of the following values:  
  
- `OLECLOSE_SAVEIFDIRTY` The file is saved if it has been modified.  
  
- `OLECLOSE_NOSAVE` The file is closed without being saved.  
  
- `OLECLOSE_PROMPTSAVE` If the file has been modified, the user is prompted about saving it.  
  
### Remarks  
 The default implementation calls `CDocument::OnCloseDocument`.  
  
 For more information and additional values, see [OLECLOSE](http://msdn.microsoft.com/library/windows/desktop/ms680623) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="coleserverdoc__ondeactivate"></a>  COleServerDoc::OnDeactivate  
 Called by the framework when the user deactivates an embedded or linked item that is currently in-place active.  
  
```  
virtual void OnDeactivate();
```  
  
### Remarks  
 This function restores the container application's user interface to its original state and destroys any menus and other controls that were created for in-place activation.  
  
 The undo state information should be unconditionally released at this point.  
  
 For more information, see the article [Activation](../../mfc/activation-cpp.md)..  
  
##  <a name="coleserverdoc__ondeactivateui"></a>  COleServerDoc::OnDeactivateUI  
 Called when the user deactivates an item that was activated in place.  
  
```  
virtual void OnDeactivateUI(BOOL bUndoable);
```  
  
### Parameters  
 `bUndoable`  
 Specifies whether the editing changes can be undone.  
  
### Remarks  
 This function restores the container application's user interface to its original state, hiding any menus and other controls that were created for in-place activation.  
  
 The framework always sets `bUndoable` to **FALSE**. If the server supports undo and there is an operation that can be undone, call the base-class implementation with `bUndoable` set to **TRUE**.  
  
##  <a name="coleserverdoc__ondocwindowactivate"></a>  COleServerDoc::OnDocWindowActivate  
 The framework calls this function to activate or deactivate a document window for in-place editing.  
  
```  
virtual void OnDocWindowActivate(BOOL bActivate);
```  
  
### Parameters  
 `bActivate`  
 Specifies whether the document window is to be activated or deactivated.  
  
### Remarks  
 The default implementation removes or adds the frame-level user interface elements as appropriate. Override this function if you want to perform additional actions when the document containing your item is activated or deactivated.  
  
 For more information, see the article [Activation](../../mfc/activation-cpp.md)..  
  
##  <a name="coleserverdoc__onexecolecmd"></a>  COleServerDoc::OnExecOleCmd  
 The framework calls this function to execute a specified command or display help for the command.  
  
```  
virtual HRESULT OnExecOleCmd(
    const GUID* pguidCmdGroup,  
    DWORD nCmdID,  
    DWORD nCmdExecOpt,  
    VARIANTARG* pvarargIn,  
    VARIANTARG* pvarargOut);
```  
  
### Parameters  
 `pguidCmdGroup`  
 A pointer to a GUID that identifies a set of commands. Can be **NULL** to indicate the default command group.  
  
 `nCmdID`  
 The command to execute. Must be in the group identified by `pguidCmdGroup`.  
  
 *nCmdExecOut*  
 The way the object should execute the command, one or more of the following values from the **OLECMDEXECOPT** enumeration:  
  
 **OLECMDEXECOPT_DODEFAULT**  
  
 **OLECMDEXECOPT_PROMPTUSER**  
  
 **OLECMDEXECOPT_DONTPROMPTUSER**  
  
 **OLECMDEXECOPT_SHOWHELP**  
  
 `pvarargIn`  
 Pointer to a **VARIANTARG** containing input arguments for the command. Can be **NULL**.  
  
 `pvarargOut`  
 Pointer to a **VARIANTARG** to receive the output return values from the command. Can be **NULL**.  
  
### Return Value  
 Returns `S_OK` if successful; otherwise, one of the following error codes:  
  
|Value|Description|  
|-----------|-----------------|  
|**E_UNEXPECTED**|Unexpected error occurred|  
|**E_FAIL**|Error occurred|  
|**E_NOTIMPL**|Indicates MFC itself should attempt to translate and dispatch the command|  
|**OLECMDERR_E_UNKNOWNGROUP**|`pguidCmdGroup` is non- **NULL** but does not specify a recognized command group|  
|**OLECMDERR_E_NOTSUPPORTED**|`nCmdID` is not recognized as a valid command in the group `pguidCmdGroup`|  
|**OLECMDERR_DISABLED**|The command identified by `nCmdID` is disabled and cannot be executed|  
|**OLECMDERR_NOHELP**|Caller asked for help on the command identified by `nCmdID` but no help is available|  
|**OLECMDERR_CANCELED**|User canceled the execution|  
  
### Remarks  
 `COleCmdUI` can be used to enable, update, and set other properties of DocObject user interface commands. After the commands are initialized, you can execute them with `OnExecOleCmd`.  
  
 The framework calls the function before attempting to translate and dispatch an OLE document command. You don't need to override this function to handle standard OLE document commands, but you must supply an override to this function if you want to handle your own custom commands or handle commands that accept parameters or return results.  
  
 Most of the commands do not take arguments or return values. For a majority of commands the caller can pass **NULL**s for `pvarargIn` and `pvarargOut`. For commands that expect input values, the caller can declare and initialize a **VARIANTARG** variable and pass a pointer to the variable in `pvarargIn`. For commands that require a single value, the argument can be stored directly in the **VARIANTARG** and passed to the function. Multiple arguments must be packaged within the **VARIANTARG** using one of the supported types (such as `IDispatch` and **SAFEARRAY** ).  
  
 Similarly, if a command returns arguments the caller is expected to declare a **VARIANTARG**, initialize it to `VT_EMPTY`, and pass its address in `pvarargOut`. If a command returns a single value, the object can store that value directly in `pvarargOut`. Multiple output values must be packaged in some way appropriate for the **VARIANTARG**.  
  
 The base-class implementation of this function will walk the **OLE_COMMAND_MAP** structures associated with the command target and try to dispatch the command to an appropriate handler. The base-class implementation works only with commands that do not accept arguments or return values. If you need to handle commands that do accept arguments or return values, you must override this function and work with the `pvarargIn` and `pvarargOut` parameters yourself.  
  
##  <a name="coleserverdoc__onframewindowactivate"></a>  COleServerDoc::OnFrameWindowActivate  
 The framework calls this function when the container application's frame window is activated or deactivated.  
  
```  
virtual void OnFrameWindowActivate(BOOL bActivate);
```  
  
### Parameters  
 `bActivate`  
 Specifies whether the frame window is to be activated or deactivated.  
  
### Remarks  
 The default implementation cancels any help modes the frame window might be in. Override this function if you want to perform special processing when the frame window is activated or deactivated.  
  
 For more information, see the article [Activation](../../mfc/activation-cpp.md)..  
  
##  <a name="coleserverdoc__ongetembeddeditem"></a>  COleServerDoc::OnGetEmbeddedItem  
 Called by the framework when a container application calls the server application to create or edit an embedded item.  
  
```  
virtual COleServerItem* OnGetEmbeddedItem() = 0;  
```  
  
### Return Value  
 A pointer to an item representing the entire document; **NULL** if the operation failed.  
  
### Remarks  
 There is no default implementation. You must override this function to return an item that represents the entire document. This return value should be an object of a `COleServerItem`-derived class.  
  
##  <a name="coleserverdoc__onreactivateandundo"></a>  COleServerDoc::OnReactivateAndUndo  
 The framework calls this function when the user chooses to undo changes made to an item that has been activated in place, changed, and subsequently deactivated.  
  
```  
virtual BOOL OnReactivateAndUndo();
```  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 The default implementation does nothing except return **FALSE** to indicate failure.  
  
 Override this function if your application supports undo. Usually you would perform the undo operation, then activate the item by calling `ActivateInPlace`. If the container application is written with the Microsoft Foundation Class Library, calling `COleClientItem::ReactivateAndUndo` causes this function to be called.  
  
##  <a name="coleserverdoc__onresizeborder"></a>  COleServerDoc::OnResizeBorder  
 The framework calls this function when the container application's frame windows change size.  
  
```  
virtual void OnResizeBorder(
    LPCRECT lpRectBorder,  
    LPOLEINPLACEUIWINDOW lpUIWindow,  
    BOOL bFrame);
```  
  
### Parameters  
 `lpRectBorder`  
 Pointer to a `RECT` structure or a `CRect` object that specifies the coordinates of the border.  
  
 `lpUIWindow`  
 Pointer to an object of class **IOleInPlaceUIWindow** that owns the current in-place editing session.  
  
 *bFrame*  
 **TRUE** if `lpUIWindow` points to the container application's top-level frame window, or **FALSE** if `lpUIWindow` points to the container application's document-level frame window.  
  
### Remarks  
 This function resizes and adjusts toolbars and other user-interface elements in accordance with the new window size.  
  
 For more information, see [IOleInPlaceUIWindow](http://msdn.microsoft.com/library/windows/desktop/ms680716) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 This is an advanced overridable.  
  
##  <a name="coleserverdoc__onsethostnames"></a>  COleServerDoc::OnSetHostNames  
 Called by the framework when the container sets or changes the host names for this document.  
  
```  
virtual void OnSetHostNames(
    LPCTSTR lpszHost,  
    LPCTSTR lpszHostObj);
```  
  
### Parameters  
 `lpszHost`  
 Pointer to a string that specifies the name of the container application.  
  
 `lpszHostObj`  
 Pointer to a string that specifies the container's name for the document.  
  
### Remarks  
 The default implementation changes the document title for all views referring to this document.  
  
 Override this function if your application sets the titles through a different mechanism.  
  
##  <a name="coleserverdoc__onsetitemrects"></a>  COleServerDoc::OnSetItemRects  
 The framework calls this function to position the in-place editing frame window within the container application's frame window.  
  
```  
virtual void OnSetItemRects(
    LPCRECT lpPosRect,  
    LPCRECT lpClipRect);
```  
  
### Parameters  
 `lpPosRect`  
 Pointer to a `RECT` structure or a `CRect` object that specifies the in-place frame window's position relative to the container application's client area.  
  
 `lpClipRect`  
 Pointer to a `RECT` structure or a `CRect` object that specifies the in-place frame window's clipping rectangle relative to the container application's client area.  
  
### Remarks  
 Override this function to update the view's zoom factor, if necessary.  
  
 This function is usually called in response to a `RequestPositionChange` call, although it can be called at any time by the container to request a position change for the in-place item.  
  
##  <a name="coleserverdoc__onshowcontrolbars"></a>  COleServerDoc::OnShowControlBars  
 The framework calls this function to show or hide the server application's control bars associated with the frame window identified by `pFrameWnd`.  
  
```  
virtual void OnShowControlBars(
    CFrameWnd* pFrameWnd,  
    BOOL bShow);
```  
  
### Parameters  
 `pFrameWnd`  
 Pointer to the frame window whose control bars should be hidden or shown.  
  
 `bShow`  
 Determines whether control bars are shown or hidden.  
  
### Remarks  
 The default implementation enumerates all control bars owned by that frame window and hides or shows them.  
  
##  <a name="coleserverdoc__onshowdocument"></a>  COleServerDoc::OnShowDocument  
 The framework calls the `OnShowDocument` function when the server document must be hidden or shown.  
  
```  
virtual void OnShowDocument(BOOL bShow);
```  
  
### Parameters  
 `bShow`  
 Specifies whether the user interface to the document is to be shown or hidden.  
  
### Remarks  
 If `bShow` is **TRUE**, the default implementation activates the server application, if necessary, and causes the container application to scroll its window so that the item is visible. If `bShow` is **FALSE**, the default implementation deactivates the item through a call to `OnDeactivate`, then destroys or hides all frame windows that have been created for the document, except the first one. If no visible documents remain, the default implementation hides the server application.  
  
##  <a name="coleserverdoc__onupdatedocument"></a>  COleServerDoc::OnUpdateDocument  
 Called by the framework when saving a document that is an embedded item in a compound document.  
  
```  
virtual BOOL OnUpdateDocument();
```  
  
### Return Value  
 Nonzero if the document was successfully updated; otherwise 0.  
  
### Remarks  
 The default implementation calls the [COleServerDoc::NotifySaved](#coleserverdoc__notifysaved) and [COleServerDoc::SaveEmbedding](#coleserverdoc__saveembedding) member functions and then marks the document as clean. Override this function if you want to perform special processing when updating an embedded item.  
  
##  <a name="coleserverdoc__requestpositionchange"></a>  COleServerDoc::RequestPositionChange  
 Call this member function to have the container application change the item's position.  
  
```  
void RequestPositionChange(LPCRECT lpPosRect);
```  
  
### Parameters  
 `lpPosRect`  
 Pointer to a `RECT` structure or a `CRect` object containing the item's new position.  
  
### Remarks  
 This function is usually called (in conjunction with `UpdateAllItems`) when the data in an in-place active item has changed. Following this call, the container might or might not perform the change by calling `OnSetItemRects`. The resulting position might be different from the one requested.  
  
##  <a name="coleserverdoc__saveembedding"></a>  COleServerDoc::SaveEmbedding  
 Call this function to tell the container application to save the embedded object.  
  
```  
void SaveEmbedding();
```  
  
### Remarks  
 This function is called automatically from `OnUpdateDocument`. Note that this function causes the item to be updated on disk, so it is usually called only as a result of a specific user action.  
  
##  <a name="coleserverdoc__scrollcontainerby"></a>  COleServerDoc::ScrollContainerBy  
 Call the `ScrollContainerBy` member function to scroll the container document by the amount, in pixels, indicated by `sizeScroll`.  
  
```  
BOOL ScrollContainerBy(CSize sizeScroll);
```  
  
### Parameters  
 `sizeScroll`  
 Indicates how far the container document is to scroll.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 Positive values indicate scrolling down and to the right; negative values indicate scrolling up and to the left.  
  
##  <a name="coleserverdoc__updateallitems"></a>  COleServerDoc::UpdateAllItems  
 Call this function to notify all linked items connected to the document that the document has changed.  
  
```  
void UpdateAllItems(
    COleServerItem* pSender,  
    LPARAM lHint = 0L,  
    CObject* pHint = NULL,  
    DVASPECT nDrawAspect = DVASPECT_CONTENT);
```  
  
### Parameters  
 `pSender`  
 Pointer to the item that modified the document, or **NULL** if all items are to be updated.  
  
 `lHint`  
 Contains information about the modification.  
  
 `pHint`  
 Pointer to an object storing information about the modification.  
  
 `nDrawAspect`  
 Determines how the item is to be drawn. This is a value from the `DVASPECT` enumeration. This parameter can have one of the following values:  
  
- `DVASPECT_CONTENT` Item is represented in such a way that it can be displayed as an embedded object inside its container.  
  
- `DVASPECT_THUMBNAIL` Item is rendered in a "thumbnail" representation so that it can be displayed in a browsing tool.  
  
- `DVASPECT_ICON` Item is represented by an icon.  
  
- `DVASPECT_DOCPRINT` Item is represented as if it were printed using the Print command from the File menu.  
  
### Remarks  
 You typically call this function after the user changes the server document. If an OLE item is linked to the document with an automatic link, the item is updated to reflect the changes. In container applications written with the Microsoft Foundation Class Library, the [OnChange](../../mfc/reference/coleclientitem-class.md#coleclientitem__onchange) member function of `COleClientItem` is called.  
  
 This function calls the `OnUpdate` member function for each of the document's items except the sending item, passing `pHint`, `lHint`, and `nDrawAspect`. Use these parameters to pass information to the items about the modifications made to the document. You can encode information using `lHint` or you can define a `CObject`-derived class to store information about the modifications and pass an object of that class using `pHint`. Override the `OnUpdate` member function in your `COleServerItem`-derived class to optimize the updating of each item depending on whether its presentation has changed.  
  
## See Also  
 [MFC Sample HIERSVR](../../visual-cpp-samples.md)   
 [COleLinkingDoc Class](../../mfc/reference/colelinkingdoc-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [COleDocument Class](../../mfc/reference/coledocument-class.md)   
 [COleLinkingDoc Class](../../mfc/reference/colelinkingdoc-class.md)   
 [COleTemplateServer Class](../../mfc/reference/coletemplateserver-class.md)
