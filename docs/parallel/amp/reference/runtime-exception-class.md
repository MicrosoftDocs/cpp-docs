---
description: "Learn more about: runtime_exception Class"
title: "runtime_exception Class"
ms.date: "03/27/2019"
f1_keywords: ["runtime_exception", "AMPRT/runtime_exception", "AMPRT/Concurrency::runtime_exception", "AMPRT/Concurrency::runtime_exception::get_error_code"]
helpviewer_keywords: ["runtime_exception class"]
ms.assetid: 8fe3ce2c-3d4c-4b9c-95e8-e592f37adefd
---
# runtime_exception Class

The base type for exceptions in the C++ Accelerated Massive Parallelism (AMP) library.

### Syntax

```cpp
class runtime_exception : public std::exception;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[runtime_exception Constructor](#ctor)|Initializes a new instance of the `runtime_exception` class.|
|[~runtime_exception Destructor](#dtor)|Destroys the `runtime_exception` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[get_error_code](#get_error_code)|Returns the error code that caused the exception.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[operator=](#operator_eq)|Copies the contents of the specified `runtime_exception` object into this one.|

## Inheritance Hierarchy

`exception`

`runtime_exception`

## Requirements

**Header:** amprt.h

**Namespace:** Concurrency

## <a name="ctor"></a> runtime_exception Constructor

Initializes a new instance of the class.

### Syntax

```cpp
runtime_exception(
    const char * _Message,
    HRESULT _Hresult ) throw();

explicit runtime_exception(
    HRESULT _Hresult ) throw();

runtime_exception(
    const runtime_exception & _Other ) throw();
```

### Parameters

*_Message*<br/>
A description of the error that caused the exception.

*_Hresult*<br/>
The HRESULT of error that caused the exception.

*_Other*<br/>
The `runtime_exception` object to copy.

### Return Value

The `runtime_exception` object.

## <a name="dtor"></a>  ~runtime_exception Destructor

Destroys the object.

### Syntax

```cpp
virtual ~runtime_exception() throw();
```

## <a name="get_error_code"></a> get_error_code

Returns the error code that caused the exception.

### Syntax

```cpp
HRESULT get_error_code() const throw();
```

### Return Value

The HRESULT of error that caused the exception.

## <a name="operator_eq"></a> operator=

Copies the contents of the specified `runtime_exception` object into this one.

### Syntax

```cpp
runtime_exception & operator= (    const runtime_exception & _Other ) throw();
```

### Parameters

*_Other*<br/>
The `runtime_exception` object to copy.

### Return Value

A reference to this `runtime_exception` object.

## See also

[Concurrency Namespace (C++ AMP)](concurrency-namespace-cpp-amp.md)
