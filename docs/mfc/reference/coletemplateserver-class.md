---
description: "Learn more about: COleTemplateServer Class"
title: "COleTemplateServer Class"
ms.date: "11/04/2016"
f1_keywords: ["COleTemplateServer", "AFXDISP/COleTemplateServer", "AFXDISP/COleTemplateServer::COleTemplateServer", "AFXDISP/COleTemplateServer::ConnectTemplate", "AFXDISP/COleTemplateServer::Unregister", "AFXDISP/COleTemplateServer::UpdateRegistry"]
helpviewer_keywords: ["COleTemplateServer [MFC], COleTemplateServer", "COleTemplateServer [MFC], ConnectTemplate", "COleTemplateServer [MFC], Unregister", "COleTemplateServer [MFC], UpdateRegistry"]
ms.assetid: 47a2887d-8162-4993-a842-a784177c7f5c
---
# COleTemplateServer Class

Used for OLE visual editing servers, automation servers, and link containers (applications that support links to embeddings).

## Syntax

```
class COleTemplateServer : public COleObjectFactory
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[COleTemplateServer::COleTemplateServer](#coletemplateserver)|Constructs a `COleTemplateServer` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[COleTemplateServer::ConnectTemplate](#connecttemplate)|Connects a document template to the underlying `COleObjectFactory` object.|
|[COleTemplateServer::Unregister](#unregister)|Unregisters the associated document template.|
|[COleTemplateServer::UpdateRegistry](#updateregistry)|Registers the document type with the OLE system registry.|

## Remarks

This class is derived from the class [COleObjectFactory](../../mfc/reference/coleobjectfactory-class.md); usually, you can use `COleTemplateServer` directly rather than deriving your own class. `COleTemplateServer` uses a [CDocTemplate](../../mfc/reference/cdoctemplate-class.md) object to manage the server documents. Use `COleTemplateServer` when implementing a full server, that is, a server that can be run as a standalone application. Full servers are typically multiple document interface (MDI) applications, although single document interface (SDI) applications are supported. One `COleTemplateServer` object is needed for each type of server document an application supports; that is, if your server application supports both worksheets and charts, you must have two `COleTemplateServer` objects.

`COleTemplateServer` overrides the `OnCreateInstance` member function defined by `COleObjectFactory`. This member function is called by the framework to create a C++ object of the proper type.

For more information about servers, see the article [Servers: Implementing a Server](../../mfc/servers-implementing-a-server.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[COleObjectFactory](../../mfc/reference/coleobjectfactory-class.md)

`COleTemplateServer`

## Requirements

**Header:** afxdisp.h

## <a name="coletemplateserver"></a> COleTemplateServer::COleTemplateServer

Constructs a `COleTemplateServer` object.

```
COleTemplateServer();
```

### Remarks

For a brief description of the use of the `COleTemplateServer` class, see the [COleLinkingDoc](../../mfc/reference/colelinkingdoc-class.md) class overview.

## <a name="connecttemplate"></a> COleTemplateServer::ConnectTemplate

Connects the document template pointed to by *pDocTemplate* to the underlying [COleObjectFactory](../../mfc/reference/coleobjectfactory-class.md) object.

```cpp
void ConnectTemplate(
    REFCLSID clsid,
    CDocTemplate* pDocTemplate,
    BOOL bMultiInstance);
```

### Parameters

*clsid*<br/>
Reference to the OLE class ID that the template requests.

*pDocTemplate*<br/>
Pointer to the document template.

*bMultiInstance*<br/>
Indicates whether a single instance of the application can support multiple instantiations. If TRUE, multiple instances of the application are launched for each request to create an object.

### Remarks

For more information, see [CLSID Key](/windows/win32/com/clsid-key-hklm) in the Windows SDK.

## <a name="unregister"></a> COleTemplateServer::Unregister

Unregisters the associated document template.

```
BOOL Unregister();
```

### Return Value

TRUE if successful; otherwise FALSE.

### Remarks

EnterRemarks

## <a name="updateregistry"></a> COleTemplateServer::UpdateRegistry

Loads file-type information from the document-template string and places that information in the OLE system registry.

```cpp
void UpdateRegistry(
    OLE_APPTYPE nAppType = OAT_INPLACE_SERVER,
    LPCTSTR* rglpszRegister = NULL,
    LPCTSTR* rglpszOverwrite = NULL,
    BOOL bRegister = TRUE);
```

### Parameters

*nAppType*<br/>
A value from the OLE_APPTYPE enumeration, which is defined in AFXDISP.H. It can have any one of the following values:

- OAT_INPLACE_SERVER Server has full server user-interface.

- OAT_SERVER Server supports only embedding.

- OAT_CONTAINER Container supports links to embedded objects.

- OAT_DISPATCH_OBJECT Object is `IDispatch`-capable.

- OAT_DOC_OBJECT_SERVER Server supports both embedding and the Document Object component model.

*rglpszRegister*<br/>
A list of entries that is written into the registry only if no entries exist.

*rglpszOverwrite*<br/>
A list of entries that is written into the registry regardless of whether any preceding entries exist.

*bRegister*<br/>
Determines whether the class is to be registered. If *bRegister* is TRUE, the class is registered with the system registry. Otherwise, it unregisters the class.

### Remarks

The registration information is loaded by means of a call to [CDocTemplate::GetDocString](../../mfc/reference/cdoctemplate-class.md#getdocstring). The substrings retrieved are those identified by the indexes `regFileTypeId`, `regFileTypeName`, and `fileNewName`, as described in the `GetDocString` reference pages.

If the `regFileTypeId` substring is empty or if the call to `GetDocString` fails for any other reason, this function fails and the file information is not entered in the registry.

The information in the arguments *rglpszRegister* and *rglpszOverwrite* is written to the registry through a call to [AfxOleRegisterServerClass](application-control.md#afxoleregisterserverclass). The default information, which is registered when the two arguments are NULL, is suitable for most applications. For information on the structure of the information in these arguments, see `AfxOleRegisterServerClass`.

For more information, see [Implementing the IDispatch Interface](/previous-versions/windows/desktop/automat/implementing-the-idispatch-interface).

## See also

[MFC Sample HIERSVR](../../overview/visual-cpp-samples.md)<br/>
[COleObjectFactory Class](../../mfc/reference/coleobjectfactory-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[COleServerDoc Class](../../mfc/reference/coleserverdoc-class.md)<br/>
[COleServerItem Class](../../mfc/reference/coleserveritem-class.md)
