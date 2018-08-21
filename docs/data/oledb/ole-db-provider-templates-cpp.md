---
title: "OLE DB Provider Templates (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
dev_langs: ["C++"]
helpviewer_keywords: ["OLE DB providers [C++], about providers", "databases [C++], OLE DB templates", "OLE DB provider templates [C++], about OLE DB provider templates", "templates [C++], OLE DB"]
ms.assetid: fccff85f-2af8-4500-82bd-6312d28a74b8
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# OLE DB Provider Templates (C++)
OLE DB is an important part of the Microsoft Universal Data Access strategy. The OLE DB design allows high-performance data access from any data source. Any tabular data is viewable through OLE DB regardless of whether it came from a database. The flexibility gives you a tremendous amount of power.  
  
 As explained in [OLE DB Consumers and Providers](../../data/oledb/ole-db-consumers-and-providers.md), OLE DB uses the concept of consumers and providers. The consumer makes requests for data; the provider returns data in a tabular format to the consumer. From a programming perspective, the most important implication of this model is that the provider must implement any call the consumer can make.  
  
## What Is a Provider?  
 An OLE DB provider is a set of COM objects that serve interface calls from a consumer object, transferring data in a tabular format from a durable source (called a data store) to the consumer.  
  
 Providers can be simple or complex. The provider can support a minimal amount of functionality or a full-blown production quality provider by implementing more interfaces. A provider can return a table, allow the client to determine the format of that table, and perform operations on that data.  
  
 Each provider implements a standard set of COM objects to handle requests from the client, with standard meaning that any OLE DB consumer can access data from any provider, regardless of language (such as C++ and Basic).  
  
 Each COM object contains several interfaces, some of which are required and some of which are optional. By implementing the mandatory interfaces, a provider guarantees a minimum level of functionality (called compliance) that any client should be able to use. A provider can implement optional interfaces to provide additional functionality. [The OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md) describes these interfaces in detail. The client should always call `QueryInterface` to determine if a provider supports a given interface.  
  
## OLE DB Specification Level Support  
 The OLE DB provider templates support the OLE DB version 2.7 specification. Using the OLE DB provider templates, you can implement a level 0 compliant provider. The Provider sample, for example, uses the templates to implement a non-SQL (MS-DOS) command server that executes the DOS DIR command to query the file system. The Provider sample returns the directory information in a rowset, which is the standard OLE DB mechanism for returning tabular data.  
  
 The simplest type of provider supported by the OLE DB templates is a read-only provider with no commands. Providers with commands are also supported, as are bookmarking and read/write capability. You can implement a read/write provider by writing additional code. Dynamic rowsets and transactions are not supported by the current version, but you can add them if you want.  
  
## When Do You Need to Create an OLE DB Provider?  
 You do not always need to create your own provider; Microsoft provides several prepackaged, standard providers in the **Data Link Properties** dialog box in Visual C++. The main reason to create an OLE DB provider is to take advantage of the Universal Data Access strategy. Some of advantages of doing so are:  
  
-   Accessing data through any language such as C++, Basic, and Visual Basic Scripting Edition. It allows different programmers in your organization to access the same data in the same way, regardless of what language they use.  
  
-   Exposing your data to other data sources such as SQL Server, Excel, and Access. This can be very useful if you want to transfer data among different formats.  
  
-   Participating in cross-data source (heterogeneous) operations. This can be a very effective way of data warehousing. By using OLE DB providers, you can keep data in its native format and still be able to access it in a simple operation.  
  
-   Adding additional capabilities to your data, such as query processing.  
  
-   Increasing performance of accessing data by controlling how it is manipulated.  
  
-   Increasing robustness. If you have a proprietary data format that only one programmer can access, you are at risk. Using OLE DB providers, you can open that proprietary format to all your programmers.  
  
## Read-Only and Updatable Providers  
 Providers can vary greatly in complexity and functionality. It is useful to categorize providers into read-only providers and updatable providers:  
  
-   Visual C++ 6.0 supported only read-only providers. [Creating an OLE DB Provider](../../data/oledb/creating-an-ole-db-provider.md) discusses how to create a read-only provider.  
-   Visual C++ supports updatable providers, which can update (write to) the data store. For information about updatable providers, see [Creating an Updatable Provider](../../data/oledb/creating-an-updatable-provider.md); the [UpdatePV](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/ATL/OLEDB/Provider/UPDATEPV) sample is an example of an updatable provider.  
  
 For more information, see:  
  
-   [The OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)  
  
-   [Creating an OLE DB Provider](../../data/oledb/creating-an-ole-db-provider.md)  
  
-   [OLE DB Programming](../../data/oledb/ole-db-programming.md)  
  
## See Also  
 [Data Access](../data-access-in-cpp.md)   
 [OLE DB SDK Documentation](/previous-versions/windows/desktop/ms722784\(v=vs.85\))   
 [OLE DB Programmer's Reference](/previous-versions/windows/desktop/ms713643\(v=vs.85\))