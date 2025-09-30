---
title: "<istream> typedefs"
description: "Learn more about: <istream> typedefs"
ms.date: 11/04/2016
f1_keywords: ["istream/std::iostream", "istream/std::istream", "istream/std::wiostream", "istream/std::wistream"]
---
# `<istream>` typedefs

The `<istream>` header provides the following typedefs:

## <a name="iostream"></a> iostream

A type `basic_iostream` specialized on **`char`**.

```cpp
typedef basic_iostream<char, char_traits<char>> iostream;
```

### Remarks

The type is a synonym for class template [basic_iostream](../standard-library/basic-iostream-class.md), specialized for elements of type **`char`** with default character traits.

## <a name="istream"></a> istream

A type `basic_istream` specialized on **`char`**.

```cpp
typedef basic_istream<char, char_traits<char>> istream;
```

### Remarks

The type is a synonym for class template [basic_istream](../standard-library/basic-istream-class.md), specialized for elements of type **`char`** with default character traits.

## <a name="wiostream"></a> wiostream

A type `basic_iostream` specialized on **`wchar_t`**.

```cpp
typedef basic_iostream<wchar_t, char_traits<wchar_t>> wiostream;
```

### Remarks

The type is a synonym for class template [basic_iostream](../standard-library/basic-iostream-class.md), specialized for elements of type **`wchar_t`** with default character traits.

## <a name="wistream"></a> wistream

A type `basic_istream` specialized on **`wchar_t`**.

```cpp
typedef basic_istream<wchar_t, char_traits<wchar_t>> wistream;
```

### Remarks

The type is a synonym for class template [basic_istream](../standard-library/basic-istream-class.md), specialized for elements of type **`wchar_t`** with default character traits.

## See also

[\<istream>](../standard-library/istream.md)
