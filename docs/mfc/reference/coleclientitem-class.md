---
description: "Learn more about: COleClientItem Class"
title: "COleClientItem Class"
ms.date: "07/02/2019"
f1_keywords: ["COleClientItem", "AFXOLE/COleClientItem", "AFXOLE/COleClientItem::COleClientItem", "AFXOLE/COleClientItem::Activate", "AFXOLE/COleClientItem::ActivateAs", "AFXOLE/COleClientItem::AttachDataObject", "AFXOLE/COleClientItem::CanCreateFromData", "AFXOLE/COleClientItem::CanCreateLinkFromData", "AFXOLE/COleClientItem::CanPaste", "AFXOLE/COleClientItem::CanPasteLink", "AFXOLE/COleClientItem::Close", "AFXOLE/COleClientItem::ConvertTo", "AFXOLE/COleClientItem::CopyToClipboard", "AFXOLE/COleClientItem::CreateCloneFrom", "AFXOLE/COleClientItem::CreateFromClipboard", "AFXOLE/COleClientItem::CreateFromData", "AFXOLE/COleClientItem::CreateFromFile", "AFXOLE/COleClientItem::CreateLinkFromClipboard", "AFXOLE/COleClientItem::CreateLinkFromData", "AFXOLE/COleClientItem::CreateLinkFromFile", "AFXOLE/COleClientItem::CreateNewItem", "AFXOLE/COleClientItem::CreateStaticFromClipboard", "AFXOLE/COleClientItem::CreateStaticFromData", "AFXOLE/COleClientItem::Deactivate", "AFXOLE/COleClientItem::DeactivateUI", "AFXOLE/COleClientItem::Delete", "AFXOLE/COleClientItem::DoDragDrop", "AFXOLE/COleClientItem::DoVerb", "AFXOLE/COleClientItem::Draw", "AFXOLE/COleClientItem::GetActiveView", "AFXOLE/COleClientItem::GetCachedExtent", "AFXOLE/COleClientItem::GetClassID", "AFXOLE/COleClientItem::GetClipboardData", "AFXOLE/COleClientItem::GetDocument", "AFXOLE/COleClientItem::GetDrawAspect", "AFXOLE/COleClientItem::GetExtent", "AFXOLE/COleClientItem::GetIconFromRegistry", "AFXOLE/COleClientItem::GetIconicMetafile", "AFXOLE/COleClientItem::GetInPlaceWindow", "AFXOLE/COleClientItem::GetItemState", "AFXOLE/COleClientItem::GetLastStatus", "AFXOLE/COleClientItem::GetLinkUpdateOptions", "AFXOLE/COleClientItem::GetType", "AFXOLE/COleClientItem::GetUserType", "AFXOLE/COleClientItem::IsInPlaceActive", "AFXOLE/COleClientItem::IsLinkUpToDate", "AFXOLE/COleClientItem::IsModified", "AFXOLE/COleClientItem::IsOpen", "AFXOLE/COleClientItem::IsRunning", "AFXOLE/COleClientItem::OnActivate", "AFXOLE/COleClientItem::OnActivateUI", "AFXOLE/COleClientItem::OnChange", "AFXOLE/COleClientItem::OnDeactivate", "AFXOLE/COleClientItem::OnDeactivateUI", "AFXOLE/COleClientItem::OnGetClipboardData", "AFXOLE/COleClientItem::OnInsertMenus", "AFXOLE/COleClientItem::OnRemoveMenus", "AFXOLE/COleClientItem::OnSetMenu", "AFXOLE/COleClientItem::OnShowControlBars", "AFXOLE/COleClientItem::OnUpdateFrameTitle", "AFXOLE/COleClientItem::ReactivateAndUndo", "AFXOLE/COleClientItem::Release", "AFXOLE/COleClientItem::Reload", "AFXOLE/COleClientItem::Run", "AFXOLE/COleClientItem::SetDrawAspect", "AFXOLE/COleClientItem::SetExtent", "AFXOLE/COleClientItem::SetHostNames", "AFXOLE/COleClientItem::SetIconicMetafile", "AFXOLE/COleClientItem::SetItemRects", "AFXOLE/COleClientItem::SetLinkUpdateOptions", "AFXOLE/COleClientItem::SetPrintDevice", "AFXOLE/COleClientItem::UpdateLink", "AFXOLE/COleClientItem::CanActivate", "AFXOLE/COleClientItem::OnChangeItemPosition", "AFXOLE/COleClientItem::OnDeactivateAndUndo", "AFXOLE/COleClientItem::OnDiscardUndoState", "AFXOLE/COleClientItem::OnGetClipRect", "AFXOLE/COleClientItem::OnGetItemPosition", "AFXOLE/COleClientItem::OnGetWindowContext", "AFXOLE/COleClientItem::OnScrollBy", "AFXOLE/COleClientItem::OnShowItem"]
helpviewer_keywords: ["COleClientItem [MFC], COleClientItem", "COleClientItem [MFC], Activate", "COleClientItem [MFC], ActivateAs", "COleClientItem [MFC], AttachDataObject", "COleClientItem [MFC], CanCreateFromData", "COleClientItem [MFC], CanCreateLinkFromData", "COleClientItem [MFC], CanPaste", "COleClientItem [MFC], CanPasteLink", "COleClientItem [MFC], Close", "COleClientItem [MFC], ConvertTo", "COleClientItem [MFC], CopyToClipboard", "COleClientItem [MFC], CreateCloneFrom", "COleClientItem [MFC], CreateFromClipboard", "COleClientItem [MFC], CreateFromData", "COleClientItem [MFC], CreateFromFile", "COleClientItem [MFC], CreateLinkFromClipboard", "COleClientItem [MFC], CreateLinkFromData", "COleClientItem [MFC], CreateLinkFromFile", "COleClientItem [MFC], CreateNewItem", "COleClientItem [MFC], CreateStaticFromClipboard", "COleClientItem [MFC], CreateStaticFromData", "COleClientItem [MFC], Deactivate", "COleClientItem [MFC], DeactivateUI", "COleClientItem [MFC], Delete", "COleClientItem [MFC], DoDragDrop", "COleClientItem [MFC], DoVerb", "COleClientItem [MFC], Draw", "COleClientItem [MFC], GetActiveView", "COleClientItem [MFC], GetCachedExtent", "COleClientItem [MFC], GetClassID", "COleClientItem [MFC], GetClipboardData", "COleClientItem [MFC], GetDocument", "COleClientItem [MFC], GetDrawAspect", "COleClientItem [MFC], GetExtent", "COleClientItem [MFC], GetIconFromRegistry", "COleClientItem [MFC], GetIconicMetafile", "COleClientItem [MFC], GetInPlaceWindow", "COleClientItem [MFC], GetItemState", "COleClientItem [MFC], GetLastStatus", "COleClientItem [MFC], GetLinkUpdateOptions", "COleClientItem [MFC], GetType", "COleClientItem [MFC], GetUserType", "COleClientItem [MFC], IsInPlaceActive", "COleClientItem [MFC], IsLinkUpToDate", "COleClientItem [MFC], IsModified", "COleClientItem [MFC], IsOpen", "COleClientItem [MFC], IsRunning", "COleClientItem [MFC], OnActivate", "COleClientItem [MFC], OnActivateUI", "COleClientItem [MFC], OnChange", "COleClientItem [MFC], OnDeactivate", "COleClientItem [MFC], OnDeactivateUI", "COleClientItem [MFC], OnGetClipboardData", "COleClientItem [MFC], OnInsertMenus", "COleClientItem [MFC], OnRemoveMenus", "COleClientItem [MFC], OnSetMenu", "COleClientItem [MFC], OnShowControlBars", "COleClientItem [MFC], OnUpdateFrameTitle", "COleClientItem [MFC], ReactivateAndUndo", "COleClientItem [MFC], Release", "COleClientItem [MFC], Reload", "COleClientItem [MFC], Run", "COleClientItem [MFC], SetDrawAspect", "COleClientItem [MFC], SetExtent", "COleClientItem [MFC], SetHostNames", "COleClientItem [MFC], SetIconicMetafile", "COleClientItem [MFC], SetItemRects", "COleClientItem [MFC], SetLinkUpdateOptions", "COleClientItem [MFC], SetPrintDevice", "COleClientItem [MFC], UpdateLink", "COleClientItem [MFC], CanActivate", "COleClientItem [MFC], OnChangeItemPosition", "COleClientItem [MFC], OnDeactivateAndUndo", "COleClientItem [MFC], OnDiscardUndoState", "COleClientItem [MFC], OnGetClipRect", "COleClientItem [MFC], OnGetItemPosition", "COleClientItem [MFC], OnGetWindowContext", "COleClientItem [MFC], OnScrollBy", "COleClientItem [MFC], OnShowItem"]
ms.assetid: 7f571b7c-2758-4839-847a-0cf1ef643128
---
# COleClientItem Class

Defines the container interface to OLE items.

## Syntax

```
class COleClientItem : public CDocItem
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[COleClientItem::COleClientItem](#coleclientitem)|Constructs a `COleClientItem` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[COleClientItem::Activate](#activate)|Opens the OLE item for an operation and then executes the specified verb.|
|[COleClientItem::ActivateAs](#activateas)|Activates the item as another type.|
|[COleClientItem::AttachDataObject](#attachdataobject)|Accesses the data in the OLE object.|
|[COleClientItem::CanCreateFromData](#cancreatefromdata)|Indicates whether a container application can create an embedded object.|
|[COleClientItem::CanCreateLinkFromData](#cancreatelinkfromdata)|Indicates whether a container application can create a linked object.|
|[COleClientItem::CanPaste](#canpaste)|Indicates whether the Clipboard contains an embeddable or static OLE item.|
|[COleClientItem::CanPasteLink](#canpastelink)|Indicates whether the Clipboard contains a linkable OLE item.|
|[COleClientItem::Close](#close)|Closes a link to a server but does not destroy the OLE item.|
|[COleClientItem::ConvertTo](#convertto)|Converts the item to another type.|
|[COleClientItem::CopyToClipboard](#copytoclipboard)|Copies the OLE item to the Clipboard.|
|[COleClientItem::CreateCloneFrom](#createclonefrom)|Creates a duplicate of an existing item.|
|[COleClientItem::CreateFromClipboard](#createfromclipboard)|Creates an embedded item from the Clipboard.|
|[COleClientItem::CreateFromData](#createfromdata)|Creates an embedded item from a data object.|
|[COleClientItem::CreateFromFile](#createfromfile)|Creates an embedded item from a file.|
|[COleClientItem::CreateLinkFromClipboard](#createlinkfromclipboard)|Creates a linked item from the Clipboard.|
|[COleClientItem::CreateLinkFromData](#createlinkfromdata)|Creates a linked item from a data object.|
|[COleClientItem::CreateLinkFromFile](#createlinkfromfile)|Creates a linked item from a file.|
|[COleClientItem::CreateNewItem](#createnewitem)|Creates a new embedded item by launching the server application.|
|[COleClientItem::CreateStaticFromClipboard](#createstaticfromclipboard)|Creates a static item from the Clipboard.|
|[COleClientItem::CreateStaticFromData](#createstaticfromdata)|Creates a static item from a data object.|
|[COleClientItem::Deactivate](#deactivate)|Deactivates the item.|
|[COleClientItem::DeactivateUI](#deactivateui)|Restores the container application's user interface to its original state.|
|[COleClientItem::Delete](#delete)|Deletes or closes the OLE item if it was a linked item.|
|[COleClientItem::DoDragDrop](#dodragdrop)|Performs a drag-and-drop operation.|
|[COleClientItem::DoVerb](#doverb)|Executes the specified verb.|
|[COleClientItem::Draw](#draw)|Draws the OLE item.|
|[COleClientItem::GetActiveView](#getactiveview)|Gets the view on which the item is activated in place.|
|[COleClientItem::GetCachedExtent](#getcachedextent)|Returns the bounds of the OLE item's rectangle.|
|[COleClientItem::GetClassID](#getclassid)|Gets the present item's class ID.|
|[COleClientItem::GetClipboardData](#getclipboarddata)|Gets the data that would be placed on the Clipboard by calling the `CopyToClipboard` member function.|
|[COleClientItem::GetDocument](#getdocument)|Returns the `COleDocument` object that contains the present item.|
|[COleClientItem::GetDrawAspect](#getdrawaspect)|Gets the item's current view for rendering.|
|[COleClientItem::GetExtent](#getextent)|Returns the bounds of the OLE item's rectangle.|
|[COleClientItem::GetIconFromRegistry](#geticonfromregistry)|Retrieves a handle to an icon associated with the server of a particular CLSID.|
|[COleClientItem::GetIconicMetafile](#geticonicmetafile)|Gets the metafile used for drawing the item's icon.|
|[COleClientItem::GetInPlaceWindow](#getinplacewindow)|Returns a pointer to the item's in-place editing window.|
|[COleClientItem::GetItemState](#getitemstate)|Gets the item's current state.|
|[COleClientItem::GetLastStatus](#getlaststatus)|Returns the status of the last OLE operation.|
|[COleClientItem::GetLinkUpdateOptions](#getlinkupdateoptions)|Returns the update mode for a linked item (advanced feature).|
|[COleClientItem::GetType](#gettype)|Returns the type (embedded, linked, or static) of the OLE item.|
|[COleClientItem::GetUserType](#getusertype)|Gets a string describing the item's type.|
|[COleClientItem::IsInPlaceActive](#isinplaceactive)|Returns TRUE if the item is in-place active.|
|[COleClientItem::IsLinkUpToDate](#islinkuptodate)|Returns TRUE if a linked item is up to date with its source document.|
|[COleClientItem::IsModified](#ismodified)|Returns TRUE if the item has been modified since it was last saved.|
|[COleClientItem::IsOpen](#isopen)|Returns TRUE if the item is currently open in the server application.|
|[COleClientItem::IsRunning](#isrunning)|Returns TRUE if the item's server application is running.|
|[COleClientItem::OnActivate](#onactivate)|Called by the framework to notify the item that it is activated.|
|[COleClientItem::OnActivateUI](#onactivateui)|Called by the framework to notify the item that it is activated and should show its user interface.|
|[COleClientItem::OnChange](#onchange)|Called when the server changes the OLE item. Implementation required.|
|[COleClientItem::OnDeactivate](#ondeactivate)|Called by the framework when an item is deactivated.|
|[COleClientItem::OnDeactivateUI](#ondeactivateui)|Called by the framework when the server has removed its in-place user interface.|
|[COleClientItem::OnGetClipboardData](#ongetclipboarddata)|Called by the framework to get the data to be copied to the Clipboard.|
|[COleClientItem::OnInsertMenus](#oninsertmenus)|Called by the framework to create a composite menu.|
|[COleClientItem::OnRemoveMenus](#onremovemenus)|Called by the framework to remove the container's menus from a composite menu.|
|[COleClientItem::OnSetMenu](#onsetmenu)|Called by the framework to install and remove a composite menu.|
|[COleClientItem::OnShowControlBars](#onshowcontrolbars)|Called by the framework to show and hide control bars.|
|[COleClientItem::OnUpdateFrameTitle](#onupdateframetitle)|Called by the framework to update the frame window's title bar.|
|[COleClientItem::ReactivateAndUndo](#reactivateandundo)|Reactivates the item and undoes the last in-place editing operation.|
|[COleClientItem::Release](#release)|Releases the connection to an OLE linked item and closes it if it was open. Does not destroy the client item.|
|[COleClientItem::Reload](#reload)|Reloads the item after a call to `ActivateAs`.|
|[COleClientItem::Run](#run)|Runs the application associated with the item.|
|[COleClientItem::SetDrawAspect](#setdrawaspect)|Sets the item's current view for rendering.|
|[COleClientItem::SetExtent](#setextent)|Sets the bounding rectangle of the OLE item.|
|[COleClientItem::SetHostNames](#sethostnames)|Sets the names the server displays when editing the OLE item.|
|[COleClientItem::SetIconicMetafile](#seticonicmetafile)|Caches the metafile used for drawing the item's icon.|
|[COleClientItem::SetItemRects](#setitemrects)|Sets the item's bounding rectangle.|
|[COleClientItem::SetLinkUpdateOptions](#setlinkupdateoptions)|Sets the update mode for a linked item (advanced feature).|
|[COleClientItem::SetPrintDevice](#setprintdevice)|Sets the print-target device for this client item.|
|[COleClientItem::UpdateLink](#updatelink)|Updates the presentation cache of an item.|

### Protected Methods

|Name|Description|
|----------|-----------------|
|[COleClientItem::CanActivate](#canactivate)|Called by the framework to determine whether in-place activation is allowed.|
|[COleClientItem::OnChangeItemPosition](#onchangeitemposition)|Called by the framework when an item's position changes.|
|[COleClientItem::OnDeactivateAndUndo](#ondeactivateandundo)|Called by the framework to undo after activation.|
|[COleClientItem::OnDiscardUndoState](#ondiscardundostate)|Called by the framework to discard the item's undo state information.|
|[COleClientItem::OnGetClipRect](#ongetcliprect)|Called by the framework to get the item's clipping-rectangle coordinates.|
|[COleClientItem::OnGetItemPosition](#ongetitemposition)|Called by the framework to get the item's position relative to the view.|
|[COleClientItem::OnGetWindowContext](#ongetwindowcontext)|Called by the framework when an item is activated in place.|
|[COleClientItem::OnScrollBy](#onscrollby)|Called by the framework to scroll the item into view.|
|[COleClientItem::OnShowItem](#onshowitem)|Called by the framework to display the OLE item.|

## Remarks

An OLE item represents data, created and maintained by a server application, which can be "seamlessly" incorporated into a document so that it appears to the user to be a single document. The result is a "compound document" made up of the OLE item and a containing document.

An OLE item can be either embedded or linked. If it is embedded, its data is stored as part of the compound document. If it is linked, its data is stored as part of a separate file created by the server application, and only a link to that file is stored in the compound document. All OLE items contain information specifying the server application that should be called to edit them.

`COleClientItem` defines several overridable functions that are called in response to requests from the server application; these overridables usually act as notifications. This allows the server application to inform the container of changes the user makes when editing the OLE item, or to retrieve information needed during editing.

`COleClientItem` can be used with either the [COleDocument](../../mfc/reference/coledocument-class.md), [COleLinkingDoc](../../mfc/reference/colelinkingdoc-class.md), or [COleServerDoc](../../mfc/reference/coleserverdoc-class.md) class. To use `COleClientItem`, derive a class from it and implement the [OnChange](#onchange) member function, which defines how the container responds to changes made to the item. To support in-place activation, override the [OnGetItemPosition](#ongetitemposition) member function. This function provides information about the displayed position of the OLE item.

For more information about using the container interface, see the articles [Containers: Implementing a Container](../../mfc/containers-implementing-a-container.md) and [Activation](../../mfc/activation-cpp.md).

> [!NOTE]
> The Windows SDK refers to embedded and linked items as "objects" and refers to types of items as "classes." This reference uses the term "item" to distinguish the OLE entity from the corresponding C++ object and the term "type" to distinguish the OLE category from the C++ class.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CDocItem](../../mfc/reference/cdocitem-class.md)

`COleClientItem`

## Requirements

**Header:** afxole.h

## <a name="activate"></a> COleClientItem::Activate

Call this function to execute the specified verb instead of [DoVerb](#doverb) so that you can do your own processing when an exception is thrown.

```cpp
void Activate(
    LONG nVerb,
    CView* pView,
    LPMSG lpMsg = NULL);
```

### Parameters

*nVerb*<br/>
Specifies the verb to execute. It can be one of the following:

|Value|Meaning|Symbol|
|-----------|-------------|------------|
|- 0|Primary verb|OLEIVERB_PRIMARY|
|- 1|Secondary verb|(None)|
|- 1|Display item for editing|OLEIVERB_SHOW|
|- 2|Edit item in separate window|OLEIVERB_OPEN|
|- 3|Hide item|OLEIVERB_HIDE|

The -1 value is typically an alias for another verb. If open editing is not supported, -2 has the same effect as -1. For additional values, see [IOleObject::DoVerb](/windows/win32/api/oleidl/nf-oleidl-ioleobject-doverb) in the Windows SDK.

*pView*<br/>
Pointer to the container view window that contains the OLE item; this is used by the server application for in-place activation. This parameter should be NULL if the container does not support in-place activation.

*lpMsg*<br/>
Pointer to the message that caused the item to be activated.

### Remarks

If the server application was written using the Microsoft Foundation Class Library, this function causes the [OnDoVerb](../../mfc/reference/coleserveritem-class.md#ondoverb) member function of the corresponding `COleServerItem` object to be executed.

If the primary verb is Edit and zero is specified in the *nVerb* parameter, the server application is launched to allow the OLE item to be edited. If the container application supports in-place activation, editing can be done in place. If the container does not support in-place activation (or if the Open verb is specified), the server is launched in a separate window and editing can be done there. Typically, when the user of the container application double-clicks the OLE item, the value for the primary verb in the *nVerb* parameter determines which action the user can take. However, if the server supports only one action, it takes that action, no matter which value is specified in the *nVerb* parameter.

For more information, see [IOleObject::DoVerb](/windows/win32/api/oleidl/nf-oleidl-ioleobject-doverb) in the Windows SDK.

## <a name="activateas"></a> COleClientItem::ActivateAs

Uses OLE's object conversion facilities to activate the item as though it were an item of the type specified by *clsidNew*.

```
virtual BOOL ActivateAs(
    LPCTSTR lpszUserType,
    REFCLSID clsidOld,
    REFCLSID clsidNew);
```

### Parameters

*lpszUserType*<br/>
Pointer to a string representing the target user type, such as "Word Document."

*clsidOld*<br/>
A reference to the item's current class ID. The class ID should represent the type of the actual object, as stored, unless it is a link. In that case, it should be the CLSID of the item to which the link refers. The [COleConvertDialog](../../mfc/reference/coleconvertdialog-class.md) automatically provides the correct class ID for the item.

*clsidNew*<br/>
A reference to the target class ID.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

This is called automatically by [COleConvertDialog::DoConvert](../../mfc/reference/coleconvertdialog-class.md#doconvert). It is not usually called directly.

## <a name="attachdataobject"></a> COleClientItem::AttachDataObject

Call this function to initialize a [COleDataObject](../../mfc/reference/coledataobject-class.md) for accessing the data in the OLE item.

```cpp
void AttachDataObject(COleDataObject& rDataObject) const;
```

### Parameters

*rDataObject*<br/>
Reference to a `COleDataObject` object that will be initialized to allow access to the data in the OLE item.

## <a name="canactivate"></a> COleClientItem::CanActivate

Called by the framework when the user requests in-place activation of the OLE item; this function's return value determines whether in-place activation is allowed.

```
virtual BOOL CanActivate();
```

### Return Value

Nonzero if in-place activation is allowed; otherwise 0.

### Remarks

The default implementation allows in-place activation if the container has a valid window. Override this function to implement special logic for accepting or refusing the activation request. For example, an activation request can be refused if the OLE item is too small or not currently visible.

For more information, see [IOleInPlaceSite::CanInPlaceActivate](/windows/win32/api/oleidl/nf-oleidl-ioleinplacesite-caninplaceactivate) in the Windows SDK.

## <a name="cancreatefromdata"></a> COleClientItem::CanCreateFromData

Checks whether a container application can create an embedded object from the given `COleDataObject` object.

```
static BOOL PASCAL CanCreateFromData(const COleDataObject* pDataObject);
```

### Parameters

*pDataObject*<br/>
Pointer to the [COleDataObject](../../mfc/reference/coledataobject-class.md) object from which the OLE item is to be created.

### Return Value

Nonzero if the container can create an embedded object from the `COleDataObject` object; otherwise 0.

### Remarks

The `COleDataObject` class is used in data transfers for retrieving data in various formats from the Clipboard, through drag and drop, or from an embedded OLE item.

Containers can use this function to decide to enable or disable their Edit Paste and Edit Paste Special commands.

For more information, see the article [Data Objects and Data Sources (OLE)](../../mfc/data-objects-and-data-sources-ole.md).

## <a name="cancreatelinkfromdata"></a> COleClientItem::CanCreateLinkFromData

Checks whether a container application can create a linked object from the given `COleDataObject` object.

```
static BOOL PASCAL CanCreateLinkFromData(const COleDataObject* pDataObject);
```

### Parameters

*pDataObject*<br/>
Pointer to the [COleDataObject](../../mfc/reference/coledataobject-class.md) object from which the OLE item is to be created.

### Return Value

Nonzero if the container can create a linked object from the `COleDataObject` object.

### Remarks

The `COleDataObject` class is used in data transfers for retrieving data in various formats from the Clipboard, through drag and drop, or from an embedded OLE item.

Containers can use this function to decide to enable or disable their Edit Paste Special and Edit Paste Link commands.

For more information, see the article [Data Objects and Data Sources (OLE)](../../mfc/data-objects-and-data-sources-ole.md).

## <a name="canpaste"></a> COleClientItem::CanPaste

Call this function to see whether an embedded OLE item can be pasted from the Clipboard.

```
static BOOL PASCAL CanPaste();
```

### Return Value

Nonzero if an embedded OLE item can be pasted from the Clipboard; otherwise 0.

### Remarks

For more information, see [OleGetClipboard](/windows/win32/api/ole2/nf-ole2-olegetclipboard) and [OleQueryCreateFromData](/windows/win32/api/ole2/nf-ole2-olequerycreatefromdata) in the Windows SDK.

## <a name="canpastelink"></a> COleClientItem::CanPasteLink

Call this function to see whether a linked OLE item can be pasted from the Clipboard.

```
static BOOL PASCAL CanPasteLink();
```

### Return Value

Nonzero if a linked OLE item can be pasted from the Clipboard; otherwise 0.

### Remarks

For more information, see [OleGetClipboard](/windows/win32/api/ole2/nf-ole2-olegetclipboard) and [OleQueryLinkFromData](/windows/win32/api/ole2/nf-ole2-olequerylinkfromdata) in the Windows SDK.

## <a name="close"></a> COleClientItem::Close

Call this function to change the state of an OLE item from the running state to the loaded state, that is, loaded with its handler in memory but with the server not running.

```cpp
void Close(OLECLOSE dwCloseOption = OLECLOSE_SAVEIFDIRTY);
```

### Parameters

*dwCloseOption*<br/>
Flag specifying under what circumstances the OLE item is saved when it returns to the loaded state. It can have one of the following values:

- OLECLOSE_SAVEIFDIRTY Save the OLE item.

- OLECLOSE_NOSAVE Do not save the OLE item.

- OLECLOSE_PROMPTSAVE Prompt the user on whether to save the OLE item.

### Remarks

This function has no effect when the OLE item is not running.

For more information, see [IOleObject::Close](/windows/win32/api/oleidl/nf-oleidl-ioleobject-close) in the Windows SDK.

## <a name="coleclientitem"></a> COleClientItem::COleClientItem

Constructs a `COleClientItem` object and adds it to the container document's collection of document items, which constructs only the C++ object and does not perform any OLE initialization.

```
COleClientItem(COleDocument* pContainerDoc = NULL);
```

### Parameters

*pContainerDoc*<br/>
Pointer to the container document that will contain this item. This can be any [COleDocument](../../mfc/reference/coledocument-class.md) derivative.

### Remarks

If you pass a NULL pointer, no addition is made to the container document. You must explicitly call [COleDocument::AddItem](../../mfc/reference/coledocument-class.md#additem).

You must call one of the following creation member functions before you use the OLE item:

- [CreateFromClipboard](#createfromclipboard)

- [CreateFromData](#createfromdata)

- [CreateFromFile](#createfromfile)

- [CreateStaticFromClipboard](#createstaticfromclipboard)

- [CreateStaticFromData](#createstaticfromdata)

- [CreateLinkFromClipboard](#createlinkfromclipboard)

- [CreateLinkFromData](#createlinkfromdata)

- [CreateLinkFromFile](#createlinkfromfile)

- [CreateNewItem](#createnewitem)

- [CreateCloneFrom](#createclonefrom)

## <a name="convertto"></a> COleClientItem::ConvertTo

Call this member function to convert the item to the type specified by *clsidNew*.

```
virtual BOOL ConvertTo(REFCLSID clsidNew);
```

### Parameters

*clsidNew*<br/>
The class ID of the target type.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

This is called automatically by [COleConvertDialog](../../mfc/reference/coleconvertdialog-class.md). It is not necessary to call it directly.

## <a name="copytoclipboard"></a> COleClientItem::CopyToClipboard

Call this function to copy the OLE item to the Clipboard.

```cpp
void CopyToClipboard(BOOL bIncludeLink = FALSE);
```

### Parameters

*bIncludeLink*<br/>
TRUE if link information should be copied to the Clipboard, allowing a linked item to be pasted; otherwise FALSE.

### Remarks

Typically, you call this function when writing message handlers for the Copy or Cut commands from the Edit menu. You must implement item selection in your container application if you want to implement the Copy or Cut commands.

For more information, see [OleSetClipboard](/windows/win32/api/ole2/nf-ole2-olesetclipboard) in the Windows SDK.

## <a name="createclonefrom"></a> COleClientItem::CreateCloneFrom

Call this function to create a copy of the specified OLE item.

```
BOOL CreateCloneFrom(const COleClientItem* pSrcItem);
```

### Parameters

*pSrcItem*<br/>
Pointer to the OLE item to be duplicated.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

The copy is identical to the source item. You can use this function to support undo operations.

## <a name="createfromclipboard"></a> COleClientItem::CreateFromClipboard

Call this function to create an embedded item from the contents of the Clipboard.

```
BOOL CreateFromClipboard(
    OLERENDER render = OLERENDER_DRAW,
    CLIPFORMAT cfFormat = 0,
    LPFORMATETC lpFormatEtc = NULL);
```

### Parameters

*render*<br/>
Flag specifying how the server will render the OLE item. For the possible values, see [OLERENDER](/windows/win32/api/oleidl/ne-oleidl-olerender) in the Windows SDK.

*cfFormat*<br/>
Specifies the Clipboard data format to be cached when creating the OLE item.

*lpFormatEtc*<br/>
Pointer to a [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) structure used if *render* is OLERENDER_FORMAT or OLERENDER_DRAW. Provide a value for this parameter only if you want to specify additional format information beyond the Clipboard format specified by *cfFormat*. If you omit this parameter, default values are used for the other fields in the `FORMATETC` structure.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

You typically call this function from the message handler for the Paste command on the Edit menu. (The Paste command is enabled by the framework if the [CanPaste](#canpaste) member function returns nonzero.)

For more information, see [OLERENDER](/windows/win32/api/oleidl/ne-oleidl-olerender) and [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) in the Windows SDK.

## <a name="createfromdata"></a> COleClientItem::CreateFromData

Call this function to create an embedded item from a `COleDataObject` object.

```
BOOL CreateFromData(
    COleDataObject* pDataObject,
    OLERENDER render = OLERENDER_DRAW,
    CLIPFORMAT cfFormat = 0,
    LPFORMATETC lpFormatEtc = NULL);
```

### Parameters

*pDataObject*<br/>
Pointer to the [COleDataObject](../../mfc/reference/coledataobject-class.md) object from which the OLE item is to be created.

*render*<br/>
Flag specifying how the server will render the OLE item. For the possible values, see [OLERENDER](/windows/win32/api/oleidl/ne-oleidl-olerender) in the Windows SDK.

*cfFormat*<br/>
Specifies the Clipboard data format to be cached when creating the OLE item.

*lpFormatEtc*<br/>
Pointer to a [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) structure used if *render* is OLERENDER_FORMAT or OLERENDER_DRAW. Provide a value for this parameter only if you want to specify additional format information beyond the Clipboard format specified by *cfFormat*. If you omit this parameter, default values are used for the other fields in the `FORMATETC` structure.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

Data transfer operations, such as pasting from the Clipboard or drag-and-drop operations, provide `COleDataObject` objects containing the information offered by a server application. It is usually used in your override of [CView::OnDrop](../../mfc/reference/cview-class.md#ondrop).

For more information, see [OleCreateFromData](/windows/win32/api/ole2/nf-ole2-olecreatefromdata), [OLERENDER](/windows/win32/api/oleidl/ne-oleidl-olerender), and [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) in the Windows SDK.

## <a name="createfromfile"></a> COleClientItem::CreateFromFile

Call this function to create an embedded OLE item from a file.

```
BOOL CreateFromFile(
    LPCTSTR lpszFileName,
    REFCLSID clsid = CLSID_NULL,
    OLERENDER render = OLERENDER_DRAW,
    CLIPFORMAT cfFormat = 0,
    LPFORMATETC lpFormatEtc = NULL);
```

### Parameters

*lpszFileName*<br/>
Pointer to the name of the file from which the OLE item is to be created.

*clsid*<br/>
Reserved for future use.

*render*<br/>
Flag specifying how the server will render the OLE item. For the possible values, see [OLERENDER](/windows/win32/api/oleidl/ne-oleidl-olerender) in the Windows SDK.

*cfFormat*<br/>
Specifies the Clipboard data format to be cached when creating the OLE item.

*lpFormatEtc*<br/>
Pointer to a [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) structure used if *render* is OLERENDER_FORMAT or OLERENDER_DRAW. Provide a value for this parameter only if you want to specify additional format information beyond the Clipboard format specified by *cfFormat*. If you omit this parameter, default values are used for the other fields in the `FORMATETC` structure.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

The framework calls this function from [COleInsertDialog::CreateItem](../../mfc/reference/coleinsertdialog-class.md#createitem) if the user chooses OK from the Insert Object dialog box when the Create from File button is selected.

For more information, see [OleCreateFromFile](/windows/win32/api/ole/nf-ole-olecreatefromfile), [OLERENDER](/windows/win32/api/oleidl/ne-oleidl-olerender), and [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) in the Windows SDK.

## <a name="createlinkfromclipboard"></a> COleClientItem::CreateLinkFromClipboard

Call this function to create a linked item from the contents of the Clipboard.

```
BOOL CreateLinkFromClipboard(
    OLERENDER render = OLERENDER_DRAW,
    CLIPFORMAT cfFormat = 0,
    LPFORMATETC lpFormatEtc = NULL);
```

### Parameters

*render*<br/>
Flag specifying how the server will render the OLE item. For the possible values, see [OLERENDER](/windows/win32/api/oleidl/ne-oleidl-olerender) in the Windows SDK.

*cfFormat*<br/>
Specifies the Clipboard data format to be cached when creating the OLE item.

*lpFormatEtc*<br/>
Pointer to a [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) structure used if *render* is OLERENDER_FORMAT or OLERENDER_DRAW. Provide a value for this parameter only if you want to specify additional format information beyond the Clipboard format specified by *cfFormat*. If you omit this parameter, default values are used for the other fields in the `FORMATETC` structure.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

You typically call this function from the message handler for the Paste Link command on the Edit menu. (The Paste Link command is enabled in the default implementation of [COleDocument](../../mfc/reference/coledocument-class.md) if the Clipboard contains an OLE item that can be linked to.)

For more information, see [OLERENDER](/windows/win32/api/oleidl/ne-oleidl-olerender) and [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) in the Windows SDK.

## <a name="createlinkfromdata"></a> COleClientItem::CreateLinkFromData

Call this function to create a linked item from a `COleDataObject` object.

```
BOOL CreateLinkFromData(
    COleDataObject* pDataObject,
    OLERENDER render = OLERENDER_DRAW,
    CLIPFORMAT cfFormat = 0,
    LPFORMATETC lpFormatEtc = NULL);
```

### Parameters

*pDataObject*<br/>
Pointer to the [COleDataObject](../../mfc/reference/coledataobject-class.md) object from which the OLE item is to be created.

*render*<br/>
Flag specifying how the server will render the OLE item. For the possible values, see [OLERENDER](/windows/win32/api/oleidl/ne-oleidl-olerender) in the Windows SDK.

*cfFormat*<br/>
Specifies the Clipboard data format to be cached when creating the OLE item.

*lpFormatEtc*<br/>
Pointer to a [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) structure used if *render* is OLERENDER_FORMAT or OLERENDER_DRAW. Provide a value for this parameter only if you want to specify additional format information beyond the Clipboard format specified by *cfFormat*. If you omit this parameter, default values are used for the other fields in the `FORMATETC` structure.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

Call this during a drop operation when the user indicates a link should be created. It can also be used to handle the Edit Paste command. It is called by the framework in `COleClientItem::CreateLinkFromClipboard` and in [COlePasteSpecialDialog::CreateItem](../../mfc/reference/colepastespecialdialog-class.md#createitem) when the Link option has been selected.

For more information, see [OleCreateLinkFromData](/windows/win32/api/ole2/nf-ole2-olecreatelinkfromdata), [OLERENDER](/windows/win32/api/oleidl/ne-oleidl-olerender), and [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) in the Windows SDK.

## <a name="createlinkfromfile"></a> COleClientItem::CreateLinkFromFile

Call this function to create a linked OLE item from a file.

```
BOOL CreateLinkFromFile(
    LPCTSTR lpszFileName,
    OLERENDER render = OLERENDER_DRAW,
    CLIPFORMAT cfFormat = 0,
    LPFORMATETC lpFormatEtc = NULL);
```

### Parameters

*lpszFileName*<br/>
Pointer to the name of the file from which the OLE item is to be created.

*render*<br/>
Flag specifying how the server will render the OLE item. For the possible values, see [OLERENDER](/windows/win32/api/oleidl/ne-oleidl-olerender) in the Windows SDK.

*cfFormat*<br/>
Specifies the Clipboard data format to be cached when creating the OLE item.

*lpFormatEtc*<br/>
Pointer to a [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) structure used if *render* is OLERENDER_FORMAT or OLERENDER_DRAW. Provide a value for this parameter only if you want to specify additional format information beyond the Clipboard format specified by *cfFormat*. If you omit this parameter, default values are used for the other fields in the `FORMATETC` structure.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

The framework calls this function if the user chooses OK from the Insert Object dialog box when the Create from File button is selected and the Link check box is checked. It is called from [COleInsertDialog::CreateItem](../../mfc/reference/coleinsertdialog-class.md#createitem).

For more information, see [OleCreateLinkToFile](/windows/win32/api/ole2/nf-ole2-olecreatelinktofile), [OLERENDER](/windows/win32/api/oleidl/ne-oleidl-olerender), and [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) in the Windows SDK.

## <a name="createnewitem"></a> COleClientItem::CreateNewItem

Call this function to create an embedded item; this function launches the server application that allows the user to create the OLE item.

```
BOOL CreateNewItem(
    REFCLSID clsid,
    OLERENDER render = OLERENDER_DRAW,
    CLIPFORMAT cfFormat = 0,
    LPFORMATETC lpFormatEtc = NULL);
```

### Parameters

*clsid*<br/>
ID that uniquely identifies the type of OLE item to create.

*render*<br/>
Flag specifying how the server will render the OLE item. For the possible values, see [OLERENDER](/windows/win32/api/oleidl/ne-oleidl-olerender) in the Windows SDK.

*cfFormat*<br/>
Specifies the Clipboard data format to be cached when creating the OLE item.

*lpFormatEtc*<br/>
Pointer to a [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) structure used if *render* is OLERENDER_FORMAT or OLERENDER_DRAW. Provide a value for this parameter only if you want to specify additional format information beyond the Clipboard format specified by *cfFormat*. If you omit this parameter, default values are used for the other fields in the `FORMATETC` structure.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

The framework calls this function if the user chooses OK from the Insert Object dialog box when the Create New button is selected.

For more information, see [OleCreate](/windows/win32/api/ole/nf-ole-olecreate), [OLERENDER](/windows/win32/api/oleidl/ne-oleidl-olerender), and [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) in the Windows SDK.

## <a name="createstaticfromclipboard"></a> COleClientItem::CreateStaticFromClipboard

Call this function to create a static item from the contents of the Clipboard.

```
BOOL CreateStaticFromClipboard(
    OLERENDER render = OLERENDER_DRAW,
    CLIPFORMAT cfFormat = 0,
    LPFORMATETC lpFormatEtc = NULL);
```

### Parameters

*render*<br/>
Flag specifying how the server will render the OLE item. For the possible values, see [OLERENDER](/windows/win32/api/oleidl/ne-oleidl-olerender) in the Windows SDK.

*cfFormat*<br/>
Specifies the Clipboard data format to be cached when creating the OLE item.

*lpFormatEtc*<br/>
Pointer to a [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) structure used if *render* is OLERENDER_FORMAT or OLERENDER_DRAW. Provide a value for this parameter only if you want to specify additional format information beyond the Clipboard format specified by *cfFormat*. If you omit this parameter, default values are used for the other fields in the `FORMATETC` structure.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

A static item contains the presentation data but not the native data; consequently it cannot be edited. You typically call this function if the [CreateFromClipboard](#createfromclipboard) member function fails.

For more information, see [OLERENDER](/windows/win32/api/oleidl/ne-oleidl-olerender) and [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) in the Windows SDK.

## <a name="createstaticfromdata"></a> COleClientItem::CreateStaticFromData

Call this function to create a static item from a `COleDataObject` object.

```
BOOL CreateStaticFromData(
    COleDataObject* pDataObject,
    OLERENDER render = OLERENDER_DRAW,
    CLIPFORMAT cfFormat = 0,
    LPFORMATETC lpFormatEtc = NULL);
```

### Parameters

*pDataObject*<br/>
Pointer to the [COleDataObject](../../mfc/reference/coledataobject-class.md) object from which the OLE item is to be created.

*render*<br/>
Flag specifying how the server will render the OLE item. For the possible values, see [OLERENDER](/windows/win32/api/oleidl/ne-oleidl-olerender) in the Windows SDK.

*cfFormat*<br/>
Specifies the Clipboard data format to be cached when creating the OLE item.

*lpFormatEtc*<br/>
Pointer to a [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) structure used if *render* is OLERENDER_FORMAT or OLERENDER_DRAW. Provide a value for this parameter only if you want to specify additional format information beyond the Clipboard format specified by *cfFormat*. If you omit this parameter, default values are used for the other fields in the `FORMATETC` structure.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

A static item contains the presentation data but not the native data; consequently, it cannot be edited. This is essentially the same as [CreateStaticFromClipboard](#createstaticfromclipboard) except that a static item can be created from an arbitrary `COleDataObject`, not just from the Clipboard.

Used in [COlePasteSpecialDialog::CreateItem](../../mfc/reference/colepastespecialdialog-class.md#createitem) when Static is selected.

For more information, see [OleCreateStaticFromData](/windows/win32/api/ole2/nf-ole2-olecreatestaticfromdata), [OLERENDER](/windows/win32/api/oleidl/ne-oleidl-olerender), and [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) in the Windows SDK.

## <a name="deactivate"></a> COleClientItem::Deactivate

Call this function to deactivate the OLE item and free any associated resources.

```cpp
void Deactivate();
```

### Remarks

You typically deactivate an in-place active OLE item when the user clicks the mouse on the client area outside the bounds of the item. Note that deactivating the OLE item will discard its undo state, making it impossible to call the [ReactivateAndUndo](#reactivateandundo) member function.

If your application supports undo, do not call `Deactivate`; instead, call [DeactivateUI](#deactivateui).

For more information, see [IOleInPlaceObject::InPlaceDeactivate](/windows/win32/api/oleidl/nf-oleidl-ioleinplaceobject-inplacedeactivate) in the Windows SDK.

## <a name="deactivateui"></a> COleClientItem::DeactivateUI

Call this function when the user deactivates an item that was activated in place.

```cpp
void DeactivateUI();
```

### Remarks

This function restores the container application's user interface to its original state, hiding any menus and other controls that were created for in-place activation.

This function does not flush the undo state information for the item. That information is retained so that [ReactivateAndUndo](#reactivateandundo) can later be used to execute an undo command in the server application, in case the container's undo command is chosen immediately after deactivating the item.

For more information, see [IOleInPlaceObject::InPlaceDeactivate](/windows/win32/api/oleidl/nf-oleidl-ioleinplaceobject-inplacedeactivate) in the Windows SDK.

## <a name="delete"></a> COleClientItem::Delete

Call this function to delete the OLE item from the container document.

```cpp
void Delete(BOOL bAutoDelete = TRUE);
```

### Parameters

*bAutoDelete*<br/>
Specifies whether the item is to be removed from the document.

### Remarks

This function calls the [Release](#release) member function, which in turn deletes the C++ object for the item, permanently removing the OLE item from the document. If the OLE item is embedded, the native data for the item is deleted. It always closes a running server; therefore, if the item is an open link, this function closes it.

## <a name="dodragdrop"></a> COleClientItem::DoDragDrop

Call the `DoDragDrop` member function to perform a drag-and-drop operation.

```
DROPEFFECT DoDragDrop(
    LPCRECT lpItemRect,
    CPoint ptOffset,
    BOOL bIncludeLink = FALSE,
    DWORD dwEffects = DROPEFFECT_COPY | DROPEFFECT_MOVE,
    LPCRECT lpRectStartDrag = NULL);
```

### Parameters

*lpItemRect*<br/>
The item's rectangle on screen in client coordinates (pixels).

*ptOffset*<br/>
The offset from *lpItemRect* where the mouse position was at the time of the drag.

*bIncludeLink*<br/>
Set this to TRUE if the link data should be copied to the Clipboard. Set it to FALSE if your server application does not support links.

*dwEffects*<br/>
Determines the effects that the drag source will allow in the drag operation.

*lpRectStartDrag*<br/>
Pointer to the rectangle that defines where the drag actually starts. For more information, see the following Remarks section.

### Return Value

A DROPEFFECT value. If it is DROPEFFECT_MOVE, the original data should be removed.

### Remarks

The drag-and-drop operation does not start immediately. It waits until the mouse cursor leaves the rectangle specified by *lpRectStartDrag* or until a specified number of milliseconds have passed. If *lpRectStartDrag* is NULL, the size of the rectangle is one pixel.

The delay time is specified by a registry key setting. You can change the delay time by calling [CWinApp::WriteProfileString](../../mfc/reference/cwinapp-class.md#writeprofilestring) or [CWinApp::WriteProfileInt](../../mfc/reference/cwinapp-class.md#writeprofileint). If you do not specify the delay time, a default value of 200 milliseconds is used. Drag delay time is stored as follows:

- Windows NT   Drag delay time is stored in HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows\NT\CurrentVersion\IniFileMapping\win.ini\Windows\DragDelay.

- Windows 3.x   Drag delay time is stored in the WIN.INI file, under the [Windows} section.

- Windows 95/98   Drag delay time is stored in a cached version of WIN.INI.

For more information about how drag delay information is stored in either the registry or the .INI file, see [WriteProfileString](/windows/win32/api/winbase/nf-winbase-writeprofilestringw) in the Windows SDK.

## <a name="doverb"></a> COleClientItem::DoVerb

Call `DoVerb` to execute the specified verb.

```
virtual BOOL DoVerb(
    LONG nVerb,
    CView* pView,
    LPMSG lpMsg = NULL);
```

### Parameters

*nVerb*<br/>
Specifies the verb to execute. It can include one of the following:

|Value|Meaning|Symbol|
|-----------|-------------|------------|
|- 0|Primary verb|OLEIVERB_PRIMARY|
|- 1|Secondary verb|(None)|
|- 1|Display item for editing|OLEIVERB_SHOW|
|- 2|Edit item in separate window|OLEIVERB_OPEN|
|- 3|Hide item|OLEIVERB_HIDE|

The -1 value is typically an alias for another verb. If open editing is not supported, -2 has the same effect as -1. For additional values, see [IOleObject::DoVerb](/windows/win32/api/oleidl/nf-oleidl-ioleobject-doverb) in the Windows SDK.

*pView*<br/>
Pointer to the view window; this is used by the server for in-place activation. This parameter should be NULL if the container application does not allow in-place activation.

*lpMsg*<br/>
Pointer to the message that caused the item to be activated.

### Return Value

Nonzero if the verb was successfully executed; otherwise 0.

### Remarks

This function calls the [Activate](#activate) member function to execute the verb. It also catches exceptions and displays a message box to the user if one is thrown.

If the primary verb is Edit and zero is specified in the *nVerb* parameter, the server application is launched to allow the OLE item to be edited. If the container application supports in-place activation, editing can be done in place. If the container does not support in-place activation (or if the Open verb is specified), the server is launched in a separate window and editing can be done there. Typically, when the user of the container application double-clicks the OLE item, the value for the primary verb in the *nVerb* parameter determines which action the user can take. However, if the server supports only one action, it takes that action, no matter which value is specified in the *nVerb* parameter.

## <a name="draw"></a> COleClientItem::Draw

Call this function to draw the OLE item into the specified bounding rectangle using the specified device context.

```
BOOL Draw(
    CDC* pDC,
    LPCRECT lpBounds,
    DVASPECT nDrawAspect = (DVASPECT)-1);
```

### Parameters

*pDC*<br/>
Pointer to a [CDC](../../mfc/reference/cdc-class.md) object used for drawing the OLE item.

*lpBounds*<br/>
Pointer to a [CRect](../../atl-mfc-shared/reference/crect-class.md) object or `RECT` structure that defines the bounding rectangle in which to draw the OLE item (in logical units determined by the device context).

*nDrawAspect*<br/>
Specifies the aspect of the OLE item, that is, how it should be displayed. If *nDrawAspect* is -1, the last aspect set by using [SetDrawAspect](#setdrawaspect) is used. For more information about possible values for this flag, see [SetDrawAspect](#setdrawaspect).

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

The function may use the metafile representation of the OLE item created by the [OnDraw](../../mfc/reference/coleserveritem-class.md#ondraw) member function of `COleServerItem`.

Typically you use `Draw` for screen display, passing the screen device context as *pDC*. In this case, you need to specify only the first two parameters.

The *lpBounds* parameter identifies the rectangle in the target device context (relative to its current mapping mode). Rendering may involve scaling the picture and can be used by container applications to impose a view that scales between the displayed view and the final printed image.

For more information, see [IViewObject::Draw](/windows/win32/api/oleidl/nf-oleidl-iviewobject-draw) in the Windows SDK.

## <a name="getactiveview"></a> COleClientItem::GetActiveView

Returns the view on which the item is in-place activated.

```
CView* GetActiveView() const;
```

### Return Value

A pointer to the view; otherwise NULL if the item is not in-place activated.

## <a name="getcachedextent"></a> COleClientItem::GetCachedExtent

Call this function to retrieve the OLE item's size.

```
BOOL GetCachedExtent(
    LPSIZE lpSize,
    DVASPECT nDrawAspect = (DVASPECT)-1);
```

### Parameters

*lpSize*<br/>
Pointer to a `SIZE` structure or a [CSize](../../atl-mfc-shared/reference/csize-class.md) object that will receive the size information.

*nDrawAspect*<br/>
Specifies the aspect of the OLE item whose bounds are to be retrieved. For possible values, see [SetDrawAspect](#setdrawaspect).

### Return Value

Nonzero if successful; 0 if the OLE item is blank.

### Remarks

This function provides the same information as [GetExtent](#getextent). However, you can call `GetCachedExtent` to get extent information during the processing of other OLE handlers, such as [OnChange](#onchange). The dimensions are in MM_HIMETRIC units.

This is possible because `GetCachedExtent` uses the [IViewObject2](/windows/win32/api/oleidl/nn-oleidl-iviewobject2) interface rather than use the [IOleObject](/windows/win32/api/oleidl/nn-oleidl-ioleobject) interface to get the extent of this item. The `IViewObject2` COM object caches the extent information used in the previous call to [IViewObject::Draw](/windows/win32/api/oleidl/nf-oleidl-iviewobject-draw).

For more information, see [IViewObject2::GetExtent](/windows/win32/api/oleidl/nf-oleidl-iviewobject2-getextent) in the Windows SDK.

## <a name="getclassid"></a> COleClientItem::GetClassID

Returns the class ID of the item into the memory pointed to by *pClassID*.

```cpp
void GetClassID(CLSID* pClassID) const;
```

### Parameters

*pClassID*<br/>
Pointer to an identifier of type [CLSID](/windows/win32/com/clsid-key-hklm) to retrieve the class ID. For information on CLSID, see the Windows SDK.

### Remarks

The class ID is a 128-bit number that uniquely identifies the application that edits the item.

For more information, see [IPersist::GetClassID](/windows/win32/api/objidl/nf-objidl-ipersist-getclassid) in the Windows SDK.

## <a name="getclipboarddata"></a> COleClientItem::GetClipboardData

Call this function to get a `COleDataSource` object containing all the data that would be placed on the Clipboard by a call to the [CopyToClipboard](#copytoclipboard) member function.

```cpp
void GetClipboardData(
    COleDataSource* pDataSource,
    BOOL bIncludeLink = FALSE,
    LPPOINT lpOffset = NULL,
    LPSIZE lpSize = NULL);
```

### Parameters

*pDataSource*<br/>
Pointer to a [COleDataSource](../../mfc/reference/coledatasource-class.md) object that will receive the data contained in the OLE item.

*bIncludeLink*<br/>
TRUE if link data should be included; otherwise FALSE.

*lpOffset*<br/>
The offset of the mouse cursor from the origin of the object in pixels.

*lpSize*<br/>
The size of the object in pixels.

### Remarks

`GetClipboardData` is called as the default implementation of [OnGetClipboardData](#ongetclipboarddata). Override `OnGetClipboardData` only if you want to offer data formats in addition to those offered by `CopyToClipboard`. Place those formats in the `COleDataSource` object before or after calling `CopyToClipboard`, and then pass the `COleDataSource` object to the [COleDataSource::SetClipboard](../../mfc/reference/coledatasource-class.md#setclipboard) function. For example, if you want the OLE item's position in its container document to accompany it on the Clipboard, you would define your own format for passing that information and place it in the `COleDataSource` before calling `CopyToClipboard`.

## <a name="getdocument"></a> COleClientItem::GetDocument

Call this function to get a pointer to the document that contains the OLE item.

```
COleDocument* GetDocument() const;
```

### Return Value

A pointer to the document that contains the OLE item. NULL if the item is not part of a document.

### Remarks

This pointer allows access to the `COleDocument` object that you passed as an argument to the `COleClientItem` constructor.

## <a name="getdrawaspect"></a> COleClientItem::GetDrawAspect

Call the `GetDrawAspect` member function to determine the current "aspect," or view, of the item.

```
DVASPECT GetDrawAspect() const;
```

### Return Value

A value from the DVASPECT enumeration, whose values are listed in the reference for [SetDrawAspect](#setdrawaspect).

### Remarks

The aspect specifies how the item is to be rendered.

## <a name="getextent"></a> COleClientItem::GetExtent

Call this function to retrieve the OLE item's size.

```
BOOL GetExtent(
    LPSIZE lpSize,
    DVASPECT nDrawAspect = (DVASPECT)- 1);
```

### Parameters

*lpSize*<br/>
Pointer to a `SIZE` structure or a `CSize` object that will receive the size information.

*nDrawAspect*<br/>
Specifies the aspect of the OLE item whose bounds are to be retrieved. For possible values, see [SetDrawAspect](#setdrawaspect).

### Return Value

Nonzero if successful; 0 if the OLE item is blank.

### Remarks

If the server application was written using the Microsoft Foundation Class Library, this function causes the [OnGetExtent](../../mfc/reference/coleserveritem-class.md#ongetextent) member function of the corresponding `COleServerItem` object to be called. Note that the retrieved size may differ from the size last set by the [SetExtent](#setextent) member function; the size specified by `SetExtent` is treated as a suggestion. The dimensions are in MM_HIMETRIC units.

> [!NOTE]
> Do not call `GetExtent` during the processing of an OLE handler, such as [OnChange](#onchange). Call [GetCachedExtent](#getcachedextent) instead.

For more information, see [IOleObject::GetExtent](/windows/win32/api/oleidl/nf-oleidl-ioleobject-getextent) in the Windows SDK.

## <a name="geticonfromregistry"></a> COleClientItem::GetIconFromRegistry

Call this member function to retrieve a handle to an icon resource associated with the server of a particular CLSID.

```
HICON GetIconFromRegistry() const;

static HICON GetIconFromRegistry(CLSID& clsid);
```

### Parameters

*clsid*<br/>
A reference to the CLSID for the server associated with the icon.

### Return Value

A valid handle to the icon resource, or NULL if the server's icon, or a default icon, can't be found.

### Remarks

This member function will not start the server or obtain an icon dynamically, even if the server is already running. Instead, this member function opens the server's executable image and retrieves the static icon associated with the server as it was registered.

## <a name="geticonicmetafile"></a> COleClientItem::GetIconicMetafile

Retrieves the metafile used for drawing the item's icon.

```
HGLOBAL GetIconicMetafile();
```

### Return Value

A handle to the metafile if successful; otherwise NULL.

### Remarks

If there is no current icon, a default icon is returned. This is called automatically by the MFC/OLE dialogs and is usually not called directly.

This function also calls [SetIconicMetafile](#seticonicmetafile) to cache the metafile for later use.

## <a name="getinplacewindow"></a> COleClientItem::GetInPlaceWindow

Call the `GetInPlaceWindow` member function to get a pointer to the window in which the item has been opened for in-place editing.

```
CWnd* GetInPlaceWindow();
```

### Return Value

A pointer to the item's in-place editing window; NULL if the item is not active or if its server is unavailable.

### Remarks

This function should be called only for items that are in-place active.

## <a name="getitemstate"></a> COleClientItem::GetItemState

Call this function to get the OLE item's current state.

```
UINT GetItemState() const;
```

### Return Value

A `COleClientItem::ItemState` enumerated value, which can be one of the following: `emptyState`, `loadedState`, `openState`, `activeState`, `activeUIState`. For information about these states, see the article [Containers: Client-Item States](../../mfc/containers-client-item-states.md).

### Remarks

To be notified when the OLE item's state changes, use the [OnChange](#onchange) member function.

For more information, see the article [Containers: Client-Item States](../../mfc/containers-client-item-states.md).

## <a name="getlaststatus"></a> COleClientItem::GetLastStatus

Returns the status code of the last OLE operation.

```
SCODE GetLastStatus() const;
```

### Return Value

An SCODE value.

### Remarks

For member functions that return a BOOL value of FALSE, or other member functions that return NULL, `GetLastStatus` returns more detailed failure information. Be aware that most OLE member functions throw exceptions for more serious errors. The specific information on the interpretation of the SCODE depends on the underlying OLE call that last returned an SCODE value.

For more information on SCODE, see [Structure of COM Error Codes](/windows/win32/com/structure-of-com-error-codes) in the Windows SDK documentation.

## <a name="getlinkupdateoptions"></a> COleClientItem::GetLinkUpdateOptions

Call this function to get the current value of the link-update option for the OLE item.

```
OLEUPDATE GetLinkUpdateOptions();
```

### Return Value

One of the following values:

- OLEUPDATE_ALWAYS Update the linked item whenever possible. This option supports the Automatic link-update radio button in the Links dialog box.

- OLEUPDATE_ONCALL Update the linked item only on request from the container application (when the [UpdateLink](#updatelink) member function is called). This option supports the Manual link-update radio button in the Links dialog box.

### Remarks

This is an advanced operation.

This function is called automatically by the [COleLinksDialog](../../mfc/reference/colelinksdialog-class.md) class.

For more information, see [IOleLink::GetUpdateOptions](/windows/win32/api/oleidl/nf-oleidl-iolelink-getupdateoptions) in the Windows SDK.

## <a name="gettype"></a> COleClientItem::GetType

Call this function to determine whether the OLE item is embedded or linked, or static.

```
OLE_OBJTYPE GetType() const;
```

### Return Value

An unsigned integer with one of the following values:

- OT_LINK The OLE item is a link.

- OT_EMBEDDED The OLE item is embedded.

- OT_STATIC The OLE item is static, that is, it contains only presentation data, not native data, and thus cannot be edited.

## <a name="getusertype"></a> COleClientItem::GetUserType

Call this function to get the user-visible string describing the OLE item's type, such as "Word document."

```cpp
void GetUserType(
    USERCLASSTYPE nUserClassType,
    CString& rString);
```

### Parameters

*nUserClassType*<br/>
A value indicating the desired variant of the string describing the OLE item's type. This can have one of the following values:

- USERCLASSTYPE_FULL The full type name displayed to the user.

- USERCLASSTYPE_SHORT A short name (15 characters maximum) for use in pop-up menus and the Edit Links dialog box.

- USERCLASSTYPE_APPNAME Name of the application servicing the class.

*rString*<br/>
A reference to a [CString](../../atl-mfc-shared/reference/cstringt-class.md) object to which the string describing the OLE item's type is to be returned.

### Remarks

This is often the entry in the system registration database.

If the full type name is requested but not available, the short name is used instead. If no entry for the type of OLE item is found in the registration database, or if there are no user types registered for the type of OLE item, then the user type currently stored in the OLE item is used. If that user type name is an empty string, "Unknown Object" is used.

For more information, see [IOleObject::GetUserType](/windows/win32/api/oleidl/nf-oleidl-ioleobject-getusertype) in the Windows SDK.

## <a name="isinplaceactive"></a> COleClientItem::IsInPlaceActive

Call this function to see whether the OLE item is in-place active.

```
BOOL IsInPlaceActive() const;
```

### Return Value

Nonzero if the OLE item is in-place active; otherwise 0.

### Remarks

It is common to execute different logic depending on whether the item is being edited in place. The function checks whether the current item state is equal to either the `activeState` or the `activeUIState`.

## <a name="islinkuptodate"></a> COleClientItem::IsLinkUpToDate

Call this function to see whether the OLE item is up to date.

```
BOOL IsLinkUpToDate() const;
```

### Return Value

Nonzero if the OLE item is up to date; otherwise 0.

### Remarks

A linked item can be out of date if its source document has been updated. An embedded item that contains links within it can similarly become out of date. The function does a recursive check of the OLE item. Note that determining whether an OLE item is out of date can be as expensive as actually performing an update.

This is called automatically by the [COleLinksDialog](../../mfc/reference/colelinksdialog-class.md) implementation.

For more information, see [IOleObject::IsUpToDate](/windows/win32/api/oleidl/nf-oleidl-ioleobject-isuptodate) in the Windows SDK.

## <a name="ismodified"></a> COleClientItem::IsModified

Call this function to see whether the OLE item is dirty (modified since it was last saved).

```
BOOL IsModified() const;
```

### Return Value

Nonzero if the OLE item is dirty; otherwise 0.

### Remarks

For more information, see [IPersistStorage::IsDirty](/windows/win32/api/objidl/nf-objidl-ipersiststorage-isdirty) in the Windows SDK.

## <a name="isopen"></a> COleClientItem::IsOpen

Call this function to see whether the OLE item is open; that is, opened in an instance of the server application running in a separate window.

```
BOOL IsOpen() const;
```

### Return Value

Nonzero if the OLE item is open; otherwise 0.

### Remarks

It is used to determine when to draw the object with a hatching pattern. An open object should have a hatch pattern drawn on top of the object. You can use a [CRectTracker](../../mfc/reference/crecttracker-class.md) object to accomplish this.

## <a name="isrunning"></a> COleClientItem::IsRunning

Call this function to see whether the OLE item is running; that is, whether the item is loaded and running in the server application.

```
BOOL IsRunning() const;
```

### Return Value

Nonzero if the OLE item is running; otherwise 0.

### Remarks

For more information, see [OleIsRunning](/windows/win32/api/ole2/nf-ole2-oleisrunning) in the Windows SDK.

## <a name="onactivate"></a> COleClientItem::OnActivate

Called by the framework to notify the item that it has just been activated in place.

```
virtual void OnActivate();
```

### Remarks

Note that this function is called to indicate that the server is running, not to indicate that its user interface has been installed in the container application. At this point, the object does not have an active user interface (is not `activeUIState`). It has not installed its menus or toolbar. The [OnActivateUI](#onactivateui) member function is called when that happens.

The default implementation calls the [OnChange](#onchange) member function with OLE_CHANGEDSTATE as a parameter. Override this function to perform custom processing when an item becomes in-place active.

## <a name="onactivateui"></a> COleClientItem::OnActivateUI

The framework calls `OnActivateUI` when the object has entered the active UI state.

```
virtual void OnActivateUI();
```

### Remarks

The object has now installed its tool bar and menus.

The default implementation remembers the server's HWND for later `GetServerWindow` calls.

## <a name="onchange"></a> COleClientItem::OnChange

Called by the framework when the user modifies, saves, or closes the OLE item.

```
virtual void OnChange(
    OLE_NOTIFICATION nCode,
    DWORD dwParam);
```

### Parameters

*nCode*<br/>
The reason the server changed this item. It can have one of the following values:

- OLE_CHANGED The OLE item's appearance has changed.

- OLE_SAVED The OLE item has been saved.

- OLE_CLOSED The OLE item has been closed.

- OLE_CHANGED_STATE The OLE item has changed from one state to another.

*dwParam*<br/>
If *nCode* is OLE_SAVED or OLE_CLOSED, this parameter is not used. If *nCode* is OLE_CHANGED, this parameter specifies the aspect of the OLE item that has changed. For possible values, see the *dwParam* parameter of [COleClientItem::Draw](#draw). If *nCode* is OLE_CHANGED_STATE, this parameter is a `COleClientItem::ItemState` enumerated value and describes the state being entered. It can have one of the following values: `emptyState`, `loadedState`, `openState`, `activeState`, or `activeUIState`.

### Remarks

(If the server application is written using the Microsoft Foundation Class Library, this function is called in response to the `Notify` member functions of `COleServerDoc` or `COleServerItem`.) The default implementation marks the container document as modified if *nCode* is OLE_CHANGED or OLE_SAVED.

For OLE_CHANGED_STATE, the current state returned from [GetItemState](#getitemstate) will still be the old state, meaning the state that was current prior to this state change.

Override this function to respond to changes in the OLE item's state. Typically you update the item's appearance by invalidating the area in which the item is displayed. Call the base class implementation at the beginning of your override.

## <a name="onchangeitemposition"></a> COleClientItem::OnChangeItemPosition

Called by the framework to notify the container that the OLE item's extent has changed during in-place activation.

```
virtual BOOL OnChangeItemPosition(const CRect& rectPos);
```

### Parameters

*rectPos*<br/>
Indicates the item's position relative to the container application's client area.

### Return Value

Nonzero if the item's position is successfully changed; otherwise 0.

### Remarks

The default implementation determines the new visible rectangle of the OLE item and calls [SetItemRects](#setitemrects) with the new values. The default implementation calculates the visible rectangle for the item and passes that information to the server.

Override this function to apply special rules to the resize/move operation. If the application is written in MFC, this call results because the server called [COleServerDoc::RequestPositionChange](../../mfc/reference/coleserverdoc-class.md#requestpositionchange).

## <a name="ondeactivate"></a> COleClientItem::OnDeactivate

Called by the framework when the OLE item transitions from the in-place active state ( `activeState`) to the loaded state, meaning that it is deactivated after an in-place activation.

```
virtual void OnDeactivate();
```

### Remarks

Note that this function is called to indicate that the OLE item is closed, not that its user interface has been removed from the container application. When that happens, the [OnDeactivateUI](#ondeactivateui) member function is called.

The default implementation calls the [OnChange](#onchange) member function with OLE_CHANGEDSTATE as a parameter. Override this function to perform custom processing when an in-place active item is deactivated. For example, if you support the undo command in your container application, you can override this function to discard the undo state, indicating that the last operation performed on the OLE item cannot be undone once the item is deactivated.

## <a name="ondeactivateandundo"></a> COleClientItem::OnDeactivateAndUndo

Called by the framework when the user invokes the undo command after activating the OLE item in place.

```
virtual void OnDeactivateAndUndo();
```

### Remarks

The default implementation calls [DeactivateUI](#deactivateui) to deactivate the server's user interface. Override this function if you are implementing the undo command in your container application. In your override, call the base class version of the function and then undo the last command executed in your application.

For more information, see [IOleInPlaceSite::DeactivateAndUndo](/windows/win32/api/oleidl/nf-oleidl-ioleinplacesite-deactivateandundo) in the Windows SDK.

## <a name="ondeactivateui"></a> COleClientItem::OnDeactivateUI

Called when the user deactivates an item that was activated in place.

```
virtual void OnDeactivateUI(BOOL bUndoable);
```

### Parameters

*bUndoable*<br/>
Specifies whether the editing changes are undoable.

### Remarks

This function restores the container application's user interface to its original state, hiding any menus and other controls that were created for in-place activation.

If *bUndoable* is FALSE, the container should disable the undo command, in effect discarding the undo state of the container, because it indicates that the last operation performed by the server is not undoable.

## <a name="ondiscardundostate"></a> COleClientItem::OnDiscardUndoState

Called by the framework when the user performs an action that discards the undo state while editing the OLE item.

```
virtual void OnDiscardUndoState();
```

### Remarks

The default implementation does nothing. Override this function if you are implementing the undo command in your container application. In your override, discard the container application's undo state.

If the server was written with the Microsoft Foundation Class Library, the server can cause this function to be called by calling [COleServerDoc::DiscardUndoState](../../mfc/reference/coleserverdoc-class.md#discardundostate).

For more information, see [IOleInPlaceSite::DiscardUndoState](/windows/win32/api/oleidl/nf-oleidl-ioleinplacesite-discardundostate) in the Windows SDK.

## <a name="ongetclipboarddata"></a> COleClientItem::OnGetClipboardData

Called by the framework to get a `COleDataSource` object containing all the data that would be placed on the Clipboard by a call to either the [CopyToClipboard](#copytoclipboard) or the [DoDragDrop](#dodragdrop) member function.

```
virtual COleDataSource* OnGetClipboardData(
    BOOL bIncludeLink,
    LPPOINT lpOffset,
    LPSIZE lpSize);
```

### Parameters

*bIncludeLink*<br/>
Set this to TRUE if link data should be copied to the Clipboard. Set this to FALSE if your server application does not support links.

*lpOffset*<br/>
Pointer to the offset of the mouse cursor from the origin of the object in pixels.

*lpSize*<br/>
Pointer to the size of the object in pixels.

### Return Value

A pointer to a [COleDataSource](../../mfc/reference/coledatasource-class.md) object containing the Clipboard data.

### Remarks

The default implementation of this function calls [GetClipboardData](#getclipboarddata).

## <a name="ongetcliprect"></a> COleClientItem::OnGetClipRect

The framework calls the `OnGetClipRect` member function to get the clipping-rectangle coordinates of the item that is being edited in place.

```
virtual void OnGetClipRect(CRect& rClipRect);
```

### Parameters

*rClipRect*<br/>
Pointer to an object of class [CRect](../../atl-mfc-shared/reference/crect-class.md) that will hold the clipping-rectangle coordinates of the item.

### Remarks

Coordinates are in pixels relative to the container application window's client area.

The default implementation simply returns the client rectangle of the view on which the item is in-place active.

## <a name="ongetitemposition"></a> COleClientItem::OnGetItemPosition

The framework calls the `OnGetItemPosition` member function to get the coordinates of the item that is being edited in place.

```
virtual void OnGetItemPosition(CRect& rPosition);
```

### Parameters

*rPosition*<br/>
Reference to the [CRect](../../atl-mfc-shared/reference/crect-class.md) object that will contain the item's position coordinates.

### Remarks

Coordinates are in pixels relative to the container application window's client area.

The default implementation of this function does nothing. Applications that support in-place editing require its implementation.

## <a name="ongetwindowcontext"></a> COleClientItem::OnGetWindowContext

Called by the framework when an item is activated in place.

```
virtual BOOL OnGetWindowContext(
    CFrameWnd** ppMainFrame,
    CFrameWnd** ppDocFrame,
    LPOLEINPLACEFRAMEINFO lpFrameInfo);
```

### Parameters

*ppMainFrame*<br/>
Pointer to a pointer to the main frame window.

*ppDocFrame*<br/>
Pointer to a pointer to the document frame window.

*lpFrameInfo*<br/>
Pointer to an [OLEINPLACEFRAMEINFO](/windows/win32/api/oleidl/ns-oleidl-oleinplaceframeinfo) structure that will receive frame window information.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

This function is used to retrieve information about the OLE item's parent window.

If the container is an MDI application, the default implementation returns a pointer to the [CMDIFrameWnd](../../mfc/reference/cmdiframewnd-class.md) object in *ppMainFrame* and a pointer to the active [CMDIChildWnd](../../mfc/reference/cmdichildwnd-class.md) object in *ppDocFrame*. If the container is an SDI application, the default implementation returns a pointer to the [CFrameWnd](../../mfc/reference/cframewnd-class.md) object in *ppMainFrame* and returns NULL in *ppDocFrame*. The default implementation also fills in the members of *lpFrameInfo*.

Override this function only if the default implementation does not suit your application; for example, if your application has a user-interface paradigm that differs from SDI or MDI. This is an advanced overridable.

For more information, see [IOleInPlaceSite::GetWindowContext](/windows/win32/api/oleidl/nf-oleidl-ioleinplacesite-getwindowcontext) and the [OLEINPLACEFRAMEINFO](/windows/win32/api/oleidl/ns-oleidl-oleinplaceframeinfo) structure in the Windows SDK.

## <a name="oninsertmenus"></a> COleClientItem::OnInsertMenus

Called by the framework during in-place activation to insert the container application's menus into an empty menu.

```
virtual void OnInsertMenus(
    CMenu* pMenuShared,
    LPOLEMENUGROUPWIDTHS lpMenuWidths);
```

### Parameters

*pMenuShared*<br/>
Points to an empty menu.

*lpMenuWidths*<br/>
Points to an array of six LONG values indicating how many menus are in each of the following menu groups: File, Edit, Container, Object, Window, Help. The container application is responsible for the File, Container, and Window menu groups, corresponding to elements 0, 2, and 4 of this array.

### Remarks

This menu is then passed to the server, which inserts its own menus, creating a composite menu. This function can be called repeatedly to build several composite menus.

The default implementation inserts into *pMenuShared* the in-place container menus; that is, the File, Container, and Window menu groups. [CDocTemplate::SetContainerInfo](../../mfc/reference/cdoctemplate-class.md#setcontainerinfo) is used to set this menu resource. The default implementation also assigns the appropriate values to elements 0, 2, and 4 in *lpMenuWidths*, depending on the menu resource. Override this function if the default implementation is not appropriate for your application; for example, if your application does not use document templates for associating resources with document types. If you override this function, you should also override [OnSetMenu](#onsetmenu) and [OnRemoveMenus](#onremovemenus). This is an advanced overridable.

For more information, see [IOleInPlaceFrame::InsertMenus](/windows/win32/api/oleidl/nf-oleidl-ioleinplaceframe-insertmenus) in the Windows SDK.

## <a name="onremovemenus"></a> COleClientItem::OnRemoveMenus

Called by the framework to remove the container's menus from the specified composite menu when in-place activation ends.

```
virtual void OnRemoveMenus(CMenu* pMenuShared);
```

### Parameters

*pMenuShared*<br/>
Points to the composite menu constructed by calls to the [OnInsertMenus](#oninsertmenus) member function.

### Remarks

The default implementation removes from *pMenuShared* the in-place container menus, that is, the File, Container, and Window menu groups. Override this function if the default implementation is not appropriate for your application; for example, if your application does not use document templates for associating resources with document types. If you override this function, you should probably override [OnInsertMenus](#oninsertmenus) and [OnSetMenu](#onsetmenu) as well. This is an advanced overridable.

The submenus on *pMenuShared* may be shared by more than one composite menu if the server has repeatedly called `OnInsertMenus`. Therefore you should not delete any submenus in your override of `OnRemoveMenus`; you should only detach them.

For more information, see [IOleInPlaceFrame::RemoveMenus](/windows/win32/api/oleidl/nf-oleidl-ioleinplaceframe-removemenus) in the Windows SDK.

## <a name="onscrollby"></a> COleClientItem::OnScrollBy

Called by the framework to scroll the OLE item in response to requests from the server.

```
virtual BOOL OnScrollBy(CSize sizeExtent);
```

### Parameters

*sizeExtent*<br/>
Specifies the distances, in pixels, to scroll in the x and y directions.

### Return Value

Nonzero if the item was scrolled; 0 if the item could not be scrolled.

### Remarks

For example, if the OLE item is partially visible and the user moves outside the visible region while performing in-place editing, this function is called to keep the cursor visible. The default implementation does nothing. Override this function to scroll the item by the specified amount. Note that as a result of scrolling, the visible portion of the OLE item can change. Call [SetItemRects](#setitemrects) to update the item's visible rectangle.

For more information, see [IOleInPlaceSite::Scroll](/windows/win32/api/oleidl/nf-oleidl-ioleinplacesite-scroll) in the Windows SDK.

## <a name="onsetmenu"></a> COleClientItem::OnSetMenu

Called by the framework two times when in-place activation begins and ends; the first time to install the composite menu and the second time (with *holemenu* equal to NULL) to remove it.

```
virtual void OnSetMenu(
    CMenu* pMenuShared,
    HOLEMENU holemenu,
    HWND hwndActiveObject);
```

### Parameters

*pMenuShared*<br/>
Pointer to the composite menu constructed by calls to the [OnInsertMenus](#oninsertmenus) member function and the `InsertMenu` function.

*holemenu*<br/>
Handle to the menu descriptor returned by the `OleCreateMenuDescriptor` function, or NULL if the dispatching code is to be removed.

*hwndActiveObject*<br/>
Handle to the editing window for the OLE item. This is the window that will receive editing commands from OLE.

### Remarks

The default implementation installs or removes the composite menu and then calls the [OleSetMenuDescriptor](/windows/win32/api/ole2/nf-ole2-olesetmenudescriptor) function to install or remove the dispatching code. Override this function if the default implementation is not appropriate for your application. If you override this function, you should probably override [OnInsertMenus](#oninsertmenus) and [OnRemoveMenus](#onremovemenus) as well. This is an advanced overridable.

For more information, see [OleCreateMenuDescriptor](/windows/win32/api/ole2/nf-ole2-olecreatemenudescriptor), [OleSetMenuDescriptor](/windows/win32/api/ole2/nf-ole2-olesetmenudescriptor), and [IOleInPlaceFrame::SetMenu](/windows/win32/api/oleidl/nf-oleidl-ioleinplaceframe-setmenu) in the Windows SDK.

## <a name="onshowcontrolbars"></a> COleClientItem::OnShowControlBars

Called by the framework to show and hide the container application's control bars.

```
virtual BOOL OnShowControlBars(
    CFrameWnd* pFrameWnd,
    BOOL bShow);
```

### Parameters

*pFrameWnd*<br/>
Pointer to the container application's frame window. This can be either a main frame window or an MDI child window.

*bShow*<br/>
Specifies whether control bars are to be shown or hidden.

### Return Value

Nonzero if the function call causes a change in the control bars' state; 0 if the call causes no change, or if *pFrameWnd* does not point to the container's frame window.

### Remarks

This function returns 0 if the control bars are already in the state specified by *bShow.* This would occur, for example, if the control bars are hidden and *bShow* is FALSE.

The default implementation removes the toolbar from the top-level frame window.

## <a name="onshowitem"></a> COleClientItem::OnShowItem

Called by the framework to display the OLE item, making it totally visible during editing.

```
virtual void OnShowItem();
```

### Remarks

It is used when your container application supports links to embedded items (that is, if you have derived your document class from [COleLinkingDoc](../../mfc/reference/colelinkingdoc-class.md)). This function is called during in-place activation or when the OLE item is a link source and the user wants to edit it. The default implementation activates the first view on the container document. Override this function to scroll the document so that the OLE item is visible.

## <a name="onupdateframetitle"></a> COleClientItem::OnUpdateFrameTitle

Called by the framework during in-place activation to update the frame window's title bar.

```
virtual BOOL OnUpdateFrameTitle();
```

### Return Value

Nonzero if this function successfully updated the frame title, otherwise zero.

### Remarks

The default implementation does not change the frame window title. Override this function if you want a different frame title for your application, for example " *server app* - *item* in *docname*" (as in, "Microsoft Excel - spreadsheet in REPORT.DOC"). This is an advanced overridable.

## <a name="reactivateandundo"></a> COleClientItem::ReactivateAndUndo

Call this function to reactivate the OLE item and undo the last operation performed by the user during in-place editing.

```
BOOL ReactivateAndUndo();
```

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

If your container application supports the undo command, call this function if the user chooses the undo command immediately after deactivating the OLE item.

If the server application is written with the Microsoft Foundation Class Libraries, this function causes the server to call [COleServerDoc::OnReactivateAndUndo](../../mfc/reference/coleserverdoc-class.md#onreactivateandundo).

For more information, see [IOleInPlaceObject::ReactivateAndUndo](/windows/win32/api/oleidl/nf-oleidl-ioleinplaceobject-reactivateandundo) in the Windows SDK.

## <a name="release"></a> COleClientItem::Release

Call this function to clean up resources used by the OLE item.

```
virtual void Release(OLECLOSE dwCloseOption = OLECLOSE_NOSAVE);
```

### Parameters

*dwCloseOption*<br/>
Flag specifying under what circumstances the OLE item is saved when it returns to the loaded state. For a list of possible values, see [COleClientItem::Close](#close).

### Remarks

`Release` is called by the `COleClientItem` destructor.

For more information, see [IUnknown::Release](/windows/win32/api/unknwn/nf-unknwn-iunknown-release) in the Windows SDK.

## <a name="reload"></a> COleClientItem::Reload

Closes and reloads the item.

```
BOOL Reload();
```

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

Call the `Reload` function after activating the item as an item of another type by a call to [ActivateAs](#activateas).

## <a name="run"></a> COleClientItem::Run

Runs the application associated with this item.

```cpp
void Run();
```

### Remarks

Call the `Run` member function to launch the server application before activating the item. This is done automatically by [Activate](#activate) and [DoVerb](#doverb), so it is usually not necessary to call this function. Call this function if it is necessary to run the server in order to set an item attribute, such as [SetExtent](#setextent), before executing [DoVerb](#doverb).

## <a name="setdrawaspect"></a> COleClientItem::SetDrawAspect

Call the `SetDrawAspect` member function to set the "aspect," or view, of the item.

```
virtual void SetDrawAspect(DVASPECT nDrawAspect);
```

### Parameters

*nDrawAspect*<br/>
A value from the DVASPECT enumeration. This parameter can have one of the following values:

- DVASPECT_CONTENT Item is represented in such a way that it can be displayed as an embedded object inside its container.

- DVASPECT_THUMBNAIL Item is rendered in a "thumbnail" representation so that it can be displayed in a browsing tool.

- DVASPECT_ICON Item is represented by an icon.

- DVASPECT_DOCPRINT Item is represented as if it were printed using the Print command from the File menu.

### Remarks

The aspect specifies how the item is to be rendered by [Draw](#draw) when the default value for that function's *nDrawAspect* argument is used.

This function is called automatically by the Change Icon (and other dialogs that call the Change Icon dialog directly) to enable the iconic display aspect when requested by the user.

## <a name="setextent"></a> COleClientItem::SetExtent

Call this function to specify how much space is available to the OLE item.

```cpp
void SetExtent(
    const CSize& size,
    DVASPECT nDrawAspect = DVASPECT_CONTENT);
```

### Parameters

*size*<br/>
A [CSize](../../atl-mfc-shared/reference/csize-class.md) object that contains the size information.

*nDrawAspect*<br/>
Specifies the aspect of the OLE item whose bounds are to be set. For possible values, see [SetDrawAspect](#setdrawaspect).

### Remarks

If the server application was written using the Microsoft Foundation Class Library, this causes the [OnSetExtent](../../mfc/reference/coleserveritem-class.md#onsetextent) member function of the corresponding `COleServerItem` object to be called. The OLE item can then adjust its display accordingly. The dimensions must be in MM_HIMETRIC units. Call this function when the user resizes the OLE item or if you support some form of layout negotiation.

For more information, see [IOleObject::SetExtent](/windows/win32/api/oleidl/nf-oleidl-ioleobject-setextent) in the Windows SDK.

## <a name="sethostnames"></a> COleClientItem::SetHostNames

Call this function to specify the name of the container application and the container's name for an embedded OLE item.

```cpp
void SetHostNames(
    LPCTSTR lpszHost,
    LPCTSTR lpszHostObj);
```

### Parameters

*lpszHost*<br/>
Pointer to the user-visible name of the container application.

*lpszHostObj*<br/>
Pointer to an identifying string of the container that contains the OLE item.

### Remarks

If the server application was written using the Microsoft Foundation Class Library, this function calls the [OnSetHostNames](../../mfc/reference/coleserverdoc-class.md#onsethostnames) member function of the `COleServerDoc` document that contains the OLE item. This information is used in window titles when the OLE item is being edited. Each time a container document is loaded, the framework calls this function for all the OLE items in the document. `SetHostNames` is applicable only to embedded items. It is not necessary to call this function each time an embedded OLE item is activated for editing.

This is also called automatically with the application name and document name when an object is loaded or when a file is saved under a different name. Accordingly, it is not usually necessary to call this function directly.

For more information, see [IOleObject::SetHostNames](/windows/win32/api/oleidl/nf-oleidl-ioleobject-sethostnames) in the Windows SDK.

## <a name="seticonicmetafile"></a> COleClientItem::SetIconicMetafile

Caches the metafile used for drawing the item's icon.

```
BOOL SetIconicMetafile(HGLOBAL hMetaPict);
```

### Parameters

*hMetaPict*<br/>
A handle to the metafile used for drawing the item's icon.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

Use [GetIconicMetafile](#geticonicmetafile) to retrieve the metafile.

The *hMetaPict* parameter is copied into the item; therefore, *hMetaPict* must be freed by the caller.

## <a name="setitemrects"></a> COleClientItem::SetItemRects

Call this function to set the bounding rectangle or the visible rectangle of the OLE item.

```
BOOL SetItemRects(
    LPCRECT lpPosRect = NULL,
    LPCRECT lpClipRect = NULL);
```

### Parameters

*lprcPosRect*<br/>
Pointer to the rectangle containing the bounds of the OLE item relative to its parent window, in client coordinates.

*lprcClipRect*<br/>
Pointer to the rectangle containing the bounds of the visible portion of the OLE item relative to its parent window, in client coordinates.

### Return Value

Nonzero if successful; otherwise, 0.

### Remarks

This function is called by the default implementation of the [OnChangeItemPosition](#onchangeitemposition) member function. You should call this function whenever the position or visible portion of the OLE item changes. Usually this means that you call it from your view's [OnSize](../../mfc/reference/cwnd-class.md#onsize) and [OnScrollBy](../../mfc/reference/cview-class.md#onscrollby) member functions.

For more information, see [IOleInPlaceObject::SetObjectRects](/windows/win32/api/oleidl/nf-oleidl-ioleinplaceobject-setobjectrects) in the Windows SDK.

## <a name="setlinkupdateoptions"></a> COleClientItem::SetLinkUpdateOptions

Call this function to set the link-update option for the presentation of the specified linked item.

```cpp
void SetLinkUpdateOptions(OLEUPDATE dwUpdateOpt);
```

### Parameters

*dwUpdateOpt*<br/>
The value of the link-update option for this item. This value must be one of the following:

- OLEUPDATE_ALWAYS Update the linked item whenever possible. This option supports the Automatic link-update radio button in the Links dialog box.

- OLEUPDATE_ONCALL Update the linked item only on request from the container application (when the [UpdateLink](#updatelink) member function is called). This option supports the Manual link-update radio button in the Links dialog box.

### Remarks

Typically, you should not change the update options chosen by the user in the Links dialog box.

For more information, see [IOleLink::SetUpdateOptions](/windows/win32/api/oleidl/nf-oleidl-iolelink-setupdateoptions) in the Windows SDK.

## <a name="setprintdevice"></a> COleClientItem::SetPrintDevice

Call this function to change the print-target device for this item.

```
BOOL SetPrintDevice(const DVTARGETDEVICE* ptd);
BOOL SetPrintDevice(const PRINTDLG* ppd);
```

### Parameters

*ptd*<br/>
Pointer to a [DVTARGETDEVICE](/windows/win32/api/objidl/ns-objidl-dvtargetdevice) data structure, which contains information about the new print-target device. Can be NULL.

*ppd*<br/>
Pointer to a [PRINTDLG](/windows/win32/api/commdlg/ns-commdlg-printdlga) data structure, which contains information about the new print-target device. Can be NULL.

### Return Value

Nonzero if the function was successful; otherwise 0.

### Remarks

This function updates the print-target device for the item but does not refresh the presentation cache. To update the presentation cache for an item, call [UpdateLink](#updatelink).

The arguments to this function contain information that the OLE system uses to identify the target device. The `PRINTDLG` structure contains information that Windows uses to initialize the common Print dialog box. After the user closes the dialog box, Windows returns information about the user's selections in this structure. The `m_pd` member of a [CPrintDialog](../../mfc/reference/cprintdialog-class.md) object is a `PRINTDLG` structure.

For more information about this structure, see [PRINTDLG](/windows/win32/api/commdlg/ns-commdlg-printdlga) in the Windows SDK.

For more information, see [DVTARGETDEVICE](/windows/win32/api/objidl/ns-objidl-dvtargetdevice) in the Windows SDK.

## <a name="updatelink"></a> COleClientItem::UpdateLink

Call this function to update the presentation data of the OLE item immediately.

```
BOOL UpdateLink();
```

### Return Value

Nonzero on success; otherwise 0.

### Remarks

For linked items, the function finds the link source to obtain a new presentation for the OLE item. This process may involve running one or more server applications, which could be time-consuming. For embedded items, the function operates recursively, checking whether the embedded item contains links that might be out of date and updating them. The user can also manually update individual links using the Links dialog box.

For more information, see [IOleLink::Update](/windows/win32/api/oleidl/nf-oleidl-iolelink-update) in the Windows SDK.

## See also

[MFC Sample MFCBIND](../../overview/visual-cpp-samples.md)<br/>
[MFC Sample OCLIENT](../../overview/visual-cpp-samples.md)<br/>
[CDocItem Class](../../mfc/reference/cdocitem-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[COleServerItem Class](../../mfc/reference/coleserveritem-class.md)
