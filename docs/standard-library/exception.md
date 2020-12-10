---
description: "Learn more about: &lt;exception&gt;"
title: "&lt;exception&gt;"
ms.date: "11/04/2016"
f1_keywords: ["<exception>"]
helpviewer_keywords: ["exception header"]
ms.assetid: 28900768-5dd7-4834-b907-5e37ab3407db
---
# &lt;exception&gt;

Defines several types and functions related to the handling of exceptions. Exception handling is used in situations in which the system can recover from an error. It provides a means for control to be returned from a function to the program. The objective of incorporating exception handling is to increase the program's robustness while providing a way to recover from an error in an orderly fashion.

## Requirements

**Header:** \<exception>

**Namespace:** std

## Members

### Typedefs

|Name|Description|
|-|-|
|[exception_ptr](../standard-library/exception-typedefs.md#exception_ptr)|A type that describes a pointer to an exception.|
|[terminate_handler](../standard-library/exception-typedefs.md#terminate_handler)|A type that describes a pointer to a function suitable for use as a `terminate_handler`.|
|[unexpected_handler](../standard-library/exception-typedefs.md#unexpected_handler)|A type that describes a pointer to a function suitable for use as an `unexpected_handler`.|

### Functions

|Name|Description|
|-|-|
|[current_exception](../standard-library/exception-functions.md#current_exception)|Obtains a pointer to the current exception.|
|[get_terminate](../standard-library/exception-functions.md#get_terminate)|Obtains the current `terminate_handler` function.|
|[get_unexpected](../standard-library/exception-functions.md#get_unexpected)|Obtains the current `unexpected_handler` function.|
|[make_exception_ptr](../standard-library/exception-functions.md#make_exception_ptr)|Creates an `exception_ptr` object that holds a copy of an exception.|
|[rethrow_exception](../standard-library/exception-functions.md#rethrow_exception)|Throws an exception passed as a parameter.|
|[rethrow_if_nested](../standard-library/exception-functions.md#rethrow_if_nested)|Casts and throws exception if nested.|
|[set_terminate](../standard-library/exception-functions.md#set_terminate)|Establishes a new `terminate_handler` to be called at the termination of the program.|
|[set_unexpected](../standard-library/exception-functions.md#set_unexpected)|Establishes a new `unexpected_handler` to be when an unexpected exception is encountered.|
|[terminate](../standard-library/exception-functions.md#terminate)|Calls a terminate handler.|
|[throw_with_nested](../standard-library/exception-functions.md#throw_with_nested)|Throws exception if nested.|
|[uncaught_exception](../standard-library/exception-functions.md#uncaught_exception)|Returns **`true`** only if a thrown exception is being currently processed.|
|[unexpected](../standard-library/exception-functions.md#unexpected)|Calls an unexpected handler.|

### Classes

|Name|Description|
|-|-|
|[bad_exception Class](../standard-library/bad-exception-class.md)|The class describes an exception that can be thrown from an `unexpected_handler`.|
|[exception Class](../standard-library/exception-class.md)|The class serves as the base class for all exceptions thrown by certain expressions and by the C++ Standard Library.|
|[nested_exception Class](../standard-library/nested-exception-class.md)|The class describes an exception that can be captured and stored for later use.|

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
