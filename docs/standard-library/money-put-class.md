---
description: "Learn more about: money_put Class"
title: "money_put Class"
ms.date: "11/01/2018"
f1_keywords: ["xlocmon/std::money_put", "xlocmon/std::money_put::char_type", "xlocmon/std::money_put::iter_type", "xlocmon/std::money_put::string_type", "xlocmon/std::money_put::do_put", "xlocmon/std::money_put::put"]
helpviewer_keywords: ["std::money_put [C++]", "std::money_put [C++], char_type", "std::money_put [C++], iter_type", "std::money_put [C++], string_type", "std::money_put [C++], do_put", "std::money_put [C++], put"]
ms.assetid: f439fd56-c9b1-414c-95e1-66c918c6eee6
---
# money_put Class

The class template describes an object that can serve as a locale facet to control conversions of monetary values to sequences of type `CharType`.

## Syntax

```cpp
template <class CharType,
    class OutputIterator = ostreambuf_iterator<CharType>>
class money_put : public locale::facet;
```

### Parameters

*CharType*\
The type used within a program to encode characters in a locale.

*OutputIterator*\
The type of iterator to which the monetary put functions write their output.

## Remarks

As with any locale facet, the static object ID has an initial stored value of zero. The first attempt to access its stored value stores a unique positive value in **id.**

### Constructors

|Constructor|Description|
|-|-|
|[money_put](#money_put)|The constructor for objects of type `money_put`.|

### Typedefs

|Type name|Description|
|-|-|
|[char_type](#char_type)|A type that is used to describe a character used by a locale.|
|[iter_type](#iter_type)|A type that describes an output iterator.|
|[string_type](#string_type)|A type that describes a string containing characters of type `CharType`.|

### Member functions

|Member function|Description|
|-|-|
|[do_put](#do_put)|A virtual function called to convert either number or a string to a character sequence that represents a monetary value.|
|[put](#put)|Converts either number or a string to a character sequence that represents a monetary value.|

## Requirements

**Header:** \<locale>

**Namespace:** std

## <a name="char_type"></a> money_put::char_type

A type that is used to describe a character used by a locale.

```cpp
typedef CharType char_type;
```

### Remarks

The type is a synonym for the template parameter **CharType**.

## <a name="do_put"></a> money_put::do_put

A virtual function called to convert either number or a string to a character sequence that represents a monetary value.

```cpp
virtual iter_type do_put(
    iter_type next,
    bool _Intl,
    ios_base& _Iosbase,
    CharType _Fill,
    const string_type& val) const;

virtual iter_type do_put(
    iter_type next,
    bool _Intl,
    ios_base& _Iosbase,
    CharType _Fill,
    long double val) const;
```

### Parameters

*next*\
An iterator addressing the first element of the inserted string.

*_Intl*\
A Boolean value indicating the type of currency symbol expected in the sequence: **`true`** if international, **`false`** if domestic.

*_Iosbase*\
A format flag which when set indicates that the currency symbol is optional; otherwise, it is required

*_Fill*\
A character which is used for spacing.

*val*\
A string object to be converted.

### Return Value

An output iterator the addresses the position one beyond the last element produced.

### Remarks

The first virtual protected member function generates sequential elements beginning at *next* to produce a monetary output field from the [string_type](#string_type) object *val*. The sequence controlled by *val* must begin with one or more decimal digits, optionally preceded by a minus sign (-), which represents the amount. The function returns an iterator designating the first element beyond the generated monetary output field.

The second virtual protected member function behaves the same as the first, except that it effectively first converts *val* to a sequence of decimal digits, optionally preceded by a minus sign, then converts that sequence as above.

The format of a monetary output field is determined by the [locale facet](../standard-library/locale-class.md#facet_class) fac returned by the (effective) call [use_facet](../standard-library/locale-functions.md#use_facet) < [moneypunct](../standard-library/moneypunct-class.md)\< **CharType**, **intl**> >( **iosbase**. [getloc](../standard-library/ios-base-class.md#getloc)).

Specifically:

- **fac**. [pos_format](../standard-library/moneypunct-class.md#pos_format) determines the order in which components of the field are generated for a nonnegative value.

- **fac**. [neg_format](../standard-library/moneypunct-class.md#neg_format) determines the order in which components of the field are generated for a negative value.

- **fac**. [curr_symbol](../standard-library/moneypunct-class.md#curr_symbol) determines the sequence of elements to generate for a currency symbol.

- **fac**. [positive_sign](../standard-library/moneypunct-class.md#positive_sign) determines the sequence of elements to generate for a positive sign.

- **fac**. [negative_sign](../standard-library/moneypunct-class.md#negative_sign) determines the sequence of elements to generate for a negative sign.

- **fac**. [grouping](../standard-library/moneypunct-class.md#grouping) determines how digits are grouped to the left of any decimal point.

- **fac**. [thousands_sep](../standard-library/moneypunct-class.md#thousands_sep) determines the element that separates groups of digits to the left of any decimal point.

- **fac**. [decimal_point](../standard-library/moneypunct-class.md#decimal_point) determines the element that separates the integer digits from any fraction digits.

- **fac**. [frac_digits](../standard-library/moneypunct-class.md#frac_digits) determines the number of significant fraction digits to the right of any decimal point.

If the sign string ( **fac**. `negative_sign` or **fac**. `positive_sign`) has more than one element, only the first element is generated where the element equal to **money_base::sign** appears in the format pattern ( **fac**. `neg_format` or **fac**. `pos_format`). Any remaining elements are generated at the end of the monetary output field.

If **iosbase**. [flags](../standard-library/ios-base-class.md#flags) & [showbase](../standard-library/ios-functions.md#showbase) is nonzero, the string **fac**. `curr_symbol` is generated where the element equal to **money_base::symbol** appears in the format pattern. Otherwise, no currency symbol is generated.

If no grouping constraints are imposed by **fac**. **grouping** (its first element has the value CHAR_MAX), then no instances of **fac**. `thousands_sep` are generated in the value portion of the monetary output field (where the element equal to **money_base::value** appears in the format pattern). If **fac**. `frac_digits` is zero, then no instance of **fac**. `decimal_point` is generated after the decimal digits. Otherwise, the resulting monetary output field places the low-order **fac**. `frac_digits` decimal digits to the right of the decimal point.

Padding occurs as for any numeric output field, except that if **iosbase**. **flags** & **iosbase**. [internal](../standard-library/ios-functions.md#internal) is nonzero, any internal padding is generated where the element equal to **money_base::space** appears in the format pattern, if it does appear. Otherwise, internal padding occurs before the generated sequence. The padding character is **fill**.

The function calls **iosbase**. **width**(0) to reset the field width to zero.

### Example

See the example for [put](#put), where the virtual member function is called by **put**.

## <a name="iter_type"></a> money_put::iter_type

A type that describes an output iterator.

```cpp
typedef OutputIterator iter_type;
```

### Remarks

The type is a synonym for the template parameter **OutputIterator.**

## <a name="money_put"></a> money_put::money_put

The constructor for objects of type `money_put`.

```cpp
explicit money_put(size_t _Refs = 0);
```

### Parameters

*_Refs*\
Integer value used to specify the type of memory management for the object.

### Remarks

The possible values for the *_Refs* parameter and their significance are:

- 0: the lifetime of the object is managed by the locales that contain it.

- 1: the lifetime of the object must be manually managed.

- \> 1: these values are not defined.

No direct examples are possible, because the destructor is protected.

The constructor initializes its base object with **locale::**[facet](../standard-library/locale-class.md#facet_class)( `_Refs`).

## <a name="put"></a> money_put::put

Converts either number or a string to a character sequence that represents a monetary value.

```cpp
iter_type put(
    iter_type next,
    bool _Intl,
    ios_base& _Iosbase,
    CharType _Fill,
    const string_type& val) const;

iter_type put(
    iter_type next,
    bool _Intl,
    ios_base& _Iosbase,
    CharType _Fill,
    long double val) const;
```

### Parameters

*next*\
An iterator addressing the first element of the inserted string.

*_Intl*\
A Boolean value indicating the type of currency symbol expected in the sequence: **`true`** if international, **`false`** if domestic.

*_Iosbase*\
A format flag which when set indicates that the currency symbol is optional; otherwise, it is required

*_Fill*\
A character which is used for spacing.

*val*\
A string object to be converted.

### Return Value

An output iterator the addresses the position one beyond the last element produced.

### Remarks

Both member functions return [do_put](#do_put)( `next`, `_Intl`, `_Iosbase`, `_Fill`, `val`).

### Example

```cpp
// money_put_put.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>
#include <sstream>

int main()
{
    std::locale loc( "german_germany" );
    std::basic_stringstream<char> psz;

    psz.imbue(loc);
    psz.flags(psz.flags() | std::ios_base::showbase); // force the printing of the currency symbol
    std::use_facet<std::money_put<char> >(loc).put(std::basic_ostream<char>::_Iter(psz.rdbuf()), true, psz, ' ', 100012);
    if (psz.fail())
        std::cout << "money_put() FAILED" << std::endl;
    else
        std::cout << "money_put() = \"" << psz.rdbuf()->str() << "\"" << std::endl;
}
```

```Output
money_put() = "EUR1.000,12"
```

## <a name="string_type"></a> money_put::string_type

A type that describes a string containing characters of type `CharType`.

```cpp
typedef basic_string<CharType, Traits, Allocator> string_type;
```

### Remarks

The type describes a specialization of class template [basic_string](../standard-library/basic-string-class.md) whose objects can store sequences of elements from the source sequence.

## See also

[\<locale>](../standard-library/locale.md)\
[facet Class](../standard-library/locale-class.md#facet_class)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
