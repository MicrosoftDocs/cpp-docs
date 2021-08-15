---
description: "Learn more about: combinable Class"
title: "combinable Class"
ms.date: "11/04/2016"
f1_keywords: ["combinable", "PPL/concurrency::combinable", "PPL/concurrency::combinable::combinable", "PPL/concurrency::combinable::clear", "PPL/concurrency::combinable::combine", "PPL/concurrency::combinable::combine_each", "PPL/concurrency::combinable::local"]
helpviewer_keywords: ["combinable class"]
ms.assetid: fe0bfbf6-6250-47da-b8d0-f75369f0b5be
---
# combinable Class

The `combinable<T>` object is intended to provide thread-private copies of data, to perform lock-free thread-local sub-computations during parallel algorithms. At the end of the parallel operation, the thread-private sub-computations can then be merged into a final result. This class can be used instead of a shared variable, and can result in a performance improvement if there would otherwise be a lot of contention on that shared variable.

## Syntax

```cpp
template<typename T>
class combinable;
```

### Parameters

*T*<br/>
The data type of the final merged result. The type must have a copy constructor and a default constructor.

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[combinable](#ctor)|Overloaded. Constructs a new `combinable` object.|
|[~combinable Destructor](#dtor)|Destroys a `combinable` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[clear](#clear)|Clears any intermediate computational results from a previous usage.|
|[combine](#combine)|Computes a final value from the set of thread-local sub-computations by calling the supplied combine functor.|
|[combine_each](#combine_each)|Computes a final value from the set of thread-local sub-computations by calling the supplied combine functor once per thread-local sub-computation. The final result is accumulated by the function object.|
|[local](#local)|Overloaded. Returns a reference to the thread-private sub-computation.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[operator=](#operator_eq)|Assigns to a `combinable` object from another `combinable` object.|

## Remarks

For more information, see [Parallel Containers and Objects](../../../parallel/concrt/parallel-containers-and-objects.md).

## Inheritance Hierarchy

`combinable`

## Requirements

**Header:** ppl.h

**Namespace:** concurrency

## <a name="clear"></a> clear

Clears any intermediate computational results from a previous usage.

```cpp
void clear();
```

## <a name="ctor"></a> combinable

Constructs a new `combinable` object.

```cpp
combinable();

template <typename _Function>
explicit combinable(_Function _FnInitialize);

combinable(const combinable& _Copy);
```

### Parameters

*_Function*<br/>
The type of the initialization functor object.

*_FnInitialize*<br/>
A function which will be called to initialize each new thread-private value of the type `T`. It must support a function call operator with the signature `T ()`.

*_Copy*<br/>
An existing `combinable` object to be copied into this one.

### Remarks

The first constructor initializes new elements with the default constructor for the type `T`.

The second constructor initializes new elements using the initialization functor supplied as the `_FnInitialize` parameter.

The third constructor is the copy constructor.

## <a name="dtor"></a> ~combinable

Destroys a `combinable` object.

```cpp
~combinable();
```

## <a name="combine"></a> combine

Computes a final value from the set of thread-local sub-computations by calling the supplied combine functor.

```cpp
template<typename _Function>
T combine(_Function _FnCombine) const;
```

### Parameters

*_Function*<br/>
The type of the function object that will be invoked to combine two thread-local sub-computations.

*_FnCombine*<br/>
The functor that is used to combine the sub-computations. Its signature is `T (T, T)` or `T (const T&, const T&)`, and it must be associative and commutative.

### Return Value

The final result of combining all the thread-private sub-computations.

## <a name="combine_each"></a> combine_each

Computes a final value from the set of thread-local sub-computations by calling the supplied combine functor once per thread-local sub-computation. The final result is accumulated by the function object.

```cpp
template<typename _Function>
void combine_each(_Function _FnCombine) const;
```

### Parameters

*_Function*<br/>
The type of the function object that will be invoked to combine a single thread-local sub-computation.

*_FnCombine*<br/>
The functor that is used to combine one sub-computation. Its signature is `void (T)` or `void (const T&)`, and must be associative and commutative.

## <a name="local"></a> local

Returns a reference to the thread-private sub-computation.

```cpp
T& local();

T& local(bool& _Exists);
```

### Parameters

*_Exists*<br/>
A reference to a boolean. The boolean value referenced by this argument will be set to **`true`** if the sub-computation already existed on this thread, and set to **`false`** if this was the first sub-computation on this thread.

### Return Value

A reference to the thread-private sub-computation.

## <a name="operator_eq"></a> operator=

Assigns to a `combinable` object from another `combinable` object.

```cpp
combinable& operator= (const combinable& _Copy);
```

### Parameters

*_Copy*<br/>
An existing `combinable` object to be copied into this one.

### Return Value

A reference to this `combinable` object.

## See also

[concurrency Namespace](concurrency-namespace.md)
