---
description: "Learn more about: accelerator Class"
title: "accelerator Class"
ms.date: "11/04/2016"
f1_keywords: ["AMPRT/accelerator", "AMPRT/Concurrency::accelerator::accelerator", "AMPRT/Concurrency::accelerator::create_view", "AMPRT/Concurrency::accelerator::get_all", "AMPRT/Concurrency::accelerator::get_auto_selection_view", "AMPRT/Concurrency::accelerator::get_dedicated_memory", "AMPRT/Concurrency::accelerator::get_default_cpu_access_type", "AMPRT/Concurrency::accelerator::get_default_view", "AMPRT/Concurrency::accelerator::get_description", "AMPRT/Concurrency::accelerator::get_device_path", "AMPRT/Concurrency::accelerator::get_has_display", "AMPRT/Concurrency::accelerator::get_is_debug", "AMPRT/Concurrency::accelerator::get_is_emulated", "AMPRT/Concurrency::accelerator::get_supports_cpu_shared_memory", "AMPRT/Concurrency::accelerator::get_supports_double_precision", "AMPRT/Concurrency::accelerator::get_supports_limited_double_precision", "AMPRT/Concurrency::accelerator::get_version", "AMPRT/Concurrency::accelerator::set_default", "AMPRT/Concurrency::accelerator::set_default_cpu_access_type", "AMPRT/Concurrency::accelerator::cpu_accelerator", "AMPRT/Concurrency::accelerator::dedicated_memory", "AMPRT/Concurrency::accelerator::default_accelerator", "AMPRT/Concurrency::accelerator::default_cpu_access_type", "AMPRT/Concurrency::accelerator::default_view", "AMPRT/Concurrency::accelerator::description", "AMPRT/Concurrency::accelerator::device_path", "AMPRT/Concurrency::accelerator::direct3d_ref", "AMPRT/Concurrency::accelerator::direct3d_warp", "AMPRT/Concurrency::accelerator::has_display", "AMPRT/Concurrency::accelerator::is_debug", "AMPRT/Concurrency::accelerator::is_emulated", "AMPRT/Concurrency::accelerator::supports_cpu_shared_memory", "AMPRT/Concurrency::accelerator::supports_double_precision", "AMPRT/Concurrency::accelerator::supports_limited_double_precision", "AMPRT/Concurrency::accelerator::version"]
helpviewer_keywords: ["accelerator class"]
ms.assetid: 37eed593-cf87-4611-9cdc-e98df6c2377a
---
# accelerator Class

An accelerator is a hardware capability that is optimized for data-parallel computing. An accelerator may be a device attached to a PCIe bus (such as a GPU), or it might be an extended instruction set on the main CPU.

## Syntax

```cpp
class accelerator;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[accelerator Constructor](#ctor)|Initializes a new instance of the `accelerator` class.|
|[~accelerator Destructor](#ctor)|Destroys the `accelerator` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[create_view](#create_view)|Creates and returns an `accelerator_view` object on this accelerator.|
|[get_all](#get_all)|Returns a vector of `accelerator` objects that represent all the available accelerators.|
|[get_auto_selection_view](#get_auto_selection_view)|Returns the auto-selection `accelerator_view`.|
|[get_dedicated_memory](#get_dedicated_memory)|Returns the dedicated memory for the `accelerator`, in kilobytes.|
|[get_default_cpu_access_type](#get_default_cpu_access_type)|Returns the default [access_type](concurrency-namespace-enums-amp.md#access_type) for buffers created on this accelerator.|
|[get_default_view](#get_default_view)|Returns the default `accelerator_view` object that is associated with the `accelerator`.|
|[get_description](#get_description)|Returns a short description of the `accelerator` device.|
|[get_device_path](#get_device_path)|Returns the path of the device.|
|[get_has_display](#get_has_display)|Determines whether the `accelerator` is attached to a display.|
|[get_is_debug](#get_is_debug)|Determines whether the `accelerator` has the DEBUG layer enabled for extensive error reporting.|
|[get_is_emulated](#get_is_emulated)|Determines whether the `accelerator` is emulated.|
|[get_supports_cpu_shared_memory](#get_supports_cpu_shared_memory)|Determines whether the `accelerator` supports shared memory|
|[get_supports_double_precision](#get_supports_double_precision)|Determines whether the `accelerator` is attached to a display.|
|[get_supports_limited_double_precision](#get_supports_limited_double_precision)|Determines whether the `accelerator` has limited support for double-precision math.|
|[get_version](#get_version)|Returns the version of the `accelerator`.|
|[set_default](#set_default)|Returns the path of the default accelerator.|
|[set_default_cpu_access_type](#set_default_cpu_access_type)|Sets the default CPU [access_type](concurrency-namespace-enums-amp.md#access_type)for arrays and implicit memory allocations made on this `accelerator`.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[operator!=](#operator_neq)|Compares this `accelerator` object with another and returns **`false`** if they are the same; otherwise, returns **`true`**.|
|[operator=](#operator_eq)|Copies the contents of the specified `accelerator` object to this one.|
|[operator==](#operator_eq_eq)|Compares this `accelerator` object with another and returns **`true`** if they are the same; otherwise, returns **`false`**.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[cpu_accelerator](#cpu_accelerator)|Gets a string constant for the CPU `accelerator`.|
|[dedicated_memory](#dedicated_memory)|Gets the dedicated memory for the `accelerator`, in kilobytes.|
|[default_accelerator](#default_accelerator)|Gets a string constant for the default `accelerator`.|
|[default_cpu_access_type](#default_cpu_access_type)|Gets or sets the default CPU [access_type](concurrency-namespace-enums-amp.md#access_type)for arrays and implicit memory allocations made on this `accelerator`.|
|[default_view](#default_view)|Gets the default `accelerator_view` object that is associated with the `accelerator`.|
|[description](#description)|Gets a short description of the `accelerator` device.|
|[device_path](#device_path)|Gets the path of the device.|
|[direct3d_ref](#direct3d_ref)|Gets a string constant for a Direct3D reference `accelerator`.|
|[direct3d_warp](#direct3d_warp)|Gets the string constant for an `accelerator` object that you can use for executing C++ AMP code on multi-core CPUs that use Streaming SIMD Extensions (SSE).|
|[has_display](#has_display)|Gets a Boolean value that indicates whether the `accelerator` is attached to a display.|
|[is_debug](#is_debug)|Indicates whether the `accelerator` has the DEBUG layer enabled for extensive error reporting.|
|[is_emulated](#is_emulated)|Indicates whether the `accelerator` is emulated.|
|[supports_cpu_shared_memory](#supports_cpu_shared_memory)|Indicates whether the `accelerator` supports shared memory.|
|[supports_double_precision](#supports_double_precision)|Indicates whether the accelerator supports double-precision math.|
|[supports_limited_double_precision](#supports_limited_double_precision)|Indicates whether the accelerator has limited support for double-precision math.|
|[version](#version)|Gets the version of the `accelerator`.|

## Inheritance Hierarchy

`accelerator`

## Remarks

An accelerator is a hardware capability that is optimized for data-parallel computing. An accelerator is often a discrete GPU, but it can also be a virtual host-side entity such as a DirectX REF device, a WARP (a CPU-side device that is accelerated by means of SSE instructions), or the CPU itself.

You can construct an `accelerator` object by enumerating the available devices, or by getting the default device, the reference device, or the WARP device.

## Requirements

**Header:** amprt.h

**Namespace:** Concurrency

## <a name="dtor"></a></a> ~accelerator

Destroys the `accelerator` object.

```cpp
~accelerator();
```

### Return Value

## <a name="ctor"></a> accelerator

Initializes a new instance of the [accelerator class](accelerator-class.md).

```cpp
accelerator();

explicit accelerator(const std::wstring& _Device_path);

accelerator(const accelerator& _Other);
```

### Parameters

*_Device_path*<br/>
The path of the physical device.

*_Other*<br/>
The accelerator to copy.

## <a name="cpu_accelerator"></a> cpu_accelerator

Gets a string constant for the CPU accelerator.

```cpp
static const wchar_t cpu_accelerator[];
```

## <a name="create_view"></a> create_view

Creates and returns an `accelerator_view` object on this accelerator, using the specified queuing mode. When the queuing mode is not specified, the new `accelerator_view` uses the [queuing_mode::immediate](concurrency-namespace-enums-amp.md#queuing_mode) queuing mode.

```cpp
accelerator_view create_view(queuing_mode qmode = queuing_mode_automatic);
```

### Parameters

*qmode*<br/>
The queuing mode.

### Return Value

A new `accelerator_view` object on this accelerator, using the specified queuing mode.

## <a name="dedicated_memory"></a> dedicated_memory

Gets the dedicated memory for the `accelerator`, in kilobytes.

```cpp
__declspec(property(get= get_dedicated_memory)) size_t dedicated_memory;
```

## <a name="default_accelerator"></a> default_accelerator

Gets a string constant for the default `accelerator`.

```cpp
static const wchar_t default_accelerator[];
```

## <a name="default_cpu_access_type"></a> default_cpu_access_type

The default cpu [access_type](concurrency-namespace-enums-amp.md#access_type)for arrays and implicit memory allocations made on this `accelerator`.

```cpp
__declspec(property(get= get_default_cpu_access_type)) access_type default_cpu_access_type;
```

## <a name="default_view"></a> default_view

Gets the default accelerator view that is associated with the `accelerator`.

```cpp
__declspec(property(get= get_default_view)) accelerator_view default_view;
```

## <a name="description"></a> description

Gets a short description of the `accelerator` device.

```cpp
__declspec(property(get= get_description)) std::wstring description;
```

## <a name="device_path"></a> device_path

Gets the path of the accelerator. The path is unique on the system.

```cpp
__declspec(property(get= get_device_path)) std::wstring device_path;
```

## <a name="direct3d_ref"></a> direct3d_ref

Gets a string constant for a Direct3D reference accelerator.

```cpp
static const wchar_t direct3d_ref[];
```

## <a name="direct3d_warp"></a> direct3d_warp

Gets the string constant for an `accelerator` object that you can use for executing your C++ AMP code on multi-core CPUs using Streaming SIMD Extensions (SSE).

```cpp
static const wchar_t direct3d_warp[];
```

## <a name="get_all"></a> get_all

Returns a vector of `accelerator` objects that represent all the available accelerators.

```cpp
static inline std::vector<accelerator> get_all();
```

### Return Value

The vector of available accelerators

## <a name="get_auto_selection_view"></a> get_auto_selection_view

Returns the auto selection accelerator_view, which when specified as the parallel_for_each target results in the target accelerator_view for executing the parallel_for_each kernel to be automatically selected by the runtime. For all other purposes, the accelerator_view returned by this method is the same as the default accelerator_view of the default accelerator

```cpp
static accelerator_view __cdecl get_auto_selection_view();
```

### Return Value

The auto selection accelerator_view.

## <a name="get_dedicated_memory"></a> get_dedicated_memory

Returns the dedicated memory for the `accelerator`, in kilobytes.

```cpp
size_t get_dedicated_memory() const;
```

### Return Value

The dedicated memory for the `accelerator`, in kilobytes.

## <a name="get_default_cpu_access_type"></a> get_default_cpu_access_type

Gets the default cpu access_type for buffers created on this accelerator

```cpp
access_type get_default_cpu_access_type() const;
```

### Return Value

The default cpu access_type for buffers created on this accelerator.

## <a name="get_default_view"></a> get_default_view

Returns the default `accelerator_view` object that is associated with the `accelerator`.

```cpp
accelerator_view get_default_view() const;
```

### Return Value

The default `accelerator_view` object that is associated with the `accelerator`.

## <a name="get_description"></a> get_description

Returns a short description of the `accelerator` device.

```cpp
std::wstring get_description() const;
```

### Return Value

A short description of the `accelerator` device.

## <a name="get_device_path"></a> get_device_path

Returns the path of the accelerator. The path is unique on the system.

```cpp
std::wstring get_device_path() const;
```

### Return Value

The system-wide unique device instance path.

## <a name="get_has_display"></a> get_has_display

Returns a Boolean value that indicates whether the `accelerator` can output to a display.

```cpp
bool get_has_display() const;
```

### Return Value

**`true`** if the `accelerator` can output to a display; otherwise, **`false`**.

## <a name="get_is_debug"></a> get_is_debug

Determines whether the `accelerator` has the DEBUG layer enabled for extensive error reporting.

```cpp
bool get_is_debug() const;
```

### Return Value

**`true`** if the `accelerator` has the DEBUG layer enabled for extensive error reporting. Otherwise, **`false`**.

## <a name="get_is_emulated"></a> get_is_emulated

Determines whether the `accelerator` is emulated.

```cpp
bool get_is_emulated() const;
```

### Return Value

**`true`** if the `accelerator` is emulated. Otherwise, **`false`**.

## <a name="get_supports_cpu_shared_memory"></a> get_supports_cpu_shared_memory

Returns a boolean value indicating whether the accelerator supports memory accessible both by the accelerator and the CPU.

```cpp
bool get_supports_cpu_shared_memory() const;
```

### Return Value

**`true`** if the accelerator supports CPU shared memory; otherwise, **`false`**.

## <a name="get_supports_double_precision"></a> get_supports_double_precision

Returns a Boolean value that indicates whether the accelerator supports double precision math, including fused multiply add (FMA), division, reciprocal, and casting between **`int`** and **`double`**

```cpp
bool get_supports_double_precision() const;
```

### Return Value

**`true`** if the accelerator supports double precision math; otherwise, **`false`**.

## <a name="get_supports_limited_double_precision"></a> get_supports_limited_double_precision

Returns a Boolean value that indicates whether the accelerator has limited support for double precision math. If the accelerator has only limited support, then fused multiply add (FMA), division, reciprocal, and casting between **`int`** and **`double`** are not supported.

```cpp
bool get_supports_limited_double_precision() const;
```

### Return Value

**`true`** if the accelerator has limited support for double precision math; otherwise, **`false`**.

## <a name="get_version"></a> get_version

Returns the version of the `accelerator`.

```cpp
unsigned int get_version() const;
```

### Return Value

The version of the `accelerator`.

## <a name="has_display"></a> has_display

Gets a Boolean value that indicates whether the `accelerator` can output to a display.

```cpp
__declspec(property(get= get_has_display)) bool has_display;
```

## <a name="is_debug"></a> is_debug

Gets a Boolean value that indicates whether the `accelerator` has the DEBUG layer enabled for extensive error reporting.

```cpp
__declspec(property(get= get_is_debug)) bool is_debug;
```

## <a name="is_emulated"></a> is_emulated

Gets a Boolean value that indicates whether the `accelerator` is emulated.

```cpp
__declspec(property(get= get_is_emulated)) bool is_emulated;
```

## <a name="operator_neq"></a> operator!=

Compares this `accelerator` object with another and returns **`false`** if they are the same; otherwise, returns **`true`**.

```cpp
bool operator!= (const accelerator& _Other) const;
```

### Parameters

*_Other*<br/>
The `accelerator` object to compare with this one.

### Return Value

**`false`** if the two `accelerator` objects are the same; otherwise, **`true`**.

## <a name="operator_eq"></a> operator=

Copies the contents of the specified `accelerator` object to this one.

```cpp
accelerator& operator= (const accelerator& _Other);
```

### Parameters

*_Other*<br/>
The `accelerator` object to copy from.

### Return Value

A reference to this `accelerator` object.

## <a name="operator_eq_eq"></a> operator==

Compares this `accelerator` object with another and returns **`true`** if they are the same; otherwise, returns **`false`**.

```cpp
bool operator== (const accelerator& _Other) const;
```

### Parameters

*_Other*<br/>
The `accelerator` object to compare with this one.

### Return Value

**`true`** if the other `accelerator` object is same as this `accelerator` object; otherwise, **`false`**.

## <a name="set_default"></a> set_default

Sets the default accelerator to be used for any operation that implicitly uses the default accelerator. This method only succeeds if the runtime selected default accelerator has not already been used in an operation that implicitly uses the default accelerator

```cpp
static inline bool set_default(std::wstring _Path);
```

### Parameters

*_Path*<br/>
The path to the accelerator.

### Return Value

**`true`** if the call succeeds at setting the default accelerator. Otherwise, **`false`**.

## <a name="set_default_cpu_access_type"></a> set_default_cpu_access_type

Set the default cpu access_type for arrays created on this accelerator or for implicit memory allocations as part of array_views accessed on this accelerator. This method only succeeds if the default_cpu_access_type for the accelerator has not already been overridden by a previous call to this method and the runtime selected default_cpu_access_type for this accelerator has not yet been used for allocating an array or for an implicit memory allocation backing an array_view accessed on this accelerator.

```cpp
bool set_default_cpu_access_type(access_type _Default_cpu_access_type);
```

### Parameters

*_Default_cpu_access_type*<br/>
The default cpu access_type to be used for array/array_view memory allocations on this accelerator.

### Return Value

A boolean value indicating if the default cpu access_type for the accelerator was successfully set.

## <a name="supports_cpu_shared_memory"></a> supports_cpu_shared_memory

Gets a Boolean value indicating whether the `accelerator` supports shared memory.

```cpp
__declspec(property(get= get_supports_cpu_shared_memory)) bool supports_cpu_shared_memory;
```

## <a name="supports_double_precision"></a> supports_double_precision

Gets a Boolean value that indicates whether the accelerator supports double precision math.

```cpp
__declspec(property(get= get_supports_double_precision)) bool supports_double_precision;
```

## <a name="supports_limited_double_precision"></a> supports_limited_double_precision

Gets a Boolean value that indicates whether the accelerator has limited support for double precision math. If the accelerator has only limited support, then fused multiply add (FMA), division, reciprocal, and casting between **`int`** and **`double`** are not supported.

```cpp
__declspec(property(get= get_supports_limited_double_precision)) bool supports_limited_double_precision;
```

## <a name="version"></a> version

Gets the version of the `accelerator`.

```cpp
__declspec(property(get= get_version)) unsigned int version;
```

## See also

[Concurrency Namespace (C++ AMP)](concurrency-namespace-cpp-amp.md)
