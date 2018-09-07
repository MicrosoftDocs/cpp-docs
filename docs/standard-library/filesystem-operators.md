---
title: "&lt;filesystem&gt; operators | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["FILESYSTEM/std::experimental::filesystem::operator==", "FILESYSTEM/std::experimental::filesystem::operator!=", "FILESYSTEM/std::experimental::filesystem::operator<", "FILESYSTEM/std::experimental::filesystem::operator<=", "FILESYSTEM/std::experimental::filesystem::operator>", "FILESYSTEM/std::experimental::filesystem::operator>=", "FILESYSTEM/std::experimental::filesystem::operator/", "FILESYSTEM/std::experimental::filesystem::operator<<", "FILESYSTEM/std::experimental::filesystem::operator>>"]
dev_langs: ["C++"]
ms.assetid: 102c4833-aa3b-41a8-8998-f5003c546bfd
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# &lt;filesystem&gt; operators

The operators perform a lexical comparison of two paths as strings. Use the `equivalent` function to determine whether two paths (for example a relative path and an absolute path) refer to the same file or directory on disk.

For more information, see [File System Navigation (C++)](../standard-library/file-system-navigation.md).

## operator==

```cpp
bool operator==(const path& left, const path& right) noexcept;
```

The function returns left.native() == right.native().

## operator!=

```cpp
bool operator!=(const path& left, const path& right) noexcept;
```

The function returns !(left == right).

## operator<

```cpp
bool operator<(const path& left, const path& right) noexcept;
```

The function returns left.native() < right.native().

## operator<=

```cpp
bool operator<=(const path& left, const path& right) noexcept;
```

The function returns !(right \< left).

## operator>

```cpp
bool operator>(const path& left, const path& right) noexcept;
```

The function returns right \< left.

## operator>=

```cpp
bool operator>=(const path& left, const path& right) noexcept;
```

The function returns !(left < right).

## operator/

```cpp
path operator/(const path& left, const path& right);
```

The function executes:

```cpp
basic_string<Elem, Traits> str;
path ans = left;
return (ans /= right);
```

## operator<<

```cpp
template <class Elem, class Traits>
basic_ostream<Elem, Traits>& operator<<(basic_ostream<Elem, Traits>& os, const path& pval);
```

The function returns os << pval.string\<Elem, Traits>().

## operator>>

```cpp
template <class Elem, class Traits>
basic_istream<Elem, Traits>& operator<<(basic_istream<Elem, Traits>& is, const path& pval);
```

The function executes:

```cpp
basic_string<Elem, Traits> str;
is>> str;
pval = str;
return (is);
```

## See also

[path Class (C++ Standard Library)](../standard-library/path-class.md)<br/>
[File System Navigation (C++)](../standard-library/file-system-navigation.md)<br/>
[\<filesystem>](../standard-library/filesystem.md)<br/>
