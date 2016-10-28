---
title: "ATL Database Classes (OLE DB Templates)"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "OLE DB templates [C++], ATL database classes"
  - "database classes [C++], OLE DB"
  - "database classes [C++], ATL"
ms.assetid: 219766aa-e18a-405f-9e36-d7a0fdb31b2b
caps.latest.revision: 14
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
# ATL Database Classes (OLE DB Templates)
Microsoft provides several implementations of OLE DB, a set of COM interfaces that provide uniform access to data in diverse information sources and formats.  
  
 The OLE DB Templates are C++ templates in ATL that make the high-performance OLE DB database technology easier to use by providing classes that implement many of the commonly used OLE DB interfaces.  
  
 This template library contains two parts:  
  
-   [OLE DB consumer templates](../data/ole-db-consumer-templates--c---.md) Used to implement an OLE DB client (consumer) application.  
  
-   [OLE DB provider templates](../data/ole-db-provider-templates--c---.md) Used to implement an OLE DB server (provider) application.  
  
 In addition, the [OLE DB consumer attributes](../windows/ole-db-consumer-attributes.md) provide a convenient way to create OLE DB consumers. The OLE DB attributes inject code based on the OLE DB consumer templates to create working OLE DB consumers.  
  
 Note that the MFC library contains one class, [COleDBRecordView](../mfcref/coledbrecordview-class.md), that displays database records in controls. The view is a form view directly connected to a `CRowset` object, and displays the fields of the `CRowset` object in the dialog template's controls.  
  
 For more information, see [OLE DB Programming](../data/ole-db-programming.md) and [OLE DB Programmer's Guide](http://go.microsoft.com/fwlink/?LinkId=121548).  
  
## See Also  
 [Creating an OLE DB Consumer](../data/creating-an-ole-db-consumer.md)   
 [Creating an OLE DB Provider](../data/creating-an-ole-db-provider.md)   
 [OLE DB Consumer Templates Reference](../data/ole-db-consumer-templates-reference.md)   
 [OLE DB Provider Templates Reference](../data/ole-db-provider-templates-reference.md)   
 [OLE DB Templates Samples](assetId:///08958863-0b5f-41ad-ae99-fca7440c553c)