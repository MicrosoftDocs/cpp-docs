---
title: "Concurrency::direct3d Namespace | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
|[scoped_d3d_access_lock Class](scoped-d3d-access-lock-class.md)|An RAII wrapper for a D3D access lock on an `accelerator_view` object.|  
  
### Structures  
  
|Name|Description|  
|----------|-----------------|  
|[adopt_d3d_access_lock_t Structure](adopt-d3d-access-lock-t-structure.md)|Tag type to indicate the D3D access lock should be adopted rather than acquired.|  
  
### Functions  
  
|Name|Description|  
|----------|-----------------|  
|[abs Function](concurrency-direct3d-namespace-functions-amp.md#abs_function)|Returns the absolute value of the argument|  
|[clamp Function](concurrency-direct3d-namespace-functions-amp.md#clamp_function)|Overloaded. Clamps _X to the specified _Min and _Max range|  
|[countbits Function](concurrency-direct3d-namespace-functions-amp.md#countbits_function)|Counts the number of set bits in _X|  
|[create_accelerator_view Function](concurrency-direct3d-namespace-functions-amp.md#create_accelerator_view_function)|Creates an [accelerator_view Class](accelerator-view-class.md) from a pointer to a Direct3D device interface|  
|[d3d_access_lock Function](concurrency-direct3d-namespace-functions-amp.md#d3d_access_lock_function)|Acquires a lock on an accelerator_view for the purpose of safely performing D3D operations on resources shared with the accelerator_view|  
|[d3d_access_try_lock Function](concurrency-direct3d-namespace-functions-amp.md#d3d_access_try_lock_function)|Attempt to acquire the D3D access lock on an accelerator_view without blocking.|  
|[d3d_access_unlock Function](concurrency-direct3d-namespace-functions-amp.md#d3d_access_unlock_function)|Release the D3D access lock on the given accelerator_view.|  
|[firstbithigh Function](concurrency-direct3d-namespace-functions-amp.md#firstbithigh_function)|Gets the location of the first set bit in _X, starting from the highest order bit and working downward|  
|[firstbitlow Function](concurrency-direct3d-namespace-functions-amp.md#firstbitlow_function)|Gets the location of the first set bit in _X, starting from the lowest order bit and working upward|  
|[get_buffer Function](concurrency-direct3d-namespace-functions-amp.md#get_buffer_function)|Get the D3D buffer interface underlying an array.|  
|[imax Function](concurrency-direct3d-namespace-functions-amp.md#imax_function)|Compares two values, returning the value which is greater.|  
|[imin Function](concurrency-direct3d-namespace-functions-amp.md#imin_function)|Compares two values, returning the value which is smaller.|  
|[is_timeout_disabled Function](concurrency-direct3d-namespace-functions-amp.md#is_timeout_disabled_function)|Returns a boolean flag indicating if timeout is disabled for the specified accelerator_view.|  
|[mad Function](concurrency-direct3d-namespace-functions-amp.md#mad_function)|Overloaded. Performs an arithmetic multiply/add operation on three arguments: _X * _Y + _Z|  
|[make_array Function](concurrency-direct3d-namespace-functions-amp.md#make_array_function)|Create an array from a D3D buffer interface pointer.|  
|[noise Function](concurrency-direct3d-namespace-functions-amp.md#noise_function)|Generates a random value by using the Perlin noise algorithm|  
|[radians Function](concurrency-direct3d-namespace-functions-amp.md#radians_function)|Converts _X from degrees to radians|  
|[rcp Function](concurrency-direct3d-namespace-functions-amp.md#rcp_function)|Calculates a fast, approximate reciprocal of the argument|  
|[reversebits Function](concurrency-direct3d-namespace-functions-amp.md#reversebits_function)|Reverses the order of the bits in _X|  
|[saturate Function](concurrency-direct3d-namespace-functions-amp.md#saturate_function)|Clamps _X within the range of 0 to 1|  
|[sign Function](concurrency-direct3d-namespace-functions-amp.md#sign_function)|Overloaded. Returns the sign of the argument|  
|[smoothstep Function](concurrency-direct3d-namespace-functions-amp.md#smoothstep_function)|Returns a smooth Hermite interpolation between 0 and 1, if _X is in the range [_Min, _Max].|  
|[step Function](concurrency-direct3d-namespace-functions-amp.md#step_function)|Compares two values, returning 0 or 1 based on which value is greater|  
|[umax Function](concurrency-direct3d-namespace-functions-amp.md#umax_function)|Compares two unsigned values, returning the value which is greater.|  
|[umin Function](concurrency-direct3d-namespace-functions-amp.md#umin_function)|Compares two unsigned values, returning the value which is smaller.|  

## Requirements  
 **Header:** amp.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [Concurrency Namespace (C++ AMP)](concurrency-namespace-cpp-amp.md)
