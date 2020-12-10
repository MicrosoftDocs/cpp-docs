---
description: "Learn more about: &lt;bitset&gt; operators"
title: "&lt;bitset&gt; operators"
ms.date: "11/04/2016"
f1_keywords: ["bitset/std::operator&amp;", "bitset/std::operator&gt;&gt;", "bitset/std::operator&lt;&lt;", "bitset/std::operator^", "bitset/std::operator|"]
ms.assetid: 84fe6a13-6f6e-4cdc-bf8f-6f65ab1134d4
helpviewer_keywords: ["std::operator&amp; (bitset)", "std::operator&gt;&gt; (bitset)", "std::operator&lt;&lt; (bitset)"]
---
# &lt;bitset&gt; operators

## <a name="op_amp"></a> operator&amp;

Performs a bitwise `AND` between two bitsets.

```cpp
template <size_t size>
bitset<size>
operator&(
    const bitset<size>& left,
    const bitset<size>& right);
```

### Parameters

*left*\
The first of the two bitsets whose respective elements are to be combined with the bitwise `AND`.

*right*\
The second of the two valarrays whose respective elements are to be combined with the bitwise `AND`.

### Return Value

A bitset whose elements are the result of performing the `AND` operation on the corresponding elements of *left* and *right*.

### Example

```cpp
// bitset_and.cpp
// compile with: /EHsc
#include <bitset>
#include <iostream>
#include <string>

using namespace std;

int main()
{
   bitset<4> b1 ( string("0101") );
   bitset<4> b2 ( string("0011") );
   bitset<4> b3 = b1 & b2;
   cout << "bitset 1: " << b1 << endl;
   cout << "bitset 2: " << b2 << endl;
   cout << "bitset 3: " << b3 << endl;
}
```

```Output
bitset 1: 0101
bitset 2: 0011
bitset 3: 0001
```

## <a name="op_lt_lt"></a> operator&lt;&lt;

Inserts a text representation of the bit sequence into the output stream.

```cpp
template <class CharType, class Traits, size_t N>
basic_ostream<CharType, Traits>& operator<<(
    basic_ostream<CharType, Traits>& ostr,
    const bitset<N>& right);
```

### Parameters

*right*\
An object of type **bitset\<N>** that is to be inserted into the output stream as a string.

### Return Value

A text representation of the bit sequence in `ostr`.

### Remarks

The template function overloads `operator<<`, allowing a bitset to be written out without first converting it into a string. The template function effectively executes:

`ostr << right.`[to_string](bitset-class.md)`<CharType, Traits, allocator<CharType>>()`

### Example

```cpp
// bitset_op_insert.cpp
// compile with: /EHsc
#include <bitset>
#include <iostream>
#include <string>

int main( )
{
   using namespace std;

   bitset<5> b1 ( 9 );

   // bitset inserted into output stream directly
   cout << "The ordered set of bits in the bitset<5> b1(9)"
        << "\n can be output with the overloaded << as: ( "
        << b1 << " )" << endl;

   // Compare converting bitset to a string before
   // inserting it into the output steam
   string s1;
   s1 =  b1.template to_string<char,
      char_traits<char>, allocator<char> >( );
   cout << "The string returned from the bitset b1"
        << "\n by the member function to_string( ) is: "
        << s1 << "." << endl;
}
```

## <a name="op_gt_gt"></a> operator&gt;&gt;

Reads a string of bit characters into a bitset.

```cpp
template <class CharType, class Traits, size_t Bits>
basic_istream<CharType, Traits>& operator>> (
    basic_istream<CharType, Traits>& i_str,
    bitset<N>& right);
```

### Parameters

*i_str*\
The string that is entered into the input stream to be inserted into the bitset.

*right*\
The bitset that is receiving the bits from the input stream.

### Return Value

The template function returns the string *i_str*.

### Remarks

The template function overloads `operator>>` to store in the bitset *right* the value `bitset(str)`, where `str` is an object of type [basic_string](basic-string-class.md)`< CharType, Traits, allocator< CharType > >&` extracted from *i_str*.

The template function extracts elements from *i_str* and inserts them into the bitset until:

- All the bit elements have been extracted from the input stream and stored in the bitset.

- The bitset is filled up with bits from the input stream.

- An input element is encountered that is neither 0 nor 1.

### Example

```cpp
#include <bitset>
#include <iostream>
#include <string>

using namespace std;
int main()
{

   bitset<5> b1;
   cout << "Enter string of (0 or 1) bits for input into bitset<5>.\n"
        << "Try bit string of length less than or equal to 5,\n"
        << " (for example: 10110): ";
   cin >>  b1;

   cout << "The ordered set of bits entered from the "
        << "keyboard\n has been input into bitset<5> b1 as: ( "
        << b1 << " )" << endl;

   // Truncation due to longer string of bits than length of bitset
   bitset<2> b3;
   cout << "Enter string of bits (0 or 1) for input into bitset<2>.\n"
        << " Try bit string of length greater than 2,\n"
        << " (for example: 1011): ";
   cin >>  b3;

   cout << "The ordered set of bits entered from the "
        << "keyboard\n has been input into bitset<2> b3 as: ( "
        << b3 << " )" << endl;

   // Flushing the input stream
   char buf[100];
   cin.getline(&buf[0], 99);

   // Truncation with non-bit value
   bitset<5> b2;
   cout << "Enter a string for input into  bitset<5>.\n"
        << " that contains a character than is NOT a 0 or a 1,\n "
        << " (for example: 10k01): ";
   cin >>  b2;

   cout << "The string entered from the keyboard\n"
        << " has been input into bitset<5> b2 as: ( "
        << b2 << " )" << endl;
}
```

## <a name="op_xor"></a> operator^

Performs a bitwise `EXCLUSIVE-OR` between two bitsets.

```cpp
template <size_t size>
bitset<size>
operator^(
    const bitset<size>& left,
    const bitset<size>& right);
```

### Parameters

*left*\
The first of the two bitsets whose respective elements are to be combined with the bitwise `EXCLUSIVE-OR`.

*right*\
The second of the two valarrays whose respective elements are to be combined with the bitwise `EXCLUSIVE-OR`.

### Return Value

A bitset whose elements are the result of performing the `EXCLUSIVE-OR` operation on the corresponding elements of *left* and *right*.

### Example

```cpp
// bitset_xor.cpp
// compile with: /EHsc
#include <bitset>
#include <iostream>
#include <string>

using namespace std;

int main()
{
   bitset<4> b1 ( string("0101") );
   bitset<4> b2 ( string("0011") );
   bitset<4> b3 = b1 ^ b2;
   cout << "bitset 1: " << b1 << endl;
   cout << "bitset 2: " << b2 << endl;
   cout << "bitset 3: " << b3 << endl;
}
```

```Output
bitset 1: 0101
bitset 2: 0011
bitset 3: 0110
```

## <a name="op_or"></a> operator&#124;

Performs a bitwise `OR` between two bitsets.

```cpp
template <size_t size>
bitset<size>
operator|(
    const bitset<size>& left,
    const bitset<size>& right);
```

### Parameters

*left*\
The first of the two bitsets whose respective elements are to be combined with the bitwise `OR`.

*right*\
The second of the two valarrays whose respective elements are to be combined with the bitwise `OR`.

### Return Value

A bitset whose elements are the result of performing the `OR` operation on the corresponding elements of *left* and *right*.

### Example

```cpp
// bitset_or.cpp
// compile with: /EHsc
#include <bitset>
#include <iostream>
#include <string>

using namespace std;

int main()
{
   bitset<4> b1 ( string("0101") );
   bitset<4> b2 ( string("0011") );
   bitset<4> b3 = b1 | b2;
   cout << "bitset 1: " << b1 << endl;
   cout << "bitset 2: " << b2 << endl;
   cout << "bitset 3: " << b3 << endl;
}
```

```Output
bitset 1: 0101
bitset 2: 0011
bitset 3: 0111
```
