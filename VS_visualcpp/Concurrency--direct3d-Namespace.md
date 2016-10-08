---
title: "Concurrency::direct3d Namespace"
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
ms.assetid: 9566a2f1-4d5f-43e4-a3ac-676643d38420
caps.latest.revision: 13
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
|[scoped_d3d_access_lock Class](../VS_visualcpp/scoped_d3d_access_lock-Class.md)|An RAII wrapper for a D3D access lock on an `accelerator_view` object.|  
  
### Structures  
  
|Name|Description|  
|----------|-----------------|  
|[adopt_d3d_access_lock_t Structure](../VS_visualcpp/adopt_d3d_access_lock_t-Structure.md)|Tag type to indicate the D3D access lock should be adopted rather than acquired.|  
  
### Functions  
  
|Name|Description|  
|----------|-----------------|  
|[abs Function](../VS_visualcpp/abs-Function.md)|Returns the absolute value of the argument|  
|[clamp Function](../VS_visualcpp/clamp-Function.md)|Overloaded. Clamps _X to the specified _Min and _Max range|  
|[countbits Function](../VS_visualcpp/countbits-Function.md)|Counts the number of set bits in _X|  
|[create_accelerator_view Function](../VS_visualcpp/create_accelerator_view-Function.md)|Creates an [accelerator_view Class](../VS_visualcpp/accelerator_view-Class.md) from a pointer to a Direct3D device interface|  
|[d3d_access_lock Function](../VS_visualcpp/d3d_access_lock-Function.md)|Acquires a lock on an accelerator_view for the purpose of safely performing D3D operations on resources shared with the accelerator_view|  
|[d3d_access_try_lock Function](../VS_visualcpp/d3d_access_try_lock-Function.md)|Attempt to acquire the D3D access lock on an accelerator_view without blocking.|  
|[d3d_access_unlock Function](../VS_visualcpp/d3d_access_unlock-Function.md)|Release the D3D access lock on the given accelerator_view.|  
|[firstbithigh Function](../VS_visualcpp/firstbithigh-Function.md)|Gets the location of the first set bit in _X, starting from the highest order bit and working downward|  
|[firstbitlow Function](../VS_visualcpp/firstbitlow-Function.md)|Gets the location of the first set bit in _X, starting from the lowest order bit and working upward|  
|[get_buffer Function](../VS_visualcpp/get_buffer-Function.md)|Get the D3D buffer interface underlying an array.|  
|[imax Function](../VS_visualcpp/imax-Function.md)|Compares two values, returning the value which is greater.|  
|[imin Function](../VS_visualcpp/imin-Function.md)|Compares two values, returning the value which is smaller.|  
|[is_timeout_disabled Function](../VS_visualcpp/is_timeout_disabled-Function.md)|Returns a boolean flag indicating if timeout is disabled for the specified accelerator_view.|  
|[mad Function](../VS_visualcpp/mad-Function.md)|Overloaded. Performs an arithmetic multiply/add operation on three arguments: _X * _Y + _Z|  
|[make_array Function](../VS_visualcpp/make_array-Function.md)|Create an array from a D3D buffer interface pointer.|  
|[noise Function](../VS_visualcpp/noise-Function.md)|Generates a random value by using the Perlin noise algorithm|  
|[radians Function](../VS_visualcpp/radians-Function.md)|Converts _X from degrees to radians|  
|[rcp Function](../VS_visualcpp/rcp-Function.md)|Calculates a fast, approximate reciprocal of the argument|  
|[reversebits Function](../VS_visualcpp/reversebits-Function.md)|Reverses the order of the bits in _X|  
|[saturate Function](../VS_visualcpp/saturate-Function.md)|Clamps _X within the range of 0 to 1|  
|[sign Function](../VS_visualcpp/sign-Function.md)|Overloaded. Returns the sign of the argument|  
|[smoothstep Function](../VS_visualcpp/smoothstep-Function.md)|Returns a smooth Hermite interpolation between 0 and 1, if _X is in the range [_Min, _Max].|  
|[step Function](../VS_visualcpp/step-Function.md)|Compares two values, returning 0 or 1 based on which value is greater|  
|[umax Function](../VS_visualcpp/umax-Function.md)|Compares two unsigned values, returning the value which is greater.|  
|[umin Function](../VS_visualcpp/umin-Function.md)|Compares two unsigned values, returning the value which is smaller.|  
  
## Requirements  
 **Header:** amp.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [Concurrency Namespace (C++ AMP)](../VS_visualcpp/Concurrency-Namespace--C---AMP-.md)