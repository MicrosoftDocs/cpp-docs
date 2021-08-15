---
description: "Learn more about: Concurrency::direct3d namespace functions (AMP)"
title: "Concurrency::direct3d namespace functions (AMP)"
ms.date: "08/31/2018"
f1_keywords: ["amp/Concurrency::direct3d::abs", "amp/Concurrency::direct3d::countbits", "amp/Concurrency::direct3d::create_accelerator_view", "amp/Concurrency::direct3d::d3d_access_lock", "amp/Concurrency::direct3d::d3d_access_unlock", "amp/Concurrency::direct3d::firstbithigh", "amp/Concurrency::direct3d::get_buffer", "amp/Concurrency::direct3d::get_device", "amp/Concurrency::direct3d::imax", "amp/Concurrency::direct3d::is_timeout_disabled", "amp/Concurrency::direct3d::mad", "amp/Concurrency::direct3d::noise", "amp/Concurrency::direct3d::radians", "amp/Concurrency::direct3d::reversebits", "amp/Concurrency::direct3d::saturate", "amp/Concurrency::direct3d::smoothstep", "amp/Concurrency::direct3d::step", "amp/Concurrency::direct3d::umin"]
ms.assetid: 28943b62-52c9-42dc-baf1-ca7b095c1a19
---
# Concurrency::direct3d namespace functions (AMP)

:::row:::
   :::column span="":::
      [abs](#abs)\
      [clamp](#clamp)\
      [countbits](#countbits)\
      [create_accelerator_view](#create_accelerator_view)\
      [d3d_access_lock](#d3d_access_lock)\
      [d3d_access_try_lock](#d3d_access_try_lock)\
      [d3d_access_unlock](#d3d_access_unlock)
   :::column-end:::
   :::column span="":::
      [firstbithigh](#firstbithigh)\
      [firstbitlow](#firstbitlow)\
      [get_buffer](#get_buffer)\
      [get_device](#get_device)\
      [imax](#imax)\
      [imin](#imin)\
      [is_timeout_disabled](#is_timeout_disabled)
   :::column-end:::
   :::column span="":::
      [mad](#mad)\
      [make_array](#make_array)\
      [noise](#noise)\
      [radians](#radians)\
      [rcp](#rcp)\
      [reversebits](#reversebits)
   :::column-end:::
   :::column span="":::
      [saturate](#saturate)\
      [sign](#sign)\
      [smoothstep](#smoothstep)\
      [step](#step)\
      [umax](#umax)\
      [umin](#umin)
   :::column-end:::
:::row-end:::

## Requirements

**Header:** amp.h
**Namespace:** Concurrency

## <a name="abs"></a> abs

Returns the absolute value of the argument

```cpp
inline int abs(int _X) restrict(amp);
```

### Parameters

*_X*<br/>
Integer value

### Return Value

Returns the absolute value of the argument.

## <a name="clamp"></a> clamp

Computes the value of the first specified argument clamped to a range defined by the second and third specified arguments.

```cpp
inline float clamp(
    float _X,
    float _Min,
    float _Max) restrict(amp);

inline int clamp(
    int _X,
    int _Min,
    int _Max) restrict(amp);
```

### Parameters

*_X*<br/>
The value to be clamped

*_Min*<br/>
The lower bound of the clamping range.

*_Max*<br/>
The upper bound of the clamping range.

### Return Value

The clamped value of `_X`.

## <a name="countbits"></a> countbits

Counts the number of set bits in _X

```cpp
inline unsigned int countbits(unsigned int _X) restrict(amp);
```

### Parameters

*_X*<br/>
Unsigned integer value

### Return Value

Returns the number of set bits in _X

## <a name="create_accelerator_view"></a> create_accelerator_view

Creates an [accelerator_view](accelerator-view-class.md) object from a pointer to a Direct3D device interface.

## Syntax

```cpp
accelerator_view create_accelerator_view(
    IUnknown * _D3D_device
    queuing_mode _Qmode = queuing_mode_automatic);

accelerator_view create_accelerator_view(
    accelerator& _Accelerator,
    bool _Disable_timeout
    queuing_mode _Qmode = queuing_mode_automatic);
```

### Parameters

*_Accelerator*<br/>
The accelerator on which the new accelerator_view is to be created.

*_D3D_device*<br/>
The pointer to the Direct3D device interface.

*_Disable_timeout*<br/>
A Boolean parameter that specifies whether timeout should be disabled for the newly created accelerator_view. This corresponds to the D3D11_CREATE_DEVICE_DISABLE_GPU_TIMEOUT flag for Direct3D device creation and is used to indicate if the operating system should allow workloads that take more than 2 seconds to execute without resetting the device per the Windows timeout detection and recovery mechanism. Use of this flag is recommended if you need to perform time consuming tasks on the accelerator_view.

*_Qmode*<br/>
The [queuing_mode](concurrency-namespace-enums-amp.md#queuing_mode) to be used for the newly created accelerator_view. This parameter has a default value of `queuing_mode_automatic`.

## Return Value

The `accelerator_view` object created from the passed Direct3D device interface.

## Remarks

This function creates a new `accelerator_view` object from an existing pointer to a Direct3D device interface. If the function call succeeds, the reference count of the parameter is incremented by means of an `AddRef` call to the interface. You can safely release the object when it is no longer required in your DirectX code. If the method call fails, a [runtime_exception](runtime-exception-class.md) is thrown.

The `accelerator_view` object that you create by using this function is thread safe. You must synchronize concurrent use of the `accelerator_view` object. Unsynchronized concurrent usage of the `accelerator_view` object and the raw ID3D11Device interface causes undefined behavior.

The C++ AMP runtime provides detailed error information in debug mode by using the D3D Debug layer if you use the `D3D11_CREATE_DEVICE_DEBUG` flag.

## <a name="d3d_access_lock"></a> d3d_access_lock

Acquire a lock on an accelerator_view for the purpose of safely performing D3D operations on resources shared with the accelerator_view. The accelerator_view and all C++ AMP resources associated with this accelerator_view internally take this lock when performing operations and will block while another thread holds the D3D access lock. This lock is non-recursive: It is undefined behavior to call this function from a thread that already holds the lock. It is undefined behavior to perform operations on the accelerator_view or any data container associated with the accelerator_view from the thread that holds the D3D access lock. See also scoped_d3d_access_lock, a RAII-style class for a scope-based D3D access lock.

```cpp
void __cdecl d3d_access_lock(accelerator_view& _Av);
```

### Parameters

*_Av*<br/>
The accelerator_view to lock.

## <a name="d3d_access_try_lock"></a> d3d_access_try_lock

Attempt to acquire the D3D access lock on an accelerator_view without blocking.

```cpp
bool __cdecl d3d_access_try_lock(accelerator_view& _Av);
```

### Parameters

*_Av*<br/>
The accelerator_view to lock.

### Return Value

true if the lock was acquired, or false if it is currently held by another thread.

## <a name="d3d_access_unlock"></a> d3d_access_unlock

Release the D3D access lock on the given accelerator_view. If the calling thread does not hold the lock on the accelerator_view the results are undefined.

```cpp
void __cdecl d3d_access_unlock(accelerator_view& _Av);
```

### Parameters

*_Av*<br/>
The accelerator_view for which the lock is to be released.

## <a name="firstbithigh"></a> firstbithigh

Gets the location of the first set bit in _X, beginning with the highest-order bit and moving towards the lowest-order bit.

```cpp
inline int firstbithigh(int _X) restrict(amp);
```

### Parameters

*_X*<br/>
Integer value

### Return Value

The location of the first set bit

## <a name="firstbitlow"></a> firstbitlow

Gets the location of the first set bit in _X, beginning with the lowest-order bit and working toward the highest-order bit.

```cpp
inline int firstbitlow(int _X) restrict(amp);
```

### Parameters

*_X*<br/>
Integer value

### Return Value

Returns The location of the first set bit

## <a name="get_buffer"></a> get_buffer

Get the Direct3D buffer interface underlying the specified array.

```cpp
template<
    typename value_type,
    int _Rank
>
IUnknown *get_buffer(
    const array<value_type, _Rank>& _Array)  ;
```

### Parameters

*value_type*<br/>
The type of elements in the array.

*_Rank*<br/>
The rank of the array.

*_Array*<br/>
An array on a Direct3D accelerator_view for which the underlying Direct3D buffer interface is returned.

### Return Value

The IUnknown interface pointer corresponding to the Direct3D buffer underlying the array.

## <a name="get_device"> get_device

Get the D3D device interface underlying a accelerator_view.

```cpp
IUnknown* get_device(const accelerator_view Av);
```

### Parameters

*Av*<br/>
The D3D accelerator_view for which the underlying D3D device interface is returned.

### Return value

The `IUnknown` interface pointer of the D3D device underlying the accelerator_view.

## <a name="imax"></a> imax

Determine the maximum numeric value of the arguments

```cpp
inline int imax(
    int _X,
    int _Y) restrict(amp);
```

### Parameters

*_X*<br/>
Integer value

*_Y*<br/>
Integer value

### Return Value

Return the maximum numeric value of the arguments

## <a name="imin"></a> imin

Determine the minimum numeric value of the arguments

```cpp
inline int imin(
    int _X,
    int _Y) restrict(amp);
```

### Parameters

*_X*<br/>
Integer value

*_Y*<br/>
Integer value

### Return Value

Return the minimum numeric value of the arguments

## <a name="is_timeout_disabled"></a> is_timeout_disabled

Returns a boolean flag indicating if timeout is disabled for the specified accelerator_view. This corresponds to the D3D11_CREATE_DEVICE_DISABLE_GPU_TIMEOUT flag for Direct3D device creation.

```cpp
bool __cdecl is_timeout_disabled(const accelerator_view& _Accelerator_view);
```

### Parameters

*_Accelerator_view*<br/>
The accelerator_view for which the timeout disabled setting is to be queried.

### Return Value

A boolean flag indicating if timeout is disabled for the specified accelerator_view.

## <a name="mad"></a> mad

Computes the product of the first and second specified argument, then adds the third specified argument.

```cpp
inline float mad(
    float _X,
    float _Y,
    float _Z) restrict(amp);

inline double mad(
    double _X,
    double _Y,
    double _Z) restrict(amp);

inline int mad(
    int _X,
    int _Y,
    int _Z) restrict(amp);

inline unsigned int mad(
    unsigned int _X,
    unsigned int _Y,
    unsigned int _Z) restrict(amp);
```

### Parameters

*_X*<br/>
The first specified argument.

*_Y*<br/>
The second specified argument.

*_Z*<br/>
The third specified argument.

### Return Value

The result of `_X` \* `_Y` + `_Z`.

## <a name="make_array"></a> make_array

Create an array from a Direct3D buffer interface pointer.

```cpp
template<
    typename value_type,
    int _Rank
>
array<value_type, _Rank> make_array(
    const extent<_Rank>& _Extent,
    const Concurrency::accelerator_view& _Rv,
    IUnknown* _D3D_buffer)  ;
```

### Parameters

*value_type*<br/>
The element type of the array to be created.

*_Rank*<br/>
The rank of the array to be created.

*_Extent*<br/>
An extent that describes the shape of the array aggregate.

*_Rv*<br/>
A D3D accelerator view on which the array is to be created.

*_D3D_buffer*<br/>
IUnknown interface pointer of the D3D buffer to create the array from.

### Return Value

An array created using the provided Direct3D buffer.

## <a name="noise"></a> noise

Generates a random value using the Perlin noise algorithm

```cpp
inline float noise(float _X) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value from which to generate Perlin noise

### Return Value

Returns The Perlin noise value within a range between -1 and 1

## <a name="radians"></a> radians

Converts _X from degrees to radians

```cpp
inline float radians(float _X) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value

### Return Value

Returns _X converted from degrees to radians

## <a name="rcp"></a> rcp

Computes the reciprocal of the specified argument by using a fast approximation.

```cpp
inline float rcp(float _X) restrict(amp);

inline double rcp(double _X) restrict(amp);
```

### Parameters

*_X*<br/>
The value for which to compute the reciprocal.

### Return Value

The reciprocal of the specified argument.

## <a name="reversebits"></a> reversebits

Reverses the order of the bits in _X

```cpp
inline unsigned int reversebits(unsigned int _X) restrict(amp);
```

### Parameters

*_X*<br/>
Unsigned integer value

### Return Value

Returns the value with the bit order reversed in _X

## <a name="saturate"></a> saturate

Clamps _X within the range of 0 to 1

```cpp
inline float saturate(float _X) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value

### Return Value

Returns _X clamped within the range of 0 to 1

## <a name="sign"></a> sign

Determines the sign of the specified argument.

```cpp
inline int sign(int _X) restrict(amp);
```

### Parameters

*_X*<br/>
Integer value

### Return Value

The sign of the argument.

## <a name="smoothstep"></a> smoothstep

Returns a smooth Hermite interpolation between 0 and 1, if _X is in the range [_Min, _Max].

```cpp
inline float smoothstep(
    float _Min,
    float _Max,
    float _X) restrict(amp);
```

### Parameters

*_Min*<br/>
Floating-point value

*_Max*<br/>
Floating-point value

*_X*<br/>
Floating-point value

### Return Value

Returns 0 if _X is less than _Min; 1 if _X is greater than _Max; otherwise, a value between 0 and 1 if _X is in the range [_Min, _Max]

## <a name="step"></a> step

Compares two values, returning 0 or 1 based on which value is greater

```cpp
inline float step(
    float _Y,
    float _X) restrict(amp);
```

### Parameters

*_Y*<br/>
Floating-point value

*_X*<br/>
Floating-point value

### Return Value

Returns 1 if the _X is greater than or equal to _Y; otherwise, 0

## <a name="umax"></a> umax

Determine the maximum numeric value of the arguments

```cpp
inline unsigned int umax(
    unsigned int _X,
    unsigned int _Y) restrict(amp);
```

### Parameters

*_X*<br/>
Integer value

*_Y*<br/>
Integer value

### Return Value

Return the maximum numeric value of the arguments

## <a name="umin"></a> umin

Determine the minimum numeric value of the arguments

```cpp
inline unsigned int umin(
    unsigned int _X,
    unsigned int _Y) restrict(amp);
```

### Parameters

*_X*<br/>
Integer value

*_Y*<br/>
Integer value

### Return Value

Return the minimum numeric value of the arguments

## See also

[Concurrency::direct3d Namespace](concurrency-direct3d-namespace.md)
