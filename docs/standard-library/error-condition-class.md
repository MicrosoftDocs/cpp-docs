---
title: "error_condition Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-standard-libraries"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["system_error/std::error_condition", "system_error/std::error_condition::value_type", "system_error/std::error_condition::assign", "system_error/std::error_condition::category", "system_error/std::error_condition::clear", "system_error/std::error_condition::message", "system_error/std::error_condition::operator bool"]
dev_langs: ["C++"]
helpviewer_keywords: ["std::error_condition", "std::error_condition::value_type", "std::error_condition::assign", "std::error_condition::category", "std::error_condition::clear", "std::error_condition::message"]
ms.assetid: 6690f481-97c9-4554-a0ff-851dc96b7a06
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# error_condition Class

Represents user-defined error codes.

## Syntax

```cpp
class error_condition;
```

## Remarks

An object of type `error_condition` stores an error code value and a pointer to an object that represents a [category](../standard-library/error-category-class.md) of error codes used for reported user-defined errors.

### Constructors

|Constructor|Description|
|-|-|
|[error_condition](#error_condition)|Constructs an object of type `error_condition`.|

### Typedefs

|Type name|Description|
|-|-|
|[value_type](#value_type)|A type that represents the stored error code value.|

### Member functions

|Member function|Description|
|-|-|
|[assign](#assign)|Assigns an error code value and category to an error condition.|
|[category](#category)|Returns the error category.|
|[clear](#clear)|Clears the error code value and category.|
|[message](#message)|Returns the name of the error code.|

### Operators

|Operator|Description|
|-|-|
|[operator==](#op_eq_eq)|Tests for equality between `error_condition` objects.|
|[operator!=](#op_neq)|Tests for inequality between `error_condition` objects.|
|[operator<](#op_lt)|Tests if the `error_condition` object is less than the `error_code` object passed in for comparison.|
|[operator=](#op_eq)|Assigns a new enumeration value to the `error_condition` object.|
|[operator bool](#op_bool)|Casts a variable of type `error_condition`.|

## Requirements

**Header:** \<system_error>

**Namespace:** std

## <a name="assign"></a>  error_condition::assign

Assigns an error code value and category to an error condition.

```cpp
void assign(value_type val, const error_category& _Cat);
```

### Parameters

|Parameter|Description|
|---------------|-----------------|
|`val`|The error code value to store in the `error_code`.|
|`_Cat`|The error category to store in the `error_code`.|

### Remarks

The member function stores `val` as the error code value and a pointer to `_Cat`.

## <a name="category"></a>  error_condition::category

Returns the error category.

```cpp
const error_category& category() const;
```

### Return Value

A reference to the stored error category

### Remarks

## <a name="clear"></a>  error_condition::clear

Clears the error code value and category.

```cpp
clear();
```

### Remarks

The member function stores a zero error code value and a pointer to the [generic_category](../standard-library/system-error-functions.md#generic_category) object.

## <a name="error_condition"></a>  error_condition::error_condition

Constructs an object of type `error_condition`.

```cpp
error_condition();

error_condition(value_type val, const error_category& _Cat);

template <class _Enum>
error_condition(_Enum _Errcode,
    typename enable_if<is_error_condition_enum<_Enum>::value,
    error_code>::type* = 0);
```

### Parameters

|Parameter|Description|
|---------------|-----------------|
|`val`|The error code value to store in the `error_condition`.|
|`_Cat`|The error category to store in the `error_condition`.|
|`_Errcode`|The enumeration value to store in the `error_condition`.|

### Remarks

The first constructor stores a zero error code value and a pointer to the [generic_category](../standard-library/system-error-functions.md#generic_category).

The second constructor stores `val` as the error code value and a pointer to [error_category](http://msdn.microsoft.com/en-us/6fe57a15-63a1-4e79-8af4-6738e43e19c8).

The third constructor stores `(value_type)_Errcode` as the error code value and a pointer to the [generic_category](../standard-library/system-error-functions.md#generic_category).

## <a name="message"></a>  error_condition::message

Returns the name of the error code.

```cpp
string message() const;
```

### Return Value

A `string` representing the name of the error code.

### Remarks

This member function returns `category().message(value())`.

## <a name="op_eq_eq"></a>  error_condition::operator==

Tests for equality between `error_condition` objects.

```cpp
bool operator==(const error_condition& right) const;
```

### Parameters

|Parameter|Description|
|---------------|-----------------|
|`right`|The ojbect to be tested for equality.|

### Return Value

**true** if the objects are equal; **false** if objects are not equal.

### Remarks

The member operator returns `category() == right.category() && value == right.value()`.

## <a name="op_neq"></a>  error_condition::operator!=

Tests for inequality between `error_condition` objects.

```cpp
bool operator!=(const error_condition& right) const;
```

### Parameters

|Parameter|Description|
|---------------|-----------------|
|`right`|The object to be tested for inequality.|

### Return Value

**true** if the `error_condition` object is not equal to the `error_condition` object passed in `right`; otherwise **false**.

### Remarks

The member operator returns `!(*this == right)`.

## <a name="op_lt"></a>  error_condition::operator&lt;

Tests if the `error_condition` object is less than the `error_code` object passed in for comparison.

```cpp
bool operator<(const error_condition& right) const;
```

### Parameters

|Parameter|Description|
|---------------|-----------------|
|`right`|The `error_condition` object to be compared.|

### Return Value

**true** if the `error_condition` object is less than the `error_condition` object passed in for comparison; Otherwise, **false**.

### Remarks

The member operator returns `category() < right.category() || category() == right.category() && value < right.value()`.

## <a name="op_eq"></a>  error_condition::operator=

Assigns a new enumeration value to the `error_condition` object.

```cpp
template <class _Enum>
error_condition(_Enum error,
    typename enable_if<is_error_condition_enum<_Enum>::value,
    error_condition>::type&
 operator=(Enum _Errcode);
```

### Parameters

|Parameter|Description|
|---------------|-----------------|
|`_Errcode`|The enumeration value to assign to the `error_condition` object.|

### Return Value

A reference to the `error_condition` object that is being assigned the new enumeration value by the member function.

### Remarks

The member operator stores `(value_type)error` as the error code value and a pointer to the [generic_category](../standard-library/system-error-functions.md#generic_category). It returns `*this`.

## <a name="op_bool"></a>  error_condition::operator bool

Casts a variable of type `error_condition`.

```cpp
explicit operator bool() const;
```

### Return Value

The Boolean value of the `error_condition` object.

### Remarks

The operator returns a value convertible to `true` only if [value](#value) is not equal to zero. The return type is convertible only to `bool`, not to `void *` or other known scalar types.

## <a name="value"></a>  error_condition::value

Returns the stored error code value.

```cpp
value_type value() const;
```

### Return Value

The stored error code value of type [value_type](#value_type).

### Remarks

## <a name="value_type"></a>  error_condition::value_type

A type that represents the stored error code value.

```cpp
typedef int value_type;
```

### Remarks

The type definition is a synonym for `int`.

## See also

[error_category Class](../standard-library/error-category-class.md)<br/>
[<system_error>](../standard-library/system-error.md)<br/>
