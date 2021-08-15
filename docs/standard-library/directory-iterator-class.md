---
description: "Learn more about: directory_iterator Class"
title: "directory_iterator Class"
ms.date: "09/10/2018"
f1_keywords: ["filesystem/std::experimental::filesystem::directory_iterator", "filesystem/std::experimental::filesystem::_Directory_iterator::_Directory_iterator", "filesystem/std::experimental::filesystem::directory_iterator::directory_iterator", "filesystem/std::experimental::filesystem::directory_iterator::increment", "filesystem/std::experimental::filesystem::directory_iterator::operator=", "filesystem/std::experimental::filesystem::directory_iterator::operator==", "filesystem/std::experimental::filesystem::directory_iterator::operator!=", "filesystem/std::experimental::filesystem::directory_iterator::operator*", "filesystem/std::experimental::filesystem::directory_iterator::operator-&gt;", "filesystem/std::experimental::filesystem::directory_iterator::operator++"]
ms.assetid: dca2ecf8-3e69-4644-a83d-705061e10cc8
helpviewer_keywords: ["std::experimental::filesystem::directory_iterator", "std::experimental::filesystem::_Directory_iterator::_Directory_iterator", "std::experimental::filesystem::directory_iterator", "std::experimental::filesystem::directory_iterator::directory_iterator", "std::experimental::filesystem::directory_iterator::increment", "std::experimental::filesystem::directory_iterator::operator=", "std::experimental::filesystem::directory_iterator::operator==", "std::experimental::filesystem::directory_iterator::operator!=", "std::experimental::filesystem::directory_iterator::operator*", "std::experimental::filesystem::directory_iterator::operator-&gt;", "std::experimental::filesystem::directory_iterator::operator++"]
---
# directory_iterator Class

Describes an input iterator that sequences through the filenames in a directory. For an iterator `X`, the expression `*X` evaluates to an object of class `directory_entry` that wraps the filename and anything known about its status.

The class stores an object of type `path`, called `mydir` here for the purposes of exposition, which represents the name of the directory to be sequenced, and an object of type `directory_entry` called `myentry` here, which represents the current filename in the directory sequence. A default constructed object of type `directory_entry` has an empty `mydir` pathname and represents the end-of-sequence iterator.

For example, given the directory `abc` with entries `def` and `ghi`, the code:

`for (directory_iterator next(path("abc")), end; next != end; ++next)     visit(next->path());`

will call `visit` with the arguments `path("abc/def")` and `path("abc/ghi")`.

For more information and code examples, see [File System Navigation (C++)](../standard-library/file-system-navigation.md).

## Syntax

```cpp
class directory_iterator;
```

### Constructors

|Constructor|Description|
|-|-|
|[directory_iterator](#directory_iterator)|Constructs an input iterator that sequences through the filenames in a directory.|

### Member functions

|Member function|Description|
|-|-|
|[increment](#increment)|Attempts to advance to the next filename in the directory.|

### Operators

|Operator|Description|
|-|-|
|[operator!=](#op_neq)|Returns `!(*this == right)`.|
|[operator=](#op_as)|The defaulted member assignment operators behave as expected.|
|[operator==](#op_eq)|Returns **`true`** only if both **`*this`** and *right* are end-of-sequence iterators or both are not end-of-sequence-iterators.|
|[operator*](#op_star)|Returns `myentry`.|
|[operator->](#op_cast)|Returns `&**this`.|
|[operator++](#op_increment)|Calls `increment()`, then returns **`*this`**, or makes a copy of the object, calls `increment()`, then returns the copy.|

## Requirements

**Header:** \<experimental/filesystem>

**Namespace:** std::experimental::filesystem

## <a name="directory_iterator"></a> directory_iterator::directory_iterator

The first constructor produces an end-of-sequence iterator. The second and third constructors store *pval* in `mydir`, then attempt to open and read `mydir` as a directory. If successful, they store the first filename in the directory in `myentry`; otherwise they produce an end-of-sequence iterator.

The defaulted construtors behave as expected.

```cpp
directory_iterator() noexcept;
explicit directory_iterator(const path& pval);

directory_iterator(const path& pval, error_code& ec) noexcept;
directory_iterator(const directory_iterator&) = default;
directory_iterator(directory_iterator&&) noexcept = default;
```

### Parameters

*pval*\
The stored file name path.

*ec*\
The status error code.

*directory_iterator*\
The stored object.

## <a name="increment"></a> directory_iterator::increment

The function attempts to advance to the next filename in the directory. If successful, it stores that filename in `myentry`; otherwise it produces an end-of-sequence iterator.

```cpp
directory_iterator& increment(error_code& ec) noexcept;
```

## <a name="op_neq"></a> directory_iterator::operator!=

The member operator returns `!(*this == right)`.

```cpp
bool operator!=(const directory_iterator& right) const;
```

### Parameters

*right*\
The [directory_iterator](../standard-library/directory-iterator-class.md) being compared to the `directory_iterator`.

## <a name="op_as"></a> directory_iterator::operator=

The defaulted member assignment operators behave as expected.

```cpp
directory_iterator& operator=(const directory_iterator&) = default;
directory_iterator& operator=(directory_iterator&&) noexcept = default;
```

### Parameters

*right*\
The [directory_iterator](../standard-library/directory-iterator-class.md) being copied into the `directory_iterator`.

## <a name="op_eq"></a> directory_iterator::operator==

The member operator returns **`true`** only if both **`*this`** and *right* are end-of-sequence iterators or both are not end-of-sequence-iterators.

```cpp
bool operator==(const directory_iterator& right) const;
```

### Parameters

*right*\
The [directory_iterator](../standard-library/directory-iterator-class.md) being compared to the `directory_iterator`.

## <a name="op_star"></a> directory_iterator::operator*

The member operator returns `myentry`.

```cpp
const directory_entry& operator*() const;
```

## <a name="op_cast"></a> directory_iterator::operator->

The member function returns `&**this`.

```cpp
const directory_entry * operator->() const;
```

## <a name="op_increment"></a> directory_iterator::operator++

The first member function calls `increment()`, then returns **`*this`**. The second member function makes a copy of the object, calls `increment()`, then returns the copy.

```cpp
directory_iterator& operator++();
directory_iterator& operator++(int);
```

### Parameters

*int*\
The number of increments.

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)\
[\<filesystem>](../standard-library/filesystem.md)\
[File System Navigation (C++)](../standard-library/file-system-navigation.md)
