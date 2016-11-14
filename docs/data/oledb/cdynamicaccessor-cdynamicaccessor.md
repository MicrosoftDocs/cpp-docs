---
title: "CDynamicAccessor::CDynamicAccessor | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CDynamicAccessor::CDynamicAccessor"
  - "ATL::CDynamicAccessor::CDynamicAccessor"
  - "ATL.CDynamicAccessor.CDynamicAccessor"
  - "CDynamicAccessor.CDynamicAccessor"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDynamicAccessor class, constructor"
ms.assetid: bf40fe81-2c85-473e-9075-51ad9b060b39
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
# CDynamicAccessor::CDynamicAccessor
Instantiates and initializes the `CDynamicAccessor` object.  
  
## Syntax  
  
```  
  
      CDynamicAccessor(   
   DBBLOBHANDLINGENUM eBlobHandling = DBBLOBHANDLING_DEFAULT,   
   DBLENGTH nBlobSize = 8000   
);  
```  
  
#### Parameters  
 `eBlobHandling`  
 Specifies how the binary large object (BLOB) data is to be handled. The default value is **DBBLOBHANDLING_DEFAULT**. See [SetBlobHandling](../../data/oledb/cdynamicaccessor-setblobhandling.md) for a description of the **DBBLOBHANDLINGENUM** values.  
  
 `nBlobSize`  
 The maximum BLOB size in bytes; column data over this value is treated as a BLOB. The default value is 8,000. See [SetBlobSizeLimit](../../data/oledb/cdynamicaccessor-setblobsizelimit.md) for details.  
  
## Remarks  
 If you use the constructor to initialize the `CDynamicAccessor` object, you can specify how it will bind BLOBs. BLOBs can contain binary data such as graphics, sound, or compiled code. The default behavior is to treat columns more than 8,000 bytes as BLOBs and try to bind them to an `ISequentialStream` object. However, you can specify a different value to be the BLOB size.  
  
 You can also specify how `CDynamicAccessor` handles column data that qualifies as BLOB data: it can handle BLOB data in the default manner; it can skip (does not bind) BLOB data; or it can bind BLOB data in provider-allocated memory.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDynamicAccessor Class](../../data/oledb/cdynamicaccessor-class.md)