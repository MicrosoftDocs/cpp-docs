---
title: "CCommand Class"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 0760bfc5-b9ee-4aee-8e54-31bd78714d3a
caps.latest.revision: 11
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
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
 To use an OLE DB command that can return multiple results, specify [CMultipleResults](../VS_visualcpp/CMultipleResults-Class.md). Otherwise, use [CNoMultipleResults](../VS_visualcpp/CNoMultipleResults-Class.md). For details, see [IMultipleResults](https://msdn.microsoft.com/en-us/library/ms721289.aspx).  
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[Close](../VS_visualcpp/CCommand--Close.md)|Closes the current command.|  
|[GetNextResult](../VS_visualcpp/CCommand--GetNextResult.md)|Fetches the next result when using multiple result sets.|  
|[Open](../VS_visualcpp/CCommand--Open.md)|Executes and optionally binds the command.|  
  
### Inherited Methods  
  
|||  
|-|-|  
|[Create](../VS_visualcpp/CCommand--Create.md)|Creates a new command for the specified session, then sets the command text.|  
|[CreateCommand](../VS_visualcpp/CCommand--CreateCommand.md)|Creates a new command.|  
|[GetParameterInfo](../VS_visualcpp/CCommand--GetParameterInfo.md)|Gets a list of the command's parameters, their names, and their types.|  
|[Prepare](../VS_visualcpp/CCommand--Prepare.md)|Validates and optimizes the current command.|  
|[ReleaseCommand](../VS_visualcpp/CCommand--ReleaseCommand.md)|Releases the parameter accessor if necessary, then releases the command.|  
|[SetParameterInfo](../VS_visualcpp/CCommand--SetParameterInfo.md)|Specifies the native type of each command parameter.|  
|[Unprepare](../VS_visualcpp/CCommand--Unprepare.md)|Discards the current command execution plan.|  
  
## Remarks  
 Use this class when you need to perform a parameter-based operation or execute a command. If you merely need to open a simple rowset, use [CTable](../VS_visualcpp/CTable-Class.md) instead.  
  
 The accessor class you are using determines the method of binding parameters and data.  
  
 Note that you cannot use stored procedures with the OLE DB Provider for Jet because that provider does not support stored procedures (only constants are allowed in query strings).  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [OLE DB Consumer Templates](../VS_visualcpp/OLE-DB-Consumer-Templates--C---.md)   
 [OLE DB Consumer Templates Reference](../VS_visualcpp/OLE-DB-Consumer-Templates-Reference.md)