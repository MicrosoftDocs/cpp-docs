---
description: "Learn more about: OLE DB Templates, Attributes, and Other Implementations"
title: "OLE DB Templates, Attributes, and Other Implementations"
ms.date: "10/22/2018"
helpviewer_keywords: ["OLE DB, implementations", "OLE DB templates, about OLE DB templates", "OLE DB templates"]
ms.assetid: 0c780c1b-9bba-4788-8c33-8552d9f120ac
---
# OLE DB Templates, Attributes, and Other Implementations

## ATL OLE DB Templates

The OLE DB Templates, which are part of ATL (Active Template Library), make the high-performance OLE DB database technology easier to use by providing classes that implement many of the commonly used OLE DB interfaces. Along with this template library comes wizard support for creating OLE DB starter applications.

This template library contains two parts:

- **OLE DB Consumer Templates** Used to implement an OLE DB client (consumer) application.

- **OLE DB Provider Templates** Used to implement an OLE DB server (provider) application.

To use the OLE DB Templates, you should be familiar with C++ templates, COM, and the OLE DB interfaces. If you aren't familiar with OLE DB, see [OLE DB Programmer's Reference](/sql/connect/oledb/ole-db/oledb-driver-for-sql-server-programming).

For more information, you can:

- Read the topics about the [OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md) or [OLE DB Provider Templates](../../data/oledb/ole-db-provider-templates-cpp.md).

- Create an [OLE DB consumer](../../data/oledb/creating-an-ole-db-consumer.md) or [OLE DB provider](../../data/oledb/creating-an-ole-db-provider.md).

- See the list of [OLE DB consumer classes](../../data/oledb/ole-db-consumer-templates-reference.md) or [OLE DB provider classes](../../data/oledb/ole-db-provider-templates-reference.md).

- See the list of [OLE DB templates samples](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/ATL/OLEDB).

- See [OLE DB Programmer's Reference](/sql/connect/oledb/ole-db/oledb-driver-for-sql-server-programming) (in the Windows SDK).

## OLE DB Attributes

The [OLE DB consumer attributes](../../windows/attributes/ole-db-consumer-attributes.md) provide a convenient way to create OLE DB consumers. The OLE DB attributes inject code based on the [OLE DB consumer templates](../../data/oledb/ole-db-consumer-templates-reference.md) to create working OLE DB consumers and providers. If you need to specify functionality not supported by the attributes, you can use the OLE DB Templates in conjunction with attributes in your code.

## MFC OLE DB Classes

The MFC library has one class, [COleDBRecordView](../../mfc/reference/coledbrecordview-class.md), that displays database records in controls. The view is a form view directly connected to a `CRowset` object and displays the fields of the `CRowset` object in the dialog template's controls. It also supplies a default implementation for moving to the first, next, previous, or last record and an interface for updating the record currently on view. For more information, see `COleDBRecordView`.

## OLE DB SDK Interfaces

In the cases where the OLE DB Templates don't support OLE DB functionality, you need to use the OLE DB interfaces themselves. For more information, see [OLE DB Programmer's Reference](/sql/connect/oledb/ole-db/oledb-driver-for-sql-server-programming) in the Windows SDK.

## See also

[OLE DB Programming](../../data/oledb/ole-db-programming.md)<br/>
[OLE DB Programming Overview](../../data/oledb/ole-db-programming-overview.md)
