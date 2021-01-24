---
description: "Learn more about: Concurrency Namespace (C++ AMP)"
title: "Concurrency Namespace (C++ AMP)"
ms.date: "11/04/2016"
f1_keywords: ["AMP/Concurrency"]
helpviewer_keywords: ["Concurrency namespace"]
ms.assetid: b5aab265-3bac-42c5-8ead-f92ce05ef267
---
# Concurrency Namespace (C++ AMP)

Provides classes and functions that accelerate the execution of C++ code on data-parallel hardware. For more information, see [C++ AMP Overview](../cpp-amp-overview.md)

## Syntax

```cpp
namespace Concurrency;
```

## Members

### Namespaces

|Name|Description|
|----------|-----------------|
|[Concurrency::direct3d Namespace](concurrency-direct3d-namespace.md)|Provides functions that support D3D interoperability. Enables seamless use of D3D resources for compute in AMP code and the use of resources created in AMP in D3D code, without creating redundant intermediate copies. You can use C++ AMP to incrementally accelerate the compute-intensive sections of your DirectX applications and use the D3D API on data produced from AMP computations.|
|[Concurrency::fast_math Namespace](concurrency-fast-math-namespace.md)|Functions in the `fast_math` namespace are not C99-compliant. Only single-precision versions of each function are provided. These functions use the DirectX intrinsic functions, which are faster than the corresponding functions in the `precise_math` namespace and do not require extended double-precision support on the accelerator, but they are less accurate. There are two versions of each function for source-level compatibility with C99 code; both versions take and return single-precision values.|
|[Concurrency::graphics Namespace](concurrency-graphics-namespace.md)|Provides types and functions that are designed for graphics programming.|
|[Concurrency::precise_math Namespace](concurrency-precise-math-namespace.md)|Functions in the `precise_math` namespace are C99 compliant. Both single-precision and double-precision versions of each function are included. These functions—this includes the single-precision functions—require extended double-precision support on the accelerator.|

### Classes

|Name|Description|
|----------|-----------------|
|[accelerator Class](accelerator-class.md)|Represents an abstraction of a physical DP-optimized compute node.|
|[accelerator_view Class](accelerator-view-class.md)|Represents a virtual device abstraction on a C++ AMP data-parallel accelerator.|
|[accelerator_view_removed Class](accelerator-view-removed-class.md)|The exception that is thrown when an underlying DirectX call fails due to the Windows timeout-detection-and-recovery mechanism.|
|[array Class](array-class.md)|A data aggregate on an `accelerator_view` in the grid domain. It is a collection of variables, one for each element in a grid domain. Each variable holds a value that corresponds to some C++ type.|
|[array_view Class](array-view-class.md)|Represents a view into the data in an array\<T,N>.|
|[completion_future Class](completion-future-class.md)|Represents a future that corresponds to a C++ AMP asynchronous operation.|
|[extent Class](extent-class.md)|Represents a vector of N integer values that specify the bounds of an N-dimensional space that has an origin of 0. The values in the coordinate vector are ordered from most significant to least significant. For example, in Cartesian 3-dimensional space, the extent vector (7,5,3) represents a space in which the z coordinate ranges from 0 to 7, the y coordinate ranges from 0 to 5, and the x coordinate ranges from 0 to 3.|
|[index Class](index-class.md)|Defines an N-dimensional index point.|
|[invalid_compute_domain Class](invalid-compute-domain-class.md)|The exception that's thrown when the runtime can't start a kernel by using the compute domain specified at the `parallel_for_each` call site.|
|[out_of_memory Class](out-of-memory-class.md)|The exception that is thrown when a method fails because of a lack of system or device memory.|
|[runtime_exception Class](runtime-exception-class.md)|The base type for exceptions in the C++ AMP library.|
|[tile_barrier Class](tile-barrier-class.md)|A capability class that is only creatable by the system and is passed to a tiled `parallel_for_each` lambda as part of the `tiled_index` parameter. It provides one method, `wait()`, whose purpose is to synchronize execution of threads that are running in the thread group (tile).|
|[tiled_extent Class](tiled-extent-class.md)|A `tiled_extent` object is an `extent` object of one to three dimensions that subdivides the extent space into one-dimensional, two-dimensional, or three-dimensional tiles.|
|[tiled_index Class](tiled-index-class.md)|Provides an index into a `tiled_grid` object. This class has properties to access element relative to the local tile origin and relative to the global origin.|
|[uninitialized_object Class](uninitialized-object-class.md)|The exception that is thrown when an uninitialized object is used.|
|[unsupported_feature Class](unsupported-feature-class.md)|The exception that is thrown when an unsupported feature is used.|

### Enumerations

|Name|Description|
|----------|-----------------|
|[access_type Enumeration](concurrency-namespace-enums-amp.md#access_type)|Specifies the data access type.|
|[queuing_mode Enumeration](concurrency-namespace-enums-amp.md#queuing_mode)|Specifies the queuing modes that are supported on the accelerator.|

### Operators

|Operator|Description|
|--------------|-----------------|
|[operator== Operator (C++ AMP)](concurrency-namespace-operators-amp.md#operator_eq_eq)|Determines whether the specified data structures are equal.|
|[operator!= Operator (C++ AMP)](concurrency-namespace-operators-amp.md#operator_neq)|Determines whether the specified data structures are unequal.|
|[operator+ Operator (C++ AMP)](concurrency-namespace-operators-amp.md#operator_add)|Computes the component-wise sum of the specified arguments.|
|[operator- Operator (C++ AMP)](concurrency-namespace-operators-amp.md#operator-)|Computes the component-wise difference between the specified arguments.|
|[operator* Operator (C++ AMP)](concurrency-namespace-operators-amp.md#operator_star)|Computes the component-wise product of the specified arguments.|
|[operator/ Operator (C++ AMP)](concurrency-namespace-operators-amp.md#operator_div)|Computes the component-wise quotient of the specified arguments.|
|[operator% Operator (C++ AMP)](concurrency-namespace-operators-amp.md#operator_mod)|Computes the modulus of the first specified argument by the second specified argument.|

### Functions

|Name|Description|
|----------|-----------------|
|[all_memory_fence](concurrency-namespace-functions-amp.md#all_memory_fence)|Blocks execution of all threads in a tile until all memory accesses have been completed.|
|[amp_uninitialize](concurrency-namespace-functions-amp.md#amp_uninitialize)|Uninitializes the C++ AMP runtime.|
|[atomic_compare_exchange](concurrency-namespace-functions-amp.md#atomic_compare_exchange)|Overloaded. If the value stored at the specified location compares equal to the first specified value, then the second specified value is stored in the same location as an atomic operation.|
|[atomic_exchange](concurrency-namespace-functions-amp.md#atomic_exchange)|Overloaded. Sets the value stored at the specified location to the specified value as an atomic operation.|
|[atomic_fetch_add](concurrency-namespace-functions-amp.md#atomic_fetch_add)|Overloaded. Sets the value stored at the specified location to the sum of that value and a specified value as an atomic operation.|
|[atomic_fetch_and](concurrency-namespace-functions-amp.md#atomic_fetch_and)|Overloaded. Sets the value stored at the specified location to the bitwise `and` of that value and a specified value as an atomic operation.|
|[atomic_fetch_dec](concurrency-namespace-functions-amp.md#atomic_fetch_dec)|Overloaded. Decrements the value stored at the specified location and stores the result in the same location as an atomic operation.|
|[atomic_fetch_inc](concurrency-namespace-functions-amp.md#atomic_fetch_inc)|Overloaded. Increments the value stored at the specified location and stores the result in the same location as an atomic operation.|
|[atomic_fetch_max](concurrency-namespace-functions-amp.md#atomic_fetch_max)|Overloaded. Sets the value stored at the specified location to the larger of that value and a specified value as an atomic operation.|
|[atomic_fetch_min](concurrency-namespace-functions-amp.md#atomic_fetch_min)|Overloaded. Sets the value stored at the specified location to the smaller of that value and a specified value as an atomic operation.|
|[atomic_fetch_or](concurrency-namespace-functions-amp.md#atomic_fetch_or)|Overloaded. Sets the value stored at the specified location to the bitwise `or` of that value and a specified value as an atomic operation.|
|[atomic_fetch_sub](concurrency-namespace-functions-amp.md#atomic_fetch_sub)|Overloaded. Sets the value stored at the specified location to the difference of that value and a specified value as an atomic operation.|
|[atomic_fetch_xor](concurrency-namespace-functions-amp.md#atomic_fetch_xor)|Overloaded. Sets the value stored at the specified location to the bitwise `xor` of that value and a specified value as an atomic operation.|
|[copy](concurrency-namespace-functions-amp.md#copy)|Copies a C++ AMP object. All synchronous data transfer requirements are met. Data can't be copied when code is running code on an accelerator. The general form of this function is `copy(src, dest)`.|
|[copy_async](concurrency-namespace-functions-amp.md#copy_async)|Copies a C++ AMP object and returns [completion_future](completion-future-class.md) that can be waited on. Data can't be copied when code is running on an accelerator. The general form of this function is `copy(src, dest)`.|
|[direct3d_abort](concurrency-namespace-functions-amp.md#direct3d_abort)|Aborts the execution of a function that has the `restrict(amp)` restriction clause.|
|[direct3d_errorf](concurrency-namespace-functions-amp.md#direct3d_errorf)|Prints a formatted string to the Visual Studio **Output** window and raises a [runtime_exception](runtime-exception-class.md) exception that has the same formatting string.|
|[direct3d_printf](concurrency-namespace-functions-amp.md#direct3d_printf)|Prints a formatted string to the Visual Studio **Output** window. It is called from a function that has the `restrict(amp)` restriction clause.|
|[global_memory_fence](concurrency-namespace-functions-amp.md#global_memory_fence)|Blocks execution of all threads in a tile until all global memory accesses have been completed.|
|[parallel_for_each Function (C++ AMP)](concurrency-namespace-functions-amp.md#parallel_for_each)|Runs a function across the compute domain.|
|[tile_static_memory_fence](concurrency-namespace-functions-amp.md#tile_static_memory_fence)|Blocks execution of all threads in a tile until `tile_static` memory accesses have been completed.|

## Constants

|Name|Description|
|----------|-----------------|
|[HLSL_MAX_NUM_BUFFERS Constant](concurrency-namespace-constants-amp.md#hlsl_max_num_buffers)|The maximum number of buffers allowed by DirectX.|
|[MODULENAME_MAX_LENGTH Constant](concurrency-namespace-constants-amp.md#modulename_max_length)|Stores the maximum length of the module name. This value must be the same on the compiler and the runtime.|

## Requirements

**Header:** amp.h

## See also

[Reference (C++ AMP)](reference-cpp-amp.md)
