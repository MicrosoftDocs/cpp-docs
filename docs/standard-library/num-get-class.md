---
description: "Learn more about: num_get Class"
title: "num_get Class"
ms.date: "11/04/2016"
f1_keywords: ["xlocnum/std::num_get", "locale/std::num_get::char_type", "locale/std::num_get::iter_type", "locale/std::num_get::do_get", "locale/std::num_get::get"]
helpviewer_keywords: ["std::num_get [C++]", "std::num_get [C++], char_type", "std::num_get [C++], iter_type", "std::num_get [C++], do_get", "std::num_get [C++], get"]
ms.assetid: 9933735d-3918-4b17-abad-5fca2adc62d7
---
# num_get Class

A class template that describes an object that can serve as a locale facet to control conversions of sequences of type `CharType` to numeric values.

## Syntax

```cpp
template <class CharType, class InputIterator = istreambuf_iterator<CharType>>
class num_get : public locale::facet;
```

### Parameters

*CharType*\
The type used within a program to encode characters in a locale.

*InputIterator*\
The type of iterator from which the numeric get functions read their input.

## Remarks

As with any locale facet, the static object ID has an initial stored value of zero. The first attempt to access its stored value stores a unique positive value in **id.**

### Constructors

|Constructor|Description|
|-|-|
|[num_get](#num_get)|The constructor for objects of type `num_get` that are used to extract numerical values from sequences.|

### Typedefs

|Type name|Description|
|-|-|
|[char_type](#char_type)|A type that is used to describe a character used by a locale.|
|[iter_type](#iter_type)|A type that describes an input iterator.|

### Member functions

|Member function|Description|
|-|-|
|[do_get](#do_get)|A virtual function that is called to extracts a numerical or Boolean value from a character sequence.|
|[get](#get)|Extracts a numerical or Boolean value from a character sequence.|

## Requirements

**Header:** \<locale>

**Namespace:** std

## <a name="char_type"></a> num_get::char_type

A type that is used to describe a character used by a locale.

```cpp
typedef CharType char_type;
```

### Remarks

The type is a synonym for the template parameter **CharType**.

## <a name="do_get"></a> num_get::do_get

A virtual function that is called to extracts a numerical or Boolean value from a character sequence.

```cpp
virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    long& val) const;

virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    unsigned short& val) const;

virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    unsigned int& val) const;

virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    unsigned long& val) const;

virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    long long& val) const;

virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    unsigned long long& val) const;

virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    float& val) const;

virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    double& val) const;

virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    long double& val) const;

virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    void *& val) const;

virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    bool& val) const;
```

### Parameters

*first*\
The beginning of the range of characters from which to read the number.

*last*\
The end of the range of characters from which to read the number.

*iosbase*\
The [ios_base](../standard-library/ios-base-class.md) whose flags are used by the conversion.

*state*\
The state to which failbit (see [ios_base::iostate](../standard-library/ios-base-class.md#iostate)) is added upon failure.

*val*\
The value that was read.

### Return Value

The iterator after the value has been read.

### Remarks

The first virtual protected member function,

```cpp
virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    long& val) const;
```

matches sequential elements beginning at *first* in the sequence `[first, last)` until it has recognized a complete, nonempty integer input field. If successful, it converts this field to its equivalent value as type **`long`**, and stores the result in *val*. It returns an iterator designating the first element beyond the numeric input field. Otherwise, the function stores nothing in *val* and sets `ios_base::failbit` in `state`. It returns an iterator designating the first element beyond any prefix of a valid integer input field. In either case, if the return value equals `last`, the function sets `ios_base::eofbit` in `state`.

The integer input field is converted by the same rules used by the scan functions for matching and converting a series of **`char`** elements from a file. (Each such **`char`** element is assumed to map to an equivalent element of type `Elem` by a simple, one-to-one, mapping.) The equivalent scan conversion specification is determined as follows:

If `iosbase.`[ios_base::flags](../standard-library/ios-base-class.md#flags)`() & ios_base::basefield == ios_base::`[oct](../standard-library/ios-functions.md#oct), the conversion specification is `lo`.

If `iosbase.flags() & ios_base::basefield == ios_base::`[hex](../standard-library/ios-functions.md#hex), the conversion specification is `lx`.

If `iosbase.flags() & ios_base::basefield == 0`, the conversion specification is `li`.

Otherwise, the conversion specification is `ld`.

The format of an integer input field is further determined by the [locale facet](../standard-library/locale-class.md#facet_class)`fac` returned by the call [use_facet](../standard-library/locale-functions.md#use_facet) `<`[numpunct](../standard-library/numpunct-class.md)`<Elem>(iosbase.`[ios_base::getloc](../standard-library/ios-base-class.md#getloc)`())`. Specifically:

`fac.`[numpunct::grouping](../standard-library/numpunct-class.md#grouping)`()` determines how digits are grouped to the left of any decimal point

`fac.`[numpunct::thousands_sep](../standard-library/numpunct-class.md#thousands_sep)`()` determines the sequence that separates groups of digits to the left of any decimal point.

If no instances of `fac.thousands_sep()` occur in the numeric input field, no grouping constraint is imposed. Otherwise, any grouping constraints imposed by `fac.grouping()` are enforced and separators are removed before the scan conversion occurs.

The fourth virtual protected member function:

```cpp
virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    unsigned long& val) const;
```

behaves the same as the first, except that it replaces a conversion specification of `ld` with `lu`. If successful it converts the numeric input field to a value of type **`unsigned long`** and stores that value in *val*.

The fifth virtual protected member function:

```cpp
virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    long long& val) const;
```

behaves the same as the first, except that it replaces a conversion specification of `ld` with `lld`. If successful it converts the numeric input field to a value of type **`long long`** and stores that value in *val*.

The sixth virtual protected member function:

```cpp
virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    unsigned long long& val) const;
```

behaves the same as the first, except that it replaces a conversion specification of `ld` with `llu`. If successful it converts the numeric input field to a value of type **`unsigned long long`** and stores that value in *val*.

The seventh virtual protected member function:

```cpp
virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    float& val) const;
```

behaves the same as the first, except that it endeavors to match a complete, nonempty floating-point input field. `fac.`[numpunct::decimal_point](../standard-library/numpunct-class.md#decimal_point)`()` determines the sequence that separates the integer digits from the fraction digits. The equivalent scan conversion specifier is `lf`.

The eighth virtual protected member function:

```cpp
virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    double& val) const;
```

behaves the same as the first, except that it endeavors to match a complete, nonempty floating-point input field. `fac.`[numpunct::decimal_point](../standard-library/numpunct-class.md#decimal_point)`()` determines the sequence that separates the integer digits from the fraction digits. The equivalent scan conversion specifier is `lf`.

The ninth virtual protected member function:

```cpp
virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    long double& val) const;
```

behaves the same as the eighth, except that the equivalent scan conversion specifier is `Lf`.

The tenth virtual protected member function:

```cpp
virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    void *& val) const;
```

behaves the same the first, except that the equivalent scan conversion specifier is `p`.

The last (eleventh) virtual protected member function:

```cpp
virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    bool& val) const;
```

behaves the same as the first, except that it endeavors to match a complete, nonempty Boolean input field. If successful it converts the Boolean input field to a value of type **`bool`** and stores that value in *val*.

A Boolean input field takes one of two forms. If `iosbase.flags() & ios_base::`[boolalpha](../standard-library/ios-functions.md#boolalpha) is false, it is the same as an integer input field, except that the converted value must be either 0 (for false) or 1 (for true). Otherwise, the sequence must match either `fac.`[numpunct::falsename](../standard-library/numpunct-class.md#falsename)`()` (for false), or `fac.`[numpunct::truename](../standard-library/numpunct-class.md#truename)`()` (for true).

### Example

See the example for [get](#get), where the virtual member function is called by `do_get`.

## <a name="get"></a> num_get::get

Extracts a numerical or Boolean value from a character sequence.

```cpp
iter_type get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    bool& val) const;

iter_type get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    unsigned short& val) const;

iter_type get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    unsigned int& val) const;

iter_type get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    long& val) const;

iter_type get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    unsigned long& val) const;

iter_type get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    long long& val) const;

iter_type get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    unsigned long long& val) const;

iter_type get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    float& val) const;

iter_type get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    double& val) const;

iter_type get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    long double& val) const;

iter_type get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    void *& val) const;
```

### Parameters

*first*\
The beginning of the range of characters from which to read the number.

*last*\
The end of the range of characters from which to read the number.

*iosbase*\
The [ios_base](../standard-library/ios-base-class.md) whose flags are used by the conversion.

*state*\
The state to which failbit (see [ios_base::iostate](../standard-library/ios-base-class.md#iostate)) is added upon failure.

*val*\
The value that was read.

### Return Value

The iterator after the value has been read.

### Remarks

All member functions return [do_get](#do_get)`( first, last, iosbase, state, val)`.

The first virtual protected member function tries to match sequential elements beginning at first in the sequence [ `first`, `last`) until it has recognized a complete, nonempty integer input field. If successful, it converts this field to its equivalent value as type **`long`** and stores the result in *val*. It returns an iterator designating the first element beyond the numeric input field. Otherwise, the function stores nothing in *val* and sets `ios_base::failbit` in *state*. It returns an iterator designating the first element beyond any prefix of a valid integer input field. In either case, if the return value equals *last*, the function sets `ios_base::eofbit` in *state*.

The integer input field is converted by the same rules used by the scan functions for matching and converting a series of **`char`** elements from a file. Each such **`char`** element is assumed to map to an equivalent element of type `CharType` by a simple, one-to-one mapping. The equivalent scan conversion specification is determined as follows:

- If `iosbase.`[flags](../standard-library/ios-base-class.md#flags)`& ios_base::basefield == ios_base::`[oct](../standard-library/ios-functions.md#oct), the conversion specification is `lo`.

- If `iosbase.flags & ios_base::basefield == ios_base::`[hex](../standard-library/ios-functions.md#hex), the conversion specification is `lx`.

- If `iosbase.flags & ios_base::basefield == 0`, the conversion specification is `li`.

- Otherwise, the conversion specification is `ld`.

The format of an integer input field is further determined by the [locale facet](../standard-library/locale-class.md#facet_class) `fac` returned by the call [use_facet](../standard-library/locale-functions.md#use_facet)`<`[`numpunct`](../standard-library/numpunct-class.md)`<Elem>(iosbase.`[getloc](../standard-library/ios-base-class.md#getloc)`())`. Specifically:

- `fac.`[grouping](../standard-library/numpunct-class.md#grouping) determines how digits are grouped to the left of any decimal point.

- `fac.`[thousands_sep](../standard-library/numpunct-class.md#thousands_sep) determines the sequence that separates groups of digits to the left of any decimal point.

If no instances of `fac.thousands_sep` occur in the numeric input field, no grouping constraint is imposed. Otherwise, any grouping constraints imposed by `fac.grouping` is enforced and separators are removed before the scan conversion occurs.

The second virtual protected member function:

```cpp
virtual iter_type do_get(iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    unsigned long& val) const;
```

behaves the same as the first, except that it replaces a conversion specification of `ld` with `lu`. If successful, it converts the numeric input field to a value of type **`unsigned long`** and stores that value in *val*.

The third virtual protected member function:

```cpp
virtual iter_type do_get(iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    double& val) const;
```

behaves the same as the first, except that it tries to match a complete, nonempty floating-point input field. `fac.`[decimal_point](../standard-library/numpunct-class.md#decimal_point) determines the sequence that separates the integer digits from the fraction digits. The equivalent scan conversion specifier is `lf`.

The fourth virtual protected member function:

```cpp
virtual iter_type do_get(iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    long double& val) const;
```

behaves the same the third, except that the equivalent scan conversion specifier is `Lf`.

The fifth virtual protected member function:

```cpp
virtual iter_type do_get(iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    void *& val) const;
```

behaves the same the first, except that the equivalent scan conversion specifier is `p`.

The sixth virtual protected member function:

```cpp
virtual iter_type do_get(iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    bool& val) const;
```

behaves the same as the first, except that it tries to match a complete, nonempty boolean input field. If successful it converts the Boolean input field to a value of type **`bool`** and stores that value in *val*.

A boolean input field takes one of two forms. If `iosbase.flags & ios_base::`[boolalpha](../standard-library/ios-functions.md#boolalpha) is **`false`**, it is the same as an integer input field, except that the converted value must be either 0 (for **`false`**) or 1 (for **`true`**). Otherwise, the sequence must match either `fac.`[falsename](../standard-library/numpunct-class.md#falsename) (for **`false`**), or `fac.`[truename](../standard-library/numpunct-class.md#truename) (for **`true`**).

### Example

```cpp
// num_get_get.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>
#include <sstream>
using namespace std;
int main( )
{
   locale loc( "german_germany" );

   basic_stringstream<char> psz, psz2;
   psz << "-1000,56";

   ios_base::iostate st = 0;
   long double fVal;
   cout << use_facet <numpunct <char> >(loc).thousands_sep( ) << endl;

   psz.imbue( loc );
   use_facet <num_get <char> >
   (loc).get( basic_istream<char>::_Iter( psz.rdbuf( ) ),
           basic_istream<char>::_Iter(0), psz, st, fVal );

   if ( st & ios_base::failbit )
      cout << "money_get( ) FAILED" << endl;
   else
      cout << "money_get( ) = " << fVal << endl;
}
```

## <a name="iter_type"></a> num_get::iter_type

A type that describes an input iterator.

```cpp
typedef InputIterator iter_type;
```

### Remarks

The type is a synonym for the template parameter `InputIterator`.

## <a name="num_get"></a> num_get::num_get

The constructor for objects of type `num_get` that are used to extract numerical values from sequences.

```cpp
explicit num_get(size_t refs = 0);
```

### Parameters

*refs*\
Integer value used to specify the type of memory management for the object.

### Remarks

The possible values for the *refs* parameter and their significance are:

- 0: The lifetime of the object is managed by the locales that contain it.

- 1: The lifetime of the object must be manually managed.

- \> 1: These values are not defined.

No direct examples are possible, because the destructor is protected.

The constructor initializes its base object with `locale::`[facet](../standard-library/locale-class.md#facet_class)`(refs)`.

## See also

[\<locale>](../standard-library/locale.md)\
[facet Class](../standard-library/locale-class.md#facet_class)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
