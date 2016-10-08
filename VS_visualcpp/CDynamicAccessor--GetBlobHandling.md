---
title: "CDynamicAccessor::GetBlobHandling"
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
ms.assetid: bbc6dda6-e132-42a3-980d-24e455cbe456
caps.latest.revision: 8
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
# CDynamicAccessor::GetBlobHandling
Retrieves the BLOB handling value for the current row.  
  
## Syntax  
  
```  
  
const DBBLOBHANDLINGENUM GetBlobHandling( ) const;  
  
```  
  
## Remarks  
 Returns the BLOB handling value `eBlobHandling` as set by [SetBlobHandling](../VS_visualcpp/CDynamicAccessor--SetBlobHandling.md).  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDynamicAccessor Class](../VS_visualcpp/CDynamicAccessor-Class.md)