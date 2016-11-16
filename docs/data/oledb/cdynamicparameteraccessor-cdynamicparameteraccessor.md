---
title: "CDynamicParameterAccessor::CDynamicParameterAccessor | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CDynamicParameterAccessor::CDynamicParameterAccessor"
  - "CDynamicParameterAccessor.CDynamicParameterAccessor"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDynamicParameterAccessor class, constructor"
  - "CDynamicParameterAccessor method"
ms.assetid: a1cce5e4-dfb9-43a2-bfb8-0435c653674a
caps.latest.revision: 8
author: "mikeblome"
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
 Specifies how the BLOB data is to be handled. The default value is **DBBLOBHANDLING_DEFAULT**. See [CDynamicAccessor::SetBlobHandling](../../data/oledb/cdynamicaccessor-setblobhandling.md) for a description of the **DBBLOBHANDLINGENUM** values.  
  
 `nBlobSize`  
 The maximum BLOB size in bytes; column data over this value is treated as a BLOB. The default value is 8,000. See [CDynamicAccessor::SetBlobSizeLimit](../../data/oledb/cdynamicaccessor-setblobsizelimit.md) for details.  
  
## Remarks  
 See the [CDynamicAccessor::CDynamicAccessor](../../data/oledb/cdynamicaccessor-cdynamicaccessor.md) constructor for more information on BLOB handling.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDynamicParameterAccessor Class](../../data/oledb/cdynamicparameteraccessor-class.md)