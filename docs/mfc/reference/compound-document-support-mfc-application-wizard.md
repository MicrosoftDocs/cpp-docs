---
description: "Learn more about: Compound Document Support, MFC Application Wizard"
title: "Compound Document Support, MFC Application Wizard"
ms.date: "11/04/2016"
f1_keywords: ["vc.appwiz.mfc.exe.compdoc"]
ms.assetid: 42e1af83-12c4-438d-92eb-13835afdb148
---
# Compound Document Support, MFC Application Wizard

In this page of the MFC Application Wizard, indicate to what level your application provides compound and active document support. Your application must support the document/view architecture to support compound documents and document templates.

By default, the application contains no compound document support. If you accept this default, your application cannot support active documents or compound files.

- **Compound document support**

  Determines whether your application provides container support, server support, or both. For more information about this area, see:

  - [Containers: Implementing a Container](../../mfc/containers-implementing-a-container.md)

  - [Servers: Implementing a Server](../../mfc/servers-implementing-a-server.md)

  |Option|Description|
  |------------|-----------------|
  |**None**|Indicates no support for Object Linking and Embedding (OLE). By default, the application wizard creates an application without ActiveX support.|
  |**Container**|Contains linked and embedded objects.|
  |**Mini server**|Indicates the application can create and manage compound document objects. Note that mini-servers cannot run stand alone and only support embedded items.|
  |**Full server**|Indicates the application can create and manage compound document objects. Full servers are able to run stand alone and support both linked and embedded items.|
  |**Container/full server**|Indicates the application can be both a container and a server. A container is an application that can incorporate embedded or linked items into its own documents. A server is an application that can create Automation items for use by container applications.|

- **Additional options**

  Indicates whether your application supports active documents. See [Active Documents](../../mfc/active-documents.md) for more information about this feature.

  |Option|Description|
  |------------|-----------------|
  |**Active document server**|Indicates the application can create and manage active documents. If you select this option, you must specify a file extension for your active document server in the **File extension** box in the [Document Template Strings](../../mfc/reference/document-template-strings-mfc-application-wizard.md) page of the wizard. See [Active Document Servers](../../mfc/active-document-servers.md) for more information.|
  |**Active document container**|Indicates the application can contain active documents within its frame. Active documents may include, for example, Internet Explorer documents, or Office documents such as Microsoft Word files or Excel spreadsheets. See [Active Document Containment](../../mfc/active-document-containment.md) for more information.|
  |**Support for compound files**|Does not serialize the container application's documents using the compound-file format. This option forces the loading of an entire file containing objects into memory. Incremental saves to individual objects are not available. If one object is changed and subsequently saved, then all objects in the file are saved.|

## See also

[MFC Application Wizard](../../mfc/reference/mfc-application-wizard.md)
