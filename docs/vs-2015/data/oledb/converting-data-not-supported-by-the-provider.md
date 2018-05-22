---
title: "Converting Data Not Supported by the Provider | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "OLE DB provider templates, unsupported data types"
ms.assetid: f495e50f-530a-4fab-ab54-e0c359785845
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Converting Data Not Supported by the Provider
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Converting Data Not Supported by the Provider](https://docs.microsoft.com/cpp/data/oledb/converting-data-not-supported-by-the-provider).  
  
  
When the consumer requests a data type that is not supported by the provider, the OLE DB provider template code for `IRowsetImpl::GetData` calls Msdadc.dll to convert the data type.  
  
 If you implement an interface like `IRowsetChange` that requires data conversion, you can call Msdaenum.dll to do the conversion. Use `GetData`, defined in Atldb.h, as an example.  
  
## See Also  
 [Working with OLE DB Provider Templates](../../data/oledb/working-with-ole-db-provider-templates.md)

