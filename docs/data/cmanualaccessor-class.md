---
title: "CManualAccessor Class"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "ATL::CManualAccessor"
  - "ATL.CManualAccessor"
  - "CManualAccessor"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CManualAccessor class"
ms.assetid: a0088074-7135-465c-b228-69097a50b8cc
caps.latest.revision: 12
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
|[AddBindEntry](../data/cmanualaccessor--addbindentry.md)|Adds a bind entry to the output columns.|  
|[AddParameterEntry](../data/cmanualaccessor--addparameterentry.md)|Adds a parameter entry to the parameter accessor.|  
|[CreateAccessor](../data/cmanualaccessor--createaccessor.md)|Allocates memory for the column bind structures and initializes the column data members.|  
|[CreateParameterAccessor](../data/cmanualaccessor--createparameteraccessor.md)|Allocates memory for the parameter bind structures and initializes the parameter data members.|  
  
## Remarks  
 Using `CManualAccessor`, you can specify the parameter and output column binding by run-time function calls.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [DBViewer](../top/visual-c---samples.md)   
 [OLE DB Consumer Templates](../data/ole-db-consumer-templates--c---.md)   
 [OLE DB Consumer Templates Reference](../data/ole-db-consumer-templates-reference.md)   
 [CAccessor Class](../data/caccessor-class.md)   
 [CDynamicAccessor Class](../data/cdynamicaccessor-class.md)   
 [CDynamicParameterAccessor Class](../data/cdynamicparameteraccessor-class.md)