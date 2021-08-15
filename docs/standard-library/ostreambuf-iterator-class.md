---
description: "Learn more about: ostreambuf_iterator Class"
title: "ostreambuf_iterator Class"
ms.date: "11/04/2016"
f1_keywords: ["streambuf/std::ostreambuf_iterator", "iterator/std::ostreambuf_iterator::char_type", "iterator/std::ostreambuf_iterator::ostream_type", "iterator/std::ostreambuf_iterator::streambuf_type", "iterator/std::ostreambuf_iterator::traits_type", "iterator/std::ostreambuf_iterator::failed"]
helpviewer_keywords: ["std::ostreambuf_iterator [C++]", "std::ostreambuf_iterator [C++], char_type", "std::ostreambuf_iterator [C++], ostream_type", "std::ostreambuf_iterator [C++], streambuf_type", "std::ostreambuf_iterator [C++], traits_type", "std::ostreambuf_iterator [C++], failed"]
ms.assetid: dad1e624-2f45-4e94-8887-a885e95f9071
---
# ostreambuf_iterator Class

The class template ostreambuf_iterator describes an output iterator object that writes successive character elements onto the output stream with the extraction **operator>>**. The `ostreambuf_iterator`s differ from those of the [ostream_iterator Class](../standard-library/ostream-iterator-class.md) in having characters instead of a generic type at the type of object being inserted into the output stream.

## Syntax

```cpp
template <class CharType = char class Traits = char_traits <CharType>>
```

### Parameters

*CharType*\
The type that represents the character type for the ostreambuf_iterator. This argument is optional and the default value is **`char`**.

*Traits*\
The type that represents the character type for the ostreambuf_iterator. This argument is optional and the default value is `char_traits`\< *CharType>.*

## Remarks

The ostreambuf_iterator class must satisfy the requirements for an output iterator. Algorithms can be written directly to output streams using an `ostreambuf_iterator`. The class provides a low-level stream iterator that allows access to the raw (unformatted) I/O stream in the form of characters and the ability to bypass the buffering and character translations associated with the high-level stream iterators.

### Constructors

|Constructor|Description|
|-|-|
|[ostreambuf_iterator](#ostreambuf_iterator_ostreambuf_iterator)|Constructs an `ostreambuf_iterator` that is initialized to write characters to the output stream.|

### Typedefs

|Type name|Description|
|-|-|
|[char_type](#char_type)|A type that provides for the character type of the `ostreambuf_iterator`.|
|[ostream_type](#ostreambuf_iterator_ostream_type)|A type that provides for the stream type of the `ostream_iterator`.|
|[streambuf_type](#streambuf_type)|A type that provides for the stream type of the `ostreambuf_iterator`.|
|[traits_type](#traits_type)|A type that provides for the character traits type of the `ostream_iterator`.|

### Member functions

|Member function|Description|
|-|-|
|[failed](#failed)|Tests for failure of an insertion into the output stream buffer.|

### Operators

|Operator|Description|
|-|-|
|[operator*](#op_star)|Dereferencing operator used to implement the output iterator expression \* `i` = `x`.|
|[operator++](#op_add_add)|A nonfunctional increment operator that returns an `ostreambuf_iterator` to the same object it addressed before the operation was called.|
|[operator=](#op_eq)|The operator inserts a character into the associated stream buffer.|

## Requirements

**Header:** \<iterator>

**Namespace:** std

## <a name="char_type"></a> ostreambuf_iterator::char_type

A type that provides for the character type of the `ostreambuf_iterator`.

```cpp
typedef CharType char_type;
```

### Remarks

The type is a synonym for the template parameter `CharType`.

### Example

```cpp
// ostreambuf_iterator_char_type.cpp
// compile with: /EHsc
#include <iterator>
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;

   typedef ostreambuf_iterator<char>::char_type CHT1;
   typedef ostreambuf_iterator<char>::traits_type CHTR1;

   // ostreambuf_iterator for stream cout
   // with new line delimiter:
    ostreambuf_iterator< CHT1, CHTR1> charOutBuf ( cout );

   // Standard iterator interface for writing
   // elements to the output streambuf:
   cout << "The characters written to the output stream\n"
        << " by charOutBuf are: ";
*charOutBuf = 'O';
   charOutBuf++;
*charOutBuf = 'U';
   charOutBuf++;
*charOutBuf = 'T';
   charOutBuf++;
   cout << "." << endl;
}
/* Output:
The characters written to the output stream
by charOutBuf are: OUT.
*/
```

## <a name="failed"></a> ostreambuf_iterator::failed

Tests for failure of an insertion into the output stream buffer.

```cpp
bool failed() const throw();
```

### Return Value

**`true`** if no insertion into the output stream buffer has failed earlier; otherwise **`false`**.

### Remarks

The member function returns **`true`** if, in any prior use of member `operator=`, the call to **subf**_-> `sputc` returned **eof**.

### Example

```cpp
// ostreambuf_iterator_failed.cpp
// compile with: /EHsc
#include <iterator>
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;

   // ostreambuf_iterator for stream cout
   ostreambuf_iterator<char> charOut ( cout );

*charOut = 'a';
   charOut ++;
*charOut  = 'b';
   charOut ++;
*charOut = 'c';
   cout << " are characters output individually." << endl;

   bool b1 = charOut.failed ( );
   if (b1)
       cout << "At least one insertion failed." << endl;
   else
       cout << "No insertions failed." << endl;
}
/* Output:
abc are characters output individually.
No insertions failed.
*/
```

## <a name="op_star"></a> ostreambuf_iterator::operator\*

A nonfunctional dereferencing operator used to implement the output iterator expression \* *i* = *x*.

```cpp
ostreambuf_iterator<CharType, Traits>& operator*();
```

### Return Value

The ostreambuf iterator object.

### Remarks

This operator functions only in the output iterator expression \* *i* = *x* to output characters to stream buffer. Applied to an ostreambuf iterator, it returns the iterator; **\*iter** returns **iter**,

### Example

```cpp
// ostreambuf_iterator_op_deref.cpp
// compile with: /EHsc
#include <iterator>
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;

   // ostreambuf_iterator for stream cout
   // with new line delimiter
   ostreambuf_iterator<char> charOutBuf ( cout );

   // Standard iterator interface for writing
   // elements to the output stream
   cout << "Elements written to output stream:" << endl;
*charOutBuf = 'O';
   charOutBuf++;   // no effect on iterator position
*charOutBuf = 'U';
*charOutBuf = 'T';
}
/* Output:
Elements written to output stream:
OUT
*/
```

## <a name="op_add_add"></a> ostreambuf_iterator::operator++

A nonfunctional increment operator that returns an ostream iterator to the same character it addressed before the operation was called.

```cpp
ostreambuf_iterator<CharType, Traits>& operator++();
ostreambuf_iterator<CharType, Traits>& operator++(int);
```

### Return Value

A reference to the character originally addressed or to an implementation-defined object that is convertible to `ostreambuf_iterator`\< **CharType**, **Traits**>.

### Remarks

The operator is used to implement the output iterator expression \* *i* = *x*.

### Example

```cpp
// ostreambuf_iterator_op_incr.cpp
// compile with: /EHsc
#include <iterator>
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;

   // ostreambuf_iterator for stream cout
   // with new line delimiter
   ostreambuf_iterator<char> charOutBuf ( cout );

   // Standard iterator interface for writing
   // elements to the output stream
   cout << "Elements written to output stream:" << endl;
*charOutBuf = 'O';
   charOutBuf++;      // No effect on iterator position
*charOutBuf = 'U';
*charOutBuf = 'T';
}
/* Output:
Elements written to output stream:
OUT
*/
```

## <a name="op_eq"></a> ostreambuf_iterator::operator=

The operator inserts a character into the associated stream buffer.

```cpp
ostreambuf_iterator<CharType, Traits>& operator=(CharType _Char);
```

### Parameters

*_Char*\
The character to be inserted into the stream buffer.

### Return Value

A reference to the character inserted into the stream buffer.

### Remarks

Assignment operator used to implement the output iterator expression \* *i* = *x* for writing to an output stream.

### Example

```cpp
// ostreambuf_iterator_op_assign.cpp
// compile with: /EHsc
#include <iterator>
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;

   // ostreambuf_iterator for stream cout
   // with new line delimiter
   ostreambuf_iterator<char> charOutBuf ( cout );

   // Standard iterator interface for writing
   // elements to the output stream
   cout << "Elements written to output stream:" << endl;
*charOutBuf = 'O';
   charOutBuf++;      // No effect on iterator position
*charOutBuf = 'U';
*charOutBuf = 'T';
}
/* Output:
Elements written to output stream:
OUT
*/
```

## <a name="ostreambuf_iterator_ostreambuf_iterator"></a> ostreambuf_iterator::ostreambuf_iterator

Constructs an `ostreambuf_iterator` that is initialized to write characters to the output stream.

```cpp
ostreambuf_iterator(streambuf_type* strbuf) throw();
ostreambuf_iterator(ostream_type& Ostr) throw();
```

### Parameters

*strbuf*\
The output streambuf object used to initialize the output stream-buffer pointer.

*Ostr*\
The output stream object used to initialize the output stream-buffer pointer.

### Remarks

The first constructor initializes the output stream-buffer pointer with *strbuf*.

The second constructor initializes the output stream-buffer pointer with `Ostr`. `rdbuf`. The stored pointer must not be a null pointer.

### Example

```cpp
// ostreambuf_iteratorOstreambuf_iterator.cpp
// compile with: /EHsc
#include <iterator>
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;

   // ostreambuf_iterator for stream cout
   ostreambuf_iterator<char> charOut ( cout );

*charOut = 'O';
   charOut ++;
*charOut  = 'U';
   charOut ++;
*charOut = 'T';
   cout << " are characters output individually." << endl;

   ostreambuf_iterator<char> strOut ( cout );
   string str = "These characters are being written to the output stream.\n ";
   copy ( str.begin ( ), str. end ( ), strOut );
}
/* Output:
OUT are characters output individually.
These characters are being written to the output stream.
*/
```

## <a name="ostreambuf_iterator_ostream_type"></a> ostreambuf_iterator::ostream_type

A type that provides for the stream type of the `ostream_iterator`.

```cpp
typedef basicOstream<CharType, Traits> ostream_type;
```

### Remarks

The type is a synonym for `basicOstream`\< **CharType**, **Traits**>

### Example

See [ostreambuf_iterator](#ostreambuf_iterator_ostreambuf_iterator) for an example of how to declare and use `ostream_type`.

## <a name="streambuf_type"></a> ostreambuf_iterator::streambuf_type

A type that provides for the stream type of the `ostreambuf_iterator`.

```cpp
typedef basic_streambuf<CharType, Traits> streambuf_type;
```

### Remarks

The type is a synonym for `basic_streambuf`\< **CharType**, **Traits**>, a stream class for I/O buffers that becomes `streambuf` when specialized to character type **`char`**.

### Example

See [ostreambuf_iterator](#ostreambuf_iterator_ostreambuf_iterator) for an example of how to declare and use `streambuf_type`.

## <a name="traits_type"></a> ostreambuf_iterator::traits_type

A type that provides for the character traits type of the `ostream_iterator`.

```cpp
typedef Traits traits_type;
```

### Remarks

The type is a synonym for the template parameter `Traits`.

### Example

```cpp
// ostreambuf_iterator_traits_type.cpp
// compile with: /EHsc
#include <iterator>
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;

   typedef ostreambuf_iterator<char>::char_type CHT1;
   typedef ostreambuf_iterator<char>::traits_type CHTR1;

   // ostreambuf_iterator for stream cout
   // with new line delimiter:
    ostreambuf_iterator< CHT1, CHTR1> charOutBuf ( cout );

   // Standard iterator interface for writing
   // elements to the output streambuf:
   cout << "The characters written to the output stream\n"
        << " by charOutBuf are: ";
*charOutBuf = 'O';
   charOutBuf++;
*charOutBuf = 'U';
   charOutBuf++;
*charOutBuf = 'T';
   charOutBuf++;
   cout << "." << endl;
}
/* Output:
The characters written to the output stream
by charOutBuf are: OUT.
*/
```

## See also

[\<iterator>](../standard-library/iterator.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)
