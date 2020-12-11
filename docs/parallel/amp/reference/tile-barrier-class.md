---
description: "Learn more about: tile_barrier Class"
title: "tile_barrier Class"
ms.date: "03/27/2019"
f1_keywords: ["tile_barrier", "AMP/tile_barrier", "AMP/Concurrency::tile_barrier::tile_barrier::tile_barrier", "AMP/Concurrency::tile_barrier::tile_barrier::wait", "AMP/Concurrency::tile_barrier::tile_barrier::wait_with_all_memory_fence", "AMP/Concurrency::tile_barrier::tile_barrier::wait_with_global_memory_fence", "AMP/Concurrency::tile_barrier::tile_barrier::wait_with_tile_static_memory_fence"]
helpviewer_keywords: ["tile_barrier class"]
ms.assetid: b4ccdccb-0032-4e11-b7bd-dc9d43445dee
---
# tile_barrier Class

Synchronizes the execution of threads that are running in the thread group (the tile) by using `wait` methods. Only the runtime can instantiate this class.

## Syntax

```cpp
class tile_barrier;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[tile_barrier Constructor](#ctor)|Initializes a new instance of the `tile_barrier` class.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[wait](#wait)|Instructs all threads in the thread group (tile) to stop executing until all threads in the tile have finished waiting.|
|[wait_with_all_memory_fence](#wait_with_all_memory_fence)|Blocks execution of all threads in a tile until all memory accesses have been completed and all threads in the tile have reached this call.|
|[wait_with_global_memory_fence](#wait_with_global_memory_fence)|Blocks execution of all threads in a tile until all global memory accesses have been completed and all threads in the tile have reached this call.|
|[wait_with_tile_static_memory_fence](#wait_with_tile_static_memory_fence)|Blocks execution of all threads in a tile until all `tile_static` memory accesses have been completed and all threads in the tile have reached this call.|

## Inheritance Hierarchy

`tile_barrier`

## Requirements

**Header:** amp.h

**Namespace:** Concurrency

## <a name="ctor"></a> tile_barrier Constructor

Initializes a new instance of the class by copying an existing one.

### Syntax

```cpp
tile_barrier(
    const tile_barrier& _Other ) restrict(amp,cpu);
```

### Parameters

*_Other*<br/>
The `tile_barrier` object to copy.

## wait

Instructs all threads in the thread group (tile) to stop execution until all threads in the tile have finished waiting.

### Syntax

```cpp
void wait() const restrict(amp);
```

## <a name="wait_with_all_memory_fence"></a> wait_with_all_memory_fence

Blocks execution of all threads in a tile until all threads in a tile have reached this call. This ensures that all memory accesses are visible to other threads in the thread tile, and have been executed in program order.

### Syntax

```cpp
void wait_with_all_memory_fence() const restrict(amp);
```

## <a name="wait_with_global_memory_fence"> wait_with_global_memory_fence

Blocks execution of all threads in a tile until all threads in a tile have reached this call. This ensures that all global memory accesses are visible to other threads in the thread tile, and have been executed in program order.

### Syntax

```cpp
void wait_with_global_memory_fence() const  restrict(amp);
```

## <a name="wait_with_tile_static_memory_fence"> wait_with_tile_static_memory_fence

Blocks execution of all threads in a tile until all threads in a tile have reached this call. This ensures that `tile_static` memory accesses are visible to other threads in the thread tile, and have been executed in program order.

### Syntax

```cpp
void wait_with_tile_static_memory_fence() const restrict(amp);
```

## See also

[Concurrency Namespace (C++ AMP)](concurrency-namespace-cpp-amp.md)
