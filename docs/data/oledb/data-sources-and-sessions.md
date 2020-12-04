---
description: "Learn more about: Data Sources and Sessions"
title: "Data Sources and Sessions"
ms.date: "11/19/2018"
helpviewer_keywords: ["data sources [C++], OLE DB", "connections [C++], data source", "OLE DB consumer templates [C++], data sources"]
ms.assetid: 6ee52216-e082-4869-a1d6-ce561cfb76e5
---
# Data Sources and Sessions

The following figure shows the classes that support connecting to and accessing a data source. Each class is based on a standard OLE DB component implementation.

![Data source and session classes](../../data/oledb/media/vcdatasourcesessionclasses.gif "Data source and session classes") <br/>
Data Source and Session Classes

The classes are:

- [CDataSource](../../data/oledb/cdatasource-class.md) This class instantiates the data source object, which creates and manages a connection to a data source through an OLE DB provider. The data source takes information such as the data source address and authentication information in the form of a connection string.

   It's also worth noting that the helper class [CEnumerator](../../data/oledb/cenumerator-class.md) is often used before any connection is established to obtain a list of available providers registered on a system. This allows you to select a provider as a data source. For example, the **Data Link Properties** dialog box uses this class to populate the list of providers on the **Providers** tab. It equates to the `SQLBrowseConnect` or `SQLDriverConnect` function.

- [CSession](../../data/oledb/csession-class.md) This class instantiates the session object, which represents a single access session to the data source. However, you can create multiple sessions on a data source. For each session, you can create rowsets, commands, and other objects to access data from the data source. The session handles transactions.

## See also

[OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)
