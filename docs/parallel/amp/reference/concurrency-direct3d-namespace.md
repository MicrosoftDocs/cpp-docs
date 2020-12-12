---
description: "Learn more about: Concurrency::direct3d Namespace"
title: "Concurrency::direct3d Namespace"
ms.date: "11/04/2016"
f1_keywords: ["amp/Concurrency::direct3d", "amprt/Concurrency::direct3d", "amp_short_vectors/Concurrency::direct3d", "amp_graphics/Concurrency::direct3d", "amp_math/Concurrency::direct3d"]
helpviewer_keywords: ["direct3d namespace"]
ms.assetid: 9566a2f1-4d5f-43e4-a3ac-676643d38420
---
# Concurrency::direct3d Namespace

The `direct3d` namespace provides functions that support D3D interoperability. It lets you use D3D resources for compute in AMP code. It also allows use of resources created in AMP in D3D code, without creating redundant intermediate copies. You can incrementally accelerate the compute intensive sections of your DirectX applications by using C++ AMP, and use the D3D API on data produced from AMP computations.

## Syntax

```cpp
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
|[abs](concurrency-direct3d-namespace-functions-amp.md#abs)|Returns the absolute value of the argument|
|[clamp](concurrency-direct3d-namespace-functions-amp.md#clamp)|Overloaded. Clamps _X to the specified _Min and _Max range|
|[countbits](concurrency-direct3d-namespace-functions-amp.md#countbits)|Counts the number of set bits in _X|
|[create_accelerator_view](concurrency-direct3d-namespace-functions-amp.md#create_accelerator_view)|Creates an [accelerator_view Class](accelerator-view-class.md) from a pointer to a Direct3D device interface|
|[d3d_access_lock](concurrency-direct3d-namespace-functions-amp.md#d3d_access_lock)|Acquires a lock on an accelerator_view to safely perform D3D operations on resources shared with the accelerator_view|
|[d3d_access_try_lock](concurrency-direct3d-namespace-functions-amp.md#d3d_access_try_lock)|Attempt to acquire the D3D access lock on an accelerator_view without blocking.|
|[d3d_access_unlock](concurrency-direct3d-namespace-functions-amp.md#d3d_access_unlock)|Release the D3D access lock on the given accelerator_view.|
|[firstbithigh](concurrency-direct3d-namespace-functions-amp.md#firstbithigh)|Gets the location of the first set bit in _X, starting from the highest order bit and working downward|
|[firstbitlow](concurrency-direct3d-namespace-functions-amp.md#firstbitlow)|Gets the location of the first set bit in _X, starting from the lowest order bit and working upward|
|[get_buffer](concurrency-direct3d-namespace-functions-amp.md#get_buffer)|Get the D3D buffer interface underlying an array.|
|[imax](concurrency-direct3d-namespace-functions-amp.md#imax)|Compares two values, returning the value that's greater.|
|[imin](concurrency-direct3d-namespace-functions-amp.md#imin)|Compares two values, returning the value that's smaller.|
|[is_timeout_disabled](concurrency-direct3d-namespace-functions-amp.md#is_timeout_disabled)|Returns a boolean flag indicating if timeout is disabled for the specified accelerator_view.|
|[mad](concurrency-direct3d-namespace-functions-amp.md#mad)|Overloaded. Performs an arithmetic multiply/add operation on three arguments: _X \* _Y + _Z|
|[make_array](concurrency-direct3d-namespace-functions-amp.md#make_array)|Create an array from a D3D buffer interface pointer.|
|[noise](concurrency-direct3d-namespace-functions-amp.md#noise)|Generates a random value by using the Perlin noise algorithm|
|[radians](concurrency-direct3d-namespace-functions-amp.md#radians)|Converts _X from degrees to radians|
|[rcp](concurrency-direct3d-namespace-functions-amp.md#rcp)|Calculates a fast, approximate reciprocal of the argument|
|[reversebits](concurrency-direct3d-namespace-functions-amp.md#reversebits)|Reverses the order of the bits in _X|
|[saturate](concurrency-direct3d-namespace-functions-amp.md#saturate)|Clamps _X within the range of 0 to 1|
|[sign](concurrency-direct3d-namespace-functions-amp.md#sign)|Overloaded. Returns the sign of the argument|
|[smoothstep](concurrency-direct3d-namespace-functions-amp.md#smoothstep)|Returns a smooth Hermite interpolation between 0 and 1, if _X is in the range [_Min, _Max].|
|[step](concurrency-direct3d-namespace-functions-amp.md#step)|Compares two values, returning 0 or 1 based on which value is greater|
|[umax](concurrency-direct3d-namespace-functions-amp.md#umax)|Compares two unsigned values, returning the value that's greater.|
|[umin](concurrency-direct3d-namespace-functions-amp.md#umin)|Compares two unsigned values, returning the value that's smaller.|

## Requirements

**Header:** amp.h

**Namespace:** Concurrency

## See also

[Concurrency Namespace (C++ AMP)](concurrency-namespace-cpp-amp.md)
