---
description: "Learn more about: &lt;filesystem&gt; enumerations"
title: "&lt;filesystem&gt; enumerations"
ms.date: "11/04/2016"
f1_keywords: ["filesystem/std::filesystem::copy_options", "filesystem/std::experimental::filesystem::copy_options", "filesystem/std::filesystem::directory_options", "filesystem/std::experimental::filesystem::directory_options", "filesystem/std::filesystem::file_type", "filesystem/std::experimental::filesystem::file_type", "filesystem/std::filesystem::perms", "filesystem/std::experimental::filesystem::perms"]
ms.assetid: 0096c046-d101-464c-8259-b878a48280b0
---
# &lt;filesystem&gt; enumerations

This topic documents the enums in the filesystem header.

## Requirements

**Header:** \<experimental/filesystem>

**Namespace:** std::experimental::filesystem

## <a name="copy_options"></a> copy_options

An enumeration of bitmask values that is used with [copy](filesystem-functions.md#copy) and [copy_file](filesystem-functions.md#copy_file) functions to specify behavior.

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

Specifies whether to follow symbolic links to directories or to ignore them.

### Syntax

```cpp
enum class directory_options {
   none = 0,
   follow_directory_symlink
};
```

### Values

|Name|Description|
|----------|-----------------|
|`none`|Default behavior: ignore symbolic links to directories. Permission denied is an error.|
|`follow_directory_symlink`|Treat symbolic links to directories as actual directories.|

## <a name="file_type"></a> file_type

An enumeration for file types. The supported values are regular, directory, not_found, and unknown.

### Syntax

```cpp
enum class file_type {
    not_found = -1,
    none,
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

### Values

|Name|Value|Description|
|----------|-----------|-----------------|
|`not_found`|-1|Represents a file that does not exist.|
|`none`|0|Represents a file that has no type attribute. (Not supported.)|
|`regular`|1|Represents a conventional disk file.|
|`directory`|2|Represents a directory.|
|`symlink`|3|Represents a symbolic link. (Not supported.)|
|`block`|4|Represents a block-special file on UNIX-based systems. (Not supported.)|
|`character`|5|Represents a character-special file on UNIX-based systems. (Not supported.)|
|`fifo`|6|Represents a FIFO file on UNIX-based systems. (Not supported.)|
|`socket`|7|Represents a socket on UNIX based systems. (Not supported.)|
|`unknown`|8|Represents a file whose status cannot be determined.|

## <a name="perm_options"></a> perm_options

Includes values `replace`, `add`, `remove`, and `nofollow`.

```cpp
enum class perm_options;
```

## <a name="perms"></a> perms

Flags for file permissions. The supported values are essentially "readonly" and all. For a readonly file, none of the *_write bits are set. Otherwise the `all` bit (0x0777) is set.

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
   unknown = 0xFFFF,
   add_perms = 0x10000,
   remove_perms = 0x20000,
   resolve_symlinks = 0x40000
};
```

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)\
[\<filesystem>](../standard-library/filesystem.md)
