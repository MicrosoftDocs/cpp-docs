---
title: "Concurrency::direct3d Namespace"
ms.custom: ""
ms.date: "10/28/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "amp/Concurrency::direct3d"
  - "amprt/Concurrency::direct3d"
  - "amp_short_vectors/Concurrency::direct3d"
  - "amp_graphics/Concurrency::direct3d"
  - "amp_math/Concurrency::direct3d"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "direct3d namespace"
ms.assetid: 9566a2f1-4d5f-43e4-a3ac-676643d38420
caps.latest.revision: 15
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
# Concurrency::direct3d Namespace
The `direct3d` namespace provides functions that support D3D interoperability. It enables seamless use of D3D resources for compute in AMP code as well as allow use of resources created in AMP in D3D code, without creating redundant intermediate copies. You can incrementally accelerate the compute intensive sections of your DirectX applications by using C++ AMP and use the D3D API on data produced from AMP computations.  
  
## Syntax  
  
```  
namespace direct3d;  
```  
  
## Members  
  
### Classes  
  
|Name|Description|  
|----------|-----------------|  
|[scoped_d3d_access_lock Class](../../../parallel/amp/reference/scoped-d3d-access-lock-class.md)|An RAII wrapper for a D3D access lock on an `accelerator_view` object.|  
  
### Structures  
  
|Name|Description|  
|----------|-----------------|  
|[adopt_d3d_access_lock_t Structure](../../../parallel/amp/reference/adopt-d3d-access-lock-t-structure.md)|Tag type to indicate the D3D access lock should be adopted rather than acquired.|  
  
### Functions  
  
|Name|Description|  
|----------|-----------------|  
|[abs Function](../Topic/abs%20Function.md)|Returns the absolute value of the argument|  
|[clamp Function](../Topic/clamp%20Function.md)|Overloaded. Clamps _X to the specified _Min and _Max range|  
|[countbits Function](../Topic/countbits%20Function.md)|Counts the number of set bits in _X|  
|[create_accelerator_view Function](../Topic/create_accelerator_view%20Function.md)|Creates an [accelerator_view Class](../../../parallel/amp/reference/accelerator-view-class.md) from a pointer to a Direct3D device interface|  
|[d3d_access_lock Function](../Topic/d3d_access_lock%20Function.md)|Acquires a lock on an accelerator_view for the purpose of safely performing D3D operations on resources shared with the accelerator_view|  
|[d3d_access_try_lock Function](../Topic/d3d_access_try_lock%20Function.md)|Attempt to acquire the D3D access lock on an accelerator_view without blocking.|  
|[d3d_access_unlock Function](../Topic/d3d_access_unlock%20Function.md)|Release the D3D access lock on the given accelerator_view.|  
|[firstbithigh Function](../Topic/firstbithigh%20Function.md)|Gets the location of the first set bit in _X, starting from the highest order bit and working downward|  
|[firstbitlow Function](../Topic/firstbitlow%20Function.md)|Gets the location of the first set bit in _X, starting from the lowest order bit and working upward|  
|[get_buffer Function](../Topic/get_buffer%20Function.md)|Get the D3D buffer interface underlying an array.|  
|[imax Function](../Topic/imax%20Function.md)|Compares two values, returning the value which is greater.|  
|[imin Function](../Topic/imin%20Function.md)|Compares two values, returning the value which is smaller.|  
|[is_timeout_disabled Function](../Topic/is_timeout_disabled%20Function.md)|Returns a boolean flag indicating if timeout is disabled for the specified accelerator_view.|  
|[mad Function](../Topic/mad%20Function.md)|Overloaded. Performs an arithmetic multiply/add operation on three arguments: _X * _Y + _Z|  
|[make_array Function](../Topic/make_array%20Function.md)|Create an array from a D3D buffer interface pointer.|  
|[noise Function](../Topic/noise%20Function.md)|Generates a random value by using the Perlin noise algorithm|  
|[radians Function](../Topic/radians%20Function.md)|Converts _X from degrees to radians|  
|[rcp Function](../Topic/rcp%20Function.md)|Calculates a fast, approximate reciprocal of the argument|  
|[reversebits Function](../Topic/reversebits%20Function.md)|Reverses the order of the bits in _X|  
|[saturate Function](../Topic/saturate%20Function.md)|Clamps _X within the range of 0 to 1|  
|[sign Function](../Topic/sign%20Function.md)|Overloaded. Returns the sign of the argument|  
|[smoothstep Function](../Topic/smoothstep%20Function.md)|Returns a smooth Hermite interpolation between 0 and 1, if _X is in the range [_Min, _Max].|  
|[step Function](../Topic/step%20Function.md)|Compares two values, returning 0 or 1 based on which value is greater|  
|[umax Function](../Topic/umax%20Function.md)|Compares two unsigned values, returning the value which is greater.|  
|[umin Function](../Topic/umin%20Function.md)|Compares two unsigned values, returning the value which is smaller.|  
  
## Requirements  
 **Header:** amp.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [Concurrency Namespace (C++ AMP)](../../../parallel/amp/reference/concurrency-namespace-cpp-amp.md)
