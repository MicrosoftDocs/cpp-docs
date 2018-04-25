---
title: "error_category Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-standard-libraries"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["system_error/std::error_category", "system_error/std::error_category::value_type", "system_error/std::error_category::default_error_condition", "system_error/std::error_category::equivalent", "system_error/std::error_category::message", "system_error/std::error_category::name"]
dev_langs: ["C++"]
helpviewer_keywords: ["std::error_category", "std::error_category::value_type", "std::error_category::default_error_condition", "std::error_category::equivalent", "std::error_category::message", "std::error_category::name"]
ms.assetid: e0a71e14-852d-4905-acd6-5f8ed426706d
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# error_category Class

Represents the abstract, common base for objects that describes a category of error codes.

## Syntax

```cpp
class error_category;
```

## Remarks

Two predefined objects implement `error_category`: [generic_category](../standard-library/system-error-functions.md#generic_category) and [system_category](../standard-library/system-error-functions.md#system_category).

### Typedefs

|Type name|Description|
|-|-|
|[value_type](#value_type)|A type that represents the stored error code value.|

### Member functions

|Member function|Description|
|-|-|
|[default_error_condition](#default_error_condition)|Stores the error code value for an error condition object.|
|[equivalent](#equivalent)|Returns a value that specifies whether error objects are equivalent.|
|[message](#message)|Returns the name of the specified error code.|
|[name](#name)|Returns the name of the category.|

### Operators

|Operator|Description|
|-|-|
|[operator==](#op_eq_eq)|Tests for equality between `error_category` objects.|
|[operator!=](#op_neq)|Tests for inequality between `error_category` objects.|
|[operator<](#op_lt)|Tests if the [error_category](../standard-library/error-category-class.md) object is less than the `error_category` object passed in for comparison.|

## Requirements

**Header:** \<system_error>

**Namespace:** std

## <a name="default_error_condition"></a>  error_category::default_error_condition

Stores the error code value for an error condition object.

```cpp
virtual error_condition default_error_condition(int _Errval) const;
```

### Parameters

|Parameter|Description|
|---------------|-----------------|
|`_Errval`|The error code value to store in the [error_condition](../standard-library/error-condition-class.md).|

### Return Value

Returns `error_condition(_Errval, *this)`.

### Remarks

## <a name="equivalent"></a>  error_category::equivalent

Returns a value that specifies whether error objects are equivalent.

```cpp
virtual bool equivalent(value_type _Errval,
    const error_condition& _Cond) const;

virtual bool equivalent(const error_code& _Code,
    value_type _Errval) const;
```

### Parameters

|Parameter|Description|
|---------------|-----------------|
|`_Errval`|The error code value to compare.|
|`_Cond`|The [error_condition](../standard-library/error-condition-class.md) object to compare.|
|`_Code`|The [error_code](../standard-library/error-code-class.md) object to compare.|

### Return Value

`true` if the category and value are equal; otherwise, `false`.

### Remarks

The first member function returns `*this == _Cond.category() && _Cond.value() == _Errval`.

The second member function returns `*this == _Code.category() && _Code.value() == _Errval`.

## <a name="message"></a>  error_category::message

Returns the name of the specified error code.

```cpp
virtual string message(error_code::value_type val) const = 0;
```

### Parameters

|Parameter|Description|
|---------------|-----------------|
|`val`|The error code value to describe.|

### Return Value

Returns a descriptive name of the error code `val` for the category.

### Remarks

## <a name="name"></a>  error_category::name

Returns the name of the category.

```cpp
virtual const char *name() const = 0;
```

### Return Value

Returns the name of the category as a null-terminated byte string.

### Remarks

## <a name="op_eq_eq"></a>  error_category::operator==

Tests for equality between `error_category` objects.

```cpp
bool operator==(const error_category& right) const;
```

### Parameters

|Parameter|Description|
|---------------|-----------------|
|`right`|The object to be tested for equality.|

### Return Value

**true** if the objects are equal; **false** if the objects are not equal.

### Remarks

This member operator returns `this == &right`.

## <a name="op_neq"></a>  error_category::operator!=

Tests for inequality between `error_category` objects.

```cpp
bool operator!=(const error_category& right) const;
```

### Parameters

|Parameter|Description|
|---------------|-----------------|
|`right`|The object to be tested for inequality.|

### Return Value

**true** if the `error_category` object is not equal to the `error_category` object passed in `right`; otherwise **false**.

### Remarks

The member operator returns `(!*this == right)`.

## <a name="op_lt"></a>  error_category::operator&lt;

Tests if the [error_category](../standard-library/error-category-class.md) object is less than the `error_category` object passed in for comparison.

```cpp
bool operator<(const error_category& right) const;
```

### Parameters

|Parameter|Description|
|---------------|-----------------|
|`right`|The `error_category` object to be compared.|

### Return Value

**true** if the `error_category` object is less than the `error_category` object passed in for comparison; Otherwise, **false**.

### Remarks

The member operator returns `this < &right`.

## <a name="value_type"></a>  error_category::value_type

A type that represents the stored error code value.

```cpp
typedef int value_type;
```

### Remarks

This type definition is a synonym for `int`.

## See also

[<system_error>](../standard-library/system-error.md)<br/>
