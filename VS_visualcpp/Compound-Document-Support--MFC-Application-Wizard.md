---
title: "Compound Document Support, MFC Application Wizard"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 42e1af83-12c4-438d-92eb-13835afdb148
caps.latest.revision: 7
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Compound Document Support, MFC Application Wizard
In this page of the MFC Application Wizard, indicate to what level your application provides compound and active document support. Your application must support the document/view architecture to support compound documents and document templates.  
  
 By default, the application contains no compound document support. If you accept this default, your application cannot support active documents or compound files.  
  
 **Compound document support**  
 Determines whether your application provides container support, server support, or both. For more information about this area, see:  
  
-   [Containers: Implementing a Container](../VS_visualcpp/Containers--Implementing-a-Container.md)  
  
-   [Servers: Implementing a Server](../VS_visualcpp/Servers--Implementing-a-Server.md)  
  
|Option|Description|  
|------------|-----------------|  
|**None**|Indicates no support for Object Linking and Embedding (OLE). By default, the application wizard creates an application without ActiveX support.|  
|**Container**|Contains linked and embedded objects.|  
|**Mini server**|Indicates the application can create and manage compound document objects. Note that mini-servers cannot run stand alone and only support embedded items.|  
|**Full server**|Indicates the application can create and manage compound document objects. Full servers are able to run stand alone and support both linked and embedded items.|  
|**Container/full server**|Indicates the application can be both a container and a server. A container is an application that can incorporate embedded or linked items into its own documents. A server is an application that can create Automation items for use by container applications.|  
  
 **Additional options**  
 Indicates whether your application supports active documents. See [Active Documents](../VS_visualcpp/Active-Documents.md) for more information about this feature.  
  
|Option|Description|  
|------------|-----------------|  
|**Active document server**|Indicates the application can create and manage active documents. If you select this option, you must specify a file extension for your active document server in the **File extension** box in the [Document Template Strings](../VS_visualcpp/Document-Template-Strings--MFC-Application-Wizard.md) page of the wizard. See [Active Document Servers](../VS_visualcpp/Active-Document-Servers.md) for more information.|  
|**Active document container**|Indicates the application can contain active documents within its frame. Active documents may include, for example, Internet Explorer documents, or Office documents such as Microsoft Word files or Excel spreadsheets. See [Active Document Containment](../VS_visualcpp/Active-Document-Containment.md) for more information.|  
|**Support for compound files**|Does not serialize the container application's documents using the compound-file format. This option forces the loading of an entire file containing objects into memory. Incremental saves to individual objects are not available. If one object is changed and subsequently saved, then all objects in the file are saved.|  
  
## See Also  
 [MFC Application Wizard](../VS_visualcpp/MFC-Application-Wizard.md)