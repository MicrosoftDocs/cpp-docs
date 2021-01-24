---
description: "Learn more about: error_category Class"
title: "error_category Class"
ms.date: "11/04/2016"
f1_keywords: ["system_error/std::error_category", "system_error/std::error_category::value_type", "system_error/std::error_category::default_error_condition", "system_error/std::error_category::equivalent", "system_error/std::error_category::message", "system_error/std::error_category::name"]
helpviewer_keywords: ["std::error_category", "std::error_category::value_type", "std::error_category::default_error_condition", "std::error_category::equivalent", "std::error_category::message", "std::error_category::name"]
ms.assetid: e0a71e14-852d-4905-acd6-5f8ed426706d
---
# error_category Class

Represents the abstract, common base for objects that describes a category of error codes.

## Syntax

```cpp
class error_category;

constexpr error_category() noexcept;
virtual ~error_category();
error_category(const error_category&) = delete
```

## Remarks

Two predefined objects implement `error_category`: [generic_category](../standard-library/system-error-functions.md#generic_category) and [system_category](../standard-library/system-error-functions.md#system_category).

## Members

### Typedefs

|Name|Description|
|-|-|
|[value_type](#value_type)|A type that represents the stored error code value.|

### Functions

|Name|Description|
|-|-|
|[default_error_condition](#default_error_condition)|Stores the error code value for an error condition object.|
|[equivalent](#equivalent)|Returns a value that specifies whether error objects are equivalent.|
|[generic_category](#generic)||
|[message](#message)|Returns the name of the specified error code.|
|[name](#name)|Returns the name of the category.|
|[system_category](#system)||

### Operators

|Name|Description|
|-|-|
|[operator=](#op_as)|Assignment operator.|
|[operator==](#op_eq_eq)|Tests for equality between `error_category` objects.|
|[operator!=](#op_neq)|Tests for inequality between `error_category` objects.|
|[operator<](#op_lt)|Tests if the [error_category](../standard-library/error-category-class.md) object is less than the `error_category` object passed in for comparison.|

## <a name="default_error_condition"></a> default_error_condition

Stores the error code value for an error condition object.

```cpp
virtual error_condition default_error_condition(int _Errval) const;
```

### Parameters

`_Errval`\
The error code value to store in the [error_condition](../standard-library/error-condition-class.md).

### Return Value

Returns `error_condition(_Errval, *this)`.

### Remarks

### <a name="equivalent"></a> equivalent

Returns a value that specifies whether error objects are equivalent.

```cpp
virtual bool equivalent(value_type _Errval,
    const error_condition& _Cond) const;

virtual bool equivalent(const error_code& _Code,
    value_type _Errval) const;
```

#### Parameters

*_Errval*\
The error code value to compare.

*_Cond*\
The [error_condition](../standard-library/error-condition-class.md) object to compare.

*_Code*\
The [error_code](../standard-library/error-code-class.md) object to compare.

#### Return Value

**`true`** if the category and value are equal; otherwise, **`false`**.

#### Remarks

The first member function returns `*this == _Cond.category() && _Cond.value() == _Errval`.

The second member function returns `*this == _Code.category() && _Code.value() == _Errval`.

### <a name="generic"></a> generic_category

```cpp
const error_category& generic_category();
```

### <a name="message"></a> message

Returns the name of the specified error code.

```cpp
virtual string message(error_code::value_type val) const = 0;
```

#### Parameters

*val*\
The error code value to describe.

#### Return Value

Returns a descriptive name of the error code *val* for the category. If the error code is unrecognized, returns `"unknown error"`.

#### Remarks

### <a name="name"></a> name

Returns the name of the category.

```cpp
virtual const char *name() const = 0;
```

#### Return Value

Returns the name of the category as a null-terminated byte string.

### <a name="op_as"></a> operator=

```cpp
error_category& operator=(const error_category&) = delete;
```

### <a name="op_eq_eq"></a> operator==

Tests for equality between `error_category` objects.

```cpp
bool operator==(const error_category& right) const;
```

#### Parameters

*right*\
The object to be tested for equality.

#### Return Value

**`true`** if the objects are equal; **`false`** if the objects are not equal.

#### Remarks

This member operator returns `this == &right`.

### <a name="op_neq"></a> operator!=

Tests for inequality between `error_category` objects.

```cpp
bool operator!=(const error_category& right) const;
```

#### Parameters

*right*\
The object to be tested for inequality.

#### Return Value

**`true`** if the `error_category` object is not equal to the `error_category` object passed in *right*; otherwise **`false`**.

#### Remarks

The member operator returns `(!*this == right)`.

### <a name="op_lt"></a> operator&lt;

Tests if the [error_category](../standard-library/error-category-class.md) object is less than the `error_category` object passed in for comparison.

```cpp
bool operator<(const error_category& right) const;
```

#### Parameters

*right*\
The `error_category` object to be compared.

#### Return Value

**`true`** if the `error_category` object is less than the `error_category` object passed in for comparison; Otherwise, **`false`**.

#### Remarks

The member operator returns `this < &right`.

### <a name="system"></a> system_category

```cpp
const error_category& system_category();
```

### <a name="value_type"></a> value_type

A type that represents the stored error code value.

```cpp
typedef int value_type;
```

#### Remarks

This type definition is a synonym for **`int`**.
