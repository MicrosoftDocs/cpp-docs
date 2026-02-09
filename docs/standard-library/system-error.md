---
title: "<system_error>"
description: "Learn more about: <system_error>"
ms.date: 03/15/2019
f1_keywords: ["<system_error>"]
helpviewer_keywords: ["system_error header"]
---
# `<system_error>`

Include the header `<system_error>` to define the exception class `system_error` and related templates for processing low-level system errors.

## Requirements

**Header:** `<system_error>`

**Namespace:** `std`

## Members

### Objects

|Name|Description|
|-|-|
|[`generic_category`](system-error-functions.md#generic_category)|Represents the category for generic errors.|
|[`is_error_code_enum_v`](system-error-functions.md#is_error_code_enum_v)|A helper variable template for the [`is_error_code_enum`](is-error-code-enum-class.md) value.|
|[`is_error_condition_enum_v`](system-error-functions.md#is_error_condition_enum_v)|A helper variable template for the [`is_error_condition_enum`](is-error-condition-enum-class.md) value.|
|[`system_category`](system-error-functions.md#system_category)|Represents the category for operating system errors.|

### Functions

|Name|Description|
|-|-|
|[`make_error_code`](system-error-functions.md#make_error_code)|Creates an [`error_code`](error-code-class.md) object.|
|[`make_error_condition`](system-error-functions.md#make_error_condition)|Creates an [`error_condition`](error-condition-class.md) object.|

### Operators

|Name|Description|
|-|-|
|[`operator==`](system-error-operators.md#op_eq_eq)|Tests if the object on the left side of the operator is equal to the object on the right side.|
|[`operator!=`](system-error-operators.md#op_neq)|Tests if the object on the left side of the operator is not equal to the object on the right side.|
|[`operator<`](system-error-operators.md#op_lt)|Tests if an object is less than the object passed in for comparison.|
|[`operator<<`](system-error-operators.md#op_ostream)|Inserts an [`error_code`](error-code-class.md) object into the output stream.|

### Enums

|Name|Description|
|-|-|
|[`errc`](system-error-enums.md#errc)|Provides symbolic names for all the error-code macros defined by POSIX in `<errno.h>`.|

### Classes and Structs

|Name|Description|
|-|-|
|[`error_category`](error-category-class.md)|Represents the abstract, common base for objects that describes a category of error codes.|
|[`error_code`](error-code-class.md)|Represents low-level system errors that are implementation-specific.|
|[`error_condition`](error-condition-class.md)|Represents user-defined error codes.|
|[`hash`](hash-structure.md#system_error)|Template specializations of [`std::hash`](hash-class.md) for [`error_code`](error-code-class.md) and [`error_condition`](error-condition-class.md).|
|[`is_error_code_enum`](is-error-code-enum-class.md)|Represents a type predicate that tests for the [`error_code`](error-code-class.md) enumeration.|
|[`is_error_condition_enum`](is-error-condition-enum-class.md)|Represents a type predicate that tests for the [`error_condition`](error-condition-class.md) enumeration.|
|[`system_error`](system-error-class.md)|Represents the base class for all exceptions thrown to report a low-level system error.|

## See also

[Header Files Reference](cpp-standard-library-header-files.md)
