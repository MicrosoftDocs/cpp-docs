---
description: "Learn more about: file_status Class"
title: "file_status Class"
ms.date: "09/10/2018"
f1_keywords: ["filesystem/std::experimental::filesystem::file_status", "filesystem/std::experimental::filesystem::file_status::operator=", "filesystem/std::experimental::filesystem::file_status::type", "filesystem/std::experimental::filesystem::file_status::permissions"]
ms.assetid: 9781840e-ad22-44dd-ad79-0fabaa94bac4
helpviewer_keywords: ["std::experimental::filesystem::file_status", "std::experimental::filesystem::file_status::operator=", "std::experimental::filesystem::file_status::type", "std::experimental::filesystem::file_status::permissions"]
---
# file_status Class

Wraps a [file_type](../standard-library/filesystem-enumerations.md#file_type) and file [perms](../standard-library/filesystem-enumerations.md#perms).

## Syntax

```cpp
class file_status;
```

### Constructors

|Constructor|Description|
|-|-|
|[file_status](#file_status)|Constructs a wrapper for [file_type](../standard-library/filesystem-enumerations.md#file_type) and file [perms](../standard-library/filesystem-enumerations.md#perms).|

### Member functions

|Member function|Description|
|-|-|
|[type](#type)|Gets or sets the `file_type`.|
|[permissions](#permissions)|Gets or sets the file permissions.|

### Operators

|Operator|Description|
|-|-|
|[operator=](#op_as)|The defaulted member assignment operators behave as expected.|

## Requirements

**Header:** \<filesystem>

**Namespace:** std::experimental::filesystem, std::experimental::filesystem

## <a name="file_status"></a> file_status::file_status

Constructs a wrapper for [file_type](../standard-library/filesystem-enumerations.md#file_type) and file [perms](../standard-library/filesystem-enumerations.md#perms).

```cpp
explicit file_status(
   file_type ftype = file_type::none,
   perms mask = perms::unknown) noexcept;

file_status(const file_status&) noexcept = default;

file_status(file_status&&) noexcept = default;

~file_status() noexcept = default;
```

### Parameters

*ftype*\
Specified `file_type`, defaults to `file_type::none`.

*mask*\
Specified file `perms`, defaults to `perms::unknown`.

*file_status*\
The stored object.

## <a name="op_as"></a> file_status::operator=

The defaulted member assignment operators behave as expected.

```cpp
file_status& operator=(const file_status&) noexcept = default;
file_status& operator=(file_status&&) nexcept = default;
```

### Parameters

*file_status*\
The [file_status](../standard-library/file-status-class.md) being copied into the `file_status`.

## <a name="type"></a> type

Gets or sets the `file_type`.

```cpp
file_type type() const noexcept
void type(file_type ftype) noexcept
```

### Parameters

*ftype*\
Specified `file_type`.

## <a name="permissions"></a> permissions

Gets or sets the file permissions.

Use the setter to make a file `readonly` or remove the `readonly` attribute.

```cpp
perms permissions() const noexcept
void permissions(perms mask) noexcept
```

### Parameters

*mask*\
Specified `perms`.

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)\
[path Class](../standard-library/path-class.md)\
[\<filesystem>](../standard-library/filesystem.md)
