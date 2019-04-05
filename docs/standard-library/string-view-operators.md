---
title: "&lt;string_view&gt; operators"
ms.date: "03/26/2019"
f1_keywords: ["string_view/std::operator!=", "string_view/std::operator&gt;", "string_view/std::operator&gt;=", "string_view/std::operator&lt;", "string_view/std::operator&lt;&lt;", "string_view/std::operator&lt;=", "string_view/std::operator+", "string_view/std::operator=="]
helpviewer_keywords: ["std::operator!= (string_view)", "std::operator&gt; (string_view)", "std::operator&gt;= (string_view)", "std::operator&lt; (string_view)", "std::operator&lt;&lt; (string_view)", "std::operator&lt;= (string_view), std::operator== (string_view)"]
---
# &lt;string_view&gt; operators

||||
|-|-|-|
|[operator!=](#op_neq)|[operator&gt;](#op_gt)|[operator&gt;=](#op_gt_eq)|
|[operator&lt;](#op_lt)|[operator&lt;&lt;](#op_lt_lt)|[operator&lt;=](#op_lt_eq)|
|[operator==](#op_eq_eq)||

## <a name="op_neq"></a> operator!=

Tests if the `string_view` object on the left side of the operator is not equal to the `string_view` object on the right side.

```cpp
template <class CharType, class Traits>
bool operator!=(
    const basic_string_view<CharType, Traits>& left,
    const basic_string_view<CharType, Traits>& right);

template <class CharType, class Traits>
bool operator!=(
    const basic_string_view<CharType, Traits>& left,
const CharType* right);

template <class CharType, class Traits>
bool operator!=(
    const CharType* left,
    const basic_string_view<CharType, Traits>& right);
```

### Parameters

*left*<br/>
A C-style string_view or an object of type `basic_string_view` to be compared.

*right*<br/>
A C-style string_view or an object of type `basic_string_view` to be compared.

### Return Value

**true** if the string_view object on the left side of the operator is not lexicographically equal to the string_view object on the right side; otherwise **false**.

### Remarks

The comparison between string_view objects is based on a pairwise lexicographical comparison of their strings. Two string_views are equal if they have the same number of strings and their respective string values are the same. Otherwise, they are unequal.

### Example

```cpp
// string_view_op_ne.cpp
// compile with: /EHsc
#include <string_view>
#include <iostream>

int main( )
{
   using namespace std;

   // Declaring an objects of type basic_string_view<char>
   basic_string_view s1 ( "pluck" );
   basic_string_view s2 ( "strum" );
   cout << "The basic_string_view s1 = " << s1 << "." << endl;
   cout << "The basic_string_view s2 = " << s2 << "." << endl;

   // Declaring a C-style string_view
   string_view s3 = "pluck";
   cout << "The C-style string_view s3 = " << s3 << "." << endl;

   // First member function: comparison between left-side object
   // of type basic_string_view & right-side object of type basic_string_view
   if ( s1 != s2 )
      cout << "The string_views s1 & s2 are not equal." << endl;
   else
      cout << "The string_views s1 & s2 are equal." << endl;

   // Second member function: comparison between left-side object
   // of type basic_string_view & right-side object of C-syle string_view type
   if ( s1 != s3 )
      cout << "The string_views s1 & s3 are not equal." << endl;
   else
      cout << "The string_views s1 & s3 are equal." << endl;

   // Third member function: comparison between left-side object
   // of C-syle string_view type & right-side object of type basic_string_view
   if ( s3 != s2 )
      cout << "The string_views s3 & s2 are not equal." << endl;
   else
      cout << "The string_views s3 & s2 are equal." << endl;
}
```

```Output
The basic_string_view s1 = pluck.
The basic_string_view s2 = strum.
The C-style string_view s3 = pluck.
The string_views s1 & s2 are not equal.
The string_views s1 & s3 are equal.
The string_views s3 & s2 are not equal.
```

## <a name="op_eq_eq"></a> operator==

Tests if the string_view object on the left side of the operator is equal to the string_view object on the right side.

```cpp
template <class CharType, class Traits, class Allocator>
bool operator==(
    const basic_string_view<CharType, Traits>& left,
    const basic_string_view<CharType, Traits>& right);

template <class CharType, class Traits>
bool operator==(
    const basic_string_view<CharType, Traits>& left,
    const CharType* right);

template <class CharType, class Traits>
bool operator==(
    const CharType* left,
    const basic_string_view<CharType, Traits>& right);
```

### Parameters

*left*<br/>
A C-style string_view or an object of type `basic_string_view` to be compared.

*right*<br/>
A C-style string_view or an object of type `basic_string_view` to be compared.

### Return Value

**true** if the string_view object on the left side of the operator is lexicographically equal to the string_view object on the right side; otherwise **false**.

### Remarks

The comparison between string_view objects is based on a pairwise lexicographical comparison of their strings. Two string_views are equal if they have the same number of strings and their respective string values are the same. Otherwise, they are unequal.

### Example

```cpp
// string_view_op_eq.cpp
// compile with: /EHsc
#include <string_view>
#include <iostream>

int main( )
{
   using namespace std;

   // Declaring an objects of type basic_string_view<char>
   basic_string_view s1 ( "pluck" );
   basic_string_view s2 ( "strum" );
   cout << "The basic_string_view s1 = " << s1 << "." << endl;
   cout << "The basic_string_view s2 = " << s2 << "." << endl;

   // Declaring a C-style string_view
   string_view s3 = "pluck";
   cout << "The C-style string_view s3 = " << s3 << "." << endl;

   // First member function: comparison between left-side object
   // of type basic_string_view & right-side object of type basic_string_view
   if ( s1 == s2 )
      cout << "The string_views s1 & s2 are equal." << endl;
   else
      cout << "The string_views s1 & s2 are not equal." << endl;

   // Second member function: comparison between left-side object
   // of type basic_string_view & right-side object of C-syle string_view type
   if ( s1 == s3 )
      cout << "The string_views s1 & s3 are equal." << endl;
   else
      cout << "The string_views s1 & s3 are not equal." << endl;

   // Third member function: comparison between left-side object
   // of C-syle string_view type & right-side object of type basic_string_view
   if ( s3 == s2 )
      cout << "The string_views s3 & s2 are equal." << endl;
   else
      cout << "The string_views s3 & s2 are not equal." << endl;
}
```

```Output
The basic_string_view s1 = pluck.
The basic_string_view s2 = strum.
The C-style string_view s3 = pluck.
The string_views s1 & s2 are not equal.
The string_views s1 & s3 are equal.
The string_views s3 & s2 are not equal.
```

## <a name="op_lt"></a> operator&lt;

Tests if the string_view object on the left side of the operator is less than to the string_view object on the right side.

```cpp
template <class CharType, class Traits, class Allocator>
bool operator<(
    const basic_string<CharType, Traits>& left,
    const basic_string<CharType, Traits>& right);

template <class CharType, class Traits, class Allocator>
bool operator<(
    const basic_string<CharType, Traits>& left,
    const CharType* right);

template <class CharType, class Traits, class Allocator>
bool operator<(
    const CharType* left,
    const basic_string<CharType, Traits>& right);
```

### Parameters

*left*<br/>
A C-style string or an object of type `basic_string_view` to be compared.

*right*<br/>
A C-style string or an object of type `basic_string_view` to be compared.

### Return Value

**true** if the string_view object on the left side of the operator is lexicographically less than the string_view object on the right side; otherwise **false**.

### Remarks

A lexicographical comparison between string_views compares them string by string until:

- It finds two corresponding strings unequal, and the result of their comparison is taken as the result of the comparison between the string_views.

- It finds no inequalities, but one string_view has more strings than the other, and the shorter string_view is considered less than the longer string_view.

- It finds no inequalities and finds that the string_views have the same number of strings, and so the string_views are equal.

### Example

```cpp
// string_op_lt.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;
   // Declaring an objects of type basic_string<char>
   string s1 ( "strict" );
   string s2 ( "strum" );
   cout << "The basic_string s1 = " << s1 << "." << endl;
   cout << "The basic_string s2 = " << s2 << "." << endl;

   // Declaring a C-style string
   string_view s3 = "strict";
   cout << "The C-style string s3 = " << s3 << "." << endl;

   // First member function: comparison between left-side object
   // of type basic_string & right-side object of type basic_string
   if ( s1 < s2 )
      cout << "The string s1 is less than the string s2." << endl;
   else
      cout << "The string s1 is not less than the string s2." << endl;

   // Second member function: comparison between left-hand object
   // of type basic_string & right-hand object of C-syle string type
   if ( s1 < s3 )
      cout << "The string s1 is less than the string s3." << endl;
   else
      cout << "The string s1 is not less than the string s3." << endl;

   // Third member function: comparison between left-hand object
   // of C-syle string type & right-hand object of type basic_string
   if ( s3 < s2 )
      cout << "The string s3 is less than the string s2." << endl;
   else
      cout << "The string s3 is not less than the string s2." << endl;
}
```

```Output
The basic_string s1 = strict.
The basic_string s2 = strum.
The C-style string s3 = strict.
The string s1 is less than the string s2.
The string s1 is not less than the string s3.
The string s3 is less than the string s2.
```

## <a name="op_lt_eq"></a> operator&lt;=

Tests if the string_view object on the left side of the operator is less than or equal to the string_view object on the right side.

```cpp
template <class CharType, class Traits, class Allocator>
bool operator<=(
    const basic_string<CharType, Traits>& left,
    const basic_string<CharType, Traits>& right);

template <class CharType, class Traits, class Allocator>
bool operator<=(
    const basic_string<CharType, Traits>& left,
    const CharType* right);

template <class CharType, class Traits, class Allocator>
bool operator<=(
    const CharType* left,
    const basic_string<CharType, Traits>& right);
```

### Parameters

*left*<br/>
A C-style string or an object of type `basic_string_view` to be compared.

*right*<br/>
A C-style string or an object of type `basic_string_view` to be compared.

### Return Value

**true** if the string_view object on the left side of the operator is lexicographically less than or equal to the string_view object on the right side; otherwise **false**.

### Remarks

A lexicographical comparison between string_views compares them string by string until:

- It finds two corresponding strings unequal, and the result of their comparison is taken as the result of the comparison between the string_views.

- It finds no inequalities, but one string_view has more strings than the other, and the shorter string_view is considered less than the longer string_view.

- It finds no inequalities and finds that the string_views have the same number of strings, and so the string_views are equal.

### Example

```cpp
// string_op_le.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;

   // Declaring an objects of type basic_string<char>
   string s1 ( "strict" );
   string s2 ( "strum" );
   cout << "The basic_string s1 = " << s1 << "." << endl;
   cout << "The basic_string s2 = " << s2 << "." << endl;

   // Declaring a C-style string
   string_view s3 = "strict";
   cout << "The C-style string s3 = " << s3 << "." << endl;

   // First member function: comparison between left-side object
   // of type basic_string & right-side object of type basic_string
   if ( s1 <= s2 )
      cout << "The string s1 is less than or equal to "
           << "the string s2." << endl;
   else
      cout << "The string s1 is greater than "
           << "the string s2." << endl;

   // Second member function: comparison between left-side object
   // of type basic_string & right-side object of C-syle string type
   if ( s1 <= s3 )
      cout << "The string s1 is less than or equal to "
           << "the string s3." << endl;
   else
      cout << "The string s1 is greater than "
           << "the string s3." << endl;

   // Third member function: comparison between left-side object
   // of C-syle string type  & right-side object of type basic_string
   if ( s2 <= s3 )
      cout << "The string s2 is less than or equal to "
           << "the string s3." << endl;
   else
      cout << "The string s2 is greater than "
           << "the string s3." << endl;
}
```

```Output
The basic_string s1 = strict.
The basic_string s2 = strum.
The C-style string s3 = strict.
The string s1 is less than or equal to the string s2.
The string s1 is less than or equal to the string s3.
The string s2 is greater than the string s3.
```

## <a name="op_lt_lt"></a> operator&lt;&lt;

A template function that writes a string into the output stream.

```cpp
template <class CharType, class Traits, class Allocator>
basic_ostream<CharType, Traits>& operator<<(
    basic_ostream<CharType, Traits>& _Ostr,
    const basic_string<CharType, Traits>& str);
```

### Parameters

*_Ostr*<br/>
The output stream being written to.

*str*<br/>
The string to be entered into the output stream.

### Return Value

Writes the value of the specified string to the output stream *_Ostr*.

### Remarks

The template function overloads **operator<<** to insert an object *str* of template class [basic_string](../standard-library/basic-string-class.md) into the stream *\_Ostr*. The function effectively returns `_Ostr.write( str.c_str, str.size )`.

## <a name="op_gt"></a> operator&gt;

Tests if the string_view object on the left side of the operator is greater than to the string_view object on the right side.

```cpp
template <class CharType, class Traits, class Allocator>
bool operator>(
    const basic_string<CharType, Traits>& left,
    const basic_string<CharType, Traits>& right);

template <class CharType, class Traits, class Allocator>
bool operator>(
    const basic_string<CharType, Traits>& left,
    const CharType* right);

template <class CharType, class Traits, class Allocator>
bool operator>(
    const CharType* left,
    const basic_string<CharType, Traits>& right);
```

### Parameters

*left*<br/>
A C-style string or an object of type `basic_string_view` to be compared.

*right*<br/>
A C-style string or an object of type `basic_string_view` to be compared.

### Return Value

**true** if the string_view object on the left side of the operator is lexicographically greater than the string_view object on the right side; otherwise **false**.

### Remarks

A lexicographical comparison between string_views compares them string by string until:

- It finds two corresponding strings unequal, and the result of their comparison is taken as the result of the comparison between the string_views.

- It finds no inequalities, but one string_view has more strings than the other, and the shorter string_view is considered less than the longer string_view.

- It finds no inequalities and finds that the string_views have the same number of strings, and so the string_views are equal.

### Example

```cpp
// string_op_gt.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;

   // Declaring an objects of type basic_string<char>
   string s1 ( "strict" );
   string s2 ( "strum" );
   cout << "The basic_string s1 = " << s1 << "." << endl;
   cout << "The basic_string s2 = " << s2 << "." << endl;

   // Declaring a C-style string
   string_view s3 = "stricture";
   cout << "The C-style string s3 = " << s3 << "." << endl;

   // First member function: comparison between left-side object
   // of type basic_string & right-side object of type basic_string
   if ( s1 > s2 )
      cout << "The string s1 is greater than "
           << "the string s2." << endl;
   else
      cout << "The string s1 is not greater than "
           << "the string s2." << endl;

   // Second member function: comparison between left-side object
   // of type basic_string & right-side object of C-syle string type
   if ( s3 > s1 )
      cout << "The string s3 is greater than "
           << "the string s1." << endl;
   else
      cout << "The string s3 is not greater than "
           << "the string s1." << endl;

   // Third member function: comparison between left-side object
   // of C-syle string type & right-side object of type basic_string
   if ( s2 > s3 )
      cout << "The string s2 is greater than "
           << "the string s3." << endl;
   else
      cout << "The string s2 is not greater than "
           << "the string s3." << endl;
}
```

```Output
The basic_string s1 = strict.
The basic_string s2 = strum.
The C-style string s3 = stricture.
The string s1 is not greater than the string s2.
The string s3 is greater than the string s1.
The string s2 is greater than the string s3.
```

## <a name="op_gt_eq"></a> operator&gt;=

Tests if the string_view object on the left side of the operator is greater than or equal to the string_view object on the right side.

```cpp
template <class CharType, class Traits, class Allocator>
bool operator>=(
    const basic_string_view<CharType, Traits>& left,
    const basic_string_view<CharType, Traits>& right);

template <class CharType, class Traits, class Allocator>
bool operator>=(
    const basic_string_view<CharType, Traits>& left,
    const CharType* right);

template <class CharType, class Traits, class Allocator>
bool operator>=(
    const CharType* left,
    const basic_string_view<CharType, Traits>& right);
```

### Parameters

*left*<br/>
A C-style string_view or an object of type `basic_string_view` to be compared.

*right*<br/>
A C-style string or an object of type `basic_string_view` to be compared.

### Return Value

**true** if the string_view object on the left side of the operator is lexicographically greater than or equal to the string_view object on the right side; otherwise **false**.

### Remarks

A lexicographical comparison between string_views compares them string by string until:

- It finds two corresponding strings unequal, and the result of their comparison is taken as the result of the comparison between the string_views.

- It finds no inequalities, but one string_view has more strings than the other, and the shorter string_view is considered less than the longer string_view.

- It finds no inequalities and finds that the string_views have the same number of strings, and so the string_views are equal.

### Example

```cpp
// string_view_op_ge.cpp
// compile with: /EHsc
#include <string_view>
#include <iostream>

int main( )
{
   using namespace std;

   // Declaring an objects of type basic_string_view<char>
   string_view s1 ( "strict" );
   string_view s2 ( "strum" );
   cout << "The basic_string_view s1 = " << s1 << "." << endl;
   cout << "The basic_string_view s2 = " << s2 << "." << endl;

   // Declaring a C-style string_view
   string_view s3 = "stricture";
   cout << "The C-style string_view s3 = " << s3 << "." << endl;

   // First member function: comparison between left-side object
   // of type basic_string_view  & right-side object of type basic_string_view 
   if ( s1 >= s2 )
      cout << "The string_view s1 is greater than or equal to "
           << "the string_view s2." << endl;
   else
      cout << "The string_view s1 is less than "
           << "the string_view s2." << endl;

   // Second member function: comparison between left-side object
   // of type basic_string_view  & right-side object of C-syle string_view type
   if ( s3 >= s1 )
      cout << "The string_view s3 is greater than or equal to "
           << "the string_view s1." << endl;
   else
      cout << "The string_view s3 is less than "
           << "the string_view s1." << endl;

   // Third member function: comparison between left-side object
   // of C-syle string_view  type & right-side object of type basic_string_view 
   if ( s2 >= s3 )
      cout << "The string_view s2 is greater than or equal to "
           << "the string_view s3." << endl;
   else
      cout << "The string_view s2 is less than "
           << "the string_view s3." << endl;
}
```

```Output
The basic_string_view s1 = strict.
The basic_string_view s2 = strum.
The C-style string_view s3 = stricture.
The string_view s1 is less than the string_view s2.
The string_view s3 is greater than or equal to the string_view s1.
The string_view s2 is greater than or equal to the string_view  s3.
```

## See also

[\<string_view>](../standard-library/string-view.md)<br/>
