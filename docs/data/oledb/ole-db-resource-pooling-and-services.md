---
title: "OLE DB Resource Pooling and Services | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2018"
ms.technology: ["cpp-data"]
ms.topic: "reference"
dev_langs: ["C++"]
helpviewer_keywords: ["resource pooling [OLE DB], provider requirements", "OLE DB, resource pooling", "service providers [OLE DB]", "OLE DB services [OLE DB], provider requirements", "OLE DB services [OLE DB]", "OLE DB providers, resource pooling"]
ms.assetid: 360c36e2-25ae-4caf-8ee7-d4a6b6898f68
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# OLE DB Resource Pooling and Services

To work well with OLE DB pooling, or with any OLE DB service, your provider must support aggregation of all objects. This is a requirement of any OLE DB 1.5 or later provider. It's critical for leveraging services. Providers that don't support aggregation can't be pooled and no additional services are provided.

To be pooled, providers must support the free thread model. The resource pool determines the provider's thread model according to the DBPROP_THREADMODEL property.

If the provider has a global connection state that might change while the data source is in an initialized state, it should support the new DBPROP_RESETDATASOURCE property. This property is called before a connection is reused and gives the provider the opportunity to clean up state before its next use. If the provider can't clean up some state associated with the connection, it can return DBPROPSTATUS_NOTSETTABLE for the property and the connection won't be reused.

Providers that connect to a remote database and can detect whether that connection might be lost should support the DBPROP_CONNECTIONSTATUS property. This property gives the OLE DB services the ability to detect dead connections and make sure they aren't returned to the pool.

Finally, automatic transaction enlistment generally doesn't work unless it's implemented at the same level that pooling occurs. Providers that support automatic transaction enlistment should support disabling this enlistment by exposing the DBPROP_INIT_OLEDBSERVICES property and disabling enlistment if the DBPROPVAL_OS_TXNENLISTMENT is deselected.

## See Also

[Advanced Provider Techniques](../../data/oledb/advanced-provider-techniques.md)