---
title: "Concurrency Namespace (C++ AMP) | Microsoft Docs"
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
  - "amp/Concurrency"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Concurrency namespace"
ms.assetid: b5aab265-3bac-42c5-8ead-f92ce05ef267
caps.latest.revision: 28
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Concurrency Namespace (C++ AMP)
[!INCLUDE[blank_token](../../../includes/blank-token.md)]

Provides classes and functions that accelerate the execution of C++ code on data-parallel hardware. For more information, see [C++ AMP Overview](../../../parallel/amp/cpp-amp-overview.md)  
  
## Syntax  
  
```  
namespace Concurrency;  
```  
  
## Members  
  
### Namespaces  
  
|Name|Description|  
|----------|-----------------|  
|[Concurrency::direct3d Namespace](../../../parallel/amp/reference/concurrency-direct3d-namespace.md)|Provides functions that support D3D interoperability. Enables seamless use of D3D resources for compute in AMP code and the use of resources created in AMP in D3D code, without creating redundant intermediate copies. You can use C++ AMP to incrementally accelerate the compute-intensive sections of your DirectX applications and use the D3D API on data produced from AMP computations.|  
|[Concurrency::fast_math Namespace](../../../parallel/amp/reference/concurrency-fast-math-namespace.md)|Functions in the `fast_math` namespace are not C99-compliant. Only single-precision versions of each function are provided. These functions use the DirectX intrinsic functions, which are faster than the corresponding functions in the `precise_math` namespace and do not require extended double-precision support on the accelerator, but they are less accurate. There are two versions of each function for source-level compatibility with C99 code; both versions take and return single-precision values.|  
|[Concurrency::graphics Namespace](../../../parallel/amp/reference/concurrency-graphics-namespace.md)|Provides types and functions that are designed for graphics programming.|  
|[Concurrency::precise_math Namespace](../../../parallel/amp/reference/concurrency-precise-math-namespace.md)|Functions in the `precise_math` namespace are C99 compliant. Both single-precision and double-precision versions of each function are included. These functions—this includes the single-precision functions—require extended double-precision support on the accelerator.|  
  
### Classes  
  
|Name|Description|  
|----------|-----------------|  
|[accelerator Class](../../../parallel/amp/reference/accelerator-class.md)|Represents an abstraction of a physical DP-optimized compute node.|  
|[accelerator_view Class](../../../parallel/amp/reference/accelerator-view-class.md)|Represents a virtual device abstraction on a C++ AMP data-parallel accelerator.|  
|[accelerator_view_removed Class](../../../parallel/amp/reference/accelerator-view-removed-class.md)|The exception that is thrown when an underlying DirectX call fails due to the Windows timeout-detection-and-recovery mechanism.|  
|[array Class](../../../parallel/amp/reference/array-class.md)|A data aggregate on an `accelerator_view` in the grid domain. It is a collection of variables, one for each element in a grid domain. Each variable holds a value that corresponds to some C++ type.|  
|[array_view Class](../../../parallel/amp/reference/array-view-class.md)|Represents a view into the data in an array\<T,N>.|  
|[completion_future Class](../../../parallel/amp/reference/completion-future-class.md)|Represents a future that corresponds to a C++ AMP asynchronous operation.|  
|[extent Class](../../../parallel/amp/reference/extent-class-cpp-amp.md)|Represents a vector of N integer values that specify the bounds of an N-dimensional space that has an origin of 0. The values in the coordinate vector are ordered from most significant to least significant. For example, in Cartesian 3-dimensional space, the extent vector (7,5,3) represents a space in which the z coordinate ranges from 0 to 7, the y coordinate ranges from 0 to 5, and the x coordinate ranges from 0 to 3.|  
|[index Class](../../../parallel/amp/reference/index-class.md)|Defines an N-dimensional index point.|  
|[invalid_compute_domain Class](../../../parallel/amp/reference/invalid-compute-domain-class.md)|The exception that's thrown when the runtime can't start a kernel by using the compute domain specified at the `parallel_for_each` call site.|  
|[out_of_memory Class](../../../parallel/amp/reference/out-of-memory-class.md)|The exception that is thrown when a method fails because of a lack of system or device memory.|  
|[runtime_exception Class](../../../parallel/amp/reference/runtime-exception-class.md)|The base type for exceptions in the C++ AMP library.|  
|[tile_barrier Class](../../../parallel/amp/reference/tile-barrier-class.md)|A capability class that is only creatable by the system and is passed to a tiled `parallel_for_each` lambda as part of the `tiled_index` parameter. It provides one method, `wait()`, whose purpose is to synchronize execution of threads that are running in the thread group (tile).|  
|[tiled_extent Class](../../../parallel/amp/reference/tiled-extent-class.md)|A `tiled_extent` object is an `extent` object of one to three dimensions that subdivides the extent space into one-dimensional, two-dimensional, or three-dimensional tiles.|  
|[tiled_index Class](../../../parallel/amp/reference/tiled-index-class.md)|Provides an index into a `tiled_grid` object. This class has properties to access element relative to the local tile origin and relative to the global origin.|  
|[uninitialized_object Class](../../../parallel/amp/reference/uninitialized-object-class.md)|The exception that is thrown when an uninitialized object is used.|  
|[unsupported_feature Class](../../../parallel/amp/reference/unsupported-feature-class.md)|The exception that is thrown when an unsupported feature is used.|  
  
### Enumerations  
  
|Name|Description|  
|----------|-----------------|  
|[access_type Enumeration](http://msdn.microsoft.com/library/a1b2d084-38dd-4fb6-b268-48e3ab15d634)|Specifies the data access type.|  
|[queuing_mode Enumeration](../../../parallel/amp/reference/queuing-mode-enumeration.md)|Specifies the queuing modes that are supported on the accelerator.|  
  
### Operators  
  
|Operator|Description|  
|--------------|-----------------|  
|[operator== Operator (C++ AMP)](http://msdn.microsoft.com/library/0da8fcf1-cd05-4b4b-9c34-4afaeb9a5980)|Determines whether the specified data structures are equal.|  
|[operator!= Operator (C++ AMP)](http://msdn.microsoft.com/library/747a979c-6ac2-49c6-a5f1-3a82080367f8)|Determines whether the specified data structures are unequal.|  
|[operator+ Operator (C++ AMP)](http://msdn.microsoft.com/library/0e2c3f7f-6788-4f42-ac53-68b50fe252df)|Computes the component-wise sum of the specified arguments.|  
|[operator- Operator (C++ AMP)](http://msdn.microsoft.com/library/8a464144-a28a-426b-8875-06a70122ca29)|Computes the component-wise difference between the specified arguments.|  
|[operator* Operator (C++ AMP)](http://msdn.microsoft.com/library/15b7fafa-fac5-4a0a-8b2b-36a42a843c16)|Computes the component-wise product of the specified arguments.|  
|[operator/ Operator (C++ AMP)](http://msdn.microsoft.com/library/1920286a-5de6-416e-8021-52adb0b5ea90)|Computes the component-wise quotient of the specified arguments.|  
|[operator% Operator (C++ AMP)](http://msdn.microsoft.com/library/5c4ecba3-2aa3-4417-be1d-fd988d04c0be)|Computes the modulus of the first specified argument by the second specified argument.|  
  
### Functions  
  
|Name|Description|  
|----------|-----------------|  
|[all_memory_fence Function](http://msdn.microsoft.com/library/dba73687-b1c9-40b6-8ee6-1851e7e95236)|Blocks execution of all threads in a tile until all memory accesses have been completed.|  
|[amp_uninitialize Function](http://msdn.microsoft.com/library/6e6844b9-129f-4543-9c1c-e18e10c1d408)|Uninitializes the C++ AMP runtime.|  
|[atomic_compare_exchange Function](http://msdn.microsoft.com/library/3349f83f-ff21-48ee-8c91-09207877e98c)|Overloaded. If the value stored at the specified location compares equal to the first specified value, then the second specified value is stored in the same location as an atomic operation.|  
|[atomic_exchange Function](http://msdn.microsoft.com/library/4ef0f6de-b32e-4b76-be07-fd8e0bd01333)|Overloaded. Sets the value stored at the specified location to the specified value as an atomic operation.|  
|[atomic_fetch_add Function](http://msdn.microsoft.com/library/ff4d90a4-c07b-432a-a84f-8550025cdbfd)|Overloaded. Sets the value stored at the specified location to the sum of that value and a specified value as an atomic operation.|  
|[atomic_fetch_and Function](http://msdn.microsoft.com/library/52b4d8f8-dc6d-40f3-a7ce-06ad81ec05f8)|Overloaded. Sets the value stored at the specified location to the bitwise `and` of that value and a specified value as an atomic operation.|  
|[atomic_fetch_dec Function](http://msdn.microsoft.com/library/0af9113f-6c31-47ab-a9bf-7170a965e982)|Overloaded. Decrements the value stored at the specified location and stores the result in the same location as an atomic operation.|  
|[atomic_fetch_inc Function](http://msdn.microsoft.com/library/1101d9db-cf79-4110-b0e3-ffdb610c0285)|Overloaded. Increments the value stored at the specified location and stores the result in the same location as an atomic operation.|  
|[atomic_fetch_max Function](http://msdn.microsoft.com/library/09f54a53-fe36-4c98-a90a-51f89f347904)|Overloaded. Sets the value stored at the specified location to the larger of that value and a specified value as an atomic operation.|  
|[atomic_fetch_min Function](http://msdn.microsoft.com/library/7c655806-cc70-4222-886f-ae494e8d0cbe)|Overloaded. Sets the value stored at the specified location to the smaller of that value and a specified value as an atomic operation.|  
|[atomic_fetch_or Function](http://msdn.microsoft.com/library/35f3fa2a-1185-41c1-9f32-02ec83295fad)|Overloaded. Sets the value stored at the specified location to the bitwise `or` of that value and a specified value as an atomic operation.|  
|[atomic_fetch_sub Function](http://msdn.microsoft.com/library/516cc457-30ec-45a6-9963-5243927ee92b)|Overloaded. Sets the value stored at the specified location to the difference of that value and a specified value as an atomic operation.|  
|[atomic_fetch_xor Function](http://msdn.microsoft.com/library/47d1fb7f-94fc-4815-8fe6-0879f13ab8fb)|Overloaded. Sets the value stored at the specified location to the bitwise `xor` of that value and a specified value as an atomic operation.|  
|[copy Function](http://msdn.microsoft.com/library/cf3cda4b-5c64-4083-a0aa-39de2b378802)|Copies a C++ AMP object. All synchronous data transfer requirements are met. Data can't be copied when code is running code on an accelerator. The general form of this function is `copy(src, dest)`.|  
|[copy_async Function](http://msdn.microsoft.com/library/6f06115b-1b85-43f4-a3b7-019af90748ec)|Copies a C++ AMP object and returns [completion_future](../../../parallel/amp/reference/completion-future-class.md) that can be waited on. Data can't be copied when code is running on an accelerator. The general form of this function is `copy(src, dest)`.|  
|[direct3d_abort Function](http://msdn.microsoft.com/library/efd40102-a2e8-4b84-b532-8dde5115e64b)|Aborts the execution of a function that has the `restrict(amp)` restriction clause.|  
|[direct3d_errorf Function](http://msdn.microsoft.com/library/a4098d87-6dec-416a-b271-21f2f19d44fd)|Prints a formatted string to the Visual Studio **Output** window and raises a [runtime_exception](../../../parallel/amp/reference/runtime-exception-class.md) exception that has the same formatting string.|  
|[direct3d_printf Function](http://msdn.microsoft.com/library/50fabec1-3c38-4718-87dc-0313cc96e61a)|Prints a formatted string to the Visual Studio **Output** window. It is called from a function that has the `restrict(amp)` restriction clause.|  
|[global_memory_fence Function](http://msdn.microsoft.com/library/3ea85d0d-3261-4e01-8c4f-593baf53bd24)|Blocks execution of all threads in a tile until all global memory accesses have been completed.|  
|[parallel_for_each Function (C++ AMP)](http://msdn.microsoft.com/library/449013a2-5f16-4280-ac1a-0d850f7d5160)|Runs a function across the compute domain.|  
|[tile_static_memory_fence Function](http://msdn.microsoft.com/library/9d144a14-9b89-4764-8583-ae99194c6488)|Blocks execution of all threads in a tile until `tile_static` memory accesses have been completed.|  
  
## Constants  
  
|Name|Description|  
|----------|-----------------|  
|[HLSL_MAX_NUM_BUFFERS Constant](http://msdn.microsoft.com/library/8b52bb0d-ab7a-4d1f-b9cf-c234391d69e4)|The maximum number of buffers allowed by DirectX.|  
|[MODULENAME_MAX_LENGTH Constant](http://msdn.microsoft.com/library/1cf462b8-d4dd-4ce6-9eaa-d54aaf01b2ae)|Stores the maximum length of the module name. This value must be the same on the compiler and the runtime.|  
  
## Requirements  
 **Header:** amp.h  
  
## See Also  
 [Reference (C++ AMP)](../../../parallel/amp/reference/reference-cpp-amp.md)



