---
title: "CRestrictions Class"
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
ms.assetid: 0aaa2364-641c-4318-b110-7446aada4b4f
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
# CRestrictions Class
A generic class that allows you to specify restrictions for schema rowsets.  
  
## Syntax  
  
```  
template <   
   class T,   
   short nRestrictions,   
   const GUID* pguid   
>  
class CRestrictions : public CSchemaRowset <   
   T,   
   nRestrictions   
>  
```  
  
#### Parameters  
 `T`  
 The class used for the accessor.  
  
 `nRestrictions`  
 The number of restriction columns for the schema rowset.  
  
 `pguid`  
 A pointer to the GUID for the schema.  
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[Open](../VS_visualcpp/CRestrictions--Open.md)|Returns a result set according to the user-supplied restrictions.|  
  
## Requirements  
 **Header:** atldbsch.h  
  
## See Also  
 [OLE DB Consumer Templates](../VS_visualcpp/OLE-DB-Consumer-Templates--C---.md)   
 [OLE DB Consumer Templates Reference](../VS_visualcpp/OLE-DB-Consumer-Templates-Reference.md)