---
description: "Learn more about: recursive_directory_iterator Class"
title: "recursive_directory_iterator Class"
ms.date: "09/10/2018"
f1_keywords: ["filesystem/std::tr2::sys::recursive_directory_iterator"]
ms.assetid: 79a061bd-5b64-404c-97e8-749c888c2ced
---
# recursive_directory_iterator Class

Describes an input iterator that sequences through the filenames in a directory, possibly descending into subdirectories recursively. For an iterator `X`, the expression `*X` evaluates to an object of class `directory_entry` that wraps the filename and anything known about its status.

For more information and code examples, see [File System Navigation (C++)](../standard-library/file-system-navigation.md).

## Syntax

```cpp
class recursive_directory_iterator;
```

## Remarks

The class template stores:

1. an object of type `stack<pair<directory_iterator, path>>`, called `mystack` here for the purposes of exposition, which represents the nest of directories to be sequenced

1. an object of type `directory_entry` called `myentry` here, which represents the current filename in the directory sequence

1. an object of type **`bool`**, called `no_push` here, which records whether recursive descent into subdirectories is disabled

1. an object of type `directory_options`, called `myoptions` here, which records the options established at construction

A default constructed object of type `recursive_directory_entry` has an end-of-sequence iterator at `mystack.top().first` and represents the end-of-sequence iterator. For example, given the directory `abc` with entries `def` (a directory), `def/ghi`, and `jkl`, the code:

```cpp
for (recursive_directory_iterator next(path("abc")), end; next != end; ++next)
    visit(next->path());
```

will call visit with the arguments `path("abc/def/ghi")` and `path("abc/jkl")`. You can qualify sequencing through a directory subtree in two ways:

1. A directory symlink will be scanned only if you construct a `recursive_directory_iterator` with a `directory_options` argument whose value is `directory_options::follow_directory_symlink`.

1. If you call `disable_recursion_pending` then a subsequent directory encountered during an increment will not be recursively scanned.

### Constructors

|Constructor|Description|
|-|-|
|[recursive_directory_iterator](#recursive_directory_iterator)|Constructs a `recursive_directory_iterator`.|

### Member functions

|Member function|Description|
|-|-|
|[depth](#depth)|Returns `mystack.size() - 1`, so `pval` is at depth zero.|
|[disable_recursion_pending](#disable_recursion_pending)|Stores **`true`** in `no_push`.|
|[increment](#increment)|Advances to the next filename in sequence.|
|[options](#options)|Returns `myoptions`.|
|[pop](#pop)|Returns the next object.|
|[recursion_pending](#recursion_pending)|Returns `!no_push`.|

### Operators

|Operator|Description|
|-|-|
|[operator!=](#op_neq)|Returns `!(*this == right)`.|
|[operator=](#op_as)|The defaulted member assignment operators behave as expected.|
|[operator==](#op_eq)|Returns **`true`** only if both **`*this`** and *right* are end-of-sequence iterators or both are not end-of-sequence-iterators.|
|[operator*](#op_multiply)|Returns `myentry`.|
|[operator->](#op_cast)|Returns `&**this`.|
|[operator++](#op_increment)|Increments the `recursive_directory_iterator`.|

## Requirements

**Header:** \<filesystem>

**Namespace:** std::tr2::sys

## <a name="depth"></a> recursive_directory_iterator::depth

Returns `mystack.size() - 1`, so `pval` is at depth zero.

```cpp
int depth() const;
```

## <a name="disable_recursion_pending"></a> recursive_directory_iterator::disable_recursion_pending

Stores **`true`** in `no_push`.

```cpp
void disable_recursion_pending();
```

## <a name="increment"></a> recursive_directory_iterator::increment

Advances to the next filename in sequence.

```cpp
recursive_directory_iterator& increment(error_code& ec) noexcept;
```

### Parameters

*ec*\
Specified error code.

### Remarks

The function attempts to advance to the next filename in the nested sequence. If successful, it stores that filename in `myentry`; otherwise it produces an end-of-sequence iterator.

## <a name="op_neq"></a> recursive_directory_iterator::operator!=

Returns `!(*this == right)`.

```cpp
bool operator!=(const recursive_directory_iterator& right) const;
```

### Parameters

*right*\
The [recursive_directory_iterator](../standard-library/recursive-directory-iterator-class.md) for comparison.

## <a name="op_as"></a> recursive_directory_iterator::operator=

The defaulted member assignment operators behave as expected.

```cpp
recursive_directory_iterator& operator=(const recursive_directory_iterator&) = default;
recursive_directory_iterator& operator=(recursive_directory_iterator&&) noexcept = default;
```

### Parameters

*recursive_directory_iterator*\
The [recursive_directory_iterator](../standard-library/recursive-directory-iterator-class.md) being copied into the `recursive_directory_iterator`.

## <a name="op_eq"></a> recursive_directory_iterator::operator==

Returns **`true`** only if both **`*this`** and *right* are end-of-sequence iterators or both are not end-of-sequence-iterators.

```cpp
bool operator==(const recursive_directory_iterator& right) const;
```

### Parameters

*right*\
The [recursive_directory_iterator](../standard-library/recursive-directory-iterator-class.md) for comparison.

## <a name="op_multiply"></a> recursive_directory_iterator::operator*

Returns `myentry`.

```cpp
const directory_entry& operator*() const;
```

## <a name="op_cast"></a> recursive_directory_iterator::operator->

Returns `&**this`.

```cpp
const directory_entry * operator->() const;
```

## <a name="op_increment"></a> recursive_directory_iterator::operator++

Increments the `recursive_directory_iterator`.

```cpp
recursive_directory_iterator& operator++();

recursive_directory_iterator& operator++(int);
```

### Parameters

*int*\
The specified increment.

### Remarks

The first member function calls `increment()`, then returns **`*this`**. The second member function makes a copy of the object, calls `increment()`, then returns the copy.

## <a name="options"></a> recursive_directory_iterator::options

Returns `myoptions`.

```cpp
directory_options options() const;
```

## <a name="pop"></a> recursive_directory_iterator::pop

Returns the next object.

```cpp
void pop();
```

### Remarks

If `depth() == 0` the object becomes an end-of-sequence iterator. Otherwise, the member function terminates scanning of the current (deepest) directory and resumes at the next lower depth.

## <a name="recursion_pending"></a> recursive_directory_iterator::recursion_pending

Returns `!no_push`.

```cpp
bool recursion_pending() const;
```

## <a name="recursive_directory_iterator"></a> recursive_directory_iterator::recursive_directory_iterator

Constructs a `recursive_directory_iterator`.

```cpp
recursive_directory_iterator() noexcept;
explicit recursive_directory_iterator(const path& pval);

recursive_directory_iterator(const path& pval,
    error_code& ec) noexcept;
recursive_directory_iterator(const path& pval,
    directory_options opts);

recursive_directory_iterator(const path& pval,
    directory_options opts,
    error_code& ec) noexcept;
recursive_directory_iterator(const recursive_directory_iterator&) = default;
recursive_directory_iterator(recursive_directory_iterator&&) noexcept = default;
```

### Parameters

*pval*\
The specified path.

*error_code*\
The specified error code.

*opts*\
The specified directory options.

*recursive_directory_iterator*\
The `recursive_directory_iterator` of which the constructed `recursive_directory_iterator` is to be a copy.

### Remarks

The first constructor produces an end-of-sequence iterator. The second and third constructors store **`false`** in `no_push` and `directory_options::none` in `myoptions`, then attempt to open and read *pval* as a directory. If successful, they initialize `mystack` and `myentry` to designate the first non-directory filename in the nested sequence; otherwise they produce an end-of-sequence iterator.

The fourth and fifth constructors behave the same as the second and third, except that they first store *opts* in `myoptions`. The defaulted construtors behave as expected.

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)\
[\<filesystem>](../standard-library/filesystem.md)\
[File System Navigation (C++)](../standard-library/file-system-navigation.md)
