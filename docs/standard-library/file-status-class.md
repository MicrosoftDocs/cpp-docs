---
title: "file_status Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["filesystem/std::experimental::filesystem::file_status", "filesystem/std::experimental::filesystem::file_status::operator=", "filesystem/std::experimental::filesystem::file_status::type", "filesystem/std::experimental::filesystem::file_status::permissions"]
dev_langs: ["C++"]
ms.assetid: 9781840e-ad22-44dd-ad79-0fabaa94bac4
author: "corob-msft"
ms.author: "corob"
helpviewer_keywords: ["std::experimental::filesystem::file_status", "std::experimental::filesystem::file_status::operator=", "std::experimental::filesystem::file_status::type", "std::experimental::filesystem::file_status::permissions"]
ms.workload: ["cplusplus"]
---
# file_status Class

Wraps a [file_type](../standard-library/filesystem-enumerations.md#file_type) and file [perms](../standard-library/filesystem-enumerations.md#perms).

## Syntax

```cpp
class file_status;
```

## file_status::file_status

```cpp
explicit file_status(
   file_type ftype = file_type::none,
   perms mask = perms::unknown) noexcept;

file_status(const file_status&) noexcept = default;

file_status(file_status&&) noexcept = default;

~file_status() noexcept = default;
```

## file_status::operator=

```cpp
file_status& operator=(const file_status&) noexcept = default;
file_status& operator=(file_status&&) nexcept = default;
```

The defaulted member assignment operators behave as expected.

## type

```cpp
file_type type() const noexcept
void type(file_type ftype) noexcept
```

Gets or sets the file_type.

## permissions

```cpp
perms permissions() const noexcept
void permissions(perms mask) noexcept
```

Gets or sets the file permissions.

Use the setter to make a file readonly or remove the readonly attribute.

## Requirements

**Header:** \<filesystem>

**Namespace:** std::experimental::filesystem, std::experimental::filesystem

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)<br/>
[path Class](../standard-library/path-class.md)<br/>
[\<filesystem>](../standard-library/filesystem.md)<br/>
