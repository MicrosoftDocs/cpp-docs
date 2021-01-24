---
description: "Learn more about: CDocObjectServerItem Class"
title: "CDocObjectServerItem Class"
ms.date: "03/27/2019"
f1_keywords: ["CDocObjectServerItem", "AFXDOCOB/CDocObjectServerItem", "AFXDOCOB/CDocObjectServerItem::CDocObjectServerItem", "AFXDOCOB/CDocObjectServerItem::GetDocument", "AFXDOCOB/CDocObjectServerItem::OnDoVerb", "AFXDOCOB/CDocObjectServerItem::OnHide", "AFXDOCOB/CDocObjectServerItem::OnShow"]
helpviewer_keywords: ["CDocObjectServerItem [MFC], CDocObjectServerItem", "CDocObjectServerItem [MFC], GetDocument", "CDocObjectServerItem [MFC], OnDoVerb", "CDocObjectServerItem [MFC], OnHide", "CDocObjectServerItem [MFC], OnShow"]
ms.assetid: 530f7156-50c8-4806-9328-602c9133f622
---
# CDocObjectServerItem Class

Implements OLE server verbs specifically for DocObject servers.

## Syntax

```
class CDocObjectServerItem : public COleServerItem
```

## Members

### Protected Constructors

|Name|Description|
|----------|-----------------|
|[CDocObjectServerItem::CDocObjectServerItem](#cdocobjectserveritem)|Constructs a `CDocObjectServerItem` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CDocObjectServerItem::GetDocument](#getdocument)|Retrieves a pointer to the document that contains the item.|

### Protected Methods

|Name|Description|
|----------|-----------------|
|[CDocObjectServerItem::OnDoVerb](#ondoverb)|Called to execute a verb.|
|[CDocObjectServerItem::OnHide](#onhide)|Throws an exception if the framework tries to hide a DocObject item.|
|[CDocObjectServerItem::OnShow](#onshow)|Called by the framework to make the DocObject item in-place active. If the item is not a DocObject, calls [COleServerItem::OnShow](../../mfc/reference/coleserveritem-class.md#onshow).|

## Remarks

`CDocObjectServerItem` defines overridable member functions: [OnHide](#onhide), [OnDoVerb](#ondoverb), and [OnShow](#onshow).

To use `CDocObjectServerItem`, assure that the [OnGetEmbeddedItem](../../mfc/reference/coleserverdoc-class.md#ongetembeddeditem) override in your `COleServerDoc`-derived class returns a new `CDocObjectServerItem` object. If you need to change any functionality in your item, you can create a new instance of your own `CDocObjectServerItem`-derived class.

For further information on DocObjects, see [CDocObjectServer](../../mfc/reference/cdocobjectserver-class.md) and [COleCmdUI](../../mfc/reference/colecmdui-class.md) in the *MFC Reference*.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CDocItem](../../mfc/reference/cdocitem-class.md)

[COleServerItem](../../mfc/reference/coleserveritem-class.md)

`CDocObjectServerItem`

## Requirements

**Header:** afxdocob.h

## <a name="cdocobjectserveritem"></a> CDocObjectServerItem::CDocObjectServerItem

Constructs a `CDocObjectServerItem` object.

```
CDocObjectServerItem(COleServerDoc* pServerDoc, BOOL bAutoDelete);
```

### Parameters

*pServerDoc*<br/>
A pointer to the document that will contain the new DocObject item.

*bAutoDelete*<br/>
Indicates whether the object can be deleted when a link to it is released. Set the argument to FALSE if the `CDocObjectServerItem` object is an integral part of your document's data. Set it to TRUE if the object is a secondary structure used to identify a range in your document's data that can be deleted by the framework.

## <a name="getdocument"></a> CDocObjectServerItem::GetDocument

Retrieves a pointer to the document that contains the item.

```
COleServerDoc* GetDocument() const;
```

### Return Value

A pointer to the document that contains the item; NULL if the item is not part of a document.

### Remarks

This allows access to the server document that you passed as an argument to the [CDocObjectServerItem](#cdocobjectserveritem) constructor.

## <a name="ondoverb"></a> CDocObjectServerItem::OnDoVerb

Called by the framework to execute the specified verb.

```
virtual void OnDoVerb(LONG iVerb);
```

### Parameters

*iVerb*<br/>
Specifies the verb to execute. For possible values, see [IOleObject::DoVerb](/windows/win32/api/oleidl/nf-oleidl-ioleobject-doverb) in the Windows SDK.

### Remarks

The default implementation calls the [OnShow](#onshow) member function if the item is a DocObject and the OLEIVERB_INPLACEACTIVATE or OLEIVERB_SHOW is specified. If the item is not a DocObject or a different verb is specified, the default implementation calls [COleServerItem::OnDoVerb](../../mfc/reference/coleserveritem-class.md#ondoverb).

## <a name="onhide"></a> CDocObjectServerItem::OnHide

Called by the framework to hide the item.

```
virtual void OnHide();
```

### Remarks

The default implementation throws an exception if the item is a DocObject. You cannot hide an active DocObject item because it takes the whole view. You must deactivate the DocObject item to make it disappear. If the item is not a DocObject, the default implementation calls [COleServerItem::OnHide](../../mfc/reference/coleserveritem-class.md#onhide).

## <a name="onshow"></a> CDocObjectServerItem::OnShow

Called by the framework to instruct the server application to make the DocObject item in-place active.

```
virtual void OnShow();
```

### Remarks

If the item is not a DocObject, the default implementation calls [COleServerItem::OnShow](../../mfc/reference/coleserveritem-class.md#onopen). Override this function if you want to perform special processing when opening a DocObject item.

## See also

[COleServerItem Class](../../mfc/reference/coleserveritem-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CDocObjectServer Class](../../mfc/reference/cdocobjectserver-class.md)<br/>
[COleDocObjectItem Class](../../mfc/reference/coledocobjectitem-class.md)
