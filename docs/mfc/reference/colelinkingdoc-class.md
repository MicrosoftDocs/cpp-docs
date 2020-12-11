---
description: "Learn more about: COleLinkingDoc Class"
title: "COleLinkingDoc Class"
ms.date: "11/04/2016"
f1_keywords: ["COleLinkingDoc", "AFXOLE/COleLinkingDoc", "AFXOLE/COleLinkingDoc::COleLinkingDoc", "AFXOLE/COleLinkingDoc::Register", "AFXOLE/COleLinkingDoc::Revoke", "AFXOLE/COleLinkingDoc::OnFindEmbeddedItem", "AFXOLE/COleLinkingDoc::OnGetLinkedItem"]
helpviewer_keywords: ["COleLinkingDoc [MFC], COleLinkingDoc", "COleLinkingDoc [MFC], Register", "COleLinkingDoc [MFC], Revoke", "COleLinkingDoc [MFC], OnFindEmbeddedItem", "COleLinkingDoc [MFC], OnGetLinkedItem"]
ms.assetid: 9f547f35-2f95-427f-b9c0-85c31940198b
---
# COleLinkingDoc Class

The base class for OLE container documents that support linking to the embedded items they contain.

## Syntax

```
class COleLinkingDoc : public COleDocument
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[COleLinkingDoc::COleLinkingDoc](#colelinkingdoc)|Constructs a `COleLinkingDoc` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[COleLinkingDoc::Register](#register)|Registers the document with the OLE system DLLs.|
|[COleLinkingDoc::Revoke](#revoke)|Revokes the document's registration.|

### Protected Methods

|Name|Description|
|----------|-----------------|
|[COleLinkingDoc::OnFindEmbeddedItem](#onfindembeddeditem)|Finds the specified embedded item.|
|[COleLinkingDoc::OnGetLinkedItem](#ongetlinkeditem)|Finds the specified linked item.|

## Remarks

A container application that supports linking to embedded items is called a "link container." The [OCLIENT](../../overview/visual-cpp-samples.md) sample application is an example of a link container.

When a linked item's source is an embedded item in another document, that containing document must be loaded in order for the embedded item to be edited. For this reason, a link container must be able to be launched by another container application when the user wants to edit the source of a linked item. Your application must also use the [COleTemplateServer](../../mfc/reference/coletemplateserver-class.md) class so that it can create documents when launched programmatically.

To make your container a link container, derive your document class from `COleLinkingDoc` instead of [COleDocument](../../mfc/reference/coledocument-class.md). As with any other OLE container, you must design your class for storing the application's native data as well as embedded or linked items. Also, you must design data structures for storing your native data. If you define a `CDocItem`-derived class for your application's native data, you can use the interface defined by `COleDocument` to store your native data as well as your OLE data.

To allow your application to be launched programmatically by another container, declare a `COleTemplateServer` object as a member of your application's `CWinApp`-derived class:

[!code-cpp[NVC_MFCOleContainer#23](../../mfc/codesnippet/cpp/colelinkingdoc-class_1.h)]

In the `InitInstance` member function of your `CWinApp`-derived class, create a document template and specify your `COleLinkingDoc`-derived class as the document class:

[!code-cpp[NVC_MFCOleContainer#24](../../mfc/codesnippet/cpp/colelinkingdoc-class_2.cpp)]

Connect your `COleTemplateServer` object to your document templates by calling the object's `ConnectTemplate` member function, and register all class objects with the OLE system by calling `COleTemplateServer::RegisterAll`:

[!code-cpp[NVC_MFCOleContainer#25](../../mfc/codesnippet/cpp/colelinkingdoc-class_3.cpp)]

For a sample `CWinApp`-derived class definition and `InitInstance` function, see OCLIENT.H and OCLIENT.CPP in the MFC sample [OCLIENT](../../overview/visual-cpp-samples.md).

For more information on using `COleLinkingDoc`, see the articles [Containers: Implementing a Container](../../mfc/containers-implementing-a-container.md) and [Containers: Advanced Features](../../mfc/containers-advanced-features.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CDocument](../../mfc/reference/cdocument-class.md)

[COleDocument](../../mfc/reference/coledocument-class.md)

`COleLinkingDoc`

## Requirements

**Header:** afxole.h

## <a name="colelinkingdoc"></a> COleLinkingDoc::COleLinkingDoc

Constructs a `COleLinkingDoc` object without beginning communications with the OLE system DLLs.

```
COleLinkingDoc();
```

### Remarks

You must call the `Register` member function to inform OLE that the document is open.

## <a name="onfindembeddeditem"></a> COleLinkingDoc::OnFindEmbeddedItem

Called by the framework to determine whether the document contains an embedded OLE item with the specified name.

```
virtual COleClientItem* OnFindEmbeddedItem(LPCTSTR lpszItemName);
```

### Parameters

*lpszItemName*<br/>
Pointer to the name of the embedded OLE item requested.

### Return Value

A pointer to the specified item; NULL if the item is not found.

### Remarks

The default implementation searches the list of embedded items for an item with the specified name (the name comparison is case sensitive). Override this function if you have your own method of storing or naming embedded OLE items.

## <a name="ongetlinkeditem"></a> COleLinkingDoc::OnGetLinkedItem

Called by the framework to check whether the document contains a linked server item with the specified name.

```
virtual COleServerItem* OnGetLinkedItem(LPCTSTR lpszItemName);
```

### Parameters

*lpszItemName*<br/>
Pointer to the name of the linked OLE item requested.

### Return Value

A pointer to the specified item; NULL if the item is not found.

### Remarks

The default `COleLinkingDoc` implementation always returns NULL. This function is overriden in the derived class `COleServerDoc` to search the list of OLE server items for a linked item with the specified name (the name comparison is case sensitive). Override this function if you have implemented your own method of storing or retrieving linked server items.

## <a name="register"></a> COleLinkingDoc::Register

Informs the OLE system DLLs that the document is open.

```
BOOL Register(
    COleObjectFactory* pFactory,
    LPCTSTR lpszPathName);
```

### Parameters

*pFactory*<br/>
Pointer to an OLE factory object (can be NULL).

*lpszPathName*<br/>
Pointer to the fully qualified path of the container document.

### Return Value

Nonzero if the document is successfully registered; otherwise 0.

### Remarks

Call this function when creating or opening a named file to register the document with the OLE system DLLs. There is no need to call this function if the document represents an embedded item.

If you are using `COleTemplateServer` in your application, `Register` is called for you by `COleLinkingDoc`'s implementation of `OnNewDocument`, `OnOpenDocument`, and `OnSaveDocument`.

## <a name="revoke"></a> COleLinkingDoc::Revoke

Informs the OLE system DLLs that the document is no longer open.

```cpp
void Revoke();
```

### Remarks

Call this function to revoke the document's registration with the OLE system DLLs.

You should call this function when closing a named file, but you usually do not need to call it directly. `Revoke` is called for you by `COleLinkingDoc`'s implementation of `OnCloseDocument`, `OnNewDocument`, `OnOpenDocument`, and `OnSaveDocument`.

## See also

[MFC Sample OCLIENT](../../overview/visual-cpp-samples.md)<br/>
[COleDocument Class](../../mfc/reference/coledocument-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CDocTemplate Class](../../mfc/reference/cdoctemplate-class.md)
