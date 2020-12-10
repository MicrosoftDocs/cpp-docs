---
description: "Learn more about: directory_entry Class"
title: "directory_entry Class"
ms.date: "09/10/2018"
f1_keywords: ["filesystem/std::experimental::filesystem::directory_entry", "filesystem/std::experimental::filesystem::directory_entry::operator const std::experimental::filesystem::path &", "filesystem/std::experimental::filesystem::directory_entry::directory_entry", "filesystem/std::experimental::filesystem::directory_entry::operator=", "filesystem/std::experimental::filesystem::directory_entry::assign", "filesystem/std::experimental::filesystem::directory_entry::replace_filename", "filesystem/std::experimental::filesystem::directory_entry::path", "filesystem/std::experimental::filesystem::directory_entry::status", "filesystem/std::experimental::filesystem::directory_entry::symlink_status", "filesystem/std::experimental::filesystem::directory_entry::operator&lt;", "filesystem/std::experimental::filesystem::directory_entry::operator==", "filesystem/std::experimental::filesystem::directory_entry::operator!=", "filesystem/std::experimental::filesystem::directory_entry::operator&lt;=", "filesystem/std::experimental::filesystem::directory_entry::operator&gt;", "filesystem/std::experimental::filesystem::directory_entry::operator&gt;="]
ms.assetid: 1827c67b-4137-4548-adb0-f955f7acaf08
helpviewer_keywords: ["std::experimental::filesystem::directory_entry", "std::experimental::filesystem::directory_entry::operator const std::experimental::filesystem::path &", "std::experimental::filesystem::directory_entry::directory_entry", "std::experimental::filesystem::directory_entry::operator=", "std::experimental::filesystem::directory_entry::assign", "std::experimental::filesystem::directory_entry::replace_filename", "std::experimental::filesystem::directory_entry::path", "std::experimental::filesystem::directory_entry::status", "std::experimental::filesystem::directory_entry::symlink_status", "std::experimental::filesystem::directory_entry::operator&lt;", "std::experimental::filesystem::directory_entry::operator==", "std::experimental::filesystem::directory_entry::operator!=", "std::experimental::filesystem::directory_entry::operator&lt;=", "std::experimental::filesystem::directory_entry::operator&gt;", "std::experimental::filesystem::directory_entry::operator&gt;="]
---
# directory_entry Class

Describes an object that is returned by `*X`, where *X* is a [directory_iterator](../standard-library/directory-iterator-class.md) or a [recursive_directory_iterator](../standard-library/recursive-directory-iterator-class.md).

## Syntax

```cpp
class directory_entry;
```

## Remarks

The class stores an object of type [path](../standard-library/path-class.md). The stored `path` can be an instance of the [path Class](../standard-library/path-class.md) or of a type that is derived from `path`. It also stores two [file_type](../standard-library/filesystem-enumerations.md#file_type) values; one that represents what is known about the status of the stored file name, and another that represents what is known about the symbolic link status of the file name.

For more information and code examples, see [File System Navigation (C++)](../standard-library/file-system-navigation.md).

### Constructors

|Constructor|Description|
|-|-|
|[directory_entry](#directory_entry)|The defaulted constructors behave as expected. The fourth constructor initializes `mypath` to *pval*, `mystat` to *stat_arg*, and `mysymstat` to *symstat_arg*.|

### Member functions

|Member function|Description|
|-|-|
|[assign](#assign)|The member function assigns *pval* to `mypath`, *stat* to `mystat`, and *symstat* to `mysymstat`.|
|[path](#path)|The member function returns `mypath`.|
|[replace_filename](#replace_filename)|The member function replaces `mypath` with `mypath.parent_path()` / *pval*, `mystat` with *stat_arg*, and `mysymstat` with *symstat_arg*|
|[status](#status)|Both member functions return `mystat` possibly first altered.|
|[symlink_status](#symlink_status)|Both member functions return `mysymstat` possibly first altered.|

### Operators

|Operator|Description|
|-|-|
|[operator!=](#op_neq)|Replaces the elements of the list with a copy of another list.|
|[operator=](#op_as)|The defaulted member assignment operators behave as expected.|
|[operator==](#op_eq)|Returns `mypath == right.mypath`.|
|[operator<](#op_lt)|Returns `mypath < right.mypath`.|
|[operator<=](#op_lteq)|Returns `!(right < *this)`.|
|[operator>](#op_gt)|Returns `right < *this`.|
|[operator>=](#op_gteq)|Returns `!(*this < right)`.|
|[operator const path_type&](#path_type)|Returns `mypath`.|

## Requirements

**Header:** \<experimental/filesystem&gt;

**Namespace:** std::experimental::filesystem

## <a name="assign"></a> assign

The member function assigns *pval* to `mypath`, *stat_arg* to `mystat`, and *symstat_arg* to `mysymstat`.

```cpp
void assign(const std::experimental::filesystem::path& pval,
    file_status stat_arg = file_status(),
    file_status symstat_arg = file_status());
```

### Parameters

*pval*\
The stored file name path.

*stat_arg*\
The status of the stored file name.

*symstat_arg*\
The symbolic link status of the stored file name.

## <a name="directory_entry"></a> directory_entry

The defaulted constructors behave as expected. The fourth constructor initializes `mypath` to *pval*, `mystat` to *stat_arg*, and `mysymstat` to *symstat_arg*.

```cpp
directory_entry() = default;
directory_entry(const directory_entry&) = default;
directory_entry(directory_entry&&) noexcept = default;
explicit directory_entry(const std::experimental::filesystem::path& pval,
    file_status stat_arg = file_status(),
    file_status symstat_arg = file_status());
```

### Parameters

*pval*\
The stored file name path.

*stat_arg*\
The status of the stored file name.

*symstat_arg*\
The symbolic link status of the stored file name.

## <a name="op_neq"></a> operator!=

The member function returns `!(*this == right)`.

```cpp
bool operator!=(const directory_entry& right) const noexcept;
```

### Parameters

*right*\
The [directory_entry](../standard-library/directory-entry-class.md) being compared to the `directory_entry`.

## <a name="op_as"></a> operator=

The defaulted member assignment operators behave as expected.

```cpp
directory_entry& operator=(const directory_entry&) = default;
directory_entry& operator=(directory_entry&&) noexcept = default;
```

### Parameters

*right*\
The [directory_entry](../standard-library/directory-entry-class.md) being copied into the `directory_entry`.

## <a name="op_eq"></a> operator==

The member function returns `mypath == right.mypath`.

```cpp
bool operator==(const directory_entry& right) const noexcept;
```

### Parameters

*right*\
The [directory_entry](../standard-library/directory-entry-class.md) being compared to the `directory_entry`.

## <a name="op_lt"></a> operator&lt;

The member function returns `mypath < right.mypath`.

```cpp
bool operator<(const directory_entry& right) const noexcept;
```

### Parameters

*right*\
The [directory_entry](../standard-library/directory-entry-class.md) being compared to the `directory_entry`.

## <a name="op_lteq"></a> operator&lt;=

The member function returns `!(right < *this)`.

```cpp
bool operator&lt;=(const directory_entry& right) const noexcept;
```

### Parameters

*right*\
The [directory_entry](../standard-library/directory-entry-class.md) being compared to the `directory_entry`.

## <a name="op_gt"></a> operator&gt;

The member function returns `right < *this`.

```cpp
bool operator&gt;(const directory_entry& right) const noexcept;
```

### Parameters

*right*\
The [directory_entry](../standard-library/directory-entry-class.md) being compared to the `directory_entry`.

## <a name="op_gteq"></a> operator&gt;=

The member function returns `!(*this < right)`.

```cpp
bool operator&gt;=(const directory_entry& right) const noexcept;
```

### Parameters

*right*\
The [directory_entry](../standard-library/directory-entry-class.md) being compared to the `directory_entry`.

## <a name="path_type"></a> operator const path_type&

The member operator returns `mypath`.

```cpp
operator const std::experimental::filesystem::path&() const;
```

## <a name="path"></a> path

The member function returns `mypath`.

```cpp
const std::experimental::filesystem::path& path() const noexcept;
```

## <a name="replace_filename"></a> replace_filename

The member function replaces `mypath` with `mypath.parent_path()` / *pval*, `mystat` with *stat_arg*, and `mysymstat` with *symstat_arg*

```cpp
void replace_filename(
    const std::experimental::filesystem::path& pval,
    file_status stat_arg = file_status(),
    file_status symstat_arg = file_status());
```

### Parameters

*pval*\
The stored file name path.

*stat_arg*\
The status of the stored file name.

*symstat_arg*\
The symbolic link status of the stored file name.

## <a name="status"></a> status

Both member functions return `mystat` possibly first altered as follows:

1. If `status_known(mystat)` then do nothing.

1. Otherwise, if `!status_known(mysymstat) && !is_symlink(mysymstat)` then `mystat = mysymstat`.

```cpp
file_status status() const;
file_status status(error_code& ec) const noexcept;
```

### Parameters

*ec*\
The status error code.

## <a name="symlink_status"></a> symlink_status

Both member functions return `mysymstat` possibly first altered as follows: If `status_known(mysymstat)` then do nothing. Otherwise, `mysymstat = symlink_status(mypval)`.

```cpp
file_status symlink_status() const;
file_status symlink_status(error_code& ec) const noexcept;
```

### Parameters

*ec*\
The status error code.

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)\
[\<filesystem&gt;](../standard-library/filesystem.md)
