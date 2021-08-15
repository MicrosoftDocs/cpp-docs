---
description: "Learn more about: accelerator_view Class"
title: "accelerator_view Class"
ms.date: "03/27/2019"
f1_keywords: ["accelerator_view", "AMPRT/accelerator_view", "AMPRT/Concurrency::accelerator_view::accelerator_view", "AMPRT/Concurrency::accelerator_view::create_marker", "AMPRT/Concurrency::accelerator_view::flush", "AMPRT/Concurrency::accelerator_view::get_accelerator", "AMPRT/Concurrency::accelerator_view::get_is_auto_selection", "AMPRT/Concurrency::accelerator_view::get_is_debug", "AMPRT/Concurrency::accelerator_view::get_queuing_mode", "AMPRT/Concurrency::accelerator_view::get_version", "AMPRT/Concurrency::accelerator_view::wait", "AMPRT/Concurrency::accelerator_view::accelerator", "AMPRT/Concurrency::accelerator_view::is_auto_selection", "AMPRT/Concurrency::accelerator_view::is_debug", "AMPRT/Concurrency::accelerator_view::queuing_mode", "AMPRT/Concurrency::accelerator_view::version"]
helpviewer_keywords: ["accelerator_view class"]
ms.assetid: 9f298c21-bf62-46e0-88b8-01c5c78ef144
---
# accelerator_view Class

Represents a virtual device abstraction on a C++ AMP data-parallel accelerator.

## Syntax

```cpp
class accelerator_view;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[accelerator_view Constructor](#ctor)|Initializes a new instance of the `accelerator_view` class.|
|[~accelerator_view Destructor](#dtor)|Destroys the `accelerator_view` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[create_marker](#create_marker)|Returns a future to track the completion of all commands submitted so far to this `accelerator_view` object.|
|[flush](#flush)|Submits all pending commands queued to the `accelerator_view` object to the accelerator for execution.|
|[get_accelerator](#get_accelerator)|Returns the `accelerator` object for the `accelerator_view` object.|
|[get_is_auto_selection](#get_is_auto_selection)|Returns a Boolean value that indicates whether the runtime will automatically select an appropriate accelerator when the `accelerator_view` object is passed to a [parallel_for_each](concurrency-namespace-functions-amp.md#parallel_for_each).|
|[get_is_debug](#get_is_debug)|Returns a Boolean value that indicates whether the `accelerator_view` object has the DEBUG layer enabled for extensive error reporting.|
|[get_queuing_mode](#get_queuing_mode)|Returns the queuing mode for the `accelerator_view` object.|
|[get_version](#get_version)|Returns the version of the `accelerator_view`.|
|[wait](#wait)|Waits for all commands submitted to the `accelerator_view` object to finish.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[operator!=](#operator_neq)|Compares this `accelerator_view` object with another and returns **`false`** if they are the same; otherwise, returns **`true`**.|
|[operator=](#operator_eq)|Copies the contents of the specified `accelerator_view` object into this one.|
|[operator==](#operator_eq_eq)|Compares this `accelerator_view` object with another and returns **`true`** if they are the same; otherwise, returns **`false`**.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[accelerator](#accelerator)|Gets the `accelerator` object for the `accelerator_view` object.|
|[is_auto_selection](#is_auto_selection)|Gets a Boolean value that indicates whether the runtime will automatically select an appropriate accelerator when the `accelerator_view` object is passed to a [parallel_for_each](concurrency-namespace-functions-amp.md#parallel_for_each).|
|[is_debug](#is_debug)|Gets a Boolean value that indicates whether the `accelerator_view` object has the DEBUG layer enabled for extensive error reporting.|
|[queuing_mode](#queuing_mode)|Gets the queuing mode for the `accelerator_view` object.|
|[version](#version)|Gets the version of the accelerator.|

## Inheritance Hierarchy

`accelerator_view`

### Remarks

An `accelerator_view` object represents a logical, isolated view of an accelerator. A single physical compute device can have many logical, isolated `accelerator_view` objects. Each accelerator has a default `accelerator_view` object. Additional `accelerator_view` objects can be created.

Physical devices can be shared among many client threads. Client threads can cooperatively use the same `accelerator_view` object of an accelerator, or each client can communicate with a compute device via an independent `accelerator_view` object for isolation from other client threads.

An `accelerator_view` object can have one of two [queuing_mode Enumeration](concurrency-namespace-enums-amp.md#queuing_mode) states. If the queuing mode is `immediate`, commands like `copy` and `parallel_for_each` are sent to the corresponding accelerator device as soon as they return to the caller. If the queuing mode is `deferred`, such commands are queued up on a command queue that corresponds to the `accelerator_view` object. Commands are not actually sent to the device until `flush()` is called.

## Requirements

**Header:** amprt.h

**Namespace:** Concurrency

## <a name="accelerator"></a> accelerator

Gets the accelerator object for the accelerator_view object.

### Syntax

```cpp
__declspec(property(get= get_accelerator)) Concurrency::accelerator accelerator;
```

## <a name="ctor"></a> accelerator_view

Initializes a new instance of the accelerator_view class by copying an existing `accelerator_view` object.

### Syntax

```cpp
accelerator_view( const accelerator_view & other );
```

### Parameters

*other*<br/>
The `accelerator_view` object to copy.

## <a name="create_marker"></a> create_marker

Returns a future to track the completion of all commands submitted so far to this `accelerator_view` object.

### Syntax

```cpp
concurrency::completion_future create_marker();
```

### Return Value

A future to track the completion of all commands submitted so far to this `accelerator_view` object.

## flush

Submits all pending commands queued to the accelerator_view object to the accelerator for execution.

### Syntax

```cpp
void flush();
```

### Return Value

Returns **`void`**.

## <a name="get_accelerator"></a> get_accelerator

Returns the accelerator object for the accelerator_view object.

### Syntax

```cpp
accelerator get_accelerator() const;
```

### Return Value

The accelerator object for the accelerator_view object.

## <a name="get_is_auto_selection"></a> get_is_auto_selection

Returns a Boolean value that indicates whether the runtime will automatically select an appropriate accelerator when the accelerator_view is passed to a [parallel_for_each](concurrency-namespace-functions-amp.md#parallel_for_each).

### Syntax

```cpp
bool get_is_auto_selection() const;
```

### Return Value

**`true`** if the runtime will automatically select an appropriate accelerator; otherwise, **`false`**.

## <a name="get_is_debug"></a> get_is_debug

Returns a Boolean value that indicates whether the accelerator_view object has the DEBUG layer enabled for extensive error reporting.

### Syntax

```cpp
bool get_is_debug() const;
```

### Return Value

A Boolean value that indicates whether the `accelerator_view` object has the DEBUG layer enabled for extensive error reporting.

## <a name="get_queuing_mode"></a> get_queuing_mode

Returns the queuing mode for the accelerator_view object.

### Syntax

```cpp
queuing_mode get_queuing_mode() const;
```

### Return Value

The queuing mode for the `accelerator_view` object.

## <a name="get_version"></a> get_version

Returns the version of the accelerator_view.

### Syntax

```cpp
unsigned int get_version() const;
```

### Return Value

The version of the `accelerator_view`.

## <a name="is_auto_selection"></a> is_auto_selection

Gets a Boolean value that indicates whether the runtime will automatically select an appropriate accelerator when the accelerator_view is passed to a [parallel_for_each](concurrency-namespace-functions-amp.md#parallel_for_each).

### Syntax

```cpp
__declspec(property(get= get_is_auto_selection)) bool is_auto_selection;
```

## <a name="is_debug"></a> is_debug

Gets a Boolean value that indicates whether the accelerator_view object has the  DEBUG layer enabled for extensive error reporting.

### Syntax

```cpp
__declspec(property(get= get_is_debug)) bool is_debug;
```

## <a name="operator_neq"></a> operator!=

Compares this accelerator_view object with another and returns **`false`** if they are the same; otherwise, returns **`true`**.

### Syntax

```cpp
bool operator!= ( const accelerator_view & other ) const;
```

### Parameters

*other*<br/>
The `accelerator_view` object to compare with this one.

### Return Value

**`false`** if the two objects are the same; otherwise, **`true`**.

## <a name="operator_eq"></a> operator=

Copies the contents of the specified accelerator_view object into this one.

### Syntax

```cpp
accelerator_view & operator= ( const accelerator_view & other );
```

### Parameters

*other*<br/>
The `accelerator_view` object to copy from.

### Return Value

A reference to the modified `accelerator_view` object.

## <a name="operator_eq_eq"></a> operator==

Compares this accelerator_view object with another and returns **`true`** if they are the same; otherwise, returns **`false`**.

### Syntax

```cpp
bool operator== ( const accelerator_view & other ) const;
```

### Parameters

*other*<br/>
The `accelerator_view` object to compare with this one.

### Return Value

**`true`** if the two objects are the same; otherwise, **`false`**.

## <a name="queuing_mode"></a> queuing_mode

Gets the queuing mode for the accelerator_view object.

### Syntax

```cpp
__declspec(property(get= get_queuing_mode)) Concurrency::queuing_mode queuing_mode;
```

## version

Gets the version of the accelerator_view.

### Syntax

```cpp
__declspec(property(get= get_version)) unsigned int version;
```

## wait

Waits for all commands submitted to the accelerator_view object to finish.

### Syntax

```cpp
void wait();
```

### Return Value

Returns **`void`**.

### Remarks

If the [queuing_mode](concurrency-namespace-enums-amp.md#queuing_mode) is `immediate`, this method returns immediately without blocking.

## <a name="dtor"></a> ~accelerator_view

Destroys the accelerator_view object.

### Syntax

```cpp
~accelerator_view();
```

## See also

[Concurrency Namespace (C++ AMP)](concurrency-namespace-cpp-amp.md)
