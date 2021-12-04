---
title: "<filesystem>"
description: "Describes the classes, functions, and types in the filesystem header of the Standard C++ library."
ms.date: "09/02/2021"
f1_keywords: ["<filesystem>", "filesystem/std::filesystem", "std::filesystem", "std::experimental::filesystem"]
no-loc: [filesystem, experimental, char, wchar_t, char16_t, char32_t]
---
# `filesystem`

Include the header `<filesystem>` for access to classes and functions that manipulate and retrieve information about paths, files, and directories.

## Syntax

```cpp
#include <filesystem> // C++17 standard header file name
#include <experimental/filesystem> // Header file for pre-standard implementation
using namespace std::experimental::filesystem::v1;
```

> [!IMPORTANT]
> At the release of Visual Studio 2017, the `<filesystem>` header was not yet a C++ standard. C++ in Visual Studio 2017 RTW implements the final draft standard, found in [ISO/IEC JTC 1/SC 22/WG 21 N4100](https://wg21.link/n4100). Visual Studio 2017 version 15.7 and later supports the new C++17 `<filesystem>` standard.
> This is a completely new implementation, incompatible with the previous `std::experimental` version. It was made necessary by symlink support, bug fixes, and changes in standard-required behavior. In Visual Studio 2019 version 16.3 and later, including `<filesystem>` provides only the new `std::filesystem`. Including `<experimental/filesystem>` provides only the old experimental implementation. The experimental implementation will be removed in the next ABI-breaking release of the libraries.

This header supports file systems for one of two broad classes of host operating systems: Microsoft Windows and POSIX.

While most functionality is common to both operating systems, this document identifies where differences occur. For example:

- Windows supports multiple root names, such as `c:` or `\\network_name`. A file system consists of a forest of trees, each with its own root directory, such as `c:\` or `\\network_name\`, and each with its own current directory, for completing a relative pathname (one that's not an absolute pathname).

- POSIX supports a single tree, with no root name, the single root directory `/`, and a single current directory.

Another significant difference is the native representation of pathnames:

- Windows uses a null-terminated sequence of **`wchar_t`**, encoded as UTF-16 (one or more elements for each character).

- POSIX uses a null-terminated sequence of **`char`**, encoded as UTF-8 (one or more elements for each character).

- An object of class `path` stores the pathname in native form, but supports easy conversion between this stored form and several external forms:

  - A null-terminated sequence of **`char`**, encoded as favored by the operating system.

  - A null-terminated sequence of **`char`**, encoded as UTF-8.

  - A null-terminated sequence of **`wchar_t`**, encoded as favored by the operating system.

  - A null-terminated sequence of **`char16_t`**, encoded as UTF-16.

  - A null-terminated sequence of **`char32_t`**, encoded as UTF-32.

  Interconversions between these representations are mediated, as needed, by the use of one or more `codecvt` facets. If no specific locale object is specified, these facets are obtained from the global locale.

Another difference is the detail with which each operating system lets you specify file or directory access permissions:

- Windows records whether a file is read-only or writable, an attribute that has no meaning for directories.

- POSIX records whether a file can be read, written, or executed (scanned, if a directory). And, whether each operation is allowed for the owner, the owner's group, or for everybody, plus a few other permissions.

Common to both systems is the structure imposed on a pathname once you get past the root name. For the pathname `c:/abc/xyz/def.ext`:

- The root name is `c:`.

- The root directory is `/`.

- The root path is `c:/`.

- The relative path is `abc/xyz/def.ext`.

- The parent path is `c:/abc/xyz`.

- The filename is `def.ext`.

- The stem is `def`.

- The extension is `.ext`.

A minor difference is the preferred separator between the sequence of directories in a pathname. Both operating systems let you write a forward slash `/`, but in some contexts Windows prefers a backslash `\`. The implementation stores its preferred separator in the data member `preferred_separator` in `path`.

Finally, `path` objects have an important feature: You can use them wherever a filename argument is required in the classes defined in the header [`<fstream>`](fstream.md).

For more information and code examples, see [File system navigation (C++)](../standard-library/file-system-navigation.md).

## Members

### Classes

|Name|Description|
|-|-|
|[`directory_entry` class](../standard-library/directory-entry-class.md)|Describes an object that is returned by a `directory_iterator` or a `recursive_directory_iterator` and contains a `path`.|
|[`directory_iterator` class](../standard-library/directory-iterator-class.md)|Describes an input iterator that sequences through the file names in a file-system directory.|
|[`filesystem_error` class](../standard-library/filesystem-error-class.md)|A base class for exceptions that are thrown to report a low-level system overflow.|
|[`path` class](../standard-library/path-class.md)|Defines a class that stores an object of template type `String` that is suitable for use as a file name.|
|[`recursive_directory_iterator` class](../standard-library/recursive-directory-iterator-class.md)|Describes an input iterator that sequences through the file names in a file-system directory. The iterator can also descend into subdirectories.|
|[`file_status` class](../standard-library/file-status-class.md)|Wraps a `file_type`.|

### Structs

|Name|Description|
|-|-|
|[`space_info` structure](../standard-library/space-info-structure.md)|Holds information about a volume.|

## Functions

[`<filesystem>` functions](../standard-library/filesystem-functions.md)

## Operators

[`<filesystem>` operators](../standard-library/filesystem-operators.md)

## Enumerations

|Name|Description|
|-|-|
|[`copy_options`](../standard-library/filesystem-enumerations.md#copy_options)|An enumeration that is used with [copy_file](../standard-library/filesystem-functions.md#copy_file) and determines behavior if a destination file already exists.|
|[`directory_options`](../standard-library/filesystem-enumerations.md#directory_options)|An enumeration that specifies options for directory iterators.|
|[`file_type`](../standard-library/filesystem-enumerations.md#file_type)|An enumeration for file types.|
|[`perm_options`](../standard-library/filesystem-enumerations.md#perm_options)| Enumerates options for the `permissions` function. |
|[`perms`](../standard-library/filesystem-enumerations.md#perms)|A bitmask type used to convey permissions and options to permissions|

## See also

[Header files reference](../standard-library/cpp-standard-library-header-files.md)
