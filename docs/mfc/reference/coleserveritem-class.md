---
description: "Learn more about: COleServerItem Class"
title: "COleServerItem Class"
ms.date: "11/04/2016"
f1_keywords: ["COleServerItem", "AFXOLE/COleServerItem", "AFXOLE/COleServerItem::COleServerItem", "AFXOLE/COleServerItem::AddOtherClipboardData", "AFXOLE/COleServerItem::CopyToClipboard", "AFXOLE/COleServerItem::DoDragDrop", "AFXOLE/COleServerItem::GetClipboardData", "AFXOLE/COleServerItem::GetDocument", "AFXOLE/COleServerItem::GetEmbedSourceData", "AFXOLE/COleServerItem::GetItemName", "AFXOLE/COleServerItem::GetLinkSourceData", "AFXOLE/COleServerItem::GetObjectDescriptorData", "AFXOLE/COleServerItem::IsConnected", "AFXOLE/COleServerItem::IsLinkedItem", "AFXOLE/COleServerItem::NotifyChanged", "AFXOLE/COleServerItem::OnDoVerb", "AFXOLE/COleServerItem::OnDraw", "AFXOLE/COleServerItem::OnDrawEx", "AFXOLE/COleServerItem::OnGetClipboardData", "AFXOLE/COleServerItem::OnGetExtent", "AFXOLE/COleServerItem::OnInitFromData", "AFXOLE/COleServerItem::OnQueryUpdateItems", "AFXOLE/COleServerItem::OnRenderData", "AFXOLE/COleServerItem::OnRenderFileData", "AFXOLE/COleServerItem::OnRenderGlobalData", "AFXOLE/COleServerItem::OnSetColorScheme", "AFXOLE/COleServerItem::OnSetData", "AFXOLE/COleServerItem::OnSetExtent", "AFXOLE/COleServerItem::OnUpdate", "AFXOLE/COleServerItem::OnUpdateItems", "AFXOLE/COleServerItem::SetItemName", "AFXOLE/COleServerItem::GetDataSource", "AFXOLE/COleServerItem::OnHide", "AFXOLE/COleServerItem::OnOpen", "AFXOLE/COleServerItem::OnShow", "AFXOLE/COleServerItem::m_sizeExtent"]
helpviewer_keywords: ["COleServerItem [MFC], COleServerItem", "COleServerItem [MFC], AddOtherClipboardData", "COleServerItem [MFC], CopyToClipboard", "COleServerItem [MFC], DoDragDrop", "COleServerItem [MFC], GetClipboardData", "COleServerItem [MFC], GetDocument", "COleServerItem [MFC], GetEmbedSourceData", "COleServerItem [MFC], GetItemName", "COleServerItem [MFC], GetLinkSourceData", "COleServerItem [MFC], GetObjectDescriptorData", "COleServerItem [MFC], IsConnected", "COleServerItem [MFC], IsLinkedItem", "COleServerItem [MFC], NotifyChanged", "COleServerItem [MFC], OnDoVerb", "COleServerItem [MFC], OnDraw", "COleServerItem [MFC], OnDrawEx", "COleServerItem [MFC], OnGetClipboardData", "COleServerItem [MFC], OnGetExtent", "COleServerItem [MFC], OnInitFromData", "COleServerItem [MFC], OnQueryUpdateItems", "COleServerItem [MFC], OnRenderData", "COleServerItem [MFC], OnRenderFileData", "COleServerItem [MFC], OnRenderGlobalData", "COleServerItem [MFC], OnSetColorScheme", "COleServerItem [MFC], OnSetData", "COleServerItem [MFC], OnSetExtent", "COleServerItem [MFC], OnUpdate", "COleServerItem [MFC], OnUpdateItems", "COleServerItem [MFC], SetItemName", "COleServerItem [MFC], GetDataSource", "COleServerItem [MFC], OnHide", "COleServerItem [MFC], OnOpen", "COleServerItem [MFC], OnShow", "COleServerItem [MFC], m_sizeExtent"]
ms.assetid: 80256df6-3888-4256-944b-787d4b2e6b0d
---
# COleServerItem Class

Provides the server interface to OLE items.

## Syntax

```
class COleServerItem : public CDocItem
```

## Members

### Protected Constructors

|Name|Description|
|----------|-----------------|
|[COleServerItem::COleServerItem](#coleserveritem)|Constructs a `COleServerItem` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[COleServerItem::AddOtherClipboardData](#addotherclipboarddata)|Places presentation and conversion formats in a `COleDataSource` object.|
|[COleServerItem::CopyToClipboard](#copytoclipboard)|Copies the item to the Clipboard.|
|[COleServerItem::DoDragDrop](#dodragdrop)|Performs a drag-and-drop operation.|
|[COleServerItem::GetClipboardData](#getclipboarddata)|Gets the data source for use in data transfer (drag and drop or Clipboard).|
|[COleServerItem::GetDocument](#getdocument)|Returns the server document that contains the item.|
|[COleServerItem::GetEmbedSourceData](#getembedsourcedata)|Gets the CF_EMBEDSOURCE data for an OLE item.|
|[COleServerItem::GetItemName](#getitemname)|Returns the name of the item. Used for linked items only.|
|[COleServerItem::GetLinkSourceData](#getlinksourcedata)|Gets the CF_LINKSOURCE data for an OLE item.|
|[COleServerItem::GetObjectDescriptorData](#getobjectdescriptordata)|Gets the CF_OBJECTDESCRIPTOR data for an OLE item.|
|[COleServerItem::IsConnected](#isconnected)|Indicates whether the item is currently attached to an active container.|
|[COleServerItem::IsLinkedItem](#islinkeditem)|Indicates whether the item represents a linked OLE item.|
|[COleServerItem::NotifyChanged](#notifychanged)|Updates all containers with automatic link update.|
|[COleServerItem::OnDoVerb](#ondoverb)|Called to execute a verb.|
|[COleServerItem::OnDraw](#ondraw)|Called when the container requests to draw the item; implementation required.|
|[COleServerItem::OnDrawEx](#ondrawex)|Called for specialized item drawing.|
|[COleServerItem::OnGetClipboardData](#ongetclipboarddata)|Called by the framework to get the data that would be copied to the Clipboard.|
|[COleServerItem::OnGetExtent](#ongetextent)|Called by the framework to retrieve the size of the OLE item.|
|[COleServerItem::OnInitFromData](#oninitfromdata)|Called by the framework to initialize an OLE item using the contents of the data transfer object specified.|
|[COleServerItem::OnQueryUpdateItems](#onqueryupdateitems)|Called to determine whether any linked items require updating.|
|[COleServerItem::OnRenderData](#onrenderdata)|Retrieves data as part of delayed rendering.|
|[COleServerItem::OnRenderFileData](#onrenderfiledata)|Retrieves data into a `CFile` object as part of delayed rendering.|
|[COleServerItem::OnRenderGlobalData](#onrenderglobaldata)|Retrieves data into an HGLOBAL as part of delayed rendering.|
|[COleServerItem::OnSetColorScheme](#onsetcolorscheme)|Called to set the item's color scheme.|
|[COleServerItem::OnSetData](#onsetdata)|Called to set the item's data.|
|[COleServerItem::OnSetExtent](#onsetextent)|Called by the framework to set the size of the OLE item.|
|[COleServerItem::OnUpdate](#onupdate)|Called when some portion of the document the item belongs in is changed.|
|[COleServerItem::OnUpdateItems](#onupdateitems)|Called to update the presentation cache of all items in the server document.|
|[COleServerItem::SetItemName](#setitemname)|Sets the name of the item. Used for linked items only.|

### Protected Methods

|Name|Description|
|----------|-----------------|
|[COleServerItem::GetDataSource](#getdatasource)|Gets the object used to store conversion formats.|
|[COleServerItem::OnHide](#onhide)|Called by the framework to hide the OLE item.|
|[COleServerItem::OnOpen](#onopen)|Called by the framework to display the OLE item in its own top-level window.|
|[COleServerItem::OnShow](#onshow)|Called when the container requests to show the item.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[COleServerItem::m_sizeExtent](#m_sizeextent)|Informs the server about how much of the OLE item is visible.|

## Remarks

A linked item can represent some or all of a server document. An embedded item always represents an entire server document.

The `COleServerItem` class defines several overridable member functions that are called by the OLE system dynamic-link libraries (DLLs), usually in response to requests from the container application. These member functions allow the container application to manipulate the item indirectly in various ways, such as by displaying it, executing its verbs, or retrieving its data in various formats.

To use `COleServerItem`, derive a class from it and implement the [OnDraw](#ondraw) and [Serialize](../../mfc/reference/cobject-class.md#serialize) member functions. The `OnDraw` function provides the metafile representation of an item, allowing it to be displayed when a container application opens a compound document. The `Serialize` function of `CObject` provides the native representation of an item, allowing an embedded item to be transferred between the server and container applications. [OnGetExtent](#ongetextent) provides the natural size of the item to the container, enabling the container to size the item.

For more information about servers and related topics, see the article [Servers: Implementing a Server](../../mfc/servers-implementing-a-server.md) and "Creating a Container/Server Application" in the article [Containers: Advanced Features](../../mfc/containers-advanced-features.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CDocItem](../../mfc/reference/cdocitem-class.md)

`COleServerItem`

## Requirements

**Header:** afxole.h

## <a name="addotherclipboarddata"></a> COleServerItem::AddOtherClipboardData

Call this function to place the presentation and conversion formats for the OLE item in the specified `COleDataSource` object.

```cpp
void AddOtherClipboardData(COleDataSource* pDataSource);
```

### Parameters

*pDataSource*<br/>
Pointer to the `COleDataSource` object in which the data should be placed.

### Remarks

You must have implemented the [OnDraw](#ondraw) member function to provide the presentation format (a metafile picture) for the item. To support other conversion formats, register them using the [COleDataSource](../../mfc/reference/coledatasource-class.md) object returned by [GetDataSource](#getdatasource) and override the [OnRenderData](#onrenderdata) member function to provide data in the formats you want to support.

## <a name="coleserveritem"></a> COleServerItem::COleServerItem

Constructs a `COleServerItem` object and adds it to the server document's collection of document items.

```
COleServerItem(
    COleServerDoc* pServerDoc,
    BOOL bAutoDelete);
```

### Parameters

*pServerDoc*<br/>
Pointer to the document that will contain the new item.

*bAutoDelete*<br/>
Flag indicating whether the object can be deleted when a link to it is released. Set this to FALSE if the `COleServerItem` object is an integral part of your document's data which you must delete. Set this to TRUE if the object is a secondary structure used to identify a range in your document's data that can be deleted by the framework.

## <a name="copytoclipboard"></a> COleServerItem::CopyToClipboard

Call this function to copy the OLE item to the Clipboard.

```cpp
void CopyToClipboard(BOOL bIncludeLink = FALSE);
```

### Parameters

*bIncludeLink*<br/>
Set this to TRUE if link data should be copied to the Clipboard. Set this to FALSE if your server application does not support links.

### Remarks

The function uses the [OnGetClipboardData](#ongetclipboarddata) member function to create a [COleDataSource](../../mfc/reference/coledatasource-class.md) object containing the OLE item's data in the formats supported. The function then places the `COleDataSource` object on the Clipboard by using the [COleDataSource::SetClipboard](../../mfc/reference/coledatasource-class.md#setclipboard) function. The `COleDataSource` object includes the item's native data and its representation in CF_METAFILEPICT format, as well as data in any conversion formats you choose to support. You must have implemented [Serialize](../../mfc/reference/cobject-class.md#serialize) and [OnDraw](#ondraw) for this member function to work.

## <a name="dodragdrop"></a> COleServerItem::DoDragDrop

Call the `DoDragDrop` member function to perform a drag-and-drop operation.

```
DROPEFFECT DoDragDrop(
    LPCRECT lpRectItem,
    CPoint ptOffset,
    BOOL bIncludeLink = FALSE,
    DWORD dwEffects = DROPEFFECT_COPY | DROPEFFECT_MOVE,
    LPCRECT lpRectStartDrag = NULL);
```

### Parameters

*lpRectItem*<br/>
The item's rectangle on screen, in pixels, relative to the client area.

*ptOffset*<br/>
The offset from *lpItemRect* where the mouse position was at the time of the drag.

*bIncludeLink*<br/>
Set this to TRUE if link data should be copied to the Clipboard. Set it to FALSE if your application does not support links.

*dwEffects*<br/>
Determines the effects that the drag source will allow in the drag operation (a combination of Copy, Move, and Link).

*lpRectStartDrag*<br/>
Pointer to the rectangle that defines where the drag actually starts. For more information, see the following Remarks section.

### Return Value

A value from the DROPEFFECT enumeration. If it is DROPEFFECT_MOVE, the original data should be removed.

### Remarks

The drag-and-drop operation does not start immediately. It waits until the mouse cursor leaves the rectangle specified by *lpRectStartDrag* or until a specified number of milliseconds have passed. If *lpRectStartDrag* is NULL, a default rectangle is used so that the drag starts when the mouse cursor moves one pixel.

The delay time is specified by a registry key setting. You can change the delay time by calling [CWinApp::WriteProfileString](../../mfc/reference/cwinapp-class.md#writeprofilestring) or [CWinApp::WriteProfileInt](../../mfc/reference/cwinapp-class.md#writeprofileint). If you do not specify the delay time, a default value of 200 milliseconds is used. Drag delay time is stored as follows:

- Windows NT   Drag delay time is stored in HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows\NT\CurrentVersion\IniFileMapping\win.ini\Windows\DragDelay.

- Windows 3.x   Drag delay time is stored in the WIN.INI file, under the [Windows} section.

- Windows 95/98   Drag delay time is stored in a cached version of WIN.INI.

For more information about how drag delay information is stored in either the registry or the .INI file, see [WriteProfileString](/windows/win32/api/winbase/nf-winbase-writeprofilestringw) in the Windows SDK.

## <a name="getclipboarddata"></a> COleServerItem::GetClipboardData

Call this function to fill the specified [COleDataSource](../../mfc/reference/coledatasource-class.md) object with all the data that would be copied to the Clipboard if you called [CopyToClipboard](#copytoclipboard) (the same data would also be transferred if you called [DoDragDrop](#dodragdrop)).

```cpp
void GetClipboardData(
    COleDataSource* pDataSource,
    BOOL bIncludeLink = FALSE,
    LPPOINT lpOffset = NULL,
    LPSIZE lpSize = NULL);
```

### Parameters

*pDataSource*<br/>
Pointer to the `COleDataSource` object that will receive the OLE item's data in all supported formats.

*bIncludeLink*<br/>
TRUE if link data should be copied to the Clipboard. FALSE if your server application does not support links.

*lpOffset*<br/>
The offset, in pixels, of the mouse cursor from the origin of the object.

*lpSize*<br/>
The size of the object in pixels.

### Remarks

This function calls the [GetEmbedSourceData](#getembedsourcedata) member function to get the native data for the OLE item and calls the [AddOtherClipboardData](#addotherclipboarddata) member function to get the presentation format and any supported conversion formats. If *bIncludeLink* is TRUE, the function also calls [GetLinkSourceData](#getlinksourcedata) to get the link data for the item.

Override this function if you want to put formats in a `COleDataSource` object before or after those formats supplied by `CopyToClipboard`.

## <a name="getdatasource"></a> COleServerItem::GetDataSource

Call this function to get the [COleDataSource](../../mfc/reference/coledatasource-class.md) object used to store the conversion formats that the server application supports.

```
COleDataSource* GetDataSource();
```

### Return Value

A pointer to the `COleDataSource` object used to store the conversion formats.

### Remarks

If you want your server application to offer data in a variety of formats during data transfer operations, register those formats with the `COleDataSource` object returned by this function. For example, if you want to supply a CF_TEXT representation of the OLE item for Clipboard or drag-and-drop operations, you would register the format with the `COleDataSource` object this function returns, and then override the `OnRenderXxxData` member function to provide the data.

## <a name="getdocument"></a> COleServerItem::GetDocument

Call this function to get a pointer to the document that contains the item.

```
COleServerDoc* GetDocument() const;
```

### Return Value

A pointer to the document that contains the item; NULL if the item is not part of a document.

### Remarks

This allows access to the server document that you passed as an argument to the `COleServerItem` constructor.

## <a name="getembedsourcedata"></a> COleServerItem::GetEmbedSourceData

Call this function to get the CF_EMBEDSOURCE data for an OLE item.

```cpp
void GetEmbedSourceData(LPSTGMEDIUM lpStgMedium);
```

### Parameters

*lpStgMedium*<br/>
Pointer to the [STGMEDIUM](/windows/win32/api/objidl/ns-objidl-ustgmedium-r1) structure that will receive the CF_EMBEDSOURCE data for the OLE item.

### Remarks

This format includes the item's native data. You must have implemented the `Serialize` member function for this function to work properly.

The result can then be added to a data source by using [COleDataSource::CacheData](../../mfc/reference/coledatasource-class.md#cachedata). This function is called automatically by [COleServerItem::OnGetClipboardData](#ongetclipboarddata).

For more information, see [STGMEDIUM](/windows/win32/api/objidl/ns-objidl-ustgmedium-r1) in the Windows SDK.

## <a name="getitemname"></a> COleServerItem::GetItemName

Call this function to get the name of the item.

```
const CString& GetItemName() const;
```

### Return Value

The name of the item.

### Remarks

You typically call this function only for linked items.

## <a name="getlinksourcedata"></a> COleServerItem::GetLinkSourceData

Call this function to get the CF_LINKSOURCE data for an OLE item.

```
BOOL GetLinkSourceData(LPSTGMEDIUM lpStgMedium);
```

### Parameters

*lpStgMedium*<br/>
Pointer to the [STGMEDIUM](/windows/win32/api/objidl/ns-objidl-ustgmedium-r1) structure that will receive the CF_LINKSOURCE data for the OLE item.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

This format includes the CLSID describing the type of the OLE item and the information needed to locate the document containing the OLE item.

The result can then be added to a data source with [COleDataSource::CacheData](../../mfc/reference/coledatasource-class.md#cachedata). This function is called automatically by [OnGetClipboardData](#ongetclipboarddata).

For more information, see [STGMEDIUM](/windows/win32/api/objidl/ns-objidl-ustgmedium-r1) in the Windows SDK.

## <a name="getobjectdescriptordata"></a> COleServerItem::GetObjectDescriptorData

Call this function to get the CF_OBJECTDESCRIPTOR data for an OLE item.

```cpp
void GetObjectDescriptorData(
    LPPOINT lpOffset,
    LPSIZE lpSize,
    LPSTGMEDIUM lpStgMedium);
```

### Parameters

*lpOffset*<br/>
Offset of the mouse click from the upper-left corner of the OLE item. Can be NULL.

*lpSize*<br/>
Size of the OLE item. Can be NULL.

*lpStgMedium*<br/>
Pointer to the [STGMEDIUM](/windows/win32/api/objidl/ns-objidl-ustgmedium-r1) structure that will receive the CF_OBJECTDESCRIPTOR data for the OLE item.

### Remarks

The information is copied into the `STGMEDIUM` structure pointed to by *lpStgMedium*. This format includes the information needed for the Paste Special dialog.

For more information, see [STGMEDIUM](/windows/win32/api/objidl/ns-objidl-ustgmedium-r1) in the Windows SDK.

## <a name="isconnected"></a> COleServerItem::IsConnected

Call this function to see if the OLE item is connected.

```
BOOL IsConnected() const;
```

### Return Value

Nonzero if the item is connected; otherwise 0.

### Remarks

An OLE item is considered connected if one or more containers have references to the item. An item is connected if its reference count is greater than 0 or if it is an embedded item.

## <a name="islinkeditem"></a> COleServerItem::IsLinkedItem

Call this function to see if the OLE item is a linked item.

```
BOOL IsLinkedItem() const;
```

### Return Value

Nonzero if the item is a linked item; otherwise 0.

### Remarks

An item is linked if the item is valid and is not returned in the document's list of embedded items. A linked item might or might not be connected to a container.

It is common to use the same class for both linked and embedded items. `IsLinkedItem` allows you to make linked items behave differently than embedded items, although many times the code is common.

## <a name="m_sizeextent"></a> COleServerItem::m_sizeExtent

This member tells the server how much of the object is visible in the container document.

```
CSize m_sizeExtent;
```

### Remarks

The default implementation of [OnSetExtent](#onsetextent) sets this member.

## <a name="notifychanged"></a> COleServerItem::NotifyChanged

Call this function after the linked item has been changed.

```cpp
void NotifyChanged(DVASPECT nDrawAspect = DVASPECT_CONTENT);
```

### Parameters

*nDrawAspect*<br/>
A value from the DVASPECT enumeration that indicates which aspect of the OLE item has changed. This parameter can have any of the following values:

- DVASPECT_CONTENT Item is represented in such a way that it can be displayed as an embedded object inside its container.

- DVASPECT_THUMBNAIL Item is rendered in a "thumbnail" representation so that it can be displayed in a browsing tool.

- DVASPECT_ICON Item is represented by an icon.

- DVASPECT_DOCPRINT Item is represented as if it were printed using the Print command from the File menu.

### Remarks

If a container item is linked to the document with an automatic link, the item is updated to reflect the changes. In container applications written using the Microsoft Foundation Class Library, [COleClientItem::OnChange](../../mfc/reference/coleclientitem-class.md#onchange) is called in response.

## <a name="ondoverb"></a> COleServerItem::OnDoVerb

Called by the framework to execute the specified verb.

```
virtual void OnDoVerb(LONG iVerb);
```

### Parameters

*iVerb*<br/>
Specifies the verb to execute. It can be any one of the following:

|Value|Meaning|Symbol|
|-----------|-------------|------------|
|0|Primary verb|OLEIVERB_PRIMARY|
|1|Secondary verb|(None)|
|- 1|Display item for editing|OLEIVERB_SHOW|
|- 2|Edit item in separate window|OLEIVERB_OPEN|
|- 3|Hide item|OLEIVERB_HIDE|

The -1 value is typically an alias for another verb. If open editing is not supported, -2 has the same effect as -1. For additional values, see [IOleObject::DoVerb](/windows/win32/api/oleidl/nf-oleidl-ioleobject-doverb) in the Windows SDK.

### Remarks

If the container application was written with the Microsoft Foundation Class Library, this function is called when the [COleClientItem::Activate](../../mfc/reference/coleclientitem-class.md#activate) member function of the corresponding `COleClientItem` object is called. The default implementation calls the [OnShow](#onshow) member function if the primary verb or OLEIVERB_SHOW is specified, [OnOpen](#onopen) if the secondary verb or OLEIVERB_OPEN is specified, and [OnHide](#onhide) if OLEIVERB_HIDE is specified. The default implementation calls `OnShow` if *iVerb* is not one of the verbs listed above.

Override this function if your primary verb does not show the item. For example, if the item is a sound recording and its primary verb is Play, you would not have to display the server application to play the item.

For more information, see [IOleObject::DoVerb](/windows/win32/api/oleidl/nf-oleidl-ioleobject-doverb) in the Windows SDK.

## <a name="ondraw"></a> COleServerItem::OnDraw

Called by the framework to render the OLE item into a metafile.

```
virtual BOOL OnDraw(
    CDC* pDC,
    CSize& rSize) = 0;
```

### Parameters

*pDC*<br/>
A pointer to the [CDC](../../mfc/reference/cdc-class.md) object on which to draw the item. The display context is automatically connected to the attribute display context so you can call attribute functions, although doing so would make the metafile device-specific.

*rSize*<br/>
Size, in HIMETRIC units, in which to draw the metafile.

### Return Value

Nonzero if the item was successfully drawn; otherwise 0.

### Remarks

The metafile representation of the OLE item is used to display the item in the container application. If the container application was written with the Microsoft Foundation Class Library, the metafile is used by the [Draw](../../mfc/reference/coleclientitem-class.md#draw) member function of the corresponding [COleClientItem](../../mfc/reference/coleclientitem-class.md) object. There is no default implementation. You must override this function to draw the item into the device context specified.

## <a name="ondrawex"></a> COleServerItem::OnDrawEx

Called by the framework for all drawing.

```
virtual BOOL OnDrawEx(
    CDC* pDC,
    DVASPECT nDrawAspect,
    CSize& rSize);
```

### Parameters

*pDC*<br/>
A pointer to the [CDC](../../mfc/reference/cdc-class.md) object on which to draw the item. The DC is automatically connected to the attribute DC so you can call attribute functions, although doing so would make the metafile device-specific.

*nDrawAspect*<br/>
A value from the DVASPECT enumeration. This parameter can have any of the following values:

- DVASPECT_CONTENT Item is represented in such a way that it can be displayed as an embedded object inside its container.

- DVASPECT_THUMBNAIL Item is rendered in a "thumbnail" representation so that it can be displayed in a browsing tool.

- DVASPECT_ICON Item is represented by an icon.

- DVASPECT_DOCPRINT Item is represented as if it were printed using the Print command from the File menu.

*rSize*<br/>
Size of the item in HIMETRIC units.

### Return Value

Nonzero if the item was successfully drawn; otherwise 0.

### Remarks

The default implementation calls `OnDraw` when DVASPECT is equal to DVASPECT_CONTENT; otherwise it fails.

Override this function to provide presentation data for aspects other than DVASPECT_CONTENT, such as DVASPECT_ICON or DVASPECT_THUMBNAIL.

## <a name="ongetclipboarddata"></a> COleServerItem::OnGetClipboardData

Called by the framework to get a `COleDataSource` object containing all the data that would be placed on the Clipboard by a call to the [CopyToClipboard](#copytoclipboard) member function.

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
The offset of the mouse cursor from the origin of the object in pixels.

*lpSize*<br/>
The size of the object in pixels.

### Return Value

A pointer to a [COleDataSource](../../mfc/reference/coledatasource-class.md) object containing the Clipboard data.

### Remarks

The default implementation of this function calls [GetClipboardData](#getclipboarddata).

## <a name="ongetextent"></a> COleServerItem::OnGetExtent

Called by the framework to retrieve the size, in HIMETRIC units, of the OLE item.

```
virtual BOOL OnGetExtent(
    DVASPECT nDrawAspect,
    CSize& rSize);
```

### Parameters

*nDrawAspect*<br/>
Specifies the aspect of the OLE item whose bounds are to be retrieved. This parameter can have any of the following values:

- DVASPECT_CONTENT Item is represented in such a way that it can be displayed as an embedded object inside its container.

- DVASPECT_THUMBNAIL Item is rendered in a "thumbnail" representation so that it can be displayed in a browsing tool.

- DVASPECT_ICON Item is represented by an icon.

- DVASPECT_DOCPRINT Item is represented as if it were printed using the Print command from the File menu.

*rSize*<br/>
Reference to a `CSize` object that will receive the size of the OLE item.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

If the container application was written with the Microsoft Foundation Class Library, this function is called when the [GetExtent](../../mfc/reference/coleclientitem-class.md#getextent) member function of the corresponding `COleClientItem` object is called. The default implementation does nothing. You must implement it yourself. Override this function if you want to perform special processing when handling a request for the size of the OLE item.

## <a name="onhide"></a> COleServerItem::OnHide

Called by the framework to hide the OLE item.

```
virtual void OnHide();
```

### Remarks

The default calls `COleServerDoc::OnShowDocument( FALSE )`. The function also notifies the container that the OLE item has been hidden. Override this function if you want to perform special processing when hiding an OLE item.

## <a name="oninitfromdata"></a> COleServerItem::OnInitFromData

Called by the framework to initialize an OLE item using the contents of *pDataObject*.

```
virtual BOOL OnInitFromData(
    COleDataObject* pDataObject,
    BOOL bCreation);
```

### Parameters

*pDataObject*<br/>
Pointer to an OLE data object containing data in various formats for initializing the OLE item.

*bCreation*<br/>
TRUE if the function is called to initialize an OLE item being newly created by a container application. FALSE if the function is called to replace the contents of an already existing OLE item.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

If *bCreation* is TRUE, this function is called if a container implements Insert New Object based on the current selection. The data selected is used when creating the new OLE item. For example, when selecting a range of cells in a spreadsheet program and then using the Insert New Object to create a chart based on the values in the selected range. The default implementation does nothing. Override this function to choose an acceptable format from those offered by *pDataObject* and initialize the OLE item based on the data provided. This is an advanced overridable.

For more information, see [IOleObject::InitFromData](/windows/win32/api/oleidl/nf-oleidl-ioleobject-initfromdata) in the Windows SDK.

## <a name="onopen"></a> COleServerItem::OnOpen

Called by the framework to display the OLE item in a separate instance of the server application, rather than in place.

```
virtual void OnOpen();
```

### Remarks

The default implementation activates the first frame window displaying the document that contains the OLE item; if the application is a mini-server, the default implementation shows the main window. The function also notifies the container that the OLE item has been opened.

Override this function if you want to perform special processing when opening an OLE item. This is especially common with linked items where you want to set the selection to the link when it is opened.

For more information, see [IOleClientSite::OnShowWindow](/windows/win32/api/oleidl/nf-oleidl-ioleclientsite-onshowwindow) in the Windows SDK.

## <a name="onqueryupdateitems"></a> COleServerItem::OnQueryUpdateItems

Called by the framework to determine whether any linked items in the current server document are out of date.

```
virtual BOOL OnQueryUpdateItems();
```

### Return Value

Nonzero if the document has items needing updates; 0 if all items are up to date.

### Remarks

An item is out of date if its source document has been changed but the linked item has not been updated to reflect the changes in the document.

## <a name="onrenderdata"></a> COleServerItem::OnRenderData

Called by the framework to retrieve data in the specified format.

```
virtual BOOL OnRenderData(
    LPFORMATETC lpFormatEtc,
    LPSTGMEDIUM lpStgMedium);
```

### Parameters

*lpFormatEtc*<br/>
Points to the [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) structure specifying the format in which information is requested.

*lpStgMedium*<br/>
Points to a [STGMEDIUM](/windows/win32/api/objidl/ns-objidl-ustgmedium-r1) structure in which the data is to be returned.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

The specified format is one previously placed in the `COleDataSource` object using the [DelayRenderData](../../mfc/reference/coledatasource-class.md#delayrenderdata) or [DelayRenderFileData](../../mfc/reference/coledatasource-class.md#delayrenderfiledata) member function for delayed rendering. The default implementation of this function calls [OnRenderFileData](#onrenderfiledata) or [OnRenderGlobalData](#onrenderglobaldata), respectively, if the supplied storage medium is either a file or memory. If neither of these formats is supplied, the default implementation returns 0 and does nothing.

If *lpStgMedium*-> *tymed* is TYMED_NULL, the STGMEDIUM should allocated and filled as specified by *lpFormatEtc->tymed*. If not TYMED_NULL, the STGMEDIUM should be filled in place with the data.

This is an advanced overridable. Override this function to provide your data in the requested format and medium. Depending on your data, you may want to override one of the other versions of this function instead. If your data is small and fixed in size, override `OnRenderGlobalData`. If your data is in a file, or is of variable size, override `OnRenderFileData`.

For more information, see [IDataObject::GetData](/windows/win32/api/objidl/nf-objidl-idataobject-getdata), [STGMEDIUM](/windows/win32/api/objidl/ns-objidl-ustgmedium-r1), [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc), and [TYMED](/windows/win32/api/objidl/ne-objidl-tymed) in the Windows SDK.

## <a name="onrenderfiledata"></a> COleServerItem::OnRenderFileData

Called by the framework to retrieve data in the specified format when the storage medium is a file.

```
virtual BOOL OnRenderFileData(
    LPFORMATETC lpFormatEtc,
    CFile* pFile);
```

### Parameters

*lpFormatEtc*<br/>
Points to the [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) structure specifying the format in which information is requested.

*pFile*<br/>
Points to a `CFile` object in which the data is to be rendered.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

The specified format is one previously placed in the `COleDataSource` object using the [DelayRenderData](../../mfc/reference/coledatasource-class.md#delayrenderdata) member function for delayed rendering. The default implementation of this function simply returns FALSE.

This is an advanced overridable. Override this function to provide your data in the requested format and medium. Depending on your data, you might want to override one of the other versions of this function instead. If you want to handle multiple storage mediums, override [OnRenderData](#onrenderdata). If your data is in a file, or is of variable size, override [OnRenderFileData](#onrenderfiledata).

For more information, see [IDataObject::GetData](/windows/win32/api/objidl/nf-objidl-idataobject-getdata) and [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) in the Windows SDK.

## <a name="onrenderglobaldata"></a> COleServerItem::OnRenderGlobalData

Called by the framework to retrieve data in the specified format when the specified storage medium is global memory.

```
virtual BOOL OnRenderGlobalData(
    LPFORMATETC lpFormatEtc,
    HGLOBAL* phGlobal);
```

### Parameters

*lpFormatEtc*<br/>
Points to the [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) structure specifying the format in which information is requested.

*phGlobal*<br/>
Points to a handle to global memory in which the data is to be returned. If no memory has been allocated, this parameter can be NULL.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

The specified format is one previously placed in the `COleDataSource` object using the [DelayRenderData](../../mfc/reference/coledatasource-class.md#delayrenderdata) member function for delayed rendering. The default implementation of this function simply returns FALSE.

If *phGlobal* is NULL, then a new HGLOBAL should be allocated and returned in *phGlobal*. Otherwise, the HGLOBAL specified by *phGlobal* should be filled with the data. The amount of data placed in the HGLOBAL must not exceed the current size of the memory block. Also, the block cannot be reallocated to a larger size.

This is an advanced overridable. Override this function to provide your data in the requested format and medium. Depending on your data, you may want to override one of the other versions of this function instead. If you want to handle multiple storage mediums, override [OnRenderData](#onrenderdata). If your data is in a file, or is of variable size, override [OnRenderFileData](#onrenderfiledata).

For more information, see [IDataObject::GetData](/windows/win32/api/objidl/nf-objidl-idataobject-getdata) and [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) in the Windows SDK.

## <a name="onsetcolorscheme"></a> COleServerItem::OnSetColorScheme

Called by the framework to specify a color palette to be used when editing the OLE item.

```
virtual BOOL OnSetColorScheme(const LOGPALETTE* lpLogPalette);
```

### Parameters

*lpLogPalette*<br/>
Pointer to a Windows [LOGPALETTE](/windows/win32/api/wingdi/ns-wingdi-logpalette) structure.

### Return Value

Nonzero if the color palette is used; otherwise 0.

### Remarks

If the container application was written using the Microsoft Foundation Class Library, this function is called when the [IOleObject::SetColorScheme](/windows/win32/api/oleidl/nf-oleidl-ioleobject-setcolorscheme) function of the corresponding `COleClientItem` object is called. The default implementation returns FALSE. Override this function if you want to use the recommended palette. The server application is not required to use the suggested palette.

For more information, see [IOleObject::SetColorScheme](/windows/win32/api/oleidl/nf-oleidl-ioleobject-setcolorscheme) in the Windows SDK.

## <a name="onsetdata"></a> COleServerItem::OnSetData

Called by the framework to replace the OLE item's data with the specified data.

```
virtual BOOL OnSetData(
    LPFORMATETC lpFormatEtc,
    LPSTGMEDIUM lpStgMedium,
    BOOL bRelease);
```

### Parameters

*lpFormatEtc*<br/>
Pointer to a [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) structure specifying the format of the data.

*lpStgMedium*<br/>
Pointer to a [STGMEDIUM](/windows/win32/api/objidl/ns-objidl-ustgmedium-r1) structure in which the data resides.

*bRelease*<br/>
Indicates who has ownership of the storage medium after completing the function call. The caller decides who is responsible for releasing the resources allocated on behalf of the storage medium. The caller does this by setting *bRelease*. If *bRelease* is nonzero, the server item takes ownership, freeing the medium when it has finished using it. When *bRelease* is 0, the caller retains ownership and the server item can use the storage medium only for the duration of the call.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

The server item does not take ownership of the data until it has successfully obtained it. That is, it does not take ownership if it returns 0. If the data source takes ownership, it frees the storage medium by calling the [ReleaseStgMedium](/windows/win32/api/ole2/nf-ole2-releasestgmedium) function.

The default implementation does nothing. Override this function to replace the OLE item's data with the specified data. This is an advanced overridable.

For more information, see [STGMEDIUM](/windows/win32/api/objidl/ns-objidl-ustgmedium-r1), [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc), and [ReleaseStgMedium](/windows/win32/api/ole2/nf-ole2-releasestgmedium) in the Windows SDK.

## <a name="onsetextent"></a> COleServerItem::OnSetExtent

Called by the framework to tell the OLE item how much space is available to it in the container document.

```
virtual BOOL OnSetExtent(
    DVASPECT nDrawAspect,
    const CSize& size);
```

### Parameters

*nDrawAspect*<br/>
Specifies the aspect of the OLE item whose bounds are being specified. This parameter can have any of the following values:

- DVASPECT_CONTENT Item is represented in such a way that it can be displayed as an embedded object inside its container.

- DVASPECT_THUMBNAIL Item is rendered in a "thumbnail" representation so that it can be displayed in a browsing tool.

- DVASPECT_ICON Item is represented by an icon.

- DVASPECT_DOCPRINT Item is represented as if it were printed using the Print command from the File menu.

*size*<br/>
A [CSize](../../atl-mfc-shared/reference/csize-class.md) structure specifying the new size of the OLE item.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

If the container application was written with the Microsoft Foundation Class Library, this function is called when the [SetExtent](../../mfc/reference/coleclientitem-class.md#setextent) member function of the corresponding `COleClientItem` object is called. The default implementation sets the [m_sizeExtent](#m_sizeextent) member to the specified size if *nDrawAspect* is DVASPECT_CONTENT; otherwise it returns 0. Override this function to perform special processing when you change the size of the item.

## <a name="onshow"></a> COleServerItem::OnShow

Called by the framework to instruct the server application to display the OLE item in place.

```
virtual void OnShow();
```

### Remarks

This function is typically called when the user of the container application creates an item or executes a verb, such as Edit, that requires the item to be shown. The default implementation attempts in-place activation. If this fails, the function calls the `OnOpen` member function to display the OLE item in a separate window.

Override this function if you want to perform special processing when an OLE item is shown.

## <a name="onupdate"></a> COleServerItem::OnUpdate

Called by the framework when an item has been modified.

```
virtual void OnUpdate(
    COleServerItem* pSender,
    LPARAM lHint,
    CObject* pHint,
    DVASPECT nDrawAspect);
```

### Parameters

*pSender*<br/>
Pointer to the item that modified the document. Can be NULL.

*lHint*<br/>
Contains information about the modification.

*pHint*<br/>
Pointer to an object storing information about the modification.

*nDrawAspect*<br/>
A value from the DVASPECT enumeration. This parameter can have any one of the following values:

- DVASPECT_CONTENT Item is represented in such a way that it can be displayed as an embedded object inside its container.

- DVASPECT_THUMBNAIL Item is rendered in a "thumbnail" representation so that it can be displayed in a browsing tool.

- DVASPECT_ICON Item is represented by an icon.

- DVASPECT_DOCPRINT Item is represented as if it were printed using the Print command from the File menu.

### Remarks

The default implementation calls [NotifyChanged](#notifychanged), regardless of the hint or sender.

## <a name="onupdateitems"></a> COleServerItem::OnUpdateItems

Called by the framework to update all items in the server document.

```
virtual void OnUpdateItems();
```

### Remarks

The default implementation calls [UpdateLink](../../mfc/reference/coleclientitem-class.md#updatelink) for all `COleClientItem` objects in the document.

## <a name="setitemname"></a> COleServerItem::SetItemName

Call this function when you create a linked item to set its name.

```cpp
void SetItemName(LPCTSTR lpszItemName);
```

### Parameters

*lpszItemName*<br/>
Pointer to the new name of the item.

### Remarks

The name must be unique within the document. When a server application is called to edit a linked item, the application uses this name to find the item. You do not need to call this function for embedded items.

## See also

[MFC Sample HIERSVR](../../overview/visual-cpp-samples.md)<br/>
[CDocItem Class](../../mfc/reference/cdocitem-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[COleClientItem Class](../../mfc/reference/coleclientitem-class.md)<br/>
[COleServerDoc Class](../../mfc/reference/coleserverdoc-class.md)<br/>
[COleTemplateServer Class](../../mfc/reference/coletemplateserver-class.md)
