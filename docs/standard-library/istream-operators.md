---
description: "Learn more about: &lt;istream&gt; operators"
title: "&lt;istream&gt; operators"
ms.date: "11/04/2016"
f1_keywords: ["istream/std::operator&gt;&gt;"]
ms.assetid: 7174da41-f301-4a34-b631-0ab918b188d2
---
# &lt;istream&gt; operators

## <a name="op_gt_gt"></a> operator&gt;&gt;

Extracts characters and strings from the stream.

```cpp
template <class Elem, class Tr>
basic_istream<Elem, Tr>& operator>>(
    basic_istream<Elem, Tr>& Istr,
    Elem* str);

template <class Elem, class Tr>
basic_istream<Elem, Tr>& operator>>(
    basic_istream<Elem, Tr>& Istr,
    Elem& Ch);

template <class Tr>
basic_istream<char, Tr>& operator>>(
    basic_istream<char, Tr>& Istr,
    signed char* str);

template <class Tr>
basic_istream<char, Tr>& operator>>(
    basic_istream<char, Tr>& Istr,
    signed char& Ch);

template <class Tr>
basic_istream<char, Tr>& operator>>(
    basic_istream<char, Tr>& Istr,
    unsigned char* str);

template <class Tr>
basic_istream<char, Tr>& operator>>(
    basic_istream<char, Tr>& Istr,
    unsigned char& Ch);

template <class Elem, class Tr, class Type>
basic_istream<Elem, Tr>& operator>>(
    basic_istream<char, Tr>&& Istr,
    Type& val);
```

### Parameters

*Ch*\
A character.

*Istr*\
A stream.

*str*\
A string.

*val*\
A type.

### Return Value

The stream

### Remarks

The `basic_istream` class also defines several extraction operators. For more information, see [basic_istream::operator>>](../standard-library/basic-istream-class.md#op_gt_gt).

The function template:

```cpp
template <class Elem, class Tr>
basic_istream<Elem, Tr>& operator>>(
    basic_istream<Elem, Tr>& Istr, Elem* str);
```

extracts up to `N - 1` elements and stores them in the array starting at *str*. If `Istr.`[width](../standard-library/ios-base-class.md#width) is greater than zero, *N* is `Istr.width`; otherwise, it's the size of the largest array of `Elem` that can be declared. The function always stores the value `Elem()` after any extracted elements it stores. Extraction stops early on end of file, on a character with value `Elem(0)` (which isn't extracted), or on any element (which isn't extracted) that would be discarded by [ws](../standard-library/istream-functions.md#ws). If the function extracts no elements, it calls `Istr.`[`setstate`](../standard-library/basic-ios-class.md#setstate)`(failbit)`. In any case, it calls `Istr.width(0)` and returns *Istr*.

**Security Note** The null-terminated string being extracted from the input stream must not exceed the size of the destination buffer *str*. For more information, see [Avoiding Buffer Overruns](/windows/win32/SecBP/avoiding-buffer-overruns).

The function template:

```cpp
template <class Elem, class Tr>
basic_istream<Elem, Tr>& operator>>(
    basic_istream<Elem, Tr>& Istr, Elem& Ch);
```

extracts an element, if possible, and stores it in *Ch*. Otherwise, it calls `is.`[`setstate`](../standard-library/basic-ios-class.md#setstate)`(failbit)`. In any case, it returns *Istr*.

The function template:

```cpp
template <class Tr>
basic_istream<char, Tr>& operator>>(
    basic_istream<char, Tr>& Istr, signed char* str);
```

returns `Istr >> ( char * ) str`.

The function template:

```cpp
template <class Tr>
basic_istream<char, Tr>& operator>>(
    basic_istream<char, Tr>& Istr, signed char& Ch);
```

returns `Istr >> ( char& ) Ch`.

The function template:

```cpp
template <class Tr>
basic_istream<char, Tr>& operator>>(
    basic_istream<char, Tr>& Istr, unsigned char* str);
```

returns `Istr >> ( char * ) str`.

The function template:

```cpp
template <class Tr>
basic_istream<char, Tr>& operator>>(
    basic_istream<char, Tr>& Istr, unsigned char& Ch);
```

returns `Istr >> ( char& ) Ch`.

The function template:

```cpp
template <class Elem, class Tr, class Type>
basic_istream<Elem, Tr>& operator>>(
    basic_istream<char, Tr>&& Istr,
    Type& val);
```

returns `Istr >> val` (and converts an rvalue reference to `Istr` to an lvalue in the process).

### Example

```cpp
// istream_op_extract.cpp
// compile with: /EHsc
#include <iostream>
using namespace std;

int main( )
{
   ws( cin );
   char c[10];

   cin.width( 9 );
   cin >> c;
   cout << c << endl;
}
```

## See also

[\<istream>](../standard-library/istream.md)
