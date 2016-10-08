---
title: "CManualAccessor Class"
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
ms.assetid: a0088074-7135-465c-b228-69097a50b8cc
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
# CManualAccessor Class
Represents an accessor type designed for advanced use.  
  
## Syntax  
  
```  
class CManualAccessor : public CAccessorBase  
```  
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[AddBindEntry](../VS_visualcpp/CManualAccessor--AddBindEntry.md)|Adds a bind entry to the output columns.|  
|[AddParameterEntry](../VS_visualcpp/CManualAccessor--AddParameterEntry.md)|Adds a parameter entry to the parameter accessor.|  
|[CreateAccessor](../VS_visualcpp/CManualAccessor--CreateAccessor.md)|Allocates memory for the column bind structures and initializes the column data members.|  
|[CreateParameterAccessor](../VS_visualcpp/CManualAccessor--CreateParameterAccessor.md)|Allocates memory for the parameter bind structures and initializes the parameter data members.|  
  
## Remarks  
 Using `CManualAccessor`, you can specify the parameter and output column binding by run-time function calls.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [DBViewer](../VS_visualcpp/Visual-C---Samples.md)   
 [OLE DB Consumer Templates](../VS_visualcpp/OLE-DB-Consumer-Templates--C---.md)   
 [OLE DB Consumer Templates Reference](../VS_visualcpp/OLE-DB-Consumer-Templates-Reference.md)   
 [CAccessor Class](../VS_visualcpp/CAccessor-Class.md)   
 [CDynamicAccessor Class](../VS_visualcpp/CDynamicAccessor-Class.md)   
 [CDynamicParameterAccessor Class](../VS_visualcpp/CDynamicParameterAccessor-Class.md)