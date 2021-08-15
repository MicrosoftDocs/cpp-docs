---
description: "Learn more about: char_traits Struct"
title: "char_traits Struct"
ms.date: "05/07/2019"
f1_keywords: ["iosfwd/std::char_traits", "iosfwd/std::char_traits::char_type", "iosfwd/std::char_traits::int_type", "iosfwd/std::char_traits::off_type", "iosfwd/std::char_traits::pos_type", "iosfwd/std::char_traits::state_type", "iosfwd/std::char_traits::assign", "iosfwd/std::char_traits::compare", "iosfwd/std::char_traits::copy", "iosfwd/std::char_traits::_Copy_s", "iosfwd/std::char_traits::eof", "iosfwd/std::char_traits::eq", "iosfwd/std::char_traits::eq_int_type", "iosfwd/std::char_traits::find", "iosfwd/std::char_traits::length", "iosfwd/std::char_traits::lt", "iosfwd/std::char_traits::move", "iosfwd/std::char_traits::_Move_s", "iosfwd/std::char_traits::not_eof", "iosfwd/std::char_traits::to_char_type", "iosfwd/std::char_traits::to_int_type"]
helpviewer_keywords: ["char_traits struct", "char_traits class"]
ms.assetid: 568e59f0-4521-4207-9223-9dcf6a16d620
---
# char_traits Struct

The char_traits struct describes attributes associated with a character.

## Syntax

```cpp
template <class CharType>
struct char_traits;
```

### Parameters

*CharType*\
The element data type.

## Remarks

The template struct describes various character traits for type `CharType`. The class template [basic_string](../standard-library/basic-string-class.md) as well as several iostream class templates, including [basic_ios](../standard-library/basic-ios-class.md), use this information to manipulate elements of type `CharType`. Such an element type must not require explicit construction or destruction. It must supply a default constructor, a copy constructor, and an assignment operator, with the expected semantics. A bitwise copy must have the same effect as an assignment. None of the member functions of struct char_traits can throw exceptions.

### Typedefs

|Type name|Description|
|-|-|
|[char_type](#char_type)|A type of character.|
|[int_type](#int_type)|An integer type that can represent a character of type `char_type` or an end-of-file (EOF) character.|
|[off_type](#off_type)|An integer type that can represent offsets between positions in a stream.|
|[pos_type](#pos_type)|An integer type that can represent positions in a stream.|
|[state_type](#state_type)|A type that represents the conversion state in for multibyte characters in a stream.|

### Member functions

|Member function|Description|
|-|-|
|[assign](#assign)|Assigns one character value to another.|
|[compare](#compare)|Compares up to a specified number of characters in two strings.|
|[copy](#copy)|Copies a specified number of characters from one string to another. Deprecated. Use [char_traits::_Copy_s](#copy_s) instead.|
|[_Copy_s](#copy_s)|Copies a specified number of characters from one string to another.|
|[eof](#eof)|Returns the end-of-file (EOF) character.|
|[eq](#eq)|Tests whether two `char_type` characters are equal.|
|[eq_int_type](#eq_int_type)|Tests whether two characters represented as `int_type`s are equal.|
|[find](#find)|Searches for the first occurrence of a specified character in a range of characters.|
|[length](#length)|Returns the length of a string.|
|[lt](#lt)|Tests whether one character is less than another.|
|[move](#move)|Copies a specified number of characters in a sequence to another, possible overlapping, sequence. Deprecated. Use [char_traits::_Move_s](#move_s) instead.|
|[_Move_s](#move_s)|Copies a specified number of characters in a sequence to another, possible overlapping, sequence.|
|[not_eof](#not_eof)|Tests whether a character is the end-of-file (EOF) character.|
|[to_char_type](#to_char_type)|Converts an `int_type` character to the corresponding `char_type` character and returns the result.|
|[to_int_type](#to_int_type)|Converts a `char_type` character to the corresponding `int_type` character and returns the result.|

## Requirements

**Header:** \<string>

**Namespace:** std

## <a name="assign"></a> char_traits::assign

Assigns one character value to another or to a range of elements in a string.

```cpp
static void assign(char_type& _CharTo,
    const char_type& _CharFrom);

static char_type *assign(char_type* strTo,
    size_t _Num,
    char_type _CharFrom);
```

### Parameters

**_** *CharFrom*
The character whose value is to be assigned.

*_CharTo*\
The element that is to be assigned the character value.

*strTo*\
The string or character array whose initial elements are to be assigned character values.

*_Num*\
The number of elements that are going to be assigned values.

### Return Value

The second member function returns a pointer to the string whose first *_Num* elements have been assigned values of *_CharFrom*.

### Example

```cpp
// char_traits_assign.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;

   // The first member function assigning
   // one character value to another character
   char ChTo = 't';
   const char ChFrom = 'f';
   cout << "The initial characters ( ChTo , ChFrom ) are: ( "
        << ChTo << " , " << ChFrom << " )." << endl;
   char_traits<char>::assign ( ChTo , ChFrom );
   cout << "After assigning, the characters ( ChTo , ChFrom ) are: ( "
        << ChTo << " , " << ChFrom << " )." << endl << endl;

   // The second member function assigning
   // character values to initial part of a string
   char_traits<char>::char_type s1[] = "abcd-1234-abcd";
   char_traits<char>::char_type* result1;
   cout << "The target string s1 is: " << s1 << endl;
   result1 = char_traits<char>::assign ( s1 , 4 , 'f' );
   cout << "The result1 = assign ( s1 , 4 , 'f' ) is: "
        << result1 << endl;
}
```

```Output
The initial characters ( ChTo , ChFrom ) are: ( t , f ).
After assigning, the characters ( ChTo , ChFrom ) are: ( f , f ).

The target string s1 is: abcd-1234-abcd
The result1 = assign ( s1 , 4 , 'f' ) is: ffff-1234-abcd
```

## <a name="char_type"></a> char_traits::char_type

A type of character.

```cpp
typedef CharType char_type;
```

### Remarks

The type is a synonym for the template parameter `CharType`.

### Example

See the example for [copy](#copy) for an example of how to declare and use `char_type`.

## <a name="compare"></a> char_traits::compare

Compares up to a specified number of characters in two strings.

```cpp
static int compare(const char_type* str1,
    const char_type* str2,
    size_t _Num);
```

### Parameters

*str1*\
The first of two strings to be compared to each other.

*str2*\
The second of two strings to be compared to each other.

*_Num*\
The number of elements in the strings to be compared.

### Return Value

A negative value if the first string is less than the second string, 0 if the two strings are equal, or a positive value if the first string is greater than the second string.

### Remarks

The comparison between the strings is made element by element, first testing for equality and then, if a pair of elements in the sequence tests not equal, they are tested for less than.

If two strings compare equal over a range but one is longer than the other, then the shorter of the two is less than the longer one.

### Example

```cpp
// char_traits_compare.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main() {
   using namespace std;

   char_traits<char>::char_type* s1 = "CAB";
   char_traits<char>::char_type* s2 = "ABC";
   char_traits<char>::char_type* s3 = "ABC";
   char_traits<char>::char_type* s4 = "ABCD";

   cout << "The string s1 is: " << s1 << endl;
   cout << "The string s2 is: " << s2 << endl;
   cout << "The string s3 is: " << s3 << endl;
   cout << "The string s4 is: " << s4 << endl;

   int comp1, comp2, comp3, comp4;
   comp1 = char_traits<char>::compare ( s1 , s2 , 2 );
   comp2 = char_traits<char>::compare ( s2 , s3 , 3 );
   comp3 = char_traits<char>::compare ( s3 , s4 , 4 );
   comp4 = char_traits<char>::compare ( s4 , s3 , 4 );
   cout << "compare ( s1 , s2 , 2 ) = " << comp1 << endl;
   cout << "compare ( s2 , s3 , 3 ) = " << comp2 << endl;
   cout << "compare ( s3 , s4 , 4 ) = " << comp3 << endl;
   cout << "compare ( s4 , s3 , 4 ) = " << comp4 << endl;
}
```

## <a name="copy"></a> char_traits::copy

Copies a specified number of characters from one string to another.

This method is potentially unsafe, as it relies on the caller to check that the passed values are correct. Consider using [char_traits::_Copy_s](#copy_s) instead.

```cpp
static char_type *copy(char_type* _To,
    const char_type* _From,
    size_t _Num);
```

### Parameters

*_To*\
The element at the beginning of the string or character array targeted to receive the copied sequence of characters.

*_From*\
The element at the beginning of the source string or character array to be copied.

*_Num*\
The number of elements to be copied.

### Return Value

The first element copied into the string or character array targeted to receive the copied sequence of characters.

### Remarks

The source and destination character sequences must not overlap.

### Example

```cpp
// char_traits_copy.cpp
// compile with: /EHsc /W3
#include <string>
#include <iostream>

int main( )
{
   using namespace std;

   char_traits<char>::char_type s1[] = "abcd-1234-abcd";
   char_traits<char>::char_type s2[] = "ABCD-1234";
   char_traits<char>::char_type* result1;
   cout << "The source string is: " << s1 << endl;
   cout << "The destination string is: " << s2 << endl;
   // Note: char_traits::copy is potentially unsafe, consider
   // using char_traits::_Copy_s instead.
   result1 = char_traits<char>::copy ( s1 , s2 , 4 );  // C4996
   cout << "The result1 = copy ( s1 , s2 , 4 ) is: "
        << result1 << endl;
}
```

```Output
The source string is: abcd-1234-abcd
The destination string is: ABCD-1234
The result1 = copy ( s1 , s2 , 4 ) is: ABCD-1234-abcd
```

## <a name="copy_s"></a> char_traits::_Copy_s

Copies a specified number of characters from one string to another.

```cpp
static char_type *_Copy_s(
    char_type* dest,
    size_t dest_size,
    const char_type* _From,
    size_t count);
```

### Parameters

*dest*\
The string or character array targeted to receive the copied sequence of characters.

*dest_size*\
The size of *dest*. If `char_type` is **`char`**, then this size is in bytes. If `char_type` is **`wchar_t`**, then this size is in words.

*_From*\
The source string or character array to be copied.

*count*\
The number of elements to be copied.

### Return Value

The string or character array targeted to receive the copied sequence of characters.

### Remarks

The source and destination character sequences must not overlap.

### Example

```cpp
// char_traits__Copy_s.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
    using namespace std;

    char_traits<char>::char_type s1[] = "abcd-1234-abcd";
    char_traits<char>::char_type s2[] = "ABCD-1234";
    char_traits<char>::char_type* result1;
    cout << "The source string is: " << s1 << endl;
    cout << "The destination string is: " << s2 << endl;
    result1 = char_traits<char>::_Copy_s(s1,
        char_traits<char>::length(s1), s2, 4);
    cout << "The result1 = _Copy_s(s1, "
         << "char_traits<char>::length(s1), s2, 4) is: "
         << result1 << endl;
}
```

```Output
The source string is: abcd-1234-abcd
The destination string is: ABCD-1234
The result1 = _Copy_s(s1, char_traits<char>::length(s1), s2, 4) is: ABCD-1234-abcd
```

## <a name="eof"></a> char_traits::eof

Returns the end-of-file (EOF) character.

```cpp
static int_type eof();
```

### Return Value

The EOF character.

### Remarks

A value that represents end of file (such as EOF or WEOF).

The C++ standard states that this value must not correspond to a valid `char_type` value. The Microsoft C++ compiler enforces this constraint for type **`char`**, but not for type **`wchar_t`**. The example below demonstrates this.

### Example

```cpp
// char_traits_eof.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main()
{
    using namespace std;

    char_traits<char>::char_type ch1 = 'x';
    char_traits<char>::int_type int1;
    int1 = char_traits<char>::to_int_type(ch1);
    cout << "char_type ch1 is '" << ch1 << "' and corresponds to int_type "
         << int1 << "." << endl << endl;

    char_traits<char>::int_type int2 = char_traits<char>::eof();
    cout << "The eof marker for char_traits<char> is: " << int2 << endl;

    char_traits<wchar_t>::int_type int3 = char_traits<wchar_t>::eof();
    cout << "The eof marker for char_traits<wchar_t> is: " << int3 << endl;
}
```

```Output
char_type ch1 is 'x' and corresponds to int_type 120.

The eof marker for char_traits<char> is: -1
The eof marker for char_traits<wchar_t> is: 65535
```

## <a name="eq"></a> char_traits::eq

Tests whether two `char_type` characters are equal.

```cpp
static bool eq(const char_type& _Ch1, const char_type& _Ch2);
```

### Parameters

*_Ch1*\
The first of two characters to be tested for equality.

*_Ch2*\
The second of two characters to be tested for equality.

### Return Value

**`true`** if the first character is equal to the second character; otherwise **`false`**.

### Example

```cpp
// char_traits_eq.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;

   char_traits<char>::char_type ch1 =  'x';
   char_traits<char>::char_type ch2 =  'y';
   char_traits<char>::char_type ch3 =  'x';

   // Testing for equality
   bool b1 = char_traits<char>::eq ( ch1 , ch2 );
   if ( b1 )
      cout << "The character ch1 is equal "
           << "to the character ch2." << endl;
   else
      cout << "The character ch1 is not equal "
           << "to the character ch2." << endl;

   // An equivalent and alternatively test procedure
   if ( ch1 == ch3 )
      cout << "The character ch1 is equal "
           << "to the character ch3." << endl;
   else
      cout << "The character ch1 is not equal "
           << "to the character ch3." << endl;
}
```

```Output
The character ch1 is not equal to the character ch2.
The character ch1 is equal to the character ch3.
```

## <a name="eq_int_type"></a> char_traits::eq_int_type

Tests whether two characters represented as `int_type`s are equal or not.

```cpp
static bool eq_int_type(const int_type& _Ch1, const int_type& _Ch2);
```

### Parameters

*_Ch1*\
The first of the two characters to be tested for equality as `int_type`s.

*_Ch2*\
The second of the two characters to be tested for equality as `int_type`s.

### Return Value

**`true`** if the first character is equal to the second character; otherwise **`false`**.

### Example

```cpp
// char_traits_eq_int_type.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;

   char_traits<char>::char_type ch1 =  'x';
   char_traits<char>::char_type ch2 =  'y';
   char_traits<char>::char_type ch3 =  'x';

   // Converting from char_type to int_type
   char_traits<char>::int_type int1, int2 , int3;
   int1 =char_traits<char>:: to_int_type ( ch1 );
   int2 =char_traits<char>:: to_int_type ( ch2 );
   int3 =char_traits<char>:: to_int_type ( ch3 );

   cout << "The char_types and corresponding int_types are:"
        << "\n    ch1 = " << ch1 << " corresponding to int1 = "
        << int1 << "."
        << "\n    ch2 = " << ch2 << " corresponding to int1 = "
        << int2 << "."
        << "\n    ch3 = " << ch3 << " corresponding to int1 = "
        << int3 << "." << endl << endl;

   // Testing for equality of int_type representations
   bool b1 = char_traits<char>::eq_int_type ( int1 , int2 );
   if ( b1 )
      cout << "The int_type representation of character ch1\n "
           << "is equal to the int_type representation of ch2."
           << endl;
   else
      cout << "The int_type representation of character ch1\n is "
           << "not equal to the int_type representation of ch2."
           << endl;

   // An equivalent and alternatively test procedure
   if ( int1 == int3 )
      cout << "The int_type representation of character ch1\n "
           << "is equal to the int_type representation of ch3."
           << endl;
   else
      cout << "The int_type representation of character ch1\n is "
           << "not equal to the int_type representation of ch3."
           << endl;
}
```

```Output
The char_types and corresponding int_types are:
    ch1 = x corresponding to int1 = 120.
    ch2 = y corresponding to int1 = 121.
    ch3 = x corresponding to int1 = 120.

The int_type representation of character ch1
is not equal to the int_type representation of ch2.
The int_type representation of character ch1
is equal to the int_type representation of ch3.
```

## <a name="find"></a> char_traits::find

Searches for the first occurrence of a specified character in a range of characters.

```cpp
static const char_type* find(const char_type* str,
    size_t _Num,
    const char_type& _Ch);
```

### Parameters

*str*\
The first character in the string to be searched.

*_Num*\
The number of positions, counting from the first, in the range to be searched.

*_Ch*\
The character to be searched for in the range.

### Return Value

A pointer to the first occurrence of the specified character in the range if a match is found; otherwise, a null pointer.

### Example

```cpp
// char_traits_find.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;

   const char* s1 = "f2d-1234-abcd";
   const char* result1;
   cout << "The string to be searched is: " << s1 << endl;

   // Searching for a 'd' in the first 6 positions of string s1
   result1 = char_traits<char>::find ( s1 , 6 , 'd');
   cout << "The character searched for in s1 is: "
        << *result1 << endl;
   cout << "The string beginning with the first occurrence\n "
        << "of the character 'd' is: " << result1 << endl;

   // When no match is found the NULL value is returned
   const char* result2;
   result2 = char_traits<char>::find ( s1 , 3 , 'a');
   if ( result2 == NULL )
      cout << "The result2 of the search is NULL." << endl;
   else
      cout << "The result2 of the search  is: " << result1
           << endl;
}
```

```Output
The string to be searched is: f2d-1234-abcd
The character searched for in s1 is: d
The string beginning with the first occurrence
of the character 'd' is: d-1234-abcd
The result2 of the search is NULL.
```

## <a name="int_type"></a> char_traits::int_type

An integer type that can represent a character of type `char_type` or an end-of-file (EOF) character.

```cpp
typedef long int_type;
```

### Remarks

It must be possible to type cast a value of type `CharType` to `int_type` then back to `CharType` without altering the original value.

### Example

See the example for [eq_int_type](#eq_int_type) for an example of how to declare and use `int_type`.

## <a name="length"></a> char_traits::length

Returns the length of a string.

```cpp
static size_t length(const char_type* str);
```

### Parameters

*str*\
The C-string whose length is to be measured.

### Return Value

The number of elements in the sequence being measured, not including the null terminator.

### Example

```cpp
// char_traits_length.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;
   const char* str1= "Hello";
   cout << "The C-string str1 is: " << str1 << endl;

   size_t lenStr1;
   lenStr1 = char_traits<char>::length ( str1 );
   cout << "The length of C-string str1 is: "
        << lenStr1 << "." << endl;
}
```

```Output
The C-string str1 is: Hello
The length of C-string str1 is: 5.
```

## <a name="lt"></a> char_traits::lt

Tests whether one character is less than another.

```cpp
static bool lt(const char_type& _Ch1, const char_type& _Ch2);
```

### Parameters

*_Ch1*\
The first of two characters to be tested for less than.

*_Ch2*\
The second of two characters to be tested for less than.

### Return Value

**`true`** if the first character is less than the second character; otherwise **`false`**.

### Example

```cpp
// char_traits_lt.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;
   char_traits<char>::char_type ch1 =  'x';
   char_traits<char>::char_type ch2 =  'y';
   char_traits<char>::char_type ch3 =  'z';

   // Testing for less than
   bool b1 = char_traits<char>::lt ( ch1 , ch2 );
   if ( b1 )
      cout << "The character ch1 is less than "
           << "the character ch2." << endl;
   else
      cout << "The character ch1 is not less "
           << "than the character ch2." << endl;

   // An equivalent and alternatively test procedure
   if ( ch3 <  ch2 )
      cout << "The character ch3 is less than "
           << "the character ch2." << endl;
   else
      cout << "The character ch3 is not less "
           << "than the character ch2." << endl;
}
```

```Output
The character ch1 is less than the character ch2.
The character ch3 is not less than the character ch2.
```

## <a name="move"></a> char_traits::move

Copies a specified number of characters in a sequence to another, possibly overlapping sequence.

This method is potentially unsafe, as it relies on the caller to check that the passed values are correct. Consider using [char_traits::_Move_s](#move_s) instead.

```cpp
static char_type *move(char_type* _To,
    const char_type* _From,
    size_t _Num);
```

### Parameters

*_To*\
The element at the beginning of the string or character array targeted to receive the copied sequence of characters.

*_From*\
The element at the beginning of the source string or character array to be copied.

*_Num*\
The number of elements to be copied from the source string.

### Return Value

The first element *_To* copied into the string or character array targeted to receive the copied sequence of characters.

### Remarks

The source and destination may overlap.

### Example

```cpp
// char_traits_move.cpp
// compile with: /EHsc /W3
#include <string>
#include <iostream>

int main( )
{
   using namespace std;

   char_traits<char>::char_type sFrom1[] =  "abcd-1234-abcd";
   char_traits<char>::char_type sTo1[] =  "ABCD-1234";
   char_traits<char>::char_type* result1;
   cout << "The source string sFrom1 is: " << sFrom1 << endl;
   cout << "The destination stringsTo1 is: " << sTo1 << endl;
   // Note: char_traits::move is potentially unsafe, consider
   // using char_traits::_Move_s instead.
   result1 = char_traits<char>::move ( sTo1 ,  sFrom1 , 4 );  // C4996
   cout << "The result1 = move ( sTo1 , sFrom1 , 4 ) is: "
        << result1 << endl << endl;

   // When source and destination overlap
   char_traits<char>::char_type sToFrom2[] = "abcd-1234-ABCD";
   char_traits<char>::char_type* result2;
   cout << "The source/destination string sToFrom2 is: "
        << sToFrom2 << endl;
   const char* findc = char_traits<char>::find ( sToFrom2 , 4 , 'c' );
   // Note: char_traits::move is potentially unsafe, consider
   // using char_traits::_Move_s instead.
   result2 = char_traits<char>::move ( sToFrom2 , findc , 8 );  // C4996
   cout << "The result2 = move ( sToFrom2 , findc , 8 ) is: "
        << result2 << endl;
}
```

```Output
The source string sFrom1 is: abcd-1234-abcd
The destination stringsTo1 is: ABCD-1234
The result1 = move ( sTo1 , sFrom1 , 4 ) is: abcd-1234

The source/destination string sToFrom2 is: abcd-1234-ABCD
The result2 = move ( sToFrom2 , findc , 8 ) is: cd-1234-4-ABCD
```

## <a name="move_s"></a> char_traits::_Move_s

Copies a specified number of characters in a sequence to another, possibly overlapping sequence.

```cpp
static char_type *_Move_s(
    char_type* dest,
    size_t dest_size,
    const char_type* _From,
    size_t count);
```

### Parameters

*dest*\
The element at the beginning of the string or character array targeted to receive the copied sequence of characters.

*dest_size*\
The size of *dest*. If `char_type` is **`char`**, then this is in bytes. If `char_type` is **`wchar_t`**, then this is in words.

*_From*\
The element at the beginning of the source string or character array to be copied.

*count*\
The number of elements to be copied from the source string.

### Return Value

The first element *dest* copied into the string or character array targeted to receive the copied sequence of characters.

### Remarks

The source and destination may overlap.

### Example

```cpp
// char_traits__Move_s.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
    using namespace std;

    char_traits<char>::char_type sFrom1[] =  "abcd-1234-abcd";
    char_traits<char>::char_type sTo1[] =  "ABCD-1234";
    char_traits<char>::char_type* result1;
    cout << "The source string sFrom1 is: " << sFrom1 << endl;
    cout << "The destination stringsTo1 is: " << sTo1 << endl;
    result1 = char_traits<char>::_Move_s(sTo1,
        char_traits<char>::length(sTo1), sFrom1, 4);
    cout << "The result1 = _Move_s(sTo1, "
         << "char_traits<char>::length(sTo1), sFrom1, 4) is: "
         << result1 << endl << endl;

    // When source and destination overlap
    char_traits<char>::char_type sToFrom2[] = "abcd-1234-ABCD";
    char_traits<char>::char_type* result2;
    cout << "The source/destination string sToFrom2 is: "
         << sToFrom2 << endl;
    const char* findc = char_traits<char>::find(sToFrom2, 4, 'c');
    result2 = char_traits<char>::_Move_s(sToFrom2,
        char_traits<char>::length(sToFrom2), findc, 8);
    cout << "The result2 = _Move_s(sToFrom2, "
        << "char_traits<char>::length(sToFrom2), findc, 8) is: "
         << result2 << endl;
}
```

```Output
The source string sFrom1 is: abcd-1234-abcd
The destination stringsTo1 is: ABCD-1234
The result1 = _Move_s(sTo1, char_traits<char>::length(sTo1), sFrom1, 4) is: abcd-1234

The source/destination string sToFrom2 is: abcd-1234-ABCD
The result2 = _Move_s(sToFrom2, char_traits<char>::length(sToFrom2), findc, 8) is: cd-1234-4-ABCD
```

## <a name="not_eof"></a> char_traits::not_eof

Tests whether a character is not the end-of-file (EOF) character or is the EOF.

```cpp
static int_type not_eof(const int_type& _Ch);
```

### Parameters

*_Ch*\
The character represented as an `int_type` to be tested for whether it is the EOF character or not.

### Return Value

The `int_type` representation of the character tested, if the `int_type` of the character is not equal to that of the EOF character.

If the character `int_type` value is equal to the EOF `int_type` value, then **`false`**.

### Example

```cpp
// char_traits_not_eof.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( ) {
   using namespace std;

   char_traits<char>::char_type ch1 =  'x';
   char_traits<char>::int_type int1;
   int1 = char_traits<char>:: to_int_type ( ch1 );
   cout << "The char_type ch1 is " << ch1
        << " corresponding to int_type: "
        << int1 << "." << endl;

   // EOF member function
   char_traits <char>::int_type int2 = char_traits<char>::eof ( );
   cout << "The eofReturn is: " << int2 << endl;

   // Testing for EOF or another character
   char_traits <char>::int_type eofTest1, eofTest2;
   eofTest1 = char_traits<char>::not_eof ( int1 );
   if ( !eofTest1 )
      cout << "The eofTest1 indicates ch1 is an EOF character."
              << endl;
   else
      cout << "The eofTest1 returns: " << eofTest1
           << ", which is the character: "
           <<  char_traits<char>::to_char_type ( eofTest1 )
           << "." << endl;

   eofTest2 = char_traits<char>::not_eof ( int2 );
   if ( !eofTest2 )
      cout << "The eofTest2 indicates int2 is an EOF character."
           << endl;
   else
      cout << "The eofTest1 returns: " << eofTest2
           << ", which is the character: "
           <<  char_traits<char>::to_char_type ( eofTest2 )
           << "." << endl;
}
```

```Output
The char_type ch1 is x corresponding to int_type: 120.
The eofReturn is: -1
The eofTest1 returns: 120, which is the character: x.
The eofTest2 indicates int2 is an EOF character.
```

## <a name="off_type"></a> char_traits::off_type

An integer type that can represent offsets between positions in a stream.

```cpp
typedef streamoff off_type;
```

### Remarks

The type is a signed integer that describes an object that can store a byte offset involved in various stream positioning operations. It is typically a synonym for [streamoff](../standard-library/ios-typedefs.md#streamoff), but it has essentially the same properties as that type.

## <a name="pos_type"></a> char_traits::pos_type

An integer type that can represent positions in a stream.

```cpp
typedef streampos pos_type;
```

### Remarks

The type describes an object that can store all the information needed to restore an arbitrary file-position indicator within a stream. It is typically a synonym for [streampos](../standard-library/ios-typedefs.md#streampos), but in any case it has essentially the same properties as that type.

## <a name="state_type"></a> char_traits::state_type

A type that represents the conversion state for multibyte characters in a stream.

```cpp
typedef implementation-defined state_type;
```

### Remarks

The type describes an object that can represent a conversion state. It is typically a synonym for `mbstate_t`, but in any case it has essentially the same properties as that type.

## <a name="to_char_type"></a> char_traits::to_char_type

Converts an `int_type` character to the corresponding `char_type` character and returns the result.

```cpp
static char_type to_char_type(const int_type& _Ch);
```

### Parameters

*_Ch*\
The `int_type` character to be represented as a `char_type`.

### Return Value

The `char_type` character corresponding to the `int_type` character.

A value of *_Ch* that cannot be represented as such yields an unspecified result.

### Remarks

The conversion operations [to_int_type](#to_int_type) and `to_char_type` are inverse to each other, so that:

`to_int_type` ( `to_char_type` ( *x* ) ) == *x*

for any `int_type` *x* and

`to_char_type` ( `to_int_type` ( *x* ) ) == *x*

for any `char_type` *x*.

### Example

```cpp
// char_traits_to_char_type.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;

   char_traits<char>::char_type ch1 =  'a';
   char_traits<char>::char_type ch2 =  'b';
   char_traits<char>::char_type ch3 =  'a';

   // Converting from char_type to int_type
   char_traits<char>::int_type int1, int2 , int3;
   int1 =char_traits<char>:: to_int_type ( ch1 );
   int2 =char_traits<char>:: to_int_type ( ch2 );
   int3 =char_traits<char>:: to_int_type ( ch3 );

   cout << "The char_types and corresponding int_types are:"
        << "\n    ch1 = " << ch1 << " corresponding to int1 = "
        << int1 << "."
        << "\n    ch2 = " << ch2 << " corresponding to int1 = "
        << int2 << "."
        << "\n    ch3 = " << ch3 << " corresponding to int1 = "
        << int3 << "." << endl << endl;

   // Converting from int_type back to char_type
   char_traits<char>::char_type rec_ch1;
   rec_ch1 = char_traits<char>:: to_char_type ( int1);
   char_traits<char>::char_type rec_ch2;
   rec_ch2 = char_traits<char>:: to_char_type ( int2);

   cout << "The recovered char_types and corresponding int_types are:"
        << "\n    recovered ch1 = " << rec_ch1 << " from int1 = "
        << int1 << "."
        << "\n    recovered ch2 = " << rec_ch2 << " from int2 = "
        << int2 << "." << endl << endl;

   // Testing that the conversions are inverse operations
   bool b1 = char_traits<char>::eq ( rec_ch1 , ch1 );
   if ( b1 )
      cout << "The recovered char_type of ch1"
           << " is equal to the original ch1." << endl;
   else
      cout << "The recovered char_type of ch1"
           << " is not equal to the original ch1." << endl;

   // An equivalent and alternatively test procedure
   if ( rec_ch2 == ch2 )
      cout << "The recovered char_type of ch2"
           << " is equal to the original ch2." << endl;
   else
      cout << "The recovered char_type of ch2"
           << " is not equal to the original ch2." << endl;
}
```

```Output
The char_types and corresponding int_types are:
    ch1 = a corresponding to int1 = 97.
    ch2 = b corresponding to int1 = 98.
    ch3 = a corresponding to int1 = 97.

The recovered char_types and corresponding int_types are:
    recovered ch1 = a from int1 = 97.
    recovered ch2 = b from int2 = 98.

The recovered char_type of ch1 is equal to the original ch1.
The recovered char_type of ch2 is equal to the original ch2.
```

## <a name="to_int_type"></a> char_traits::to_int_type

Converts a `char_type` character to the corresponding `int_type` character and returns the result.

```cpp
static int_type to_int_type(const char_type& _Ch);
```

### Parameters

*_Ch*\
The `char_type` character to be represented as an `int_type`.

### Return Value

The `int_type` character corresponding to the `char_type` character.

### Remarks

The conversion operations `to_int_type` and [to_char_type](#to_char_type) are inverse to each other, so that:

`to_int_type` ( `to_char_type` ( *x* ) ) == *x*

for any `int_type` *x*, and

`to_char_type` ( `to_int_type` ( *x* ) ) == *x*

for any `char_type` *x*.

### Example

```cpp
// char_traits_to_int_type.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;
   char_traits<char>::char_type ch1 = 'a';
   char_traits<char>::char_type ch2 = 'b';
   char_traits<char>::char_type ch3 = 'a';

   // Converting from char_type to int_type
   char_traits<char>::int_type int1, int2 , int3;
   int1 =char_traits<char>:: to_int_type ( ch1 );
   int2 =char_traits<char>:: to_int_type ( ch2 );
   int3 =char_traits<char>:: to_int_type ( ch3 );

   cout << "The char_types and corresponding int_types are:"
        << "\n    ch1 = " << ch1 << " corresponding to int1 = "
        << int1 << "."
        << "\n    ch2 = " << ch2 << " corresponding to int1 = "
        << int2 << "."
        << "\n    ch3 = " << ch3 << " corresponding to int1 = "
        << int3 << "." << endl << endl;

   // Converting from int_type back to char_type
   char_traits<char>::char_type rec_ch1;
   rec_ch1 = char_traits<char>:: to_char_type ( int1);
   char_traits<char>::char_type rec_ch2;
   rec_ch2 = char_traits<char>:: to_char_type ( int2);

   cout << "The recovered char_types and corresponding int_types are:"
        << "\n    recovered ch1 = " << rec_ch1 << " from int1 = "
        << int1 << "."
        << "\n    recovered ch2 = " << rec_ch2 << " from int2 = "
        << int2 << "." << endl << endl;

   // Testing that the conversions are inverse operations
   bool b1 = char_traits<char>::eq ( rec_ch1 , ch1 );
   if ( b1 )
      cout << "The recovered char_type of ch1"
           << " is equal to the original ch1." << endl;
   else
      cout << "The recovered char_type of ch1"
           << " is not equal to the original ch1." << endl;

   // An equivalent and alternatively test procedure
   if ( rec_ch2 == ch2 )
      cout << "The recovered char_type of ch2"
           << " is equal to the original ch2." << endl;
   else
      cout << "The recovered char_type of ch2"
           << " is not equal to the original ch2." << endl;
}
```

```Output
The char_types and corresponding int_types are:
    ch1 = a corresponding to int1 = 97.
    ch2 = b corresponding to int1 = 98.
    ch3 = a corresponding to int1 = 97.

The recovered char_types and corresponding int_types are:
    recovered ch1 = a from int1 = 97.
    recovered ch2 = b from int2 = 98.

The recovered char_type of ch1 is equal to the original ch1.
The recovered char_type of ch2 is equal to the original ch2.
```

## See also

[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
