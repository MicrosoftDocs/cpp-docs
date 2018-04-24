---
title: "Concurrency::direct3d Namespace | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
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
---
# Concurrency::direct3d Namespace
[!INCLUDE[blank_token](../../../includes/blank-token.md)]

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
|[abs Function](http://msdn.microsoft.com/library/2be05815-c4b8-4a64-9796-6e322e96a76c)|Returns the absolute value of the argument|  
|[clamp Function](http://msdn.microsoft.com/library/39f4e2ea-7684-444f-965c-2dc728689cbb)|Overloaded. Clamps _X to the specified _Min and _Max range|  
|[countbits Function](http://msdn.microsoft.com/library/e7df927d-0366-4efe-91aa-6d485fa4b224)|Counts the number of set bits in _X|  
|[create_accelerator_view Function](http://msdn.microsoft.com/library/2ab7f14a-db10-4ff2-815d-eb43824fb790)|Creates an [accelerator_view Class](../../../parallel/amp/reference/accelerator-view-class.md) from a pointer to a Direct3D device interface|  
|[d3d_access_lock Function](http://msdn.microsoft.com/library/aa6bd716-8adf-4164-9455-c982f4221287)|Acquires a lock on an accelerator_view for the purpose of safely performing D3D operations on resources shared with the accelerator_view|  
|[d3d_access_try_lock Function](http://msdn.microsoft.com/library/a3050c34-df4b-4412-878a-626b2b431447)|Attempt to acquire the D3D access lock on an accelerator_view without blocking.|  
|[d3d_access_unlock Function](http://msdn.microsoft.com/library/e09858f3-9db8-476a-874f-8a68edbe2953)|Release the D3D access lock on the given accelerator_view.|  
|[firstbithigh Function](http://msdn.microsoft.com/library/235ea0cf-343f-45c6-a3a5-cdbb093eb00d)|Gets the location of the first set bit in _X, starting from the highest order bit and working downward|  
|[firstbitlow Function](http://msdn.microsoft.com/library/46970414-fe23-4585-a725-8c41d699b3fd)|Gets the location of the first set bit in _X, starting from the lowest order bit and working upward|  
|[get_buffer Function](http://msdn.microsoft.com/library/2318772a-3254-42c0-b450-a9cc3967e843)|Get the D3D buffer interface underlying an array.|  
|[imax Function](http://msdn.microsoft.com/library/edc07095-02c5-42eb-9a1c-fa543ffcd5ae)|Compares two values, returning the value which is greater.|  
|[imin Function](http://msdn.microsoft.com/library/07175786-0276-4148-a3e0-f96483281238)|Compares two values, returning the value which is smaller.|  
|[is_timeout_disabled Function](http://msdn.microsoft.com/library/280bd439-48f1-4c17-8c29-1c98774d1930)|Returns a boolean flag indicating if timeout is disabled for the specified accelerator_view.|  
|[mad Function](http://msdn.microsoft.com/library/a51df420-ea6e-4ecb-bd1c-8334edc2ca7a)|Overloaded. Performs an arithmetic multiply/add operation on three arguments: _X * _Y + _Z|  
|[make_array Function](http://msdn.microsoft.com/library/2f67952e-c52f-4a4c-b4bb-488a964bc8cf)|Create an array from a D3D buffer interface pointer.|  
|[noise Function](http://msdn.microsoft.com/library/86760981-66e3-4cf2-8f17-6e450554e1ef)|Generates a random value by using the Perlin noise algorithm|  
|[radians Function](http://msdn.microsoft.com/library/f7519eaf-7c62-422c-8c4a-2f28458625bd)|Converts _X from degrees to radians|  
|[rcp Function](http://msdn.microsoft.com/library/4bed60c6-5b92-4b29-aa7f-cb7482cf32a8)|Calculates a fast, approximate reciprocal of the argument|  
|[reversebits Function](http://msdn.microsoft.com/library/247e6b18-b6d1-4719-9b55-c2db0abe8148)|Reverses the order of the bits in _X|  
|[saturate Function](http://msdn.microsoft.com/library/dfefbee9-84f1-4c6c-bb36-b41e1dc6d205)|Clamps _X within the range of 0 to 1|  
|[sign Function](http://msdn.microsoft.com/library/344c03c0-184d-4265-9ccc-2fc09eb5aa3f)|Overloaded. Returns the sign of the argument|  
|[smoothstep Function](http://msdn.microsoft.com/library/66e259e8-16c6-4879-81e1-e6c33525c774)|Returns a smooth Hermite interpolation between 0 and 1, if _X is in the range [_Min, _Max].|  
|[step Function](http://msdn.microsoft.com/library/f9432540-8e3d-41d2-b0df-3e5af76aa7b0)|Compares two values, returning 0 or 1 based on which value is greater|  
|[umax Function](http://msdn.microsoft.com/library/f37ed5a3-2f87-454b-823c-a74dbf3d860a)|Compares two unsigned values, returning the value which is greater.|  
|[umin Function](http://msdn.microsoft.com/library/913dabbd-b242-4a41-b109-4662cc97a5e3)|Compares two unsigned values, returning the value which is smaller.|  
  
## Requirements  
 **Header:** amp.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [Concurrency Namespace (C++ AMP)](../../../parallel/amp/reference/concurrency-namespace-cpp-amp.md)
