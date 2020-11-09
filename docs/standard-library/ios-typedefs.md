---
title: "`<ios>` typedefs"
description: "Describes the C++ standard template library (STL) `<ios>` typedefs that support the `ios` class from the old `iostream` library."
ms.date: "11/06/2020"
f1_keywords: ["iosfwd/std::ios", "iosfwd/std::streamoff", "iosfwd/std::streampos", "iosfwd/std::streamsize", "iosfwd/std::wios", "iosfwd/std::wstreampos"]
---
# `<ios>` typedefs

## `ios`

Supports the `ios` class from the old `iostream` library.

```cpp
typedef basic_ios<char, char_traits<char>> ios;
```

### Remarks

The type is a synonym for class template [`basic_ios`](../standard-library/basic-ios-class.md), specialized for elements of type **`char`** with default character traits.

## `streamoff`

Supports internal operations.

```cpp
#ifdef _WIN64
    typedef __int64 streamoff;
#else
    typedef long streamoff;
#endif
```

### Remarks

The type is a signed integer. It describes an object that can store a byte offset in stream positioning operations. Its representation has at least 32 value bits. It isn't necessarily large enough to represent an arbitrary byte position within a stream. The value `streamoff(-1)` generally indicates an erroneous offset.

## `streampos`

Holds the current position of the buffer pointer or file pointer.

```cpp
typedef fpos<mbstate_t> streampos;
```

### Remarks

The type is a synonym for [`fpos`](../standard-library/fpos-class.md)< `mbstate_t`>.

### Example

```cpp
// ios_streampos.cpp
// compile with: /EHsc
#include <iostream>
#include <fstream>

int main( )
{
   using namespace std;

   ofstream x( "iostream.txt" );
   x << "testing";
   streampos y = x.tellp( );
   cout << streamoff( y ) << '\n';
}
```

```Output
7
```

## `streamsize`

Denotes the size of the stream.

```cpp
#ifdef _WIN64
    typedef __int64 streamsize;
#else
    typedef int streamsize;
#endif
```

### Remarks

The type is a signed integer that describes an object that can store a count of the number of elements involved in various stream operations. Its representation has at least 16 bits. It isn't necessarily large enough to represent an arbitrary byte position within a stream.

### Example

After compiling and running the following program, look at the file `test.txt` to see the effect of setting `streamsize`.

```cpp
// ios_streamsize.cpp
// compile with: /EHsc
#include <iostream>
#include <fstream>

int main( )
{
   using namespace std;
   char a[16] = "any such text";
   ofstream x( "test.txt" );
   streamsize y = 6;
   x.write( a, y );
}
```

## `wios`

Supports the `wios` class from the old `iostream` library.

```cpp
typedef basic_ios<wchar_t, char_traits<wchar_t>> wios;
```

### Remarks

The type is a synonym for class template [`basic_ios`](../standard-library/basic-ios-class.md), specialized for elements of type **`wchar_t`** with default character traits.

## `wstreampos`

Holds the current position of the buffer pointer or file pointer.

```cpp
typedef fpos<mbstate_t> wstreampos;
```

### Remarks

The type is a synonym for [`fpos`](../standard-library/fpos-class.md)< `mbstate_t`>.

### Example

```cpp
// ios_wstreampos.cpp
// compile with: /EHsc
#include <iostream>
#include <fstream>

int main( )
{
   using namespace std;
   wofstream xw( "wiostream.txt" );
   xw << L"testing";
   wstreampos y = xw.tellp( );
   cout << streamoff( y ) << '\n';
}
```

```Output
7
```
