---
description: "Learn more about: space_info Structure"
title: "space_info Structure"
ms.date: 08/27/2026
f1_keywords: ["filesystem/std::filesystem::space_info"]
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
|`uintmax_t capacity`|Represents the total number of bytes that the volume can represent.|
|`uintmax_t free`|Represents the number of bytes that are not used to represent data on the volume.|
|`uintmax_t available`|Represents the number of bytes that are available to represent data on the volume.|

## Requirements

**Header:** `<filesystem>`

**Namespace:** `std::filesystem`

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)\
[`<filesystem>`](../standard-library/filesystem.md)\
[File System Navigation (C++)](../standard-library/file-system-navigation.md)
