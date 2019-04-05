---
title: "nested_exception Class"
ms.date: "11/04/2016"
f1_keywords: ["exception/std::bad_exception"]
helpviewer_keywords: ["bad_exception class"]
ms.assetid: 5ae2c4ef-c7ad-4469-8a9e-a773e86bb000
---
# bad_exception Class

The class describes an exception that can be thrown from an unexpected handler.

## Syntax

```cpp
class nested_exception {
    public: nested_exception();
    nested_exception(const nested_exception&) noexcept = default;
    nested_exception& operator=(const nested_exception&) noexcept = default;
    virtual ~nested_exception() = default; // access functions [[noreturn]]
    void rethrow_nested() const;
    exception_ptr nested_ptr() const noexcept; 
};

template<class T> [[noreturn]] void throw_with_nested(T&& t); template <class E> void rethrow_if_nested(const E& e);


template<class T> [[noreturn]] void throw_with_nested(T&& t); template <class E> void rethrow_if_nested(const E& e);
} 

    void rethrow_nested() const;

```

## Remarks

[unexpected](../standard-library/exception-functions.md#unexpected) will throw a `bad_exception` instead of terminating or instead of calling another function specified with [set_unexpected](../standard-library/exception-functions.md#set_unexpected) if `bad_exception` is included in the throw list of a function.

The value returned by `what` is an implementation-defined C string. None of the member functions throw any exceptions.

For a list of members inherited by the `bad_exception` class, see [exception Class](../standard-library/exception-class.md).

## Example

See [set_unexpected](../standard-library/exception-functions.md#set_unexpected) for an example of the use of [unexpected](../standard-library/exception-functions.md#unexpected) throwing a `bad_exception`.

## Requirements

**Header:** \<exception>

**Namespace:** std

## See also

[exception Class](../standard-library/exception-class.md)<br/>
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
