---
description: "Learn more about: &lt;fstream&gt; typedefs"
title: "&lt;fstream&gt; typedefs"
ms.date: "11/04/2016"
f1_keywords: ["fstream/std::filebuf", "fstream/std::fstream", "fstream/std::ifstream", "fstream/std::ofstream", "fstream/std::wfilebuf", "fstream/std::wfstream", "fstream/std::wifstream", "fstream/std::wofstream"]
ms.assetid: 8dddef2d-7f17-42a6-ba08-6f6f20597d23
---
# &lt;fstream&gt; typedefs

[filebuf](#filebuf)\
[fstream](#fstream)\
[ifstream](#ifstream)\
[ofstream](#ofstream)\
[wfilebuf](#wfilebuf)\
[wfstream](#wfstream)\
[wifstream](#wifstream)\
[wofstream](#wofstream)

## <a name="filebuf"></a> filebuf

A type `basic_filebuf` specialized on **`char`** template parameters.

```cpp
typedef basic_filebuf<char, char_traits<char>> filebuf;
```

### Remarks

The type is a synonym for class template [basic_filebuf](../standard-library/basic-filebuf-class.md), specialized for elements of type **`char`** with default character traits.

## <a name="fstream"></a> fstream

A type `basic_fstream` specialized on **`char`** template parameters.

```cpp
typedef basic_fstream<char, char_traits<char>> fstream;
```

### Remarks

The type is a synonym for class template [basic_fstream](../standard-library/basic-fstream-class.md), specialized for elements of type **`char`** with default character traits.

## <a name="ifstream"></a> ifstream

Defines a stream to be used to read single-byte character data serially from a file. `ifstream` is a typedef that specializes the class template `basic_ifstream` for **`char`**.

There is also `wifstream`, a typedef that specializes `basic_ifstream` to read **`wchar_t`** double-wide characters. For more information, see [wifstream](../standard-library/fstream-typedefs.md#wifstream).

```cpp
typedef basic_ifstream<char, char_traits<char>> ifstream;
```

### Remarks

The type is a synonym for class template [basic_ifstream](../standard-library/basic-ifstream-class.md), specialized for elements of type char with default character traits. An example is

```cpp
using namespace std;

ifstream infile("existingtextfile.txt");

if (!infile.bad())
{
    // Dump the contents of the file to cout.
    cout << infile.rdbuf();infile.close();
}
```

## <a name="ofstream"></a> ofstream

A type `basic_ofstream` specialized on **`char`** template parameters.

```cpp
typedef basic_ofstream<char, char_traits<char>> ofstream;
```

### Remarks

The type is a synonym for class template [basic_ofstream](../standard-library/basic-ofstream-class.md), specialized for elements of type **`char`** with default character traits.

## <a name="wfstream"></a> wfstream

A type `basic_fstream` specialized on **`wchar_t`** template parameters.

```cpp
typedef basic_fstream<wchar_t, char_traits<wchar_t>> wfstream;
```

### Remarks

The type is a synonym for class template [basic_fstream](../standard-library/basic-fstream-class.md), specialized for elements of type **`wchar_t`** with default character traits.

## <a name="wifstream"></a> wifstream

A type `basic_ifstream` specialized on **`wchar_t`** template parameters.

```cpp
typedef basic_ifstream<wchar_t, char_traits<wchar_t>> wifstream;
```

### Remarks

The type is a synonym for class template [basic_ifstream](../standard-library/basic-ifstream-class.md), specialized for elements of type **`wchar_t`** with default character traits.

## <a name="wofstream"></a> wofstream

A type `basic_ofstream` specialized on **`wchar_t`** template parameters.

```cpp
typedef basic_ofstream<wchar_t, char_traits<wchar_t>> wofstream;
```

### Remarks

The type is a synonym for class template [basic_ofstream](../standard-library/basic-ofstream-class.md), specialized for elements of type **`wchar_t`** with default character traits.

## <a name="wfilebuf"></a> wfilebuf

A type `basic_filebuf` specialized on **`wchar_t`** template parameters.

```cpp
typedef basic_filebuf<wchar_t, char_traits<wchar_t>> wfilebuf;
```

### Remarks

The type is a synonym for class template [basic_filebuf](../standard-library/basic-filebuf-class.md), specialized for elements of type **`wchar_t`** with default character traits.

## See also

[\<fstream>](../standard-library/fstream.md)
