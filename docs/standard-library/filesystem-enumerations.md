---
description: "Learn more about: <filesystem> enumerations"
title: "<filesystem> enumerations"
ms.date: 08/27/2026
f1_keywords: ["filesystem/std::filesystem::copy_options", "filesystem/std::filesystem::directory_options", "filesystem/std::filesystem::file_type", "filesystem/std::filesystem::perm_options", "filesystem/std::filesystem::perms"]
helpviewer_keywords: ["std::filesystem::copy_options", "std::filesystem::directory_options", "std::filesystem::file_type", "std::filesystem::perm_options", "std::filesystem::perms"]
---
# `<filesystem>` enumerations

This article documents the enumerations in the C++17 `std::filesystem` implementation of the [`<filesystem>`](../standard-library/filesystem.md) header.

> [!NOTE]
> This page documents the C++17 `std::filesystem` enumerations. For the historical prestandard enumerations that MSVC provided in `<experimental/filesystem>`, see [`<experimental/filesystem>` enumerations](../standard-library/experimental-filesystem-enumerations.md).

## Requirements

**Header:** `<filesystem>`

**Namespace:** `std::filesystem`

## <a name="copy_options"></a> `copy_options`

An enumeration of bitmask values that you use with [`copy`](filesystem-functions.md#copy) and [`copy_file`](filesystem-functions.md#copy_file) functions to specify behavior.

### Syntax

```cpp
enum class copy_options {
   none = 0,
   skip_existing = 1,
   overwrite_existing = 2,
   update_existing = 4,
   recursive = 8,
   copy_symlinks = 16,
   skip_symlinks = 32,
   directories_only = 64,
   create_symlinks = 128,
   create_hard_links = 256
};
```

### Values

| Name | Description |
|------------|-----------------|
|`none`|Perform the default behavior for the operation.|
|`skip_existing`|Do not copy if the file already exists, do not report an error.|
|`overwrite_existing`|Overwrite the file if it already exists.|
|`update_existing`|Overwrite the file if it already exists and is older than the replacement.|
|`recursive`|Recursively copy subdirectories and their contents.|
|`copy_symlinks`|Copy symbolic links as symbolic links, instead of copying the files they point to.|
|`skip_symlinks`|Ignore symbolic links.|
|`directories_only`|Only iterate over directories, ignore files.|
|`create_symlinks`|Make symbolic links instead of copying files. An absolute path must be used as the source path unless the destination is the current directory.|
|`create_hard_links`|Make hard links instead of copying files.|

## <a name="directory_options"></a> directory_options

A bitmask enumeration that controls how directory iteration handles symbolic links to directories and permission-denied errors.

### Syntax

```cpp
enum class directory_options {
   none = 0,
   follow_directory_symlink = 1,
   skip_permission_denied = 2
};
```

### Values

|Name|Description|
|----------|-----------------|
|`none`|Default behavior: don't follow symbolic links to directories, and treat permission denied as an error.|
|`follow_directory_symlink`|Follow symbolic links to directories rather than skipping them.|
|`skip_permission_denied`|Silently skip directories that would otherwise result in a permission-denied error.|

## <a name="file_type"></a> file_type

An enumeration for file types.

### Syntax

```cpp
enum class file_type {
    none = 0,
    not_found,
    regular,
    directory,
    symlink,
    block,
    character,
    fifo,
    socket,
    unknown
};
```

The C++ standard doesn't fix the underlying integer values of these enumerators, so don't depend on specific numeric values.

### Values

|Name|Description|
|----------|-----------------|
|`none`|The file type hasn't been evaluated yet, or an error occurred when evaluating it.|
|`not_found`|The file wasn't found.|
|`regular`|A regular file.|
|`directory`|A directory.|
|`symlink`|A symbolic link.|
|`block`|A block-special file. (Not used on Windows.)|
|`character`|A character-special file. (Not used on Windows.)|
|`fifo`|A FIFO or pipe file. (Not used on Windows.)|
|`socket`|A socket. (Not used on Windows.)|
|`unknown`|The file exists but its type can't be determined.|

## <a name="perm_options"></a> perm_options

A bitmask enumeration that controls how the [`permissions`](../standard-library/filesystem-functions.md#permissions) function applies permission bits.

### Syntax

```cpp
enum class perm_options {
   replace = 1,
   add = 2,
   remove = 4,
   nofollow = 8
};
```

### Values

|Name|Description|
|----------|-----------------|
|`replace`|Replace the file's permission bits with the specified permissions.|
|`add`|Add the specified permission bits to the file's current permissions.|
|`remove`|Remove the specified permission bits from the file's current permissions.|
|`nofollow`|Change the permissions of a symbolic link itself rather than the file it resolves to.|

## <a name="perms"></a> perms

A bitmask enumeration of file permission bits. On Windows, the supported values are essentially "read-only" and `all`. For a read-only file, none of the `*_write` bits are set. Otherwise, the `all` bit (0777) is set.

### Syntax

```cpp
enum class perms {// names for permissions
   none = 0,
   owner_read = 0400,  // S_IRUSR
   owner_write = 0200, // S_IWUSR
   owner_exec = 0100,  // S_IXUSR
   owner_all = 0700,   // S_IRWXU
   group_read = 040,   // S_IRGRP
   group_write = 020,  // S_IWGRP
   group_exec = 010,   // S_IXGRP
   group_all = 070,    // S_IRWXG
   others_read = 04,   // S_IROTH
   others_write = 02,  // S_IWOTH
   others_exec = 01,   // S_IXOTH
   others_all = 07,    // S_IRWXO
   all = 0777,
   set_uid = 04000,    // S_ISUID
   set_gid = 02000,    // S_ISGID
   sticky_bit = 01000, // S_ISVTX
   mask = 07777,
   unknown = 0xFFFF
};
```

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)\
[`<filesystem>`](../standard-library/filesystem.md)
