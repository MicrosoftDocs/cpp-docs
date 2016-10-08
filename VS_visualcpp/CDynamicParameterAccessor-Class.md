---
title: "CDynamicParameterAccessor Class"
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
ms.assetid: 5f22626e-e80d-491f-8b3b-cedc50331960
caps.latest.revision: 13
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# CDynamicParameterAccessor Class
Similar to [CDynamicAccessor](../VS_visualcpp/CDynamicAccessor-Class.md) but obtains parameter information to be set by calling the [ICommandWithParameters](https://msdn.microsoft.com/en-us/library/ms712937.aspx) interface.  
  
## Syntax  
  
```  
class CDynamicParameterAccessor : public CDynamicAccessor  
```  
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[CDynamicParameterAccessor](../VS_visualcpp/CDynamicParameterAccessor--CDynamicParameterAccessor.md)|The constructor.|  
|[GetParam](../VS_visualcpp/CDynamicParameterAccessor--GetParam.md)|Retrieves the parameter data from the buffer.|  
|[GetParamCount](../VS_visualcpp/CDynamicParameterAccessor--GetParamCount.md)|Retrieves the number of parameters in the accessor.|  
|[GetParamIO](../VS_visualcpp/CDynamicParameterAccessor--GetParamIO.md)|Determines whether the specified parameter is an input or output parameter.|  
|[GetParamLength](../VS_visualcpp/CDynamicParameterAccessor--GetParamLength.md)|Retrieves the length of the specified parameter stored in the buffer.|  
|[GetParamName](../VS_visualcpp/CDynamicParameterAccessor--GetParamName.md)|Retrieves the name of a specified parameter.|  
|[GetParamStatus](../VS_visualcpp/CDynamicParameterAccessor--GetParamStatus.md)|Retrieves the status of the specified parameter stored in the buffer.|  
|[GetParamString](../VS_visualcpp/CDynamicParameterAccessor--GetParamString.md)|Retrieves the string data of the specified parameter stored in the buffer.|  
|[GetParamType](../VS_visualcpp/CDynamicParameterAccessor--GetParamType.md)|Retrieves the data type of a specified parameter.|  
|[SetParam](../VS_visualcpp/CDynamicParameterAccessor--SetParam.md)|Sets the buffer using the parameter data.|  
|[SetParamLength](../VS_visualcpp/CDynamicParameterAccessor--SetParamLength.md)|Sets the length of the specified parameter stored in the buffer.|  
|[SetParamStatus](../VS_visualcpp/CDynamicParameterAccessor--SetParamStatus.md)|Sets the status of the specified parameter stored in the buffer.|  
|[SetParamString](../VS_visualcpp/CDynamicParameterAccessor--SetParamString.md)|Sets the string data of the specified parameter stored in the buffer.|  
  
## Remarks  
 The provider must support `ICommandWithParameters` for the consumer to use this class.  
  
 The parameter information is stored in a buffer created and managed by this class. Obtain parameter data from the buffer by using [GetParam](../VS_visualcpp/CDynamicParameterAccessor--GetParam.md) and [GetParamType](../VS_visualcpp/CDynamicParameterAccessor--GetParamType.md).  
  
 For an example demonstrating how to use this class to execute a SQL Server stored procedure and get the output parameter values, see Knowledge Base article Q058860, "HOWTO: Execute Stored Procedure using CDynamicParameterAccessor." Knowledge Base articles are available in the MSDN Library Visual Studio documentation or at [http://support.microsoft.com/](http://support.microsoft.com).  
  
## Requirements  
 **Header**: atldbcli.h  
  
## See Also  
 [OLE DB Consumer Templates](../VS_visualcpp/OLE-DB-Consumer-Templates--C---.md)   
 [OLE DB Consumer Templates Reference](../VS_visualcpp/OLE-DB-Consumer-Templates-Reference.md)   
 [CAccessor Class](../VS_visualcpp/CAccessor-Class.md)   
 [CDynamicAccessor Class](../VS_visualcpp/CDynamicAccessor-Class.md)   
 [CManualAccessor Class](../VS_visualcpp/CManualAccessor-Class.md)