---
title: "`codecvt` Class"
description: "describes the Microsoft C runtime `codecvt` class API"
ms.date: "11/09/2020"
f1_keywords: ["xlocale/std::codecvt", "xlocale/std::codecvt::extern_type", "xlocale/std::codecvt::intern_type", "xlocale/std::codecvt::state_type", "xlocale/std::codecvt::always_noconv", "xlocale/std::codecvt::do_always_noconv", "xlocale/std::codecvt::do_encoding", "xlocale/std::codecvt::do_in", "xlocale/std::codecvt::do_length", "xlocale/std::codecvt::do_max_length", "xlocale/std::codecvt::do_out", "xlocale/std::codecvt::do_unshift", "xlocale/std::codecvt::encoding", "xlocale/std::codecvt::in", "xlocale/std::codecvt::length", "xlocale/std::codecvt::max_length", "xlocale/std::codecvt::out", "xlocale/std::codecvt::unshift"]
helpviewer_keywords: ["std::codecvt [C++]", "std::codecvt [C++], extern_type", "std::codecvt [C++], intern_type", "std::codecvt [C++], state_type", "std::codecvt [C++], always_noconv", "std::codecvt [C++], do_always_noconv", "std::codecvt [C++], do_encoding", "std::codecvt [C++], do_in", "std::codecvt [C++], do_length", "std::codecvt [C++], do_max_length", "std::codecvt [C++], do_out", "std::codecvt [C++], do_unshift", "std::codecvt [C++], encoding", "std::codecvt [C++], in", "std::codecvt [C++], length", "std::codecvt [C++], max_length", "std::codecvt [C++], out", "std::codecvt [C++], unshift"]
ms.assetid: 37d3efa1-2b7f-42b6-b04f-7a972c8c2c86
---
# `codecvt` Class

A class template that describes an object that can serve as a locale facet. It can control conversions between a sequence of values used to encode characters within the program and a sequence of values used to encode characters outside the program.

## Syntax

```cpp
template <class CharType, class Byte, class StateType>
class codecvt : public locale::facet, codecvt_base;
```

### Parameters

*`CharType`*\
The type used within a program to encode characters.

*`Byte`*\
A type used to encode characters outside a program.

*`StateType`*\
A type that can be used to represent intermediate states of a conversion between internal and external types of character representations.

## Remarks

The class template describes an object that can serve as a [locale facet](../standard-library/locale-class.md#facet_class), to control conversions between a sequence of values of type *`CharType`* and a sequence of values of type *`Byte`*. The class *`StateType`* characterizes the transformation -- and an object of class *`StateType`* stores any necessary state information during a conversion.

The internal encoding uses a representation with a fixed number of bytes per character, usually either type **`char`** or type **`wchar_t`**.

As with any locale facet, the static object `id` has an initial stored value of zero. The first attempt to access its stored value stores a unique positive value in `id`.

The template versions of [`do_in`](#do_in) and [`do_out`](#do_out) always return `codecvt_base::noconv`.

The C++ Standard Library defines several explicit specializations:

```cpp
template<>
codecvt<wchar_t, char, mbstate_t>
```

converts between **`wchar_t`** and **`char`** sequences.

```cpp
template<>
codecvt<char16_t, char, mbstate_t>
```

converts between **`char16_t`** sequences encoded as UTF-16 and **`char`** sequences encoded as UTF-8.

```cpp
template<>
codecvt<char32_t, char, mbstate_t>
```

converts between **`char32_t`** sequences encoded as UTF-32 (UCS-4) and **`char`** sequences encoded as UTF-8.

### Constructors

|Constructor|Description|
|-|-|
|[`codecvt`](#codecvt)|The constructor for objects of class `codecvt` that serves as a locale facet to handle conversions.|

### Typedefs

|Type name|Description|
|-|-|
|[`extern_type`](#extern_type)|A character type that is used for external representations.|
|[`intern_type`](#intern_type)|A character type that is used for internal representations.|
|[`state_type`](#state_type)|A character type that is used to represent intermediate states during conversions between internal and external representations.|

### Member functions

|Member function|Description|
|-|-|
|[`always_noconv`](#always_noconv)|Tests whether no conversions need be done.|
|[`do_always_noconv`](#do_always_noconv)|A virtual function called to test whether no conversions need be done.|
|[`do_encoding`](#do_encoding)|A virtual function that tests if the encoding of the `Byte` stream is state dependent, whether the ratio between the `Byte` values used and the `CharType` values produced is constant, and, if so, determines the value of that ratio.|
|[`do_in`](#do_in)|A virtual function called to convert a sequence of internal `Byte` values to a sequence of external `CharType` values.|
|[`do_length`](#do_length)|A virtual function that determines how many `Byte` values from a given sequence of external `Byte` values produce not more than a given number of internal `CharType` values and returns that number of `Byte` values.|
|[`do_max_length`](#do_max_length)|A virtual function that returns the maximum number of external Bytes necessary to produce one internal `CharType`.|
|[`do_out`](#do_out)|A virtual function called to convert a sequence of internal `CharType` values to a sequence of external Bytes.|
|[`do_unshift`](#do_unshift)|A virtual function called to provide the `Byte` values needed in a state-dependent conversion to complete the last character in a sequence of `Byte` values.|
|[`encoding`](#encoding)|Tests if the encoding of the `Byte` stream is state dependent, whether the ratio between the `Byte` values used and the `CharType` values produced is constant, and, if so, determines the value of that ratio.|
|[`in`](#in)|Converts an external representation of a sequence of `Byte` values to an internal representation of a sequence of `CharType` values.|
|[`length`](#length)|Determines how many `Byte` values from a given sequence of external `Byte` values produce not more than a given number of internal `CharType` values and returns that number of `Byte` values.|
|[`max_length`](#max_length)|Returns the maximum number of external `Byte` values necessary to produce one internal `CharType`.|
|[`out`](#out)|Converts a sequence of internal `CharType` values to a sequence of external `Byte` values.|
|[`unshift`](#unshift)|Provides the external `Byte` values needed in a state-dependent conversion to complete the last character in the sequence of `Byte` values.|

## Requirements

**Header:** `<locale>`

**Namespace:** `std`

## <a name="always_noconv"></a> `codecvt::always_noconv`

Tests whether no conversions need to be done.

```cpp
bool always_noconv() const throw();
```

### Return Value

A Boolean value that is **`true`** if no conversions need to be done; **`false`** if at least one needs to be done.

### Remarks

The member function returns [`do_always_noconv`](#do_always_noconv).

### Example

```cpp
// codecvt_always_noconv.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>
using namespace std;

int main( )
{
   locale loc ( "German_Germany" );
   bool result1 = use_facet<codecvt<char, char, mbstate_t>>
      ( loc ).always_noconv( );

   if ( result1 )
      cout << "No conversion is needed." << '\n';
   else
      cout << "At least one conversion is required." << '\n';

   bool result2 = use_facet<codecvt<wchar_t, char, mbstate_t>>
      ( loc ).always_noconv( );

   if ( result2 )
      cout << "No conversion is needed." << '\n';
   else
      cout << "At least one conversion is required." << '\n';
}
```

```Output
No conversion is needed.
At least one conversion is required.
```

## <a name="codecvt"></a> `codecvt::codecvt`

The constructor for objects of class codecvt that serves as a locale facet to handle conversions.

```cpp
explicit codecvt(size_t refs = 0);
```

### Parameters

*`refs`*\
Integer value used to specify the type of memory management for the object.

### Remarks

The possible values for the *`refs`* parameter and their significance are:

- 0: The lifetime of the object is managed by the locales that contain it.

- 1: The lifetime of the object must be manually managed.

- 2: These values aren't defined.

The constructor initializes its `locale::facet` base object with [`locale::facet`](../standard-library/locale-class.md#facet_class)`(refs)`.

## <a name="do_always_noconv"></a> `codecvt::do_always_noconv`

A virtual function called to test whether no conversions need to be done.

```cpp
virtual bool do_always_noconv() const throw();
```

### Return Value

The protected virtual member function returns **`true`** only if every call to [`do_in`](#do_in) or [`do_out`](#do_out) returns `noconv`.

The template version always returns **`true`**.

### Example

See the example for [`always_noconv`](#always_noconv), which calls `do_always_noconv`.

## <a name="do_encoding"></a> `codecvt::do_encoding`

A virtual function that tests if the encoding of the `Byte` stream is state dependent, whether the ratio between the `Byte` values used and the `CharType` values produced is constant and, if so, determines the value of that ratio.

```cpp
virtual int do_encoding() const throw();
```

### Return Value

The protected virtual member function returns:

- -1, if the encoding of sequences of type `extern_type` is state dependent.

- 0, if the encoding involves sequences of varying lengths.

- *`N`*, if the encoding involves only sequences of length *`N`*

### Example

See the example for [encoding](#encoding), which calls `do_encoding`.

## <a name="do_in"></a> codecvt::do_in

A virtual function called to convert a sequence of external `Byte` values to a sequence of internal `CharType` values.

```cpp
virtual result do_in(
    StateType& state,
    const Byte* first1,
    const Byte* last1,
    const Byte*& next1,
    CharType* first2,
    CharType* last2,
    CharType*& next2,) const;
```

### Parameters

*`state`*\
The conversion state that is maintained between calls to the member function.

*`first1`*\
Pointer to the beginning of the sequence to be converted.

*`last1`*\
Pointer to the end of the sequence to be converted.

*`next1`*\
Pointer beyond the end of the converted sequence, to the first unconverted character.

*`first2`*\
Pointer to the beginning of the converted sequence.

*`last2`*\
Pointer to the end of the converted sequence.

*`next2`*\
Pointer to the `CharType` that comes after the last converted `CharType`, to the first unaltered character in the destination sequence.

### Return Value

A return that indicates the success, partial success, or failure of the operation. The function returns:

- `codecvt_base::error` if the source sequence is ill formed.

- `codecvt_base::noconv` if the function performs no conversion.

- `codecvt_base::ok` if the conversion succeeds.

- `codecvt_base::partial` if the source is insufficient or if the destination isn't large enough, for the conversion to succeed.

### Remarks

*`state`* must represent the initial conversion state at the beginning of a new source sequence. The function alters its stored value as needed to reflect the current state of a successful conversion. Its stored value is otherwise unspecified.

### Example

See the example for [`in`](#in), which calls `do_in`.

## <a name="do_length"></a> `codecvt::do_length`

A virtual function that determines how many `Byte` values from a given sequence of external `Byte` values produce not more than a given number of internal `CharType` values and returns that number of `Byte` values.

```cpp
virtual int do_length(
    const StateType& state,
    const Byte* first1,
    const Byte* last1,
    size_t len2) const;
```

### Parameters

*`state`*\
The conversion state that is maintained between calls to the member function.

*`first1`*\
Pointer to the beginning of the external sequence.

*`last1`*\
Pointer to the end of the external sequence.

*`len2`*\
The maximum number of `Byte` values that can be returned by the member function.

### Return Value

An integer that represents a count of the maximum number of conversions, not greater than *len2*, defined by the external source sequence at [ `first1`, `last1`).

### Remarks

The protected virtual member function effectively calls `do_in( state, first1, last1, next1, buf, buf + len2, next2)` for *state* (a copy of state), some buffer `buf`, and pointers `next1` and `next2`.

It then returns `next2` - `buf`. It counts the maximum number of conversions, not greater than *len2*, defined by the source sequence at [ `first1`, `last1`).

The template version always returns the lesser of *`last1`* - *`first1`* and *`len2`*.

### Example

See the example for [`length`](#length), which calls `do_length`.

## <a name="do_max_length"></a> `codecvt::do_max_length`

A virtual function that returns the maximum number of external `Byte` values necessary to produce one internal `CharType`.

```cpp
virtual int do_max_length() const throw();
```

### Return Value

The maximum number of `Byte` values necessary to produce one `CharType`.

### Remarks

The protected virtual member function returns the largest permissible value that can be returned by [`do_length`](#do_length)`( first1, last1, 1)` for arbitrary valid values of *`first1`* and *`last1`*.

### Example

See the example for [`max_length`](#max_length), which calls `do_max_length`.

## <a name="do_out"></a> `codecvt::do_out`

A virtual function called to convert a sequence of internal `CharType` values to a sequence of external `Byte` values.

```cpp
virtual result do_out(
    StateType& state,
    const CharType* first1,
    const CharType* last1,
    const CharType*& next1,
    Byte* first2,
    Byte* last2,
    Byte*& next2) const;
```

### Parameters

*`state`*\
The conversion state that is maintained between calls to the member function.

*`first1`*\
Pointer to the beginning of the sequence to be converted.

*`last1`*\
Pointer to the end of the sequence to be converted.

*`next1`*\
Reference to a pointer to the first unconverted `CharType`, after the last `CharType` converted.

*`first2`*\
Pointer to the beginning of the converted sequence.

*`last2`*\
Pointer to the end of the converted sequence.

*`next2`*\
Reference to a pointer to the first unconverted `Byte`, after the last `Byte` converted.

### Return Value

The function returns:

- `codecvt_base::error` if the source sequence is ill formed.

- `codecvt_base::noconv` if the function performs no conversion.

- `codecvt_base::ok` if the conversion succeeds.

- `codecvt_base::partial` if the source is insufficient or if the destination isn't large enough for the conversion to succeed.

### Remarks

*`state`* must represent the initial conversion state at the beginning of a new source sequence. The function alters its stored value as needed to reflect the current state of a successful conversion. Its stored value is otherwise unspecified.

### Example

See the example for [out](#out), which calls `do_out`.

## <a name="do_unshift"></a> `codecvt::do_unshift`

A virtual function called to provide the `Byte` values needed in a state-dependent conversion to complete the last character in a sequence of `Byte` values.

```cpp
virtual result do_unshift(
    StateType& state,
    Byte* first2,
    Byte* last2,
    Byte*& next2) const;
```

### Parameters

*`state`*\
The conversion state that is maintained between calls to the member function.

*`first2`*\
Pointer to the first position in the destination range.

*`last2`*\
Pointer to the last position in the destination range.

*`next2`*\
Pointer to the first unaltered element in the destination sequence.

### Return Value

The function returns:

- `codecvt_base::error` if *state* represents an invalid state

- `codecvt_base::noconv` if the function performs no conversion

- `codecvt_base::ok` if the conversion succeeds

- `codecvt_base::partial` if the destination isn't large enough for the conversion to succeed

### Remarks

The protected virtual member function tries to convert the source element `CharType`(0) to a destination sequence that it stores within [ `first2`, `last2`), except for the terminating element `Byte`(0). It always stores in *`next2`* a pointer to the first unaltered element in the destination sequence.

*`State`* must represent the initial conversion state at the beginning of a new source sequence. The function alters its stored value as needed to reflect the current state of a successful conversion. Typically, converting the source element `CharType`(0) leaves the current state in the initial conversion state.

### Example

See the example for [`unshift`](#unshift), which calls `do_unshift`.

## <a name="encoding"></a> `codecvt::encoding`

Tests if the encoding of the `Byte` stream is state dependent, whether the ratio between the `Byte` values used and the `CharType` values produced is constant, and, if so, determines the value of that ratio.

```cpp
int encoding() const throw();
```

### Return Value

If the return value is positive, that value is the constant number of `Byte` characters required to produce the `CharType` character.

The protected virtual member function returns:

- -1, if the encoding of sequences of type `extern_type` is state dependent.

- 0, if the encoding involves sequences of varying lengths.

- *`N`*, if the encoding involves only sequences of length *`N`*.

### Remarks

The member function returns [do_encoding](#do_encoding).

### Example

```cpp
// codecvt_encoding.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>
using namespace std;

int main( )
{
   locale loc ( "German_Germany" );
   int result1 = use_facet<codecvt<char, char, mbstate_t>> ( loc ).encoding ( );
   cout << result1 << '\n';
   result1 = use_facet<codecvt<wchar_t, char, mbstate_t>> ( loc ).encoding( );
   cout << result1 << '\n';
   result1 = use_facet<codecvt<char, wchar_t, mbstate_t>> ( loc ).encoding( );
   cout << result1 << '\n';
}
```

```Output
1
1
1
```

## <a name="extern_type"></a> `codecvt::extern_type`

A character type that is used for external representations.

```cpp
typedef Byte extern_type;
```

### Remarks

The type is a synonym for the template parameter `Byte`.

## <a name="in"></a> codecvt::in

Converts an external representation of a sequence of `Byte` values to an internal representation of a sequence of `CharType` values.

```cpp
result in(
    StateType& state,
    const Byte* first1,
    const Byte* last1,
    const Byte*& next1,
    CharType* first2,
    CharType* last2,
    CharType*& next2,) const;
```

### Parameters

*`state`*\
The conversion state that is maintained between calls to the member function.

*`first1`*\
Pointer to the beginning of the sequence to be converted.

*`last1`*\
Pointer to the end of the sequence to be converted.

*`next1`*\
Pointer beyond the end of the converted sequence to the first unconverted character.

*`first2`*\
Pointer to the beginning of the converted sequence.

*`last2`*\
Pointer to the end of the converted sequence.

*`next2`*\
Pointer to the `CharType` that comes after the last converted `Chartype` to the first unaltered character in the destination sequence.

### Return Value

A return that indicates the success, partial success, or failure of the operation. The function returns:

- `codecvt_base::error` if the source sequence is ill formed.

- `codecvt_base::noconv` if the function performs no conversion.

- `codecvt_base::ok` if the conversion succeeds.

- `codecvt_base::partial` if the source is insufficient or if the destination isn't large enough for the conversion to succeed.

### Remarks

*`state`* must represent the initial conversion state at the beginning of a new source sequence. The function alters its stored value, as needed, to reflect the current state of a successful conversion. After a partial conversion, *`state`* must be set so as to allow the conversion to resume when new characters arrive.

The member function returns [`do_in`](#do_in)`( state, first1,  last1,  next1, first2, last2,  next2)`.

### Example

```cpp
// codecvt_in.cpp
// compile with: /EHsc
#define _INTL
#include <locale>
#include <iostream>
using namespace std;
#define LEN 90
int main( )
{
   const char* pszExt = "This is the string to be converted!";
   wchar_t pwszInt [LEN+1];
   memset(&pwszInt[0], 0, (sizeof(wchar_t))*(LEN+1));
   const char* pszNext;
   wchar_t* pwszNext;
   mbstate_t state = {0}; // zero-initialization represents the initial conversion state for mbstate_t
   locale loc("C");//English_Britain");//German_Germany
   int res = use_facet<codecvt<wchar_t, char, mbstate_t>>
     ( loc ).in( state,
          pszExt, &pszExt[strlen(pszExt)], pszNext,
          pwszInt, &pwszInt[strlen(pszExt)], pwszNext );
   pwszInt[strlen(pszExt)] = 0;
   wcout << ( res!=codecvt_base::error ?  L"It worked! " : L"It didn't work! " )
       << L"The converted string is:\n ["
       << &pwszInt[0]
       << L"]" << '\n';
   exit(-1);
}
```

```Output
It worked! The converted string is:
[This is the string to be converted!]
```

## <a name="intern_type"></a> `codecvt::intern_type`

A character type that is used for internal representations.

```cpp
typedef CharType intern_type;
```

### Remarks

The type is a synonym for the template parameter `CharType`.

## <a name="length"></a> codecvt::length

Determines how many `Byte` values from a given sequence of external `Byte` values produce not more than a given number of internal `CharType` values and returns that number of `Byte` values.

```cpp
int length(
    const StateType& state,
    const Byte* first1,
    const Byte* last1,
    size_t len2) const;
```

### Parameters

*`state`*\
The conversion state that is maintained between calls to the member function.

*`first1`*\
Pointer to the beginning of the external sequence.

*`last1`*\
Pointer to the end of the external sequence.

*`len2`*\
The maximum number of Bytes that can be returned by the member function.

### Return Value

An integer that represents a count of the maximum number of conversions, not greater than *`len2`*, defined by the external source sequence at [ `first1`, `last1`).

### Remarks

The member function returns [`do_length`](#do_length)`( state, first1, last1, len2)`.

### Example

```cpp
// codecvt_length.cpp
// compile with: /EHsc
#define _INTL
#include <locale>
#include <iostream>
using namespace std;
#define LEN 90
int main( )
{
   const char* pszExt = "This is the string whose length is to be measured!";
   mbstate_t state = {0}; // zero-initialization represents the initial conversion state for mbstate_t
   locale loc("C"); // English_Britain"); //German_Germany
   int res = use_facet<codecvt<wchar_t, char, mbstate_t>>
     ( loc ).length( state,
          pszExt, &pszExt[strlen(pszExt)], LEN );
   cout << "The length of the string is: ";
   wcout << res;
   cout << "." << '\n';
   exit(-1);
}
```

```Output
The length of the string is: 50.
```

## <a name="max_length"></a> `codecvt::max_length`

Returns the maximum number of external `Byte` values necessary to produce one internal `CharType`.

```cpp
int max_length() const throw();
```

### Return Value

The maximum number of `Byte` values necessary to produce one `CharType`.

### Remarks

The member function returns [`do_max_length`](#do_max_length).

### Example

```cpp
// codecvt_max_length.cpp
// compile with: /EHsc
#define _INTL
#include <locale>
#include <iostream>
using namespace std;

int main( )
{
   locale loc( "C");//English_Britain" );//German_Germany
   int res = use_facet<codecvt<char, char, mbstate_t>>
     ( loc ).max_length( );
   wcout << res << '\n';
}
```

```Output
1
```

## <a name="out"></a> `codecvt::out`

Converts a sequence of internal `CharType` values to a sequence of external `Byte` values.

```cpp
result out(
    StateType& state,
    const CharType* first1,
    const CharType* last1,
    const CharType*& next1,
    Byte* first2,
    Byte* last2,
    Byte*& next2) const;
```

### Parameters

*`state`*\
The conversion state that is maintained between calls to the member function.

*`first1`*\
Pointer to the beginning of the sequence to be converted.

*`last1`*\
Pointer to the end of the sequence to be converted.

*`next1`*\
Reference to a pointer to the first unconverted `CharType` after the last `CharType` converted.

*`first2`*\
Pointer to the beginning of the converted sequence.

*`last2`*\
Pointer to the end of the converted sequence.

*`next2`*\
Reference to a pointer to the first unconverted `Byte` after the last converted `Byte`.

### Return Value

The member function returns [`do_out`](#do_out)`( state, first1, last1, next1, first2, last2, next2)`.

### Remarks

For more information, see [`codecvt::do_out`](#do_out).

### Example

```cpp
// codecvt_out.cpp
// compile with: /EHsc
#define _INTL
#include <locale>
#include <iostream>
#include <wchar.h>
using namespace std;
#define LEN 90
int main( )
{
    char pszExt[LEN + 1];
    const wchar_t* pwszInt = L"This is the wchar_t string to be converted.";
    memset(&pszExt[0], 0, (sizeof(char)) * (LEN + 1));
    char* pszNext;
    const wchar_t* pwszNext;
    mbstate_t state;
    locale loc("C");//English_Britain");//German_Germany
    int res = use_facet<codecvt<wchar_t, char, mbstate_t>>
        (loc).out(state,
            pwszInt, &pwszInt[wcslen(pwszInt)], pwszNext,
            pszExt, &pszExt[wcslen(pwszInt)], pszNext);
    pszExt[wcslen(pwszInt)] = 0;
    cout << (res != codecvt_base::error ? "It worked: " : "It didn't work: ")
        << "The converted string is:\n ["
        << &pszExt[0]
        << "]" << '\n';

}
```

```Output
It worked: The converted string is:
[This is the wchar_t string to be converted.]
```

## <a name="state_type"></a> `codecvt::state_type`

A character type that is used to represent intermediate states during conversions between internal and external representations.

```cpp
typedef StateType state_type;
```

### Remarks

The type is a synonym for the template parameter `StateType`.

## <a name="unshift"></a> codecvt::unshift

Provides the `Byte` values needed in a state-dependent conversion to complete the last character in a sequence of `Byte` values.

```cpp
result unshift(
    StateType& state,
    Byte* first2,
    Byte* last2,
    Byte*& next2) const;
```

### Parameters

*`state`*\
The conversion state that is maintained between calls to the member function.

*`first2`*\
Pointer to the first position in the destination range.

*`last2`*\
Pointer to the last position in the destination range.

*`next2`*\
Pointer to the first unaltered element in the destination sequence.

### Return Value

The function returns:

- `codecvt_base::error` if state represents an invalid state.

- `codecvt_base::noconv` if the function performs no conversion.

- `codecvt_base::ok` if the conversion succeeds.

- `codecvt_base::partial` if the destination isn't large enough for the conversion to succeed.

### Remarks

The protected virtual member function tries to convert the source element `CharType`(0) to a destination sequence that it stores within [ `first2`, `last2`), except for the terminating element `Byte`(0). It always stores in *`next2`* a pointer to the first unaltered element in the destination sequence.

*`state`* must represent the initial conversion state at the beginning of a new source sequence. The function alters its stored value, as needed, to reflect the current state of a successful conversion. Typically, converting the source element `CharType`(0) leaves the current state in the initial conversion state.

The member function returns [`do_unshift`](#do_unshift)`( state, first2, last2, next2 )`.

## See also

[`<locale>`](../standard-library/locale.md)\
[Code Pages](../c-runtime-library/code-pages.md)\
[Locale Names, Languages, and Country/Region Strings](../c-runtime-library/locale-names-languages-and-country-region-strings.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
