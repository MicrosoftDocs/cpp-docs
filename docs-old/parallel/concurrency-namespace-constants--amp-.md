---
title: "Concurrency namespace constants (AMP)"
ms.custom: na
ms.date: "10/14/2016"
ms.reviewer: na
ms.suite: na
ms.tgt_pltfrm: na
ms.topic: "article"
ms.assetid: 13a8e8cd-2eec-4e60-a91d-5d271072747b
caps.latest.revision: 7
ms.author: "mblome"
---
# Concurrency namespace constants (AMP)
|||  
|-|-|  
|[HLSL_MAX_NUM_BUFFERS Constant](#hlsl_max_num_buffers_constant)|[MODULENAME_MAX_LENGTH Constant](#modulename_max_length_constant)|  
  
##  <a name="hlsl_max_num_buffers_constant"></a>  HLSL_MAX_NUM_BUFFERS Constant  
 The maximum number of buffers allowed by DirectX.  
  
```  
static const UINT HLSL_MAX_NUM_BUFFERS = 64 + 128;  
```  
  
##  <a name="modulename_max_length_constant"></a>  MODULENAME_MAX_LENGTH Constant  
 Stores the maximum length of the module name. This value must be the same on the compiler and runtime.  
  
```  
static const UINT MODULENAME_MAX_LENGTH = 1024;  
```  
  
## See Also  
 [Concurrency Namespace (C++ AMP)](../parallel/concurrency-namespace--c---amp-.md)