---
description: "Learn more about: CCustomCommand (CustomRS.H)"
title: "CCustomCommand (CustomRS.H)"
ms.date: "10/22/2018"
f1_keywords: ["cmyprovidercommand", "ccustomcommand"]
helpviewer_keywords: ["OLE DB providers, wizard-generated files", "CMyProviderCommand class in MyProviderRS.H", "CCustomCommand class in CustomRS.H"]
ms.assetid: b30b956e-cc91-4cf5-9fe6-f8b1ce9cc2a5
---
# CCustomCommand (CustomRS.H)

The `CCustomCommand` class is the implementation for the provider command object. It provides the implementation for the `IAccessor`, `ICommandText`, and `ICommandProperties` interfaces. The `IAccessor` interface is the same as the one in the rowset. The command object uses the accessor to specify bindings for parameters. The rowset object uses them to specify bindings for output columns. The `ICommandText` interface is a useful way to specify a command textually. This example uses the `ICommandText` interface later when it adds custom code; it also overrides the `ICommand::Execute` method. The `ICommandProperties` interface handles all of the properties for the command and rowset objects.

```cpp
// CCustomCommand
class ATL_NO_VTABLE CCustomCommand :
class ATL_NO_VTABLE CCustomCommand :
   public CComObjectRootEx<CComSingleThreadModel>,
   public IAccessorImpl<CCustomCommand>,
   public ICommandTextImpl<CCustomCommand>,
   public ICommandPropertiesImpl<CCustomCommand>,
   public IObjectWithSiteImpl<CCustomCommand>,
   public IConvertTypeImpl<CCustomCommand>,
   public IColumnsInfoImpl<CCustomCommand>
```

The `IAccessor` interface manages all the bindings used in commands and rowsets. The consumer calls `IAccessor::CreateAccessor` with an array of `DBBINDING` structures. Each `DBBINDING` structure contains the information about how the column bindings should be handled (such as type and length). The provider receives the structures and then determines how the data should be transferred and whether any conversions are necessary. The `IAccessor` interface is used in the command object to handle any parameters in the command.

The command object also provides an implementation of `IColumnsInfo`. OLE DB requires the `IColumnsInfo` interface. The interface allows the consumer to retrieve information about parameters from the command. The rowset object uses the `IColumnsInfo` interface to return information about the output columns to the provider.

The provider also contains an interface called `IObjectWithSite`. The `IObjectWithSite` interface was implemented in ATL 2.0 and allows the implementer to pass information about itself to its child. The command object uses the `IObjectWithSite` information to tell any generated rowset objects about who created them.

## See also

[Provider Wizard-Generated Files](../../data/oledb/provider-wizard-generated-files.md)
