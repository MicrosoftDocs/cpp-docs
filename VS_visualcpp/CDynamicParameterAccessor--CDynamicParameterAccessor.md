---
title: "CDynamicParameterAccessor::CDynamicParameterAccessor"
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
ms.assetid: a1cce5e4-dfb9-43a2-bfb8-0435c653674a
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
# CDynamicParameterAccessor::CDynamicParameterAccessor
The constructor.  
  
## Syntax  
  
```  
  
      typedef CDynamicParameterAccessor _ParamClass;  
CDynamicParameterAccessor(   
   DBBLOBHANDLINGENUM eBlobHandling = DBBLOBHANDLING_DEFAULT,   
   DBLENGTH nBlobSize = 8000 )   
   : CDynamicAccessor( eBlobHandling, nBlobSize )  
```  
  
#### Parameters  
 `eBlobHandling`  
 Specifies how the BLOB data is to be handled. The default value is **DBBLOBHANDLING_DEFAULT**. See [CDynamicAccessor::SetBlobHandling](../VS_visualcpp/CDynamicAccessor--SetBlobHandling.md) for a description of the **DBBLOBHANDLINGENUM** values.  
  
 `nBlobSize`  
 The maximum BLOB size in bytes; column data over this value is treated as a BLOB. The default value is 8,000. See [CDynamicAccessor::SetBlobSizeLimit](../VS_visualcpp/CDynamicAccessor--SetBlobSizeLimit.md) for details.  
  
## Remarks  
 See the [CDynamicAccessor::CDynamicAccessor](../VS_visualcpp/CDynamicAccessor--CDynamicAccessor.md) constructor for more information on BLOB handling.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDynamicParameterAccessor Class](../VS_visualcpp/CDynamicParameterAccessor-Class.md)