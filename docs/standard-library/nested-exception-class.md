---
description: "Learn more about: nested_exception Class"
title: "nested_exception Class"
ms.date: "11/04/2016"
f1_keywords: ["exception/std::nested_exception"]
helpviewer_keywords: ["nested_exception class"]
ms.assetid: 5ae2c4ef-c7ad-4469-8a9e-a773e86bb000
---
# nested_exception Class

The class describes an exception for use with multiple inheritance. It captures the currently handled exception and stores it for later use.

## Syntax

```cpp
class nested_exception {
    public:
        nested_exception();
        nested_exception(const nested_exception&) = default;
        virtual ~nested_exception() = default; // access functions
};
```

## Members

### Operators

|Name|Description|
|-|-|
|[operator=](#op_as)|Assignment operator.|

### Functions

|Name|Description|
|-|-|
|[rethrow_nested](#rethrow_nested)|Throws the stored exception.|
|[nested_ptr](#nested_ptr)|Returns the stored exception.|

### <a name="op_as"></a> operator=

```cpp
nested_exception& operator=(const nested_exception&) = default;
```

### <a name="nested_ptr"></a> nested_ptr

```cpp
exception_ptr nested_ptr() const;
```

#### Return Value

The stored exception captured by this `nested_exception` object.

### <a name="rethrow_nested"></a> rethrow_nested

```cpp
[[noreturn]] void rethrow_nested() const;
```

#### Remarks

If `nested_ptr()` returns a null pointer, the function calls `std::terminate()`. Otherwise, it throws the stored exception captured by **`*this`**.

## Requirements

**Header:** \<exception>

**Namespace:** std

## See also

[exception Class](../standard-library/exception-class.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
