---
title: "&lt;system_error&gt; functions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.topic: "reference"
f1_keywords: ["system_error/std::generic_category", "system_error/std::make_error_code", "system_error/std::make_error_condition", "system_error/std::system_category"]
ms.assetid: 57d6f15f-f0b7-4e2f-80fe-31d3c320ee33
helpviewer_keywords: ["std::generic_category", "std::make_error_code", "std::make_error_condition", "std::system_category"]
---
# &lt;system_error&gt; functions

||||
|-|-|-|
|[generic_category](#generic_category)|[make_error_code](#make_error_code)|[make_error_condition](#make_error_condition)|
|[system_category](#system_category)|

## <a name="generic_category"></a>  generic_category

Represents the category for generic errors.

```cpp
extern const error_category& generic_category();
```

### Remarks

The `generic_category` object is an implementation of [error_category](../standard-library/error-category-class.md).

## <a name="make_error_code"></a>  make_error_code

Creates an error code object.

```cpp
error_code make_error_code(generic_errno _Errno);
```

### Parameters

|Parameter|Description|
|---------------|-----------------|
|*_Errno*|The enumeration value to store in the error code object.|

### Return Value

The error code object.

### Remarks

## <a name="make_error_condition"></a>  make_error_condition

Creates an error condition object.

```cpp
error_condition make_error_condition(generic_errno _Errno);
```

### Parameters

|Parameter|Description|
|---------------|-----------------|
|*_Errno*|The enumeration value to store in the error condition object.|

### Return Value

The error condition object.

### Remarks

## <a name="system_category"></a>  system_category

Represents the category for errors caused by low-level system overflows.

```cpp
extern const error_category& system_category();
```

### Remarks

The `system_category` object is an implementation of [error_category](../standard-library/error-category-class.md).

## See also

[<system_error>](../standard-library/system-error.md)<br/>
