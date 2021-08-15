---
description: "Learn more about: ATL Database Classes (OLE DB Templates)"
title: "ATL Database Classes (OLE DB Templates)"
ms.date: "05/02/2019"
helpviewer_keywords: ["OLE DB templates [C++], ATL database classes", "database classes [C++], OLE DB", "database classes [C++], ATL"]
ms.assetid: 219766aa-e18a-405f-9e36-d7a0fdb31b2b
---
# ATL Database Classes (OLE DB Templates)

Microsoft provides several implementations of OLE DB, a set of COM interfaces that provide uniform access to data in diverse information sources and formats.

The OLE DB Templates are C++ templates in ATL that make OLE DB database technology easier to use by providing classes that implement many of the commonly used OLE DB interfaces.

This template library contains two parts:

- [OLE DB consumer templates](../data/oledb/ole-db-consumer-templates-cpp.md) Used to implement an OLE DB client (consumer) application.

- [OLE DB provider templates](../data/oledb/ole-db-provider-templates-cpp.md) Used to implement an OLE DB server (provider) application.

In addition, the [OLE DB consumer attributes](../windows/attributes/ole-db-consumer-attributes.md) provide a convenient way to create OLE DB consumers. The OLE DB attributes inject code based on the OLE DB consumer templates to create working OLE DB consumers.

Note that the MFC library contains one class, [COleDBRecordView](../mfc/reference/coledbrecordview-class.md), that displays database records in controls. The view is a form view directly connected to a `CRowset` object, and displays the fields of the `CRowset` object in the dialog template's controls.

For more information, see [OLE DB Programming](../data/oledb/ole-db-programming.md) and [OLE DB Programmer's Guide](/sql/connect/oledb/ole-db/oledb-driver-for-sql-server-programming).

## See also

[Creating an OLE DB Consumer](../data/oledb/creating-an-ole-db-consumer.md)<br/>
[Creating an OLE DB Provider](../data/oledb/creating-an-ole-db-provider.md)<br/>
[OLE DB Consumer Templates Reference](../data/oledb/ole-db-consumer-templates-reference.md)<br/>
[OLE DB Provider Templates Reference](../data/oledb/ole-db-provider-templates-reference.md)<br/>
[OLE DB Templates Samples](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/ATL/OLEDB)
