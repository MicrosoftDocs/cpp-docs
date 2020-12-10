---
description: "Learn more about: Resource Pooling in Your OLE DB Application"
title: "Resource Pooling in Your OLE DB Application"
ms.date: "10/29/2018"
helpviewer_keywords: ["OLE DB services [OLE DB], resource pooling", "resource pooling [OLE DB], services", "OLE DB, resource pooling", "OLE DB providers, resource pooling"]
ms.assetid: 2ead1bcf-bbd4-43ea-a307-bb694b992fc1
---
# Resource Pooling in Your OLE DB Application

To leverage pooling in your application, you must make sure OLE DB services are invoked by getting your data source through `IDataInitialize` or `IDBPromptInitialize`. If you directly use `CoCreateInstance` to invoke the provider based on the provider's CLSID, no OLE DB services are invoked.

The OLE DB services maintain pools of connected data sources as long as a reference to `IDataInitialize` or `IDBPromptInitialize` is held or as long as there's a connection in use. Pools are also maintained automatically within a COM+ 1.0 Services or Internet Information Services (IIS) environment. If your application takes advantage of pooling external to a COM+ 1.0 Services or IIS environment, you should keep a reference to `IDataInitialize` or `IDBPromptInitialize` or hold onto at least one connection. To make sure that the pool doesn't get destroyed when the last connection is released by the application, keep the reference or hold on to the connection for the lifetime of your application.

OLE DB services identify the pool from which the connection is drawn at the time that `Initialize` is called. After the connection is drawn from a pool, it can't be moved to a different pool. So, avoid doing things in your application that change initialization information, such as calling `UnInitialize` or calling `QueryInterface` for a provider-specific interface before calling `Initialize`. Also, connections established with a prompt value other than DBPROMPT_NOPROMPT aren't pooled. However, the initialization string retrieved from a connection established through prompting can be used to establish additional pooled connections to the same data source.

Some providers must make a separate connection for each session. These additional connections must be separately enlisted in the distributed transaction, if one exists. OLE DB services caches and reuses a single session per data source, but if the application requests more than one session at a time from a single data source, the provider might end up making additional connections and doing additional transaction enlistments that aren't pooled. It's more efficient to create a separate data source for each session in a pooled environment than to create multiple sessions from a single data source.

Finally, because ADO automatically makes use of OLE DB services, you can use ADO to establish connections and the pooling and enlistment happen automatically.

## See also

[OLE DB Resource Pooling and Services](../../data/oledb/ole-db-resource-pooling-and-services.md)
