---
description: "Learn more about: path Class"
title: "path Class"
ms.date: "09/27/2018"
f1_keywords: ["filesystem/std::experimental::filesystem::path"]
ms.assetid: 8a1227ca-aeb2-4e0e-84aa-86e34e4f4fe8
---
# path Class

The **path** class stores an object of type `string_type`, called `myname` here for the purposes of exposition, suitable for use as a pathname. `string_type` is a synonym for `basic_string<value_type>`, where `value_type` is a synonym for **`wchar_t`** on Windows or **`char`** on POSIX.

For more information, and code examples, see [File System Navigation (C++)](../standard-library/file-system-navigation.md).

## Syntax

```cpp
class path;
```

### Constructors

|Constructor|Description|
|-|-|
|[path](#path)|Constructs a `path`.|

### Typedefs

|Type name|Description|
|-|-|
|[const_iterator](#const_iterator)|A synonym for `iterator`.|
|[iterator](#iterator)|A bidirectional constant iterator that designates the `path` components of `myname`.|
|[string_type](#string_type)|The type is a synonym for `basic_string<value_type>`.|

### Member functions

|Member function|Description|
|-|-|
|[append](#append)|Appends the specified sequence to `mypath`, converted and inserting a preferred_separator as needed.|
|[assign](#assign)|Replaces `mypath` with the specified sequence, converted as needed.|
|[begin](#begin)|Returns a `path::iterator` designating the first path element in the pathname, if present.|
|[c_str](#c_str)|Returns a pointer to the first character in `mypath`.|
|[clear](#clear)|Executes `mypath.clear()`.|
|[compare](#compare)|Returns comparison values.|
|[concat](#compare)|Appends the specified sequence to `mypath`, converted (but not inserting a separator) as needed.|
|[empty](#empty)|Returns `mypath.empty()`.|
|[end](#end)|Returns an end-of-sequence iterator of type `iterator`.|
|[extension](#extension)|Returns the suffix of `filename()`.|
|[filename](#filename)|Returns the root directory component of myname, specifically `empty() ? path() : *--end()`. The component may be empty.|
|[generic_string](#generic_string)|Returns `this->string<Elem, Traits, Alloc>(al)` with (under Windows) any backslash converted to a forward slash.|
|[generic_u16string](#generic_u16string)|Returns `u16string()` with (under Windows) any backslash converted to a forward slash.|
|[generic_u32string](#generic_u32string)|Returns `u32string()` with (under Windows) any backslash converted to a forward slash.|
|[generic_u8string](#generic_u8string)|Returns `u8string()` with (under Windows) any backslash converted to a forward slash.|
|[generic_wstring](#generic_wstring)|Returns `wstring()` with (under Windows) any backslash converted to a forward slash.|
|[has_extension](#has_extension)|Returns `!extension().empty()`.|
|[has_filename](#has_filename)|Returns `!filename().empty()`.|
|[has_parent_path](#has_parent_path)|Returns `!parent_path().empty()`.|
|[has_relative_path](#has_relative_path)|Returns `!relative_path().empty()`.|
|[has_root_directory](#has_root_directory)|Returns `!root_directory().empty()`.|
|[has_root_name](#has_root_name)|Returns `!root_name().empty()`.|
|[has_root_path](#has_root_path)|Returns `!root_path().empty()`.|
|[has_stem](#has_stem)|Returns `!stem().empty()`.|
|[is_absolute](#is_absolute)|For Windows, the function returns `has_root_name() && has_root_directory()`. For POSIX, the function returns `has_root_directory()`.|
|[is_relative](#is_relative)|Returns `!is_absolute()`.|
|[make_preferred](#make_preferred)|Converts each separator to a preferred_separator as needed.|
|[native](#native)|Returns `myname`.|
|[parent_path](#parent_path)|Returns the parent path component of `myname`.|
|[preferred_separator](#preferred_separator)|The constant object gives the preferred character for separating path components, depending on the host operating system. |
|[relative_path](#relative_path)|Returns the relative path component of `myname`. |
|[remove_filename](#remove_filename)|Removes the filename.|
|[replace_extension](#replace_extension)|Replaces the extension of `myname`. |
|[replace_filename](#replace_filename)|RReplaces the filename.|
|[root_directory](#root_directory)|Returns the root directory component of `myname`. |
|[root_name](#root_name)|Returns the root name component of `myname`. |
|[root_path](#root_path)|Returns the root path component of `myname`.|
|[stem](#stem)|Returns the `stem` component of `myname`.|
|[string](#string)|Converts the sequence stored in `mypath`.|
|[swap](#swap)|Executes `swap(mypath, right.mypath)`.|
|[u16string](#u16string)|Converts the sequence stored in `mypath` to UTF-16 and returns it stored in an object of type `u16string`.|
|[u32string](#u32string)|Converts the sequence stored in `mypath` to UTF-32 and returns it stored in an object of type `u32string`.|
|[u8string](#u8string)|Converts the sequence stored in `mypath` to UTF-8 and returns it stored in an object of type `u8string`.|
|[value_type](#value_type)|The type describes the path elements favored by the host operating system.|
|[wstring](#wstring)|Converts the sequence stored in `mypath` to the encoding favored by the host system for a **`wchar_t`** sequence and returns it stored in an object of type `wstring`.|

### Operators

|Operator|Description|
|-|-|
|[operator=](#op_as)|Replaces the elements of the path with a copy of another path.|
|[operator+=](#op_add)|Various `concat` expressions.|
|[operator/=](#op_divide)|Various `append` expressions.|
|[operator string_type](#op_string)|Returns `myname`.|

## Requirements

**Header:** \<filesystem>

**Namespace:** std::experimental::filesystem

## <a name="append"></a> path::append

Appends the specified sequence to `mypath`, converted and inserting a `preferred_separator` as needed.

```cpp
template <class Source>
path& append(const Source& source);

template <class InIt>
path& append(InIt first, InIt last);
```

### Parameters

*source*\
Specified sequence.

*first*\
Start of specified sequence.

*last*\
End of specified sequence.

## <a name="assign"></a> path::assign

Replaces `mypath` with the specified sequence, converted as needed.

```cpp
template <class Source>
path& assign(const Source& source);

template <class InIt>
path& assign(InIt first, InIt last);
```

### Parameters

*source*\
Specified sequence.

*first*\
Start of specified sequence.

*last*\
End of specified sequence.

## <a name="begin"></a> path::begin

Returns a `path::iterator` designating the first path element in the pathname, if present.

```cpp
iterator begin() const;
```

## <a name="c_str"></a> path::c_str

Returns a pointer to the first character in `mypath`.

```cpp
const value_type& *c_str() const noexcept;
```

## <a name="clear"></a> path::clear

Executes `mypath.clear()`.

```cpp
void clear() noexcept;
```

## <a name="compare"></a> path::compare

The first function returns `mypath.compare(pval.native())`. The second function returns `mypath.compare(str)`. The third function returns `mypath.compare(ptr)`.

```cpp
int compare(const path& pval) const noexcept;
int compare(const string_type& str) const;
int compare(const value_type *ptr) const;
```

### Parameters

*pval*\
Path to compare.

*str*\
String to compare.

*ptr*\
Pointer to compare.

## <a name="concat"></a> path::concat

Appends the specified sequence to `mypath`, converted (but not inserting a separator) as needed.

```cpp
template <class Source>
path& concat(const Source& source);

template <class InIt>
path& concat(InIt first, InIt last);
```

### Parameters

*source*\
Specified sequence.

*first*\
Start of specified sequence.

*last*\
End of specified sequence.

## <a name="const_iterator"></a> path::const_iterator

A synonym for `iterator`.

```cpp
typedef iterator const_iterator;
```

## <a name="empty"></a> path::empty

Returns `mypath.empty()`.

```cpp
bool empty() const noexcept;
```

## <a name="end"></a> path::end

Returns an end-of-sequence iterator of type `iterator`.

```cpp
iterator end() const;
```

## <a name="extension"></a> path::extension

Returns the suffix of `filename()`.

```cpp
path extension() const;
```

### Remarks

Returns the suffix of `filename() X` such that:

If `X == path(".") || X == path("..")` or if `X` contains no dot, the suffix is empty.

Otherwise, the suffix begins with (and includes) the rightmost dot.

## <a name="filename"></a> path::filename

Returns the root directory component of myname, specifically `empty() path() : *--end()`. The component may be empty.

```cpp
path filename() const;
```

## <a name="generic_string"></a> path::generic_string

Returns `this->string<Elem, Traits, Alloc>(al)` with (under Windows) any backslash converted to a forward slash.

```cpp
template <class Elem,
    class Traits = char_traits<Elem>,
    class Alloc = allocator<Elem>>
  basic_string<Elem, Traits, Alloc>
    generic_string(const Alloc& al = Alloc()) const;

string generic_string() const;
```

## <a name="generic_u16string"></a> path::generic_u16string

Returns `u16string()` with (under Windows) any backslash converted to a forward slash.

```cpp
u16string generic_u16string() const;
```

## <a name="generic_u32string"></a> path::generic_u32string

Returns `u32string()` with (under Windows) any backslash converted to a forward slash.

```cpp
u32string generic_u32string() const;
```

## <a name="generic_u8string"></a> path::generic_u8string

Returns `u8string()` with (under Windows) any backslash converted to a forward slash.

```cpp
string generic_u8string() const;
```

## <a name="generic_wstring"></a> path::generic_wstring

Returns `wstring()` with (under Windows) any backslash converted to a forward slash.

```cpp
wstring generic_wstring() const;
```

## <a name="has_extension"></a> path::has_extension

Returns `!extension().empty()`.

```cpp
bool has_extension() const;
```

## <a name="has_filename"></a> path::has_filename

Returns `!filename().empty()`.

```cpp
bool has_filename() const;
```

## <a name="has_parent_path"></a> path::has_parent_path

Returns `!parent_path().empty()`.

```cpp
bool has_parent_path() const;
```

## <a name="has_relative_path"></a> path::has_relative_path

Returns `!relative_path().empty()`.

```cpp
bool has_relative_path() const;
```

## <a name="has_root_directory"></a> path::has_root_directory

Returns `!root_directory().empty()`.

```cpp
bool has_root_directory() const;
```

## <a name="has_root_name"></a> path::has_root_name

Returns `!root_name().empty()`.

```cpp
bool has_root_name() const;
```

## <a name="has_root_path"></a> path::has_root_path

Returns `!root_path().empty()`.

```cpp
bool has_root_path() const;
```

## <a name="has_stem"></a> path::has_stem

Returns `!stem().empty()`.

```cpp
bool has_stem() const;
```

## <a name="is_absolute"></a> path::is_absolute

For Windows, the function returns `has_root_name() && has_root_directory()`. For POSIX, the function returns `has_root_directory()`.

```cpp
bool is_absolute() const;
```

## <a name="is_relative"></a> path::is_relative

Returns `!is_absolute()`.

```cpp
bool is_relative() const;
```

## <a name="iterator"></a> path::iterator

A bidirectional constant iterator that designates the path components of `myname`.

```cpp
class iterator
   {
   // bidirectional iterator for path
   typedef bidirectional_iterator_tag iterator_category;
   typedef path_type value_type;
   typedef ptrdiff_t difference_type;
   typedef const value_type *pointer;
   typedef const value_type& reference;
   // ...
   };
```

### Remarks

The class describes a bidirectional constant iterator that designates the `path` components of `myname` in the sequence:

1. the root name, if present

1. the root directory, if present

1. the remaining directory elements of the parent `path`, if present, ending with the filename, if present

For `pval` an object of type `path`:

1. `path::iterator X = pval.begin()` designates the first `path` element in the pathname, if present.

1. `X == pval.end()` is true when `X` points just past the end of the sequence of components.

1. `*X` returns a string that matches the current component

1. `++X` designates the next component in the sequence, if present.

1. `--X` designates the preceding component in the sequence, if present.

1. Altering `myname` invalidates all iterators designating elements in `myname`.

## <a name="make_preferred"></a> path::make_preferred

Converts each separator to a `preferred_separator` as needed.

```cpp
path& make_preferred();
```

## <a name="native"></a> path::native

Returns `myname`.

```cpp
const string_type& native() const noexcept;
```

## <a name="op_as"></a> path::operator=

Replaces the elements of the path with a copy of another path.

```cpp
path& operator=(const path& right);
path& operator=(path&& right) noexcept;

template <class Source>
path& operator=(const Source& source);
```

### Parameters

*right*\
The [path](../standard-library/path-class.md) being copied into the `path`.

*source*\
The source path.

### Remarks

The first member operator copies `right.myname` to `myname`. The second member operator moves `right.myname` to `myname`. The third member operator behaves the same as `*this = path(source)`.

## <a name="op_add"></a> path::operator+=

Various `concat` expressions.

```cpp
path& operator+=(const path& right);
path& operator+=(const string_type& str);
path& operator+=(const value_type *ptr);
path& operator+=(value_type elem);

template <class Source>
path& operator+=(const Source& source);

template <class Elem>
path& operator+=(Elem elem);
```

### Parameters

*right*\
The added path.

*str*\
The added string.

*ptr*\
The added pointer.

*elem*\
The added `value_type` or `Elem`.

*source*\
The added source.

### Remarks

The member functions behave the same as the following corresponding expressions:

1. `concat(right);`

1. `concat(path(str));`

1. `concat(ptr);`

1. `concat(string_type(1, elem));`

1. `concat(source);`

1. `concat(path(basic_string<Elem>(1, elem)));`

## <a name="op_divide"></a> path::operator/=

Various `append` expressions.

```cpp
path& operator/=(const path& right);

template <class Source>
path& operator/=(const Source& source);
```

### Parameters

*right*\
The added path.

*source*\
The added source.

### Remarks

The member functions behave the same as the following corresponding expressions:

1. `append(right);`

1. `append(source);`

## <a name="op_string"></a> path::operator string_type

Returns `myname`.

```cpp
operator string_type() const;
```

## <a name="parent_path"></a> path::parent_path

Returns the parent path component of `myname`.

```cpp
path parent_path() const;
```

### Remarks

Returns the parent path component of `myname`, specifically the prefix of `myname` after removing `filename().native()` and any immediately preceding directory separators. (Equally, if `begin() != end()`, it is the combining of all elements in the range `[begin(), --end())` by successively applying `operator/=`.) The component may be empty.

## <a name="path"></a> path::path

Constructs a `path` in various ways.

```cpp
path();

path(const path& right);
path(path&& right) noexcept;

template <class Source>
path(const Source& source);

template <class Source>
path(const Source& source, const locale& loc);

template <class InIt>
path(InIt first, InIt last);

template <class InIt>
path(InIt first, InIt last, const locale& loc);
```

### Parameters

*right*\
The path of which the constructed path is to be a copy.

*source*\
The source of which the constructed path is to be a copy.

*loc*\
The specified locale.

*first*\
The position of the first element to be copied.

*last*\
The position of the last element to be copied.

### Remarks

The constructors all construct `myname` in various ways:

For `path()` it is `myname()`.

For `path(const path& right`) it is `myname(right.myname)`.

For `path(path&& right)` it is `myname(right.myname)`.

For `template<class Source> path(const Source& source)` it is `myname(source)`.

For `template<class Source> path(const Source& source, const locale& loc)` it is `myname(source)`, obtaining any needed codecvt facets from `loc`.

For `template<class InIt> path(InIt first, InIt last)` it is `myname(first, last)`.

For `template<class InIt> path(InIt first, InIt last, const locale& loc)` it is `myname(first, last)`, obtaining any needed codecvt facets from `loc`.

## <a name="preferred_separator"></a> path::preferred_separator

The constant object gives the preferred character for separating path components, depending on the host operating system.

```cpp
#if _WIN32_C_LIB
static constexpr value_type preferred_separator == L'\\';
#else // assume POSIX
static constexpr value_type preferred_separator == '/';
#endif // filesystem model now defined
```

### Remarks

Note that it is equally permissible in most contexts under Windows to use L'/' in its place.

## <a name="relative_path"></a> path::relative_path

Returns the relative path component of `myname`.

```cpp
path relative_path() const;
```

### Remarks

Returns the relative path component of `myname`, specifically the suffix of `myname` after removing `root_path().native()` and any immediately subsequent redundant directory separators. The component may be empty.

## <a name="remove_filename"></a> path::remove_filename

Removes the filename.

```cpp
path& remove_filename();
```

## <a name="replace_extension"></a> path::replace_extension

Replaces the extension of `myname`.

```cpp
path& replace_extension(const path& newext = path());
```

### Parameters

*newext*\
The new extension.

### Remarks

First removes the suffix `extension().native()` from `myname`. Then if `!newext.empty() && newext[0] != dot` (where `dot` is `*path(".").c_str()`), then `dot` is appended to `myname`. Then *newext* is appended to `myname`.

## <a name="replace_filename"></a> path::replace_filename

Replaces the filename.

```cpp
path& replace_filename(const path& pval);
```

### Parameters

*pval*\
The path of the filename.

### Remarks

The member function executes:

```cpp
remove_filename();

*this /= pval;
return (*this);
```

## <a name="root_directory"></a> path::root_directory

Returns the root directory component of `myname`.

```cpp
path root_directory() const;
```

### Remarks

The component may be empty.

## <a name="root_name"></a> path::root_name

Returns the root name component of `myname`.

```cpp
path root_name() const;
```

### Remarks

The component may be empty.

## <a name="root_path"></a> path::root_path

Returns the root path component of `myname`.

```cpp
path root_path() const;
```

### Remarks

Returns the root path component of `myname`, specifically `root_name()` / `root_directory`. The component may be empty.

## <a name="stem"></a> path::stem

Returns the `stem` component of `myname`.

```cpp
path stem() const;
```

### Remarks

Returns the `stem` component of `myname`, specifically `filename().native()` with any trailing `extension().native()` removed. The component may be empty.

## <a name="string"></a> path::string

Converts the sequence stored in `mypath`.

```cpp
template \<class Elem, class Traits = char_traits\<Elem>, class Alloc = allocator\<Elem>>
basic_string\<Elem, Traits, Alloc> string(const Alloc& al = Alloc()) const;
string string() const;
```

### Remarks

The first (template) member function converts the sequence stored in `mypath` the same way as:

1. `string()` for `string<char, Traits, Alloc>()`

1. `wstring()` for `string<wchar_t, Traits, Alloc>()`

1. `u16string()` for `string<char16_t, Traits, Alloc>()`

1. `u32string()` for `string<char32_t, Traits, Alloc>()`

The second member function converts the sequence stored in `mypath` to the encoding favored by the host system for a **`char`** sequence and returns it stored in an object of type `string`.

## <a name="string_type"></a> path::string_type

The type is a synonym for `basic_string<value_type>`.

```cpp
typedef basic_string<value_type> string_type;
```

## <a name="swap"></a> path::swap

Executes `swap(mypath, right.mypath)`.

```cpp
void swap(path& right) noexcept;
```

## <a name="u16string"></a> path::u16string

Converts the sequence stored in `mypath` to UTF-16 and returns it stored in an object of type `u16string`.

```cpp
u16string u16string() const;
```

## <a name="u32string"></a> path::u32string

Converts the sequence stored in `mypath` to UTF-32 and returns it stored in an object of type `u32string`.

```cpp
u32string u32string() const;
```

## <a name="u8string"></a> path::u8string

Converts the sequence stored in `mypath` to UTF-8 and returns it stored in an object of type `u8string`.

```cpp
string u8string() const;
```

## <a name="value_type"></a> path::value_type

The type describes the `path` elements favored by the host operating system.

```cpp
#if _WIN32_C_LIB
typedef wchar_t value_type;
#else // assume POSIX
typedef char value_type;
#endif // filesystem model now defined
```

## <a name="wstring"></a> path::wstring

Converts the sequence stored in `mypath` to the encoding favored by the host system for a **`wchar_t`** sequence and returns it stored in an object of type `wstring`.

```cpp
wstring wstring() const;
```

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)
