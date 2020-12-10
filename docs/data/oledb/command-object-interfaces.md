---
description: "Learn more about: Command Object Interfaces"
title: "Command Object Interfaces"
ms.date: "10/24/2018"
helpviewer_keywords: ["command object interfaces [C++]", "command objects [OLE DB]", "OLE DB [C++], command object interfaces"]
ms.assetid: dacff5ae-252c-4f20-9ad7-4e602cc48536
---
# Command Object Interfaces

The command object uses the `IAccessor` interface to specify parameter bindings. The consumer calls `IAccessor::CreateAccessor`, passing it an array of `DBBINDING` structures. `DBBINDING` contains information about the column bindings (such as type and length). The provider receives the structures and determines how the data should be transferred and whether conversions are necessary.

The `ICommandText` interface provides a way to specify a text command. The `ICommandProperties` interface handles all the command properties.

## See also

[OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)<br/>
