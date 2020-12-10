---
description: "Learn more about: Data Source Object Interfaces"
title: "Data Source Object Interfaces"
ms.date: "10/24/2018"
helpviewer_keywords: ["data source objects [C++], interfaces", "data source objects [C++]", "interfaces [C++], OLE DB", "interfaces [C++], list of", "OLE DB provider templates [C++], object interfaces", "OLE DB [C++], interfaces"]
ms.assetid: 929e100c-c08c-4b64-8437-d8d1357226f6
---
# Data Source Object Interfaces

The following table shows the mandatory and optional interfaces defined by OLE DB for a data source object.

|Interface|Required?|Implemented by OLE DB templates?|
|---------------|---------------|--------------------------------------|
|`IDBCreateSession`|Mandatory|Yes|
|`IDBInitialize`|Mandatory|Yes|
|`IDBProperties`|Mandatory|Yes|
|[IPersist](/windows/win32/api/objidl/nn-objidl-ipersist)|Mandatory|Yes|
|[IConnectionPointContainer](/windows/win32/api/ocidl/nn-ocidl-iconnectionpointcontainer)|Optional|No|
|`IDBDataSourceAdmin`|Optional|No|
|`IDBInfo`|Optional|No|
|[IPersistFile](/windows/win32/api/objidl/nn-objidl-ipersistfile)|Optional|No|
|`ISupportErrorInfo`|Optional|No|

The data source object implements the `IDBProperties`, `IDBInitialize`, and `IDBCreateSession` interfaces through inheritance. You can choose to support additional functionality by inheriting or not inheriting from one of these implementation classes. If you want to support the `IDBDataSourceAdmin` interface, you must inherit from the `IDBDataSourceAdminImpl` class.

## See also

[OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)<br/>
