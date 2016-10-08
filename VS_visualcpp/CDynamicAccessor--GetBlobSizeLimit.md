---
title: "CDynamicAccessor::GetBlobSizeLimit"
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
ms.assetid: 7131e7c4-6e05-42f3-9d87-110301b672f2
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
# CDynamicAccessor::GetBlobSizeLimit
Retrieves the maximum BLOB size in bytes.  
  
## Syntax  
  
```  
  
const DBLENGTH GetBlobSizeLimit( ) const;  
  
```  
  
## Remarks  
 Returns the BLOB handling value `nBlobSize` as set by [SetBlobSizeLimit](../VS_visualcpp/CDynamicAccessor--SetBlobSizeLimit.md).  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDynamicAccessor Class](../VS_visualcpp/CDynamicAccessor-Class.md)