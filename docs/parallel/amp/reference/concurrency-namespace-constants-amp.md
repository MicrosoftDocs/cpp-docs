---
title: "Concurrency namespace constants (AMP) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.topic: "reference"
f1_keywords: ["amp/Concurrency::HLSL_MAX_NUM_BUFFERS", "amp/Concurrency::MODULENAME_MAX_LENGTH"]
dev_langs: ["C++"]
ms.assetid: 13a8e8cd-2eec-4e60-a91d-5d271072747b
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Concurrency namespace constants (AMP)
|||  
|-|-|  
|[HLSL_MAX_NUM_BUFFERS](#hlsl_max_num_buffers)|[MODULENAME_MAX_LENGTH](#modulename_max_length)|  
  
##  <a name="hlsl_max_num_buffers"></a>  HLSL_MAX_NUM_BUFFERS Constant  
 The maximum number of buffers allowed by DirectX.  
  
```  
static const UINT HLSL_MAX_NUM_BUFFERS = 64 + 128;  
```  
  
##  <a name="modulename_max_length"></a>  MODULENAME_MAX_LENGTH Constant  
 Stores the maximum length of the module name. This value must be the same on the compiler and runtime.  
  
```  
static const UINT MODULENAME_MAX_LENGTH = 1024;  
```  
  
## See Also  
 [Concurrency Namespace (C++ AMP)](concurrency-namespace-cpp-amp.md)
