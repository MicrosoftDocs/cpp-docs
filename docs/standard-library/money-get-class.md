---
description: "Learn more about: money_get Class"
title: "money_get Class"
ms.date: "11/04/2016"
f1_keywords: ["xlocmon/std::money_get", "xlocmon/std::money_get::char_type", "xlocmon/std::money_get::iter_type", "xlocmon/std::money_get::string_type", "xlocmon/std::money_get::do_get", "xlocmon/std::money_get::get"]
helpviewer_keywords: ["std::money_get [C++]", "std::money_get [C++], char_type", "std::money_get [C++], iter_type", "std::money_get [C++], string_type", "std::money_get [C++], do_get", "std::money_get [C++], get"]
ms.assetid: 692d3374-3fe7-4b46-8aeb-f8d91ed66b2e
---
# money_get Class

The class template describes an object that can serve as a locale facet to control conversions of sequences of type `CharType` to monetary values.

## Syntax

```cpp
template <class CharType, class InputIterator = istreambuf_iterator<CharType>>
class money_get : public locale::facet;
```

### Parameters

*CharType*\
The type used within a program to encode characters in a locale.

*InputIterator*\
The type of iterator from which the get functions read their input.

## Remarks

As with any locale facet, the static object ID has an initial stored value of zero. The first attempt to access its stored value stores a unique positive value in **id.**

### Constructors

|Constructor|Description|
|-|-|
|[money_get](#money_get)|The constructor for objects of type `money_get` that are used to extract numerical values from sequences representing monetary values.|

### Typedefs

|Type name|Description|
|-|-|
|[char_type](#char_type)|A type that is used to describe a character used by a locale.|
|[iter_type](#iter_type)|A type that describes an input iterator.|
|[string_type](#string_type)|A type that describes a string containing characters of type `CharType`.|

### Member functions

|Member function|Description|
|-|-|
|[do_get](#do_get)|A virtual function called to extracts a numerical value from a character sequence that represents a monetary value.|
|[get](#get)|Extracts a numerical value from a character sequence that represents a monetary value.|

## Requirements

**Header:** \<locale>

**Namespace:** std

## <a name="char_type"></a> money_get::char_type

A type that is used to describe a character used by a locale.

```cpp
typedef CharType char_type;
```

### Remarks

The type is a synonym for the template parameter *CharType*.

## <a name="do_get"></a> money_get::do_get

Virtual function called to extracts a numerical value from a character sequence that represents a monetary value.

```cpp
virtual iter_type do_get(iter_type first,
    iter_type last,
    bool Intl,
    ios_base& Iosbase,
    ios_base::iostate& State,
    long double& val) const virtual iter_type do_get(iter_type first,
    iter_type last,
    bool Intl,
    ios_base& Iosbase,
    ios_base::iostate& State,
    string_type& val) const
```

### Parameters

*first*\
Input iterator addressing the beginning of the sequence to be converted.

*last*\
Input iterator addressing the end of the sequence to be converted.

*Intl*\
A Boolean value indicating the type of currency symbol expected in the sequence: **`true`** if international, **`false`** if domestic.

*Iosbase*\
A format flag which when set indicates that the currency symbol is optional; otherwise, it is required.

*State*\
Sets the appropriate bitmask elements for the stream state according to whether the operations succeeded or not.

*val*\
A string storing the converted sequence.

### Return Value

An input iterator addressing the first element beyond the monetary input field.

### Remarks

The first virtual protected member function tries to match sequential elements beginning at first in the sequence [ `first`, `last`) until it has recognized a complete, nonempty monetary input field. If successful, it converts this field to a sequence of one or more decimal digits, optionally preceded by a minus sign ( `-`), to represent the amount and stores the result in the [string_type](#string_type) object *val*. It returns an iterator designating the first element beyond the monetary input field. Otherwise, the function stores an empty sequence in *val* and sets `ios_base::failbit` in *State*. It returns an iterator designating the first element beyond any prefix of a valid monetary input field. In either case, if the return value equals `last`, the function sets `ios_base::eofbit` in `State`.

The second virtual protected member function behaves the same as the first, except that if successful it converts the optionally signed digit sequence to a value of type **`long double`** and stores that value in *val*.

The format of a monetary input field is determined by the [locale facet](../standard-library/locale-class.md#facet_class)**fac** returned by the effective call [use_facet](../standard-library/locale-functions.md#use_facet) < [moneypunct](../standard-library/moneypunct-class.md)\< **CharType**, **intl**>>( **iosbase**. [getloc](../standard-library/ios-base-class.md#getloc)).

Specifically:

- **fac**. [neg_format](../standard-library/moneypunct-class.md#neg_format) determines the order in which components of the field occur.

- **fac**. [curr_symbol](../standard-library/moneypunct-class.md#curr_symbol) determines the sequence of elements that constitutes a currency symbol.

- **fac**. [positive_sign](../standard-library/moneypunct-class.md#positive_sign) determines the sequence of elements that constitutes a positive sign.

- **fac**. [negative_sign](../standard-library/moneypunct-class.md#negative_sign) determines the sequence of elements that constitutes a negative sign.

- **fac**. [grouping](../standard-library/moneypunct-class.md#grouping) determines how digits are grouped to the left of any decimal point.

- **fac**. [thousands_sep](../standard-library/moneypunct-class.md#thousands_sep) determines the element that separates groups of digits to the left of any decimal point.

- **fac**. [decimal_point](../standard-library/moneypunct-class.md#decimal_point) determines the element that separates the integer digits from the fraction digits.

- **fac**. [frac_digits](../standard-library/moneypunct-class.md#frac_digits) determines the number of significant fraction digits to the right of any decimal point. When parsing a monetary amount with more fraction digits than are called for by `frac_digits`, `do_get` stops parsing after consuming at most `frac_digits` characters.

If the sign string ( **fac**. `negative_sign` or **fac**. `positive_sign`) has more than one element, only the first element is matched where the element equal to **money_base::sign** appears in the format pattern ( **fac**. `neg_format`). Any remaining elements are matched at the end of the monetary input field. If neither string has a first element that matches the next element in the monetary input field, the sign string is taken as empty and the sign is positive.

If **iosbase**. [flags](../standard-library/ios-base-class.md#flags) & [showbase](../standard-library/ios-functions.md#showbase) is nonzero, the string **fac**. `curr_symbol` must match where the element equal to **money_base::symbol** appears in the format pattern. Otherwise, if **money_base::symbol** occurs at the end of the format pattern, and if no elements of the sign string remain to be matched, the currency symbol is not matched. Otherwise, the currency symbol is optionally matched.

If no instances of **fac**. `thousands_sep` occur in the value portion of the monetary input field (where the element equal to **money_base::value** appears in the format pattern), no grouping constraint is imposed. Otherwise, any grouping constraints imposed by **fac**. **grouping** is enforced. Note that the resulting digit sequence represents an integer whose low-order **fac**. `frac_digits` decimal digits are considered to the right of the decimal point.

Arbitrary white space is matched where the element equal to **money_base::space** appears in the format pattern, if it appears other than at the end of the format pattern. Otherwise, no internal white space is matched. An element *ch* is considered white space if [use_facet](../standard-library/locale-functions.md#use_facet) < [ctype](../standard-library/ctype-class.md)\< **CharType**> >( **iosbase**. [getloc](../standard-library/ios-base-class.md#getloc)). [is](../standard-library/ctype-class.md#is)( **ctype_base::space**, *ch*) is **`true`**.

### Example

See the example for [get](#get), which calls `do_get`.

## <a name="get"></a> money_get::get

Extracts a numerical value from a character sequence that represents a monetary value.

```cpp
iter_type get(iter_type first,
    iter_type last,
    bool Intl,
    ios_base& Iosbase,
    ios_base::iostate& State,
    long double& val) const;

iter_type get(iter_type first,
    iter_type last,
    bool Intl,
    ios_base& Iosbase,
    ios_base::iostate& State,
    string_type& val) const;
```

### Parameters

*first*\
Input iterator addressing the beginning of the sequence to be converted.

*last*\
Input iterator addressing the end of the sequence to be converted.

*Intl*\
A Boolean value indicating the type of currency symbol expected in the sequence: **`true`** if international, **`false`** if domestic.

*Iosbase*\
A format flag which when set indicates that the currency symbol is optional; otherwise, it is required

*State*\
Sets the appropriate bitmask elements for the stream state according to whether the operations succeeded.

*val*\
A string storing the converted sequence.

### Return Value

An input iterator addressing the first element beyond the monetary input field.

### Remarks

Both member functions return [do_get](#do_get)`(first, last, Intl, Iosbase, State, val)`.

### Example

```cpp
// money_get_get.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>
#include <sstream>
using namespace std;

int main( )
{
   locale loc( "german_germany" );

   basic_stringstream< char > psz;
   psz << use_facet<moneypunct<char, 1> >(loc).curr_symbol() << "-1.000,56";
   basic_stringstream< char > psz2;
   psz2 << "-100056" << use_facet<moneypunct<char, 1> >(loc).curr_symbol();

   ios_base::iostate st = 0;
   long double fVal;

   psz.flags( psz.flags( )|ios_base::showbase );
   // Which forced the READING the currency symbol
   psz.imbue(loc);
   use_facet < money_get < char > >( loc ).
      get( basic_istream<char>::_Iter( psz.rdbuf( ) ),
           basic_istream<char>::_Iter( 0 ), true, psz, st, fVal );

   if ( st & ios_base::failbit )
      cout << "money_get(" << psz.str( ) << ", intl = 1) FAILED"
           << endl;
   else
      cout << "money_get(" << psz.str( ) << ", intl = 1) = "
           << fVal/100.0 << endl;

   use_facet < money_get < char > >( loc ).
      get(basic_istream<char>::_Iter(psz2.rdbuf( )),
          basic_istream<char>::_Iter(0), false, psz2, st, fVal);

   if ( st & ios_base::failbit )
      cout << "money_get(" << psz2.str( ) << ", intl = 0) FAILED"
           << endl;
   else
      cout << "money_get(" << psz2.str( ) << ", intl = 0) = "
           << fVal/100.0 << endl;
};
```

## <a name="iter_type"></a> money_get::iter_type

A type that describes an input iterator.

```cpp
typedef InputIterator iter_type;
```

### Remarks

The type is a synonym for the template parameter **InputIterator**.

## <a name="money_get"></a> money_get::money_get

The constructor for objects of type `money_get` that are used to extract numerical values from sequences representing monetary values.

```cpp
explicit money_get(size_t _Refs = 0);
```

### Parameters

*_Refs*\
Integer value used to specify the type of memory management for the object.

### Remarks

The possible values for the *_Refs* parameter and their significance are:

- 0: The lifetime of the object is managed by the locales that contain it.

- 1: The lifetime of the object must be manually managed.

- \> 1: These values are not defined.

No direct examples are possible, because the destructor is protected.

The constructor initializes its base object with **locale::**[facet](../standard-library/locale-class.md#facet_class)(*_Refs*).

## <a name="string_type"></a> money_get::string_type

A type that describes a string containing characters of type **CharType**.

```cpp
typedef basic_string<CharType, Traits, Allocator> string_type;
```

### Remarks

The type describes a specialization of class template [basic_string](../standard-library/basic-string-class.md).

## See also

[\<locale>](../standard-library/locale.md)\
[facet Class](../standard-library/locale-class.md#facet_class)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
