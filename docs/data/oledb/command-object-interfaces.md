---
title: "Command Object Interfaces | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
dev_langs: ["C++"]
helpviewer_keywords: ["command object interfaces [C++]", "command objects [OLE DB]", "OLE DB [C++], command object interfaces"]
ms.assetid: dacff5ae-252c-4f20-9ad7-4e602cc48536
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# Command Object Interfaces

The command object uses the `IAccessor` interface to specify parameter bindings. The consumer calls `IAccessor::CreateAccessor`, passing it an array of `DBBINDING` structures. `DBBINDING` contains information about the column bindings (such as type and length). The provider receives the structures and determines how the data should be transferred and whether conversions are necessary.  

The `ICommandText` interface provides a way to specify a text command. The `ICommandProperties` interface handles all the command properties.  

## See Also  

[OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)