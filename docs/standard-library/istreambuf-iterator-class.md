---
description: "Learn more about: istreambuf_iterator Class"
title: "istreambuf_iterator Class"
ms.date: "11/04/2016"
f1_keywords: ["streambuf/std::istreambuf_iterator", "iterator/std::istreambuf_iterator::char_type", "iterator/std::istreambuf_iterator::int_type", "iterator/std::istreambuf_iterator::istream_type", "iterator/std::istreambuf_iterator::streambuf_type", "iterator/std::istreambuf_iterator::traits_type", "iterator/std::istreambuf_iterator::equal"]
helpviewer_keywords: ["std::istreambuf_iterator [C++]", "std::istreambuf_iterator [C++], char_type", "std::istreambuf_iterator [C++], int_type", "std::istreambuf_iterator [C++], istream_type", "std::istreambuf_iterator [C++], streambuf_type", "std::istreambuf_iterator [C++], traits_type", "std::istreambuf_iterator [C++], equal"]
ms.assetid: 39002da2-61a6-48a5-9d0c-5df8271f6038
---
# istreambuf_iterator Class

The class template istreambuf_iterator describes an input iterator object that extracts character elements from an input stream buffer, which it accesses through an object it stores, of type pointer to `basic_streambuf`\< **CharType**, **Traits**>.

## Syntax

```cpp
template <class CharType class Traits = char_traits <CharType>>
class istreambuf_iterator
: public iterator<input_iterator_tag, CharType, typename Traits ::off_type, CharType*, CharType&>
```

### Parameters

*CharType*\
The type that represents the character type for the istreambuf_iterator.

*Traits*\
The type that represents the character type for the istreambuf_iterator. This argument is optional and the default value is `char_traits`\< *CharType>.*

## Remarks

The istreambuf_iterator class must satisfy the requirements for an input iterator.

After constructing or incrementing an object of class istreambuf_iterator with a non-null stored pointer, the object effectively attempts to extract and store an object of type *CharType* from the associated input stream. The extraction may be delayed, however, until the object is actually dereferenced or copied. If the extraction fails, the object effectively replaces the stored pointer with a null pointer, thus making an end-of-sequence indicator.

### Constructors

|Constructor|Description|
|-|-|
|[istreambuf_iterator](#istreambuf_iterator)|Constructs an `istreambuf_iterator` that is initialized to read characters from the input stream.|

### Typedefs

|Type name|Description|
|-|-|
|[char_type](#char_type)|A type that provides for the character type of the `ostreambuf_iterator`.|
|[int_type](#int_type)|A type that provides an integer type for an `istreambuf_iterator`.|
|[istream_type](#istream_type)|A type that provides for the stream type of the `istream_iterator`.|
|[streambuf_type](#streambuf_type)|A type that provides for the stream type of the `istreambuf_iterator`.|
|[traits_type](../standard-library/istream-iterator-class.md#traits_type)|A type that provides for the character traits type of the `istream_iterator`.|

### Member functions

|Member function|Description|
|-|-|
|[equal](#equal)|Tests for equality between two input stream buffer iterators.|

### Operators

|Operator|Description|
|-|-|
|[operator*](#op_star)|The dereferencing operator returns the next character in the stream.|
|[operator++](#op_add_add)|Either returns the next character from the input stream or copies the object before incrementing it and returns the copy.|
|[operator->](#op_arrow)|Returns the value of a member, if any.|

## Requirements

**Header:** \<iterator>

**Namespace:** std

## <a name="char_type"></a> istreambuf_iterator::char_type

A type that provides for the character type of the `ostreambuf_iterator`.

```cpp
typedef CharType char_type;
```

### Remarks

The type is a synonym for the template parameter *CharType*.

### Example

```cpp
// istreambuf_iterator_char_type.cpp
// compile with: /EHsc
#include <iterator>
#include <vector>
#include <iostream>
#include <algorithm>

int main( )
{
   using namespace std;

   typedef istreambuf_iterator<char>::char_type CHT1;
   typedef istreambuf_iterator<char>::traits_type CHTR1;

   cout << "(Try the example: 'So many dots to be done'\n"
        << " then an Enter key to insert into the output,\n"
        << " & use a ctrl-Z Enter key combination to exit): ";

   // istreambuf_iterator for input stream
   istreambuf_iterator< CHT1, CHTR1> charInBuf ( cin );
   ostreambuf_iterator<char> charOut ( cout );

   // Used in conjunction with replace_copy algorithm
   // to insert into output stream and replace spaces
   // with dot-separators
   replace_copy ( charInBuf , istreambuf_iterator<char>( ),
        charOut , ' ' , '.' );
}
```

## <a name="equal"></a> istreambuf_iterator::equal

Tests for equivalence between two input stream buffer iterators.

```cpp
bool equal(const istreambuf_iterator<CharType, Traits>& right) const;
```

### Parameters

*right*\
The iterator for which to check for equality.

### Return Value

**`true`** if both `istreambuf_iterator`s are end-of-stream iterators or if neither is an end-of-stream iterator; otherwise **`false`**.

### Remarks

A range is defined by the `istreambuf_iterator` to the current position and the end-of-stream iterator, but since all non-end-of stream iterators are equivalent under the `equal` member function, it is not possible to define any subranges using `istreambuf_iterator`s. The `==` and `!=` operators have the same semantics.

### Example

```cpp
// istreambuf_iterator_equal.cpp
// compile with: /EHsc
#include <iterator>
#include <iostream>

int main( )
{
   using namespace std;

   cout << "(Try the example: 'Hello world!'\n"
        << " then an Enter key to insert into the output,\n"
        << " & use a ctrl-Z Enter key combination to exit): ";

   istreambuf_iterator<char> charReadIn1 ( cin );
   istreambuf_iterator<char> charReadIn2 ( cin );

   bool b1 = charReadIn1.equal ( charReadIn2 );

   if (b1)
      cout << "The iterators are equal." << endl;
   else
      cout << "The iterators are not equal." << endl;
}
```

## <a name="int_type"></a> istreambuf_iterator::int_type

A type that provides an integer type for an `istreambuf_iterator`.

```cpp
typedef typename traits_type::int_type int_type;
```

### Remarks

The type is a synonym for `Traits::int_type`.

### Example

```cpp
// istreambuf_iterator_int_type.cpp
// compile with: /EHsc
#include <iterator>
#include <iostream>

int main( )
{
   using namespace std;
   istreambuf_iterator<char>::int_type inttype1 = 100;
   cout << "The inttype1 = " << inttype1 << "." << endl;
}
/* Output:
The inttype1 = 100.
*/
```

## <a name="istream_type"></a> istreambuf_iterator::istream_type

A type that provides for the stream type of the `istreambuf_iterator`.

```cpp
typedef basic_istream<CharType, Traits> istream_type;
```

### Remarks

The type is a synonym for `basic_istream`\< **CharType**, **Traits**>.

### Example

See [istreambuf_iterator](#istreambuf_iterator) for an example of how to declare and use `istream_type`.

## <a name="istreambuf_iterator"></a> istreambuf_iterator::istreambuf_iterator

Constructs an istreambuf_iterator that is initialized to read characters from the input stream.

```cpp
istreambuf_iterator(streambuf_type* strbuf = 0) throw();
istreambuf_iterator(istream_type& _Istr) throw();
```

### Parameters

*strbuf*\
The input stream buffer to which the `istreambuf_iterator` is being attached.

*_Istr*\
The input stream to which the `istreambuf_iterator` is being attached.

### Remarks

The first constructor initializes the input stream-buffer pointer with *strbuf*. The second constructor initializes the input stream-buffer pointer with *_Istr*. `rdbuf`, and then eventually attempts to extract and store an object of type `CharType`.

### Example

```cpp
// istreambuf_iterator_istreambuf_iterator.cpp
// compile with: /EHsc
#include <iterator>
#include <vector>
#include <algorithm>
#include <iostream>

int main( )
{
   using namespace std;

   // Following declarations will not compile:
   istreambuf_iterator<char>::istream_type &istrm = cin;
   istreambuf_iterator<char>::streambuf_type *strmbf = cin.rdbuf( );

   cout << "(Try the example: 'Oh what a world!'\n"
      << " then an Enter key to insert into the output,\n"
      << " & use a ctrl-Z Enter key combination to exit): ";
   istreambuf_iterator<char> charReadIn ( cin );
   ostreambuf_iterator<char> charOut ( cout );

   // Used in conjunction with replace_copy algorithm
   // to insert into output stream and replace spaces
   // with hyphen-separators
   replace_copy ( charReadIn , istreambuf_iterator<char>( ),
      charOut , ' ' , '-' );
}
```

## <a name="op_star"></a> istreambuf_iterator::operator*

The dereferencing operator returns the next character in the stream.

```cpp
CharType operator*() const;
```

### Return Value

The next character in the stream.

### Example

```cpp
// istreambuf_iterator_operator_deref.cpp
// compile with: /EHsc
#include <iterator>
#include <iostream>

int main( )
{
   using namespace std;

   cout << "Type string of characters & enter to output it,\n"
      << " with stream buffer iterators,(try: 'I'll be back.')\n"
      << " repeat as many times as desired,\n"
      << " then keystroke ctrl-Z Enter to exit program: ";
   istreambuf_iterator<char> inpos ( cin );
   istreambuf_iterator<char> endpos;
   ostreambuf_iterator<char> outpos ( cout );
   while ( inpos != endpos )
   {
*outpos = *inpos;   //Put value of outpos equal to inpos
      ++inpos;
      ++outpos;
   }
}
```

## <a name="op_add_add"></a> istreambuf_iterator::operator++

Either returns the next character from the input stream or copies the object before incrementing it and returns the copy.

```cpp
istreambuf_iterator<CharType, Traits>& operator++();
istreambuf_iterator<CharType, Traits> operator++(int);
```

### Return Value

An `istreambuf_iterator` or a reference to an `istreambuf_iterator`.

### Remarks

The first operator eventually attempts to extract and store an object of type `CharType` from the associated input stream. The second operator makes a copy of the object, increments the object, and then returns the copy.

### Example

```cpp
// istreambuf_iterator_operator_incr.cpp
// compile with: /EHsc
#include <iterator>
#include <iostream>

int main( )
{
   using namespace std;

   cout << "Type string of characters & enter to output it,\n"
      << " with stream buffer iterators,(try: 'I'll be back.')\n"
      << " repeat as many times as desired,\n"
      << " then keystroke ctrl-Z Enter to exit program: ";
   istreambuf_iterator<char> inpos ( cin );
   istreambuf_iterator<char> endpos;
   ostreambuf_iterator<char> outpos ( cout );
   while ( inpos != endpos )
   {
*outpos = *inpos;
      ++inpos;   //Increment istreambuf_iterator
      ++outpos;
   }
}
```

## <a name="op_arrow"></a> istreambuf_iterator::operator-&gt;

Returns the value of a member, if any.

```cpp
const Elem* operator->() const;
```

### Return Value

The operator returns **&\*\*this**.

## <a name="streambuf_type"></a> istreambuf_iterator::streambuf_type

A type that provides for the stream type of the istreambuf_iterator.

```cpp
typedef basic_streambuf<CharType, Traits> streambuf_type;
```

### Remarks

The type is a synonym for `basic_streambuf`\< **CharType**, **Traits**>.

### Example

See [istreambuf_iterator](#istreambuf_iterator) for an example of how to declare and use `istreambuf_type`.

## <a name="traits_type"></a> istreambuf_iterator::traits_type

A type that provides for the character traits type of the `istream_iterator`.

```cpp
typedef Traits traits_type;
```

### Remarks

The type is a synonym for the template parameter *Traits*.

### Example

```cpp
// istreambuf_iterator_traits_type.cpp
// compile with: /EHsc
#include <iterator>
#include <vector>
#include <iostream>
#include <algorithm>

int main( )
{
   using namespace std;

   typedef istreambuf_iterator<char>::char_type CHT1;
   typedef istreambuf_iterator<char>::traits_type CHTR1;

   cout << "(Try the example: 'So many dots to be done'\n"
        << " then an Enter key to insert into the output,\n"
        << " & use a ctrl-Z Enter key combination to exit): ";

   // istreambuf_iterator for input stream
   istreambuf_iterator< CHT1, CHTR1> charInBuf ( cin );
   ostreambuf_iterator<char> charOut ( cout );

   // Used in conjunction with replace_copy algorithm
   // to insert into output stream and replace spaces
   // with dot-separators
   replace_copy ( charInBuf , istreambuf_iterator<char>( ),
        charOut , ' ' , '.' );
}
```

## See also

[iterator Struct](../standard-library/iterator-struct.md)\
[\<iterator>](../standard-library/iterator.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)
