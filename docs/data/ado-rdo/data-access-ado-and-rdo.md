---
title: "Data Access: ADO and RDO | Microsoft Docs"
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
  - "data controls [C++]"
  - "bound controls [C++], ADO"
  - "data binding [C++], RDO"
  - "data-bound controls [C++], ADO"
  - "data binding [C++], ADO"
  - "data access [C++], RDO data controls"
  - "data-bound controls [C++], RDO"
  - "bound controls [C++], RDO"
  - "controls [C++], data binding"
ms.assetid: 92da8f1e-144b-4605-ac0a-43c25bdc14a7
caps.latest.revision: 8
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
# Data Access: ADO and RDO
The following table shows two underlying technologies that support data-source or data-bound controls.  
  
 **ADO**  
 ADO is a COM wrapper of OLE DB that facilitates writing data access applications (consumers). OLE DB is a COM-based universal data access technology, allowing you to use any data source, not just indexed, sequential access methods (ISAM) and SQL-based databases.  
  
 OLE DB providers can access data from a variety of data sources and is not limited to SQL queries to retrieve data but rather can use queries as defined in the provider.  
  
 **RDO**  
 RDO is the COM wrapper of ODBC. ODBC, a C-based API, allows general-purpose (heterogeneous) data access. However, RDO relies on SQL as the command language to access data.  
  
 You might consider using the ADO-based data-access controls rather than the RDO data-access controls.  
  
 The following table shows the main differences between ADO and RDO data controls.  
  
 **Data-bound controls**  
 RDO data-bound controls use the **ICursor** interfaces; ADO controls use the OLE DB `IRowset` interface. In both cases, the interfaces used by the controls return a rowset.  
  
 The RDO-based data-bound controls were designed to work best with Visual Basic. As such, some functionality of RDO data-bound controls, most notably in formatting, is not available in Visual C++ applications. This problem is not present in the ADO databinding controls.  
  
 **Data controls**  
 ADO data controls implement the **IDataSource** interface and RDO data controls implement the **IVBDSC** interface. You can call an **IDataSource** method to receive an `IRowset` interface pointer. Similarly, you can call an IVBDSC method to get an **ICursor** interface pointer.  
  
## See Also  
 [Databinding with ActiveX Controls in Visual C++](../../data/ado-rdo/databinding-with-activex-controls-in-visual-cpp.md)