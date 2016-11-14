---
title: "CDynamicParameterAccessor Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL.CDynamicParameterAccessor"
  - "ATL::CDynamicParameterAccessor"
  - "CDynamicParameterAccessor"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDynamicParameterAccessor class"
ms.assetid: 5f22626e-e80d-491f-8b3b-cedc50331960
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# CDynamicParameterAccessor Class
Similar to [CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md) but obtains parameter information to be set by calling the [ICommandWithParameters](https://msdn.microsoft.com/en-us/library/ms712937.aspx) interface.  
  
## Syntax  
  
```  
class CDynamicParameterAccessor : public CDynamicAccessor  
```  
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[CDynamicParameterAccessor](../../data/oledb/cdynamicparameteraccessor-cdynamicparameteraccessor.md)|The constructor.|  
|[GetParam](../../data/oledb/cdynamicparameteraccessor-getparam.md)|Retrieves the parameter data from the buffer.|  
|[GetParamCount](../../data/oledb/cdynamicparameteraccessor-getparamcount.md)|Retrieves the number of parameters in the accessor.|  
|[GetParamIO](../../data/oledb/cdynamicparameteraccessor-getparamio.md)|Determines whether the specified parameter is an input or output parameter.|  
|[GetParamLength](../../data/oledb/cdynamicparameteraccessor-getparamlength.md)|Retrieves the length of the specified parameter stored in the buffer.|  
|[GetParamName](../../data/oledb/cdynamicparameteraccessor-getparamname.md)|Retrieves the name of a specified parameter.|  
|[GetParamStatus](../../data/oledb/cdynamicparameteraccessor-getparamstatus.md)|Retrieves the status of the specified parameter stored in the buffer.|  
|[GetParamString](../../data/oledb/cdynamicparameteraccessor-getparamstring.md)|Retrieves the string data of the specified parameter stored in the buffer.|  
|[GetParamType](../../data/oledb/cdynamicparameteraccessor-getparamtype.md)|Retrieves the data type of a specified parameter.|  
|[SetParam](../../data/oledb/cdynamicparameteraccessor-setparam.md)|Sets the buffer using the parameter data.|  
|[SetParamLength](../../data/oledb/cdynamicparameteraccessor-setparamlength.md)|Sets the length of the specified parameter stored in the buffer.|  
|[SetParamStatus](../../data/oledb/cdynamicparameteraccessor-setparamstatus.md)|Sets the status of the specified parameter stored in the buffer.|  
|[SetParamString](../../data/oledb/cdynamicparameteraccessor-setparamstring.md)|Sets the string data of the specified parameter stored in the buffer.|  
  
## Remarks  
 The provider must support `ICommandWithParameters` for the consumer to use this class.  
  
 The parameter information is stored in a buffer created and managed by this class. Obtain parameter data from the buffer by using [GetParam](../../data/oledb/cdynamicparameteraccessor-getparam.md) and [GetParamType](../../data/oledb/cdynamicparameteraccessor-getparamtype.md).  
  
 For an example demonstrating how to use this class to execute a SQL Server stored procedure and get the output parameter values, see Knowledge Base article Q058860, "HOWTO: Execute Stored Procedure using CDynamicParameterAccessor." Knowledge Base articles are available in the MSDN Library Visual Studio documentation or at [http://support.microsoft.com/](http://support.microsoft.com).  
  
## Requirements  
 **Header**: atldbcli.h  
  
## See Also  
 [OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [OLE DB Consumer Templates Reference](../../data/oledb/ole-db-consumer-templates-reference.md)   
 [CAccessor Class](../../data/oledb/caccessor-class.md)   
 [CDynamicAccessor Class](../../data/oledb/cdynamicaccessor-class.md)   
 [CManualAccessor Class](../../data/oledb/cmanualaccessor-class.md)