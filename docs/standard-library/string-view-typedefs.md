---
description: "Learn more about: &lt;string_view&gt; typedefs"
title: "&lt;string_view&gt; typedefs"
ms.date: "04/19/2019"
f1_keywords: ["xstring/std::string_view", "xstring/std::u16string_view", "xstring/std::u32string_view", "xstring/std::wstring_view"]
---
# &lt;string_view&gt; typedefs

[string_view](#string_view)\
[u16string_view](#u16string_view)\
[u32string_view](#u32string_view)\
[wstring_view](#wstring_view)

## <a name="string_view"></a> string_view

A type that describes a specialization of the class template [basic_string_view](../standard-library/basic-string-view-class.md) with elements of type **`char`**.

```cpp
typedef basic_string_view<char, char_traits<char>> string_view;
```

### Remarks

The following are equivalent declarations:

```cpp
string_view str("Hello");

basic_string_view<char> str("Hello");
```

For a list of string constructors, see [basic_string::basic_string](../standard-library/basic-string-class.md#basic_string).

## <a name="u16string_view"></a> u16string_view

A type that describes a specialization of the class template [basic_string_view](../standard-library/basic-string-view-class.md) with elements of type **`char16_t`**.

```cpp
typedef basic_string_view<char16_t, char_traits<char16_t>> u16string_view;
```

### Remarks

For a list of string constructors, see [basic_string::basic_string](../standard-library/basic-string-class.md#basic_string).

## <a name="u32string_view"></a> u32string_view

A type that describes a specialization of the class template [basic_string_view](../standard-library/basic-string-view-class.md) with elements of type **`char32_t`**.

```cpp
typedef basic_string_view<char32_t, char_traits<char32_t>> u32string_view;
```

### Remarks

For a list of string constructors, see [basic_string::basic_string](../standard-library/basic-string-class.md#basic_string).

## <a name="wstring_view"></a> wstring_view

A type that describes a specialization of the class template [basic_string_view](../standard-library/basic-string-view-class.md) with elements of type **`wchar_t`**.

```cpp
typedef basic_string_view<wchar_t, char_traits<wchar_t>> wstring_view;
```

### Remarks

The following are equivalent declarations:

```cpp
wstring_view wstr(L"Hello");

basic_string_view<wchar_t> wstr(L"Hello");
```

For a list of string constructors, see [basic_string::basic_string](../standard-library/basic-string-class.md#basic_string).

> [!NOTE]
> The size of **`wchar_t`** is two bytes on Windows but this is not necessarily the case for all platforms. If you need a string_view wide character type with a width that is guaranteed to remain the same on all platforms, use [u16string_view](../standard-library/string-view-typedefs.md#u16string_view) or [u32string_view](../standard-library/string-view-typedefs.md#u32string_view).

## See also

[\<string_view>](../standard-library/string-view.md)
