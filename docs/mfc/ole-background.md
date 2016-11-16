---
title: "OLE Background | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "OLE, about OLE"
ms.assetid: 5f654eb5-66b1-40c9-9215-bb85356a67f8
caps.latest.revision: 10
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
# OLE Background
OLE is a mechanism that allows users to create and edit documents containing items or "objects" created by multiple applications.  
  
> [!NOTE]
>  OLE was originally an acronym for Object Linking and Embedding. However, it is now referred to as OLE. Parts of OLE not related to linking and embedding are now part of Active technology.  
  
 OLE documents, historically called compound documents, seamlessly integrate various types of data, or components. Sound clips, spreadsheets, and bitmaps are typical examples of components found in OLE documents. Supporting OLE in your application allows your users to use OLE documents without worrying about switching between the different applications; OLE does the switching for you.  
  
 You use a container application to create compound documents and a server application or component application to create the items within the container document. Any application you write can be a container, a server, or both.  
  
 OLE incorporates many different concepts that all work toward the goal of seamless interaction between applications. These areas include the following:  
  
 Linking and Embedding  
 Linking and embedding are the two methods for storing items created inside an OLE document that were created in another application. For general information on the differences between the two, see the article [OLE Background: Linking and Embedding](../mfc/ole-background-linking-and-embedding.md). For more detailed information, see the articles [Containers](../mfc/containers.md) and [Servers](../mfc/servers.md).  
  
 In-Place Activation (Visual Editing)  
 Activating an embedded item in the context of the container document is called in-place activation or visual editing. The container application's interface changes to incorporate the features of the component application that created the embedded item. Linked items are never activated in place because the actual data for the item is contained in a separate file, out of the context of the application containing the link. For more information on in-place activation, see the article [Activation](../mfc/activation-cpp.md).  
  
> [!NOTE]
>  Linking and embedding and in-place activation provide the main features of OLE visual editing.  
  
 Automation  
 Automation allows one application to drive another application. The driving application is known as an automation client, and the application being driven is known as an automation server or automation component. For more information on automation, see the articles [Automation Clients](../mfc/automation-clients.md) and [Automation Servers](../mfc/automation-servers.md).  
  
> [!NOTE]
>  Automation works in both OLE and Active technology contexts. You can automate any object based on COM.  
  
 Compound Files  
 Compound files provide a standard file format that simplifies structured storing of compound documents for OLE applications. Within a compound file, storages have many features of directories and streams have many features of files. This technology is also called structured storage. For more information on compound files, see the article [Containers: Compound Files](../mfc/containers-compound-files.md).  
  
 Uniform Data Transfer  
 Uniform Data Transfer (UDT) is a set of interfaces that allow data to be sent and received in a standard fashion, regardless of the actual method chosen to transfer the data. UDT forms the basis for data transfers by drag and drop. UDT now serves as the basis for existing Windows data transfer, such as the Clipboard and dynamic data exchange (DDE). For more information on UDT, see the article [Data Objects and Data Sources (OLE)](../mfc/data-objects-and-data-sources-ole.md).  
  
 Drag and Drop  
 Drag and drop is an easy-to-use, direct-manipulation technique to transfer data among applications, among windows within an application, or even within a single window in an application. The data to be transferred is selected and dragged to the desired destination. Drag and drop is based on uniform data transfer. For more information on drag and drop, see the article [Drag and Drop](../mfc/drag-and-drop-ole.md).  
  
 Component Object Model  
 The Component Object Model (COM) provides the infrastructure used when OLE objects communicate with each other. The MFC OLE classes simplify COM for the programmer. COM is part of Active technology, because COM objects underlie both OLE and Active technology. For more information about COM, see the [Active Template Library (ATL)](../atl/active-template-library-atl-concepts.md) topics.  
  
 Some of the more important OLE topics are covered in the following articles:  
  
-   [OLE Background: Linking and Embedding](../mfc/ole-background-linking-and-embedding.md)  
  
-   [OLE Background: Containers and Servers](../mfc/ole-background-containers-and-servers.md)  
  
-   [OLE Background: Implementation Strategies](../mfc/ole-background-implementation-strategies.md)  
  
-   [OLE Background: MFC Implementation](../mfc/ole-background-mfc-implementation.md)  
  
 For general OLE information not found in the above articles, search for OLE in MSDN.  
  
## See Also  
 [OLE](../mfc/ole-in-mfc.md)

