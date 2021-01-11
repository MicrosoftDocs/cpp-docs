---
description: "Learn more about: CDocItem Class"
title: "CDocItem Class"
ms.date: "11/04/2016"
f1_keywords: ["CDocItem", "AFXOLE/CDocItem", "AFXOLE/CDocItem::GetDocument", "AFXOLE/CDocItem::IsBlank"]
helpviewer_keywords: ["CDocItem [MFC], GetDocument", "CDocItem [MFC], IsBlank"]
ms.assetid: 84fb8610-a4c8-4211-adc0-e70e8d002c11
---
# CDocItem Class

The base class for document items, which are components of a document's data.

## Syntax

```
class CDocItem : public CCmdTarget
```

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[CDocItem::GetDocument](#getdocument)|Returns the document that contains the item.|
|[CDocItem::IsBlank](#isblank)|Determines whether the item contains any information.|

## Remarks

`CDocItem` objects are used to represent OLE items in both client and server documents.

For more information, see the article [Containers: Implementing a Container](../../mfc/containers-implementing-a-container.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

`CDocItem`

## Requirements

**Header:** afxole.h

## <a name="getdocument"></a> CDocItem::GetDocument

Call this function to get the document that contains the item.

```
CDocument* GetDocument() const;
```

### Return Value

A pointer to the document that contains the item; NULL, if the item is not part of a document.

### Remarks

This function is overridden in the derived classes [COleClientItem](../../mfc/reference/coleclientitem-class.md) and [COleServerItem](../../mfc/reference/coleserveritem-class.md), returning a pointer to either a [COleDocument](../../mfc/reference/coledocument-class.md), a [COleLinkingDoc](../../mfc/reference/colelinkingdoc-class.md), or a [COleServerDoc](../../mfc/reference/coleserverdoc-class.md) object.

## <a name="isblank"></a> CDocItem::IsBlank

Called by the framework when default serialization occurs.

```
virtual BOOL IsBlank() const;
```

### Return Value

Nonzero if the item contains no information; otherwise 0.

### Remarks

By default, `CDocItem` objects are not blank. [COleClientItem](../../mfc/reference/coleclientitem-class.md) objects are sometimes blank because they derive directly from `CDocItem`. However, [COleServerItem](../../mfc/reference/coleserveritem-class.md) objects are always blank. By default, OLE applications containing `COleClientItem` objects that have no x or y extent are serialized. This is done by returning TRUE from an override of `IsBlank` when the item has no x or y extent.

Override this function if you want to implement other actions during serialization.

## See also

[CCmdTarget Class](../../mfc/reference/ccmdtarget-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[COleDocument Class](../../mfc/reference/coledocument-class.md)<br/>
[COleServerItem Class](../../mfc/reference/coleserveritem-class.md)<br/>
[COleClientItem Class](../../mfc/reference/coleclientitem-class.md)
