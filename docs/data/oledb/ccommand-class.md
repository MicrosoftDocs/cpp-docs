---
title: "CCommand Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL::CCommand"
  - "CCommand"
  - "ATL.CCommand"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CCommand class"
ms.assetid: 0760bfc5-b9ee-4aee-8e54-31bd78714d3a
caps.latest.revision: 11
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
# CCommand Class
Provides methods to set and execute a command.  
  
## Syntax  
  
```  
template <  
   class TAccessor = CNoAccessor,  
   template < typename T > class TRowset = CRowset,  
   class TMultiple = CNoMultipleResults   
>  
class CCommand :   
   public CAccessorRowset <  
      TAccessor,   
      TRowset   
   >,  
   public CCommandBase,  
   public TMultiple  
```  
  
#### Parameters  
 `TAccessor`  
 The type of accessor class (such as `CDynamicParameterAccessor`, `CDynamicStringAccessor`, or `CEnumeratorAccessor`) that you want the command to use. The default is `CNoAccessor`, which specifies that the class not support parameters or output columns.  
  
 `TRowset`  
 The type of rowset class (such as `CArrayRowset` or `CNoRowset`) that you want the command to use. The default is `CRowset`.  
  
 `TMultiple`  
 To use an OLE DB command that can return multiple results, specify [CMultipleResults](../../data/oledb/cmultipleresults-class.md). Otherwise, use [CNoMultipleResults](../../data/oledb/cnomultipleresults-class.md). For details, see [IMultipleResults](https://msdn.microsoft.com/en-us/library/ms721289.aspx).  
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[Close](../../data/oledb/ccommand-close.md)|Closes the current command.|  
|[GetNextResult](../../data/oledb/ccommand-getnextresult.md)|Fetches the next result when using multiple result sets.|  
|[Open](../../data/oledb/ccommand-open.md)|Executes and optionally binds the command.|  
  
### Inherited Methods  
  
|||  
|-|-|  
|[Create](../../data/oledb/ccommand-create.md)|Creates a new command for the specified session, then sets the command text.|  
|[CreateCommand](../../data/oledb/ccommand-createcommand.md)|Creates a new command.|  
|[GetParameterInfo](../../data/oledb/ccommand-getparameterinfo.md)|Gets a list of the command's parameters, their names, and their types.|  
|[Prepare](../../data/oledb/ccommand-prepare.md)|Validates and optimizes the current command.|  
|[ReleaseCommand](../../data/oledb/ccommand-releasecommand.md)|Releases the parameter accessor if necessary, then releases the command.|  
|[SetParameterInfo](../../data/oledb/ccommand-setparameterinfo.md)|Specifies the native type of each command parameter.|  
|[Unprepare](../../data/oledb/ccommand-unprepare.md)|Discards the current command execution plan.|  
  
## Remarks  
 Use this class when you need to perform a parameter-based operation or execute a command. If you merely need to open a simple rowset, use [CTable](../../data/oledb/ctable-class.md) instead.  
  
 The accessor class you are using determines the method of binding parameters and data.  
  
 Note that you cannot use stored procedures with the OLE DB Provider for Jet because that provider does not support stored procedures (only constants are allowed in query strings).  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [OLE DB Consumer Templates Reference](../../data/oledb/ole-db-consumer-templates-reference.md)