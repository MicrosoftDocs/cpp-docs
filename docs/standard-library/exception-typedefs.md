---
description: "Learn more about: &lt;exception&gt; typedefs"
title: "&lt;exception&gt; typedefs"
ms.date: "11/04/2016"
f1_keywords: ["exception/std::exception_ptr", "exception/std::terminate_handler", "exception/std::unexpected_handler"]
ms.assetid: 2a338480-35e2-46f7-b223-52d4e84a5768
---
# &lt;exception&gt; typedefs

## <a name="exception_ptr"></a> exception_ptr

A type that describes a pointer to an exception.

```cpp
typedef unspecified exception_ptr;
```

### Remarks

An unspecified internal class that is used to implement the `exception_ptr` type.

Use an `exception_ptr` object to reference the current exception or an instance of a user-specified exception. In the Microsoft implementation, an exception is represented by an [EXCEPTION_RECORD](/windows/win32/api/winnt/ns-winnt-exception_record) structure. Each `exception_ptr` object includes an exception reference field that points to a copy of the `EXCEPTION_RECORD` structure that represents the exception.

When you declare an `exception_ptr` variable, the variable is not associated with any exception. That is, its exception reference field is NULL. Such an `exception_ptr` object is called a *null exception_ptr*.

Use the `current_exception` or `make_exception_ptr` function to assign an exception to an `exception_ptr` object. When you assign an exception to an `exception_ptr` variable, the variable's exception reference field points to a copy of the exception. If there is insufficient memory to copy the exception, the exception reference field points to a copy of a [std::bad_alloc](../standard-library/bad-alloc-class.md) exception. If the `current_exception` or `make_exception_ptr` function cannot copy the exception for any other reason, the function calls the `terminate` CRT function to exit the current process.

Despite its name, an `exception_ptr` object is not itself a pointer. It does not obey pointer semantics and cannot be used with the pointer member access ( `->`) or indirection (*) operators. The `exception_ptr` object has no public data members or member functions.

**Comparisons:**

You can use the equal ( `==`) and not-equal ( `!=`) operators to compare two `exception_ptr` objects. The operators do not compare the binary value (bit pattern) of the `EXCEPTION_RECORD` structures that represent the exceptions. Instead, the operators compare the addresses in the exception reference field of the `exception_ptr` objects. Consequently, a null `exception_ptr` and the NULL value compare as equal.

## <a name="terminate_handler"></a> terminate_handler

The type describes a pointer to a function suitable for use as a `terminate_handler`.

```cpp
typedef void (*terminate_handler)();
```

### Remarks

The type describes a pointer to a function suitable for use as a terminate handler.

### Example

See [set_terminate](../standard-library/exception-functions.md#set_terminate) for an example of the use of `terminate_handler`.

## <a name="unexpected_handler"></a> unexpected_handler

The type describes a pointer to a function suitable for use as an `unexpected_handler`.

```cpp
typedef void (*unexpected_handler)();
```

### Example

See [set_unexpected](../standard-library/exception-functions.md#set_unexpected) for an example of the use of `unexpected_handler`.
