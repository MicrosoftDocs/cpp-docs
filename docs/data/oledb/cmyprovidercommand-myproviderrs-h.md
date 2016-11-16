---
title: "CMyProviderCommand (MyProviderRS.H) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "cmyprovidercommand"
  - "myproviderrs.h"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "OLE DB providers, wizard-generated files"
  - "CMyProviderCommand class in MyProviderRS.H"
ms.assetid: b30b956e-cc91-4cf5-9fe6-f8b1ce9cc2a5
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# CMyProviderCommand (MyProviderRS.H)
The `CMyProviderCommand` class is the implementation for the provider command object. It provides the implementation for the `IAccessor`, `ICommandText`, and **ICommandProperties** interfaces. The `IAccessor` interface is the same as the one in the rowset. The command object uses the accessor to specify bindings for parameters. The rowset object uses them to specify bindings for output columns. The `ICommandText` interface is a useful way to specify a command textually. This example uses the `ICommandText` interface later when it adds custom code; it also overrides the `ICommand::Execute` method. The **ICommandProperties** interface handles all of the properties for the command and rowset objects.  
  
```  
// CMyProviderCommand  
class ATL_NO_VTABLE CMyProviderCommand :   
class ATL_NO_VTABLE CMyProviderCommand :   
   public CComObjectRootEx<CComSingleThreadModel>,  
   public IAccessorImpl<CMyProviderCommand>,  
   public ICommandTextImpl<CMyProviderCommand>,  
   public ICommandPropertiesImpl<CMyProviderCommand>,  
   public IObjectWithSiteImpl<CMyProviderCommand>,  
   public IConvertTypeImpl<CMyProviderCommand>,  
   public IColumnsInfoImpl<CMyProviderCommand>  
```  
  
 The `IAccessor` interface manages all the bindings used in commands and rowsets. The consumer calls **IAccessor::CreateAccessor** with an array of **DBBINDING** structures. Each **DBBINDING** structure contains the information about how the column bindings should be handled (such as type and length). The provider receives the structures and then determines how the data should be transferred and whether any conversions are necessary. The `IAccessor` interface is used in the command object to handle any parameters in the command.  
  
 The command object also provides an implementation of `IColumnsInfo`. OLE DB requires the `IColumnsInfo` interface. The interface allows the consumer to retrieve information about parameters from the command. The rowset object uses the `IColumnsInfo` interface to return information about the output columns to the provider.  
  
 The provider also contains an interface called `IObjectWithSite`. The `IObjectWithSite` interface was implemented in ATL 2.0 and allows the implementer to pass information about itself to its child. The command object uses the `IObjectWithSite` information to tell any generated rowset objects about who created them.  
  
## See Also  
 [Provider Wizard-Generated Files](../../data/oledb/provider-wizard-generated-files.md)