---
description: "Learn more about: error_code Class"
title: "error_code Class"
ms.date: "11/04/2016"
f1_keywords: ["system_error/std::error_code", "system_error/std::error_code::value_type", "system_error/std::error_code::assign", "system_error/std::error_code::category", "system_error/std::error_code::clear", "system_error/std::error_code::default_error_condition", "system_error/std::error_code::message", "system_error/std::error_code::operator bool"]
helpviewer_keywords: ["std::error_code", "std::error_code::value_type", "std::error_code::assign", "std::error_code::category", "std::error_code::clear", "std::error_code::default_error_condition", "std::error_code::message"]
ms.assetid: c09b4a96-cb14-4281-a319-63543f9b2b4a
---
# error_code Class

Represents low-level system errors that are implementation-specific.

## Syntax

```cpp
class error_code;
```

## Remarks

An object of type `error_code` class stores an error code value and a pointer to an object that represents a [category](../standard-library/error-category-class.md) of error codes that describe reported low-level system errors.

## Members

### Constructors

|Name|Description|
|-|-|
|[error_code](#error_code)|Constructs an object of type `error_code`.|

### Typedefs

|Name|Description|
|-|-|
|[value_type](#value_type)|A type that represents the stored error code value.|

### Functions

|Name|Description|
|-|-|
|[assign](#assign)|Assigns an error code value and category to an error code.|
|[category](#category)|Returns the error category.|
|[clear](#clear)|Clears the error code value and category.|
|[default_error_condition](#default_error_condition)|Returns the default error condition.|
|[message](#message)|Returns the name of the error code.|

### Operators

|Name|Description|
|-|-|
|[operator==](#op_eq_eq)|Tests for equality between `error_code` objects.|
|[operator!=](#op_neq)|Tests for inequality between `error_code` objects.|
|[operator<](#op_lt)|Tests if the `error_code` object is less than the `error_code` object passed in for comparison.|
|[operator=](#op_eq)|Assigns a new enumeration value to the `error_code` object.|
|[operator bool](#op_bool)|Casts a variable of type `error_code`.|

### <a name="assign"></a> assign

Assigns an error code value and category to an error code.

```cpp
void assign(value_type val, const error_category& _Cat);
```

#### Parameters

*val*\
The error code value to store in the `error_code`.

*_Cat*\
The error category to store in the `error_code`.

#### Remarks

The member function stores *val* as the error code value and a pointer to *_Cat*.

### <a name="category"></a> category

Returns the error category.

```cpp
const error_category& category() const;
```

#### Remarks

### <a name="clear"></a> clear

Clears the error code value and category.

```cpp
clear();
```

#### Remarks

The member function stores a zero error code value and a pointer to the [generic_category](../standard-library/system-error-functions.md#generic_category) object.

### <a name="default_error_condition"></a> default_error_condition

Returns the default error condition.

```cpp
error_condition default_error_condition() const;
```

#### Return Value

The [error_condition](../standard-library/error-condition-class.md) specified by [default_error_condition](../standard-library/error-category-class.md#default_error_condition).

#### Remarks

This member function returns `category().default_error_condition(value())`.

### <a name="error_code"></a> error_code

Constructs an object of type `error_code`.

```cpp
error_code();

error_code(value_type val, const error_category& _Cat);

template <class _Enum>
error_code(_Enum _Errcode,
    typename enable_if<is_error_code_enum<_Enum>::value,
    error_code>::type* = 0);
```

#### Parameters

*val*\
The error code value to store in the `error_code`.

*_Cat*\
The error category to store in the `error_code`.

*_Errcode*\
The enumeration value to store in the `error_code`.

#### Remarks

The first constructor stores a zero error code value and a pointer to the [generic_category](../standard-library/system-error-functions.md#generic_category).

The second constructor stores *val* as the error code value and a pointer to [error_category](../standard-library/error-category-class.md).

The third constructor stores `(value_type)_Errcode` as the error code value and a pointer to the [generic_category](../standard-library/system-error-functions.md#generic_category).

### <a name="message"></a> message

Returns the name of the error code.

```cpp
string message() const;
```

#### Return Value

A `string` representing the name of the error code.

#### Remarks

This member function returns `category().message(value())`.

### <a name="op_eq_eq"></a> operator==

Tests for equality between `error_code` objects.

```cpp
bool operator==(const error_code& right) const;
```

#### Parameters

*right*\
The object to be tested for equality.

#### Return Value

**`true`** if the objects are equal; **`false`** if objects are not equal.

#### Remarks

The member operator returns `category() == right.category() && value == right.value()`.

### <a name="op_neq"></a> operator!=

Tests for inequality between `error_code` objects.

```cpp
bool operator!=(const error_code& right) const;
```

#### Parameters

*right*\
The object to be tested for inequality.

#### Return Value

**`true`** if the `error_code` object is not equal to the `error_code` object passed in *right*; otherwise **`false`**.

#### Remarks

The member operator returns `!(*this == right)`.

### <a name="op_lt"></a> operator&lt;

Tests if the `error_code` object is less than the `error_code` object passed in for comparison.

```cpp
bool operator<(const error_code& right) const;
```

#### Parameters

*right*\
The error_code object to be compared.

#### Return Value

**`true`** if the `error_code` object is less than the `error_code` object passed in for comparison; Otherwise, **`false`**.

#### Remarks

The member operator returns `category() < right.category() || category() == right.category() && value < right.value()`.

### <a name="op_eq"></a> operator=

Assigns a new enumeration value to the `error_code` object.

```cpp
template <class _Enum>
typename enable_if<is_error_code_enum<_Enum>::value, error_code>::type&
    operator=(_Enum _Errcode);
```

#### Parameters

*_Errcode*\
The enumeration value to assign to the `error_code` object.

#### Return Value

A reference to the `error_code` object that is being assigned the new enumeration value by the member function.

#### Remarks

The member operator stores `(value_type)_Errcode` as the error code value and a pointer to the [generic_category](../standard-library/system-error-functions.md#generic_category). It returns **`*this`**.

### <a name="op_bool"></a> operator bool

Casts a variable of type `error_code`.

```cpp
explicit operator bool() const;
```

#### Return Value

The Boolean value of the `error_code` object.

#### Remarks

The operator returns a value convertible to **`true`** only if [value](#value) is not equal to zero. The return type is convertible only to **`bool`**, not to `void *` or other known scalar types.

### <a name="value"></a> value

Returns the stored error code value.

```cpp
value_type value() const;
```

### Return Value

The stored error code value of type [value_type](#value_type).

### <a name="value_type"></a> value_type

A type that represents the stored error code value.

```cpp
typedef int value_type;
```

#### Remarks

This type definition is a synonym for **`int`**.
