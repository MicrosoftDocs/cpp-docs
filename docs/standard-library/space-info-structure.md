---
description: "Learn more about: space_info Structure"
title: "space_info Structure"
ms.date: "09/10/2018"
f1_keywords: ["filesystem/std::tr2::sys::space_info"]
ms.assetid: f2b35b42-06ff-45bd-8617-39a0f5358a54
---
# space_info Structure

Holds information about a volume.

## Syntax

```cpp
struct space_info
{
    uintmax_t capacity;
    uintmax_t free;
    uintmax_t available;
};
```

## Members

### Public Data Members

|Name|Description|
|----------|-----------------|
|`unsigned long long capacity`|Represents the total number of bytes that the volume can represent.|
|`unsigned long long free`|Represents the number of bytes that are not used to represent data on the volume.|
|`unsigned long long available`|Represents the number of bytes that are available to represent data on the volume.|

## Requirements

**Header:** \<filesystem>

**Namespace:** std::experimental::filesystem

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)\
[\<filesystem>](../standard-library/filesystem.md)\
[File System Navigation (C++)](../standard-library/file-system-navigation.md)
