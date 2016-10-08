---
title: "CDBErrorInfo Class"
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
ms.assetid: 9a5c18a2-ee3e-40f5-ab4c-581288d7f737
caps.latest.revision: 12
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
# CDBErrorInfo Class
Provides support for OLE DB error processing using the OLE DB [IErrorRecords](https://msdn.microsoft.com/en-us/library/ms718112.aspx) interface.  
  
## Syntax  
  
```  
class CDBErrorInfo  
```  
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[GetAllErrorInfo](../VS_visualcpp/CDBErrorInfo--GetAllErrorInfo.md)|Returns all error information contained in an error record.|  
|[GetBasicErrorInfo](../VS_visualcpp/CDBErrorInfo--GetBasicErrorInfo.md)|Calls [IErrorRecords::GetBasicErrorInfo](https://msdn.microsoft.com/en-us/library/ms723907.aspx) to return basic information about the specified error.|  
|[GetCustomErrorObject](../VS_visualcpp/CDBErrorInfo--GetCustomErrorObject.md)|Calls [IErrorRecords::GetCustomErrorObject](https://msdn.microsoft.com/en-us/library/ms725417.aspx) to return a pointer to an interface on a custom error object.|  
|[GetErrorInfo](../VS_visualcpp/CDBErrorInfo--GetErrorInfo.md)|Calls [IErrorRecords::GetErrorInfo](https://msdn.microsoft.com/en-us/library/ms711230.aspx) to return an **IErrorInfo** interface pointer to the specified record.|  
|[GetErrorParameters](../VS_visualcpp/CDBErrorInfo--GetErrorParameters.md)|Calls [IErrorRecords::GetErrorParameters](https://msdn.microsoft.com/en-us/library/ms715793.aspx) to return the error parameters.|  
|[GetErrorRecords](../VS_visualcpp/CDBErrorInfo--GetErrorRecords.md)|Gets error records for the specified object.|  
  
## Remarks  
 This interface returns one or more error records to the user. Call [CDBErrorInfo::GetErrorRecords](../VS_visualcpp/CDBErrorInfo--GetErrorRecords.md) first, to get a count of error records. Then call one of the access functions, such as [CDBErrorInfo::GetAllErrorInfo](../VS_visualcpp/CDBErrorInfo--GetAllErrorInfo.md), to retrieve error information for each record.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [DBViewer](../VS_visualcpp/Visual-C---Samples.md)   
 [OLE DB Consumer Templates](../VS_visualcpp/OLE-DB-Consumer-Templates--C---.md)   
 [OLE DB Consumer Templates Reference](../VS_visualcpp/OLE-DB-Consumer-Templates-Reference.md)