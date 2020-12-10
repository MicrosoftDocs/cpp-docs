---
description: "Learn more about: &lt;system_error&gt; functions"
title: "&lt;system_error&gt; functions"
ms.date: "03/15/2019"
f1_keywords: ["system_error/std::generic_category", "system_error/std::make_error_code", "system_error/std::make_error_condition", "system_error/std::system_category"]
ms.assetid: 57d6f15f-f0b7-4e2f-80fe-31d3c320ee33
helpviewer_keywords: ["std::generic_category", "std::make_error_code", "std::make_error_condition", "std::system_category"]
---
# &lt;system_error&gt; functions

## <a name="generic_category"></a> generic_category

Represents the category for generic errors.

```cpp
const error_category& generic_category() noexcept;
```

### Remarks

The `generic_category` object is an implementation of [error_category](../standard-library/error-category-class.md).

## <a name="is_error_code_enum_v"></a> is_error_code_enum_v

```cpp
template <class T>
    inline constexpr bool is_error_code_enum_v = is_error_code_enum<T>::value;
```

## <a name="is_error_condition_enum_v"></a> is_error_condition_enum_v

```cpp
template <class T>
    inline constexpr bool is_error_condition_enum_v = is_error_condition_enum<T>::value;
```

## <a name="make_error_code"></a> make_error_code

Creates an error code object.

```cpp
error_code make_error_code(std::errc error) noexcept;
```

### Parameters

*error*\
The `std::errc` enumeration value to store in the error code object.

### Return Value

The error code object.

### Remarks

## <a name="make_error_condition"></a> make_error_condition

Creates an error condition object.

```cpp
error_condition make_error_condition(std::errc error) noexcept;
```

### Parameters

*error*\
The `std::errc` enumeration value to store in the error code object.

### Return Value

The error condition object.

### Remarks

## <a name="system_category"></a> system_category

Represents the category for errors caused by low-level system overflows.

```cpp
const error_category& system_category() noexcept;
```

### Remarks

The `system_category` object is an implementation of [error_category](../standard-library/error-category-class.md).
