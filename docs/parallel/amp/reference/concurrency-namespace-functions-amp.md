---
description: "Learn more about: Concurrency namespace functions (AMP)"
title: "Concurrency namespace functions (AMP)"
ms.date: "11/04/2016"
f1_keywords: ["amp/Concurrency::all_memory_fence", "amp/Concurrency::atomic_compare_exchange", "amp/Concurrency::atomic_fetch_dec", "amp/Concurrency::atomic_fetch_max", "amp/Concurrency::atomic_fetch_min", "amp/Concurrency::copy", "amp/Concurrency::direct3d_abort", "amp/Concurrency::direct3d_printf", "amp/Concurrency::global_memory_fence", "amp/Concurrency::tile_static_memory_fence"]
ms.assetid: 2bef0985-cb90-4ece-90b9-66529aec73c9
---
# Concurrency namespace functions (AMP)

:::row:::
   :::column span="":::
      [`all_memory_fence`](#all_memory_fence)\
      [`amp_uninitialize`](#amp_uninitialize)\
      [`atomic_compare_exchange`](#atomic_compare_exchange)\
      [`atomic_exchange`](#atomic_exchange)\
      [`atomic_fetch_add`](#atomic_fetch_add)\
      [`atomic_fetch_and`](#atomic_fetch_and)
   :::column-end:::
   :::column span="":::
      [`atomic_fetch_dec`](#atomic_fetch_dec)\
      [`atomic_fetch_inc`](#atomic_fetch_inc)\
      [`atomic_fetch_max`](#atomic_fetch_max)\
      [`atomic_fetch_min`](#atomic_fetch_min)\
      [`atomic_fetch_or`](#atomic_fetch_or)
   :::column-end:::
   :::column span="":::
      [`atomic_fetch_sub`](#atomic_fetch_sub)\
      [`atomic_fetch_xor`](#atomic_fetch_xor)\
      [`copy`](#copy)\
      [`copy_async`](#copy_async)\
      [`direct3d_abort`](#direct3d_abort)
   :::column-end:::
   :::column span="":::
      [`direct3d_errorf`](#direct3d_errorf)\
      [`direct3d_printf`](#direct3d_printf)\
      [`global_memory_fence`](#global_memory_fence)\
      [`parallel_for_each`](#parallel_for_each)\
      [`tile_static_memory_fence`](#tile_static_memory_fence)
   :::column-end:::
:::row-end:::

## <a name="all_memory_fence"></a> all_memory_fence

Blocks execution of all threads in a tile until all memory accesses have been completed. This ensures that all memory accesses are visible to other threads in the thread tile, and are executed in program order.

```cpp
inline void all_memory_fence(const tile_barrier& _Barrier) restrict(amp);
```

### Parameters

*_Barrier*<br/>
A `tile_barrier` object.

## <a name="amp_uninitialize"></a> amp_uninitialize

Uninitializes the C++ AMP runtime. It is legal to call this function multiple times during an applications lifetime. Calling any C++ AMP API after calling this function will reinitialize the C++ AMP runtime. Note that it is illegal to use C++ AMP objects across calls to this function and doing so will result in undefined behavior. Also, concurrently calling this function and any other AMP APIs is illegal and would result in undefined behavior.

```cpp
void __cdecl amp_uninitialize();
```

## <a name="atomic_compare_exchange"></a> atomic_compare_exchange

Atomically compares the value stored at a memory location specified in the first argument for equality with the value of the second specified argument, and if the values are the same, the value at the memory location is changed to that of the third specified argument.

```cpp
inline bool atomic_compare_exchange(
    _Inout_ int* _Dest,
    _Inout_ int* _Expected_value,
    int value
    ) restrict(amp)

inline bool atomic_compare_exchange(
    _Inout_ unsigned int* _Dest,
    _Inout_ unsigned int* _Expected_value,
    unsigned int value
    ) restrict(amp)
```

### Parameters

*_Dest*<br/>
The location from which one of the values to be compared is read, and to which the new value, if any, is to be stored.

*_Expected_value*<br/>
The location from which the second value to be compared is read.

*value*<br/>
The value to be stored to the memory location specified in by `_Dest` if `_Dest` is equal to `_Expected_value`.

### Return Value

**`true`** if the operation is successful; otherwise, **`false`**.

## <a name="atomic_exchange"></a> atomic_exchange Function (C++ AMP)

Sets the value of destination location as an atomic operation.

```cpp
inline int atomic_exchange(
    _Inout_ int* _Dest,
    int value
    ) restrict(amp)

inline unsigned int atomic_exchange(
    _Inout_ unsigned int* _Dest,
    unsigned int value
    ) restrict(amp)

inline float atomic_exchange(
    _Inout_ float* _Dest,
    float value
    ) restrict(amp)
```

### Parameters

*_Dest*<br/>
Pointer to the destination location.

*value*<br/>
The new value.

### Return Value

The original value of the destination location.

## <a name="atomic_fetch_add"></a> atomic_fetch_add Function (C++ AMP)

Atomically add a value to the value of a memory location.

```cpp
inline int atomic_fetch_add(
    _Inout_ int* _Dest,
    int value
    ) restrict(amp)

inline unsigned int atomic_fetch_add(
    _Inout_ unsigned int* _Dest,
    unsigned int value
    ) restrict(amp)
```

### Parameters

*_Dest*<br/>
Pointer to the memory location.

*value*<br/>
The value to be added.

### Return Value

The original value of the memory location.

## <a name="atomic_fetch_and"></a> atomic_fetch_and Function (C++ AMP)

Atomically performs a bitwise AND operation of a value and the value of a memory location.

```cpp
inline int atomic_fetch_and(
    _Inout_ int* _Dest,
    int value
    ) restrict(amp)

inline unsigned int atomic_fetch_and(
    _Inout_ unsigned int* _Dest,
    unsigned int value
    ) restrict(amp)
```

### Parameters

*_Dest*<br/>
Pointer to the memory location.

*value*<br/>
The value to use in the bitwise AND calculation.

### Return Value

The original value of the memory location.

## <a name="atomic_fetch_dec"></a> atomic_fetch_dec

Atomically decrements the value stored at the specified memory location.

```cpp
inline int atomic_fetch_dec(_Inout_ int* _Dest
    ) restrict(amp)

inline unsigned int atomic_fetch_dec(_Inout_ unsigned int* _Dest) restrict(amp);
```

### Parameters

*_Dest*<br/>
The location in memory of the value to be decremented.

### Return Value

The original value stored at the memory location.

## <a name="atomic_fetch_inc"></a> atomic_fetch_inc

Atomically increments the value stored at the specified memory location.

```cpp
inline int atomic_fetch_inc(_Inout_ int* _Dest) restrict(amp);

inline unsigned int atomic_fetch_inc(_Inout_ unsigned int* _Dest) restrict(amp);
```

### Parameters

*_Dest*<br/>
The location in memory of the value to be incremented.

### Return Value

The original value stored at the memory location.

## <a name="atomic_fetch_max"></a> atomic_fetch_max

Atomically computes the maximum value between the value stored at the memory location specified in the first argument and the value specified in the second argument, and stores it at the same memory location.

```cpp
inline int atomic_fetch_max(
    _Inout_ int* _Dest,
    int value
    ) restrict(amp)

inline unsigned int atomic_fetch_max(
    _Inout_ unsigned int* _Dest,
    unsigned int value
    ) restrict(amp)
```

### Parameters

*_Dest*<br/>
The location from which one of the values to be compared is read, and to which the maximum of the two values is to be stored.

*value*<br/>
The value to be compared to the value at the specified location.

### Return Value

The original value stored at the specified location location.

## <a name="atomic_fetch_min"></a> atomic_fetch_min

Atomically computes the minimum value between the value stored at the memory location specified in the first argument and the value specified in the second argument, and stores it at the same memory location.

```cpp
inline int atomic_fetch_min(
    _Inout_ int* _Dest,
    int value
    ) restrict(amp)

inline unsigned int atomic_fetch_min(
    _Inout_ unsigned int* _Dest,
    unsigned int value
    ) restrict(amp)
```

### Parameters

*_Dest*<br/>
The location from which one of the values to be compared is read, and to which the minimum of the two values is to be stored.

*value*<br/>
The value to be compared to the value at the specified location.

### Return Value

The original value stored at the specified location location.

## <a name="atomic_fetch_or"></a> atomic_fetch_or Function (C++ AMP)

Atomically performs a bitwise OR operation with a value and the value of a memory location.

```cpp
inline int atomic_fetch_or(
    _Inout_ int* _Dest,
    int value
    ) restrict(amp)

inline unsigned int atomic_fetch_or(
    _Inout_ unsigned int* _Dest,
    unsigned int value
    ) restrict(amp)
```

### Parameters

*_Dest*<br/>
Pointer to the memory location.

*value*<br/>
The value to use in the bitwise OR calculation.

### Return Value

The original value of the memory location.

## <a name="atomic_fetch_sub"></a> atomic_fetch_sub Function (C++ AMP)

Atomically subtracts a value from a memory location.

```cpp
inline int atomic_fetch_sub(
    _Inout_ int* _Dest,
    int value
    ) restrict(amp)

inline unsigned int atomic_fetch_sub(
    _Inout_ unsigned int* _Dest,
    unsigned int value
    ) restrict(amp)
```

### Parameters

*_Dest*<br/>
Pointer to the destination location.

*value*<br/>
The value to be subtracted.

### Return Value

The original value of the memory location.

## <a name="atomic_fetch_xor"></a> atomic_fetch_xor Function (C++ AMP)

Atomically performs an bitwise XOR operation of a value and a memory location.

```cpp
inline int atomic_fetch_xor(
    _Inout_ int* _Dest,
    int value
    ) restrict(amp)

inline unsigned int atomic_fetch_xor(
    _Inout_ unsigned int* _Dest,
    unsigned int value
    ) restrict(amp)
```

### Parameters

*_Dest*<br/>
Pointer to the memory location.

*value*<br/>
The value to use in the XOR calculation.

### Return Value

The original value of the memory location.

## <a name="copy"></a> copy

Copies a C++ AMP object. All synchronous data transfer requirements are met. You can't copy data when running code on an accelerator. The general form of this function is `copy(src, dest)`.

```cpp
template <typename value_type, int _Rank>
void copy(
    const array<value_type, _Rank>& _Src,
    array<value_type, _Rank>& _Dest);

template <typename InputIterator, typename value_type, int _Rank>
void copy(
    InputIterator _SrcFirst,
    InputIterator _SrcLast,
    array<value_type, _Rank>& _Dest);

template <typename InputIterator, typename value_type, int _Rank>
void copy(
    InputIterator _SrcFirst,
    array<value_type, _Rank>& _Dest);

template <typename OutputIterator, typename value_type, int _Rank>
void copy(
    const array<value_type, _Rank>& _Src,
   OutputIterator _DestIter);

template <typename value_type, int _Rank>
void copy(
    const array<value_type, _Rank>& _Src,
    array_view<value_type, _Rank>& _Dest);

template <typename value_type, int _Rank>
void copy(
    const array_view<const value_type, _Rank>& _Src,
    array<value_type, _Rank>& _Dest);

template <typename value_type, int _Rank>
void copy(
    const array_view<value_type, _Rank>& _Src,
    array<value_type, _Rank>& _Dest);

template <typename value_type, int _Rank>
void copy(
    const array_view<const value_type, _Rank>& _Src,
    array_view<value_type, _Rank>& _Dest);

template <typename value_type, int _Rank>
void copy(
    const array_view<value_type, _Rank>& _Src,
    array_view<value_type, _Rank>& _Dest);

template <typename InputIterator, typename value_type, int _Rank>
void copy(
    InputIterator _SrcFirst,
    InputIterator _SrcLast,
    array_view<value_type, _Rank>& _Dest);

template <typename InputIterator, typename value_type, int _Rank>
void copy(
    InputIterator _SrcFirst,
    array_view<value_type, _Rank>& _Dest);

template <typename OutputIterator, typename value_type, int _Rank>
void copy(
    const array_view<value_type, _Rank>& _Src,
    OutputIterator _DestIter);
```

### Parameters

*_Dest*<br/>
The object to copy to.

*_DestIter*<br/>
An output iterator to the beginning position at destination.

*InputIterator*<br/>
The type of the input iterator.

*OutputIterator*<br/>
The type of the output iterator.

*_Rank*<br/>
The rank of the object to copy from or the object to copy to.

*_Src*<br/>
To object to copy.

*_SrcFirst*<br/>
A beginning iterator into the source container.

*_SrcLast*<br/>
An ending iterator into the source container.

*value_type*<br/>
The data type of the elements that are copied.

## <a name="copy_async"></a> copy_async

Copies a C++ AMP object and returns a [completion_future](completion-future-class.md) object that can be waited on. You can't copy data when running code on an accelerator.  The general form of this function is `copy(src, dest)`.

```cpp
template <typename value_type, int _Rank>
concurrency::completion_future copy_async(
    const array<value_type, _Rank>& _Src,
    array<value_type, _Rank>& _Dest);

template <typename InputIterator, typename value_type, int _Rank>
concurrency::completion_future copy_async(InputIterator _SrcFirst, InputIterator _SrcLast,
    array<value_type, _Rank>& _Dest);

template <typename InputIterator, typename value_type, int _Rank>
concurrency::completion_future copy_async(InputIterator _SrcFirst,
    array<value_type, _Rank>& _Dest);

template <typename OutputIterator, typename value_type, int _Rank>
concurrency::completion_future copy_async(
    const array<value_type, _Rank>& _Src, OutputIterator _DestIter);

template <typename value_type, int _Rank>
concurrency::completion_future copy_async(
    const array<value_type, _Rank>& _Src,
    array_view<value_type, _Rank>& _Dest);

template <typename value_type, int _Rank>
concurrency::completion_future copy_async(
    const array_view<const value_type, _Rank>& _Src,
    array<value_type, _Rank>& _Dest);

template <typename value_type, int _Rank>
concurrency::completion_future copy_async(
    const array_view<value_type, _Rank>& _Src,
    array<value_type, _Rank>& _Dest);

template <typename value_type, int _Rank>
concurrency::completion_future copy_async(
    const array_view<const value_type, _Rank>& _Src,
    array_view<value_type, _Rank>& _Dest);

template <typename value_type, int _Rank>
concurrency::completion_future copy_async(
    const array_view<value_type, _Rank>& _Src,
    array_view<value_type, _Rank>& _Dest);

template <typename InputIterator, typename value_type, int _Rank>
concurrency::completion_future copy_async(InputIterator _SrcFirst, InputIterator _SrcLast,
    array_view<value_type, _Rank>& _Dest);

template <typename InputIterator, typename value_type, int _Rank>
concurrency::completion_future copy_async(InputIterator _SrcFirst,
    array_view<value_type, _Rank>& _Dest);

template <typename OutputIterator, typename value_type, int _Rank>
concurrency::completion_future copy_async(
    const array_view<value_type, _Rank>& _Src, OutputIterator _DestIter);
```

### Parameters

*_Dest*<br/>
The object to copy to.

*_DestIter*<br/>
An output iterator to the beginning position at destination.

*InputIterator*<br/>
The type of the input iterator.

*OutputIterator*<br/>
The type of the output iterator.

*_Rank*<br/>
The rank of the object to copy from or the object to copy to.

*_Src*<br/>
To object to copy.

*_SrcFirst*<br/>
A beginning iterator into the source container.

*_SrcLast*<br/>
An ending iterator into the source container.

*value_type*<br/>
The data type of the elements that are copied.

### Return Value

A `future<void>` that can be waited on.

## <a name="direct3d_abort"></a> direct3d_abort

Aborts the execution of a function with the `restrict(amp)` restriction clause. When the AMP runtime detects the call, it raises a [runtime_exception](runtime-exception-class.md) exception with the error message "Reference Rasterizer: Shader abort instruction hit".

```cpp
void direct3d_abort() restrict(amp);
```

## <a name="direct3d_errorf"></a> direct3d_errorf

Prints a formatted string to the Visual Studio output window. It is called from a function with the `restrict(amp)` restriction clause. When the AMP runtime detects the call, it raises a [runtime_exception](runtime-exception-class.md) exception with the same formatting string.

```cpp
void direct3d_errorf(
    const char *,
...) restrict(amp);
```

## <a name="direct3d_printf"></a> direct3d_printf

Prints a formatted string to the Visual Studio output window. It is called from a function with the `restrict(amp)` restriction clause.

```cpp
void direct3d_printf(
    const char *,
...) restrict(amp);
```

## <a name="global_memory_fence"></a> global_memory_fence

Blocks execution of all threads in a tile until all global memory accesses have been completed. This ensures that global memory accesses are visible to other threads in the thread tile, and are executed in program order.

```cpp
inline void global_memory_fence(const tile_barrier& _Barrier) restrict(amp);
```

### Parameters

*_Barrier*<br/>
A tile_barrier object

## <a name="parallel_for_each"></a> parallel_for_each Function (C++ AMP)

Runs a function across the compute domain. For more information, see [C++ AMP Overview](../../../parallel/amp/cpp-amp-overview.md).

```cpp
template <int _Rank, typename _Kernel_type>
void parallel_for_each(
    const extent<_Rank>& _Compute_domain,
    const _Kernel_type& _Kernel);

template <int _Dim0, int _Dim1, int _Dim2, typename _Kernel_type>
void parallel_for_each(
    const tiled_extent<_Dim0, _Dim1, _Dim2>& _Compute_domain,
   const _Kernel_type& _Kernel);

template <int _Dim0, int _Dim1, typename _Kernel_type>
void parallel_for_each(
    const tiled_extent<_Dim0, _Dim1>& _Compute_domain,
    const _Kernel_type& _Kernel);

template <int _Dim0, typename _Kernel_type>
void parallel_for_each(
    const tiled_extent<_Dim0>& _Compute_domain,
    const _Kernel_type& _Kernel);

template <int _Rank, typename _Kernel_type>
void parallel_for_each(
    const accelerator_view& _Accl_view,
    const extent<_Rank>& _Compute_domain,
    const _Kernel_type& _Kernel);

template <int _Dim0, int _Dim1, int _Dim2, typename _Kernel_type>
void parallel_for_each(
    const accelerator_view& _Accl_view,
    const tiled_extent<_Dim0, _Dim1, _Dim2>& _Compute_domain,
    const _Kernel_type& _Kernel);

template <int _Dim0, int _Dim1, typename _Kernel_type>
void parallel_for_each(
    const accelerator_view& _Accl_view,
    const tiled_extent<_Dim0, _Dim1>& _Compute_domain,
    const _Kernel_type& _Kernel);

template <int _Dim0, typename _Kernel_type>
void parallel_for_each(
    const accelerator_view& _Accl_view,
    const tiled_extent<_Dim0>& _Compute_domain,
    const _Kernel_type& _Kernel);
```

### Parameters

*_Accl_view*<br/>
The `accelerator_view` object to run the parallel computation on.

*_Compute_domain*<br/>
An `extent` object that contains the data for the computation.

*_Dim0*<br/>
The dimension of the `tiled_extent` object.

*_Dim1*<br/>
The dimension of the `tiled_extent` object.

*_Dim2*<br/>
The dimension of the `tiled_extent` object.

*_Kernel*<br/>
A lambda or function object that takes an argument of type "index\<_Rank>" and performs the parallel computation.

*_Kernel_type*<br/>
A lambda or functor.

*_Rank*<br/>
The rank of the extent.

## <a name="tile_static_memory_fence"></a> tile_static_memory_fence

Blocks execution of all threads in a tile until all outstanding `tile_static` memory accesses have been completed. This ensures that `tile_static` memory accesses are visible to other threads in the thread tile, and that accesses are executed in program order.

```cpp
inline void tile_static_memory_fence(const tile_barrier& _Barrier) restrict(amp);
```

### Parameters

*_Barrier*<br/>
A tile_barrier object.

## See also

[Concurrency Namespace (C++ AMP)](concurrency-namespace-cpp-amp.md)
