---
title: "Converting Data Not Supported by the Provider | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2018"
ms.technology: ["cpp-data"]
ms.topic: "reference"
dev_langs: ["C++"]
helpviewer_keywords: ["OLE DB provider templates, unsupported data types"]
ms.assetid: f495e50f-530a-4fab-ab54-e0c359785845
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# Converting Data Not Supported by the Provider

When the consumer requests a data type that is not supported by the provider, the OLE DB provider template code for `IRowsetImpl::GetData` calls Msdadc.dll to convert the data type.

If you implement an interface like `IRowsetChange` that requires data conversion, you can call Msdaenum.dll to do the conversion. Use `GetData`, defined in Atldb.h, as an example.

## See Also

[Working with OLE DB Provider Templates](../../data/oledb/working-with-ole-db-provider-templates.md)