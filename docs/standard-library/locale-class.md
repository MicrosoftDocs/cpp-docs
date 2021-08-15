---
description: "Learn more about: locale Class"
title: "locale Class"
ms.date: "07/20/2020"
f1_keywords: ["xlocale/std::locale", "xlocale/std::locale::category", "xlocale/std::locale::combine", "xlocale/std::locale::name", "xlocale/std::locale::classic", "xlocale/std::locale::global", "xlocale/std::locale::operator( )", "xlocale/std::locale::facet", "xlocale/std::locale::id"]
helpviewer_keywords: ["std::locale [C++]", "std::locale [C++], category", "std::locale [C++], combine", "std::locale [C++], name", "std::locale [C++], classic", "std::locale [C++], global", "std::locale [C++], facet", "std::locale [C++], id"]
ms.assetid: 7dd6d271-472d-4750-8fb5-ea8f55fbef62
---
# locale Class

The class that describes a locale object that encapsulates culture-specific information as a set of facets that collectively define a specific localized environment.

## Syntax

```cpp
class locale;
```

## Remarks

A facet is a pointer to an object of a class derived from class [facet](#facet_class) that has a public object of the form:

```cpp
static locale::id id;
```

You can define an open-ended set of these facets. You can also construct a locale object that designates an arbitrary number of facets.

Predefined groups of these facets represent the [locale categories](#category) traditionally managed in the Standard C Library by the function `setlocale`.

Category `collate` (LC_COLLATE) includes the facets:

```cpp
collate<char>
collate<wchar_t>
```

Category `ctype` (LC_CTYPE) includes the facets:

```cpp
ctype<char>
ctype<wchar_t>
codecvt<char, char, mbstate_t>
codecvt<wchar_t, char, mbstate_t>
codecvt<char16_t, char, mbstate_t>
codecvt<char32_t, char, mbstate_t>
```

Category `monetary` (LC_MONETARY) includes the facets:

```cpp
moneypunct<char, false>
moneypunct<wchar_t, false>
moneypunct<char, true>
moneypunct<wchar_t, true>
money_get<char, istreambuf_iterator<char>>
money_get<wchar_t, istreambuf_iterator<wchar_t>>
money_put<char, ostreambuf_iterator<char>>
money_put<wchar_t, ostreambuf_iterator<wchar_t>>
```

Category `numeric` (LC_NUMERIC) includes the facets:

```cpp
num_get<char, istreambuf_iterator<char>>
num_get<wchar_t, istreambuf_iterator<wchar_t>>
num_put<char, ostreambuf_iterator<char>>
num_put<wchar_t, ostreambuf_iterator<wchar_t>>
numpunct<char>
numpunct<wchar_t>
```

Category `time` (LC_TIME) includes the facets:

```cpp
time_get<char, istreambuf_iterator<char>>
time_get<wchar_t, istreambuf_iterator<wchar_t>>
time_put<char, ostreambuf_iterator<char>>
time_put<wchar_t, ostreambuf_iterator<wchar_t>>
```

Category `messages` (LC_MESSAGES) includes the facets:

```cpp
messages<char>
messages<wchar_t>
```

(The last category is required by POSIX, but not the C Standard.)

Some of these predefined facets are used by the `iostream` classes, to control the conversion of numeric values to and from text sequences.

An object of class locale also stores a locale name as an object of class [string](../standard-library/string-typedefs.md#string). Using an invalid locale name to construct a locale facet or a locale object throws an object of class [runtime_error](../standard-library/runtime-error-class.md). The stored locale name is `"*"` if the locale object can't be certain that a C-style locale corresponds exactly to the one represented by the object. Otherwise, you can establish a matching locale within the Standard C Library, for some locale object `locale_object`, by calling `setlocale(LC_ALL , locale_object.`[name](#name)`().c_str())`.

In this implementation, you can also call the static member function:

```cpp
static locale empty();
```

to construct a locale object that has no facets. It's also a transparent locale. If the template functions [has_facet](../standard-library/locale-functions.md#has_facet) and [use_facet](../standard-library/locale-functions.md#use_facet) can't find the requested facet in a transparent locale, they consult first the global locale and then, if that is transparent, the classic locale. So, you can write:

```cpp
cout.imbue(locale::empty());
```

Subsequent insertions to [`cout`](../standard-library/iostream.md#cout) are mediated by the current state of the global locale. You can even write:

```cpp
locale loc(locale::empty(),
    locale::classic(),
    locale::numeric);

cout.imbue(loc);
```

Numeric formatting rules for subsequent insertions to `cout` remain the same as in the C locale, even as the global locale supplies changing rules for inserting dates and monetary amounts.

### Constructors

|Constructor|Description|
|-|-|
|[locale](#locale)|Creates a locale, or a copy of a locale, or a copy of locale where a facet or a category has been replaced by a facet or category from another locale.|

### Typedefs

|Type name|Description|
|-|-|
|[category](#category)|An integer type that provides bitmask values to denote standard facet families.|

### Member functions

|Member function|Description|
|-|-|
|[combine](#combine)|Inserts a facet from a specified locale into a target locale.|
|[name](#name)|Returns the stored locale name.|

### Static Functions

|Name|Description|
|-|-|
|[classic](#classic)|The static member function returns a locale object that represents the classic C locale.|
|[global](#global)|Resets the default local for the program.|

### Operators

|Operator|Description|
|-|-|
|[operator=](#op_eq)|Assigns a locale.|
|[operator!=](#op_neq)|Tests two locales for inequality.|
|[operator( )](#op_call)|Compares two `basic_string` objects.|
|[operator==](#op_eq_eq)|Tests two locales for equality.|

### Classes

|Class|Description|
|-|-|
|[facet](#facet_class)|A class that serves as the base class for all locale facets.|
|[`id`](#id_class)|The member class provides a unique facet identification used as an index for looking up facets in a locale.|

## Requirements

**Header:** \<locale>

**Namespace:** std

## <a name="category"></a> locale::category

An integer type that provides bitmask values to denote standard facet families.

```cpp
typedef int category;
static const int collate = LC_COLLATE;
static const int ctype = LC_CTYPE;
static const int monetary = LC_MONETARY;
static const int numeric = LC_NUMERIC;
static const int time = LC_TIME;
static const int messages = LC_MESSAGES;
static const int all = LC_ALL;
static const int none = 0;
```

### Remarks

The type is a synonym for an **`int`** type that can represent a group of distinct elements of a bitmask type local to class locale or can be used to represent any of the corresponding C locale categories. The elements are:

- `collate`, corresponding to the C category LC_COLLATE

- `ctype`, corresponding to the C category LC_CTYPE

- `monetary`, corresponding to the C category LC_MONETARY

- `numeric`, corresponding to the C category LC_NUMERIC

- `time`, corresponding to the C category LC_TIME

- `messages`, corresponding to the POSIX category LC_MESSAGES

Two more useful values are:

- `none`, corresponding to none of the C categories

- `all`, corresponding to the C union of all categories LC_ALL

You can represent an arbitrary group of categories by using `OR` with these constants, as in `monetary` &#124; `time`.

## <a name="classic"></a> locale::classic

The static member function returns a locale object that represents the classic C locale.

```cpp
static const locale& classic();
```

### Return Value

A reference to the C locale.

### Remarks

The classic C locale is the U.S. English ASCII locale within the Standard C library. It's the locale that's used implicitly in programs that aren't internationalized.

### Example

```cpp
// locale_classic.cpp
// compile with: /EHsc
#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main( )
{
   locale loc1( "german" );
   locale loc2 = locale::global( loc1 );
   cout << "The name of the previous locale is: " << loc2.name( )
        << "." << endl;
   cout << "The name of the current locale is: " << loc1.name( )
        << "." << endl;

   if (loc2 == locale::classic( ) )
      cout << "The previous locale was classic." << endl;
   else
      cout << "The previous locale was not classic." << endl;

   if (loc1 == locale::classic( ) )
      cout << "The current locale is classic." << endl;
   else
      cout << "The current locale is not classic." << endl;
}
```

```Output
The name of the previous locale is: C.
The name of the current locale is: German_Germany.1252.
The previous locale was classic.
The current locale is not classic.
```

## <a name="combine"></a> locale::combine

Inserts a facet from a specified locale into a target locale.

```cpp
template <class Facet>
locale combine(const locale& source_locale) const;
```

### Parameters

*source_locale*\
The locale containing the facet to be inserted into the target locale.

### Return Value

The member function returns a locale object that replaces in or adds to **\*this** the facet `Facet` listed in *source_locale*.

### Example

```cpp
// locale_combine.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>
#include <tchar.h>
using namespace std;

int main() {
   locale loc ( "German_germany" );
   _TCHAR * s1 = _T("Das ist wei\x00dfzz."); // \x00df is the German sharp-s; it comes before z in the German alphabet
   _TCHAR * s2 = _T("Das ist weizzz.");
   int result1 = use_facet<collate<_TCHAR> > ( loc ).
      compare (s1, &s1[_tcslen( s1 )-1 ],  s2, &s2[_tcslen( s2 )-1 ] );
   cout << isalpha (_T ( '\x00df' ), loc ) << result1 << endl;

   locale loc2 ( "C" );
   int result2 = use_facet<collate<_TCHAR> > ( loc2 ).
      compare (s1, &s1[_tcslen( s1 )-1 ],  s2, &s2[_tcslen( s2 )-1 ] );
   cout << isalpha (_T ( '\x00df' ), loc2 )  << result2 << endl;

   locale loc3 = loc2.combine<collate<_TCHAR> > (loc);
   int result3 = use_facet<collate<_TCHAR> > ( loc3 ).
      compare (s1, &s1[_tcslen( s1 )-1 ],  s2, &s2[_tcslen( s2 )-1 ] );
   cout << isalpha (_T ( '\x00df' ), loc3 ) << result3 << endl;
}
```

## <a name="facet_class"></a> facet Class

A class that serves as the base class for all locale facets.

```cpp
class facet {
protected:
    explicit facet(size_t references = 0);
    virtual ~facet();
private:
    facet(const facet&) // not defined
    void operator=(const facet&) // not defined
};
```

### Remarks

You can't copy or assign an object of class `facet`. You can construct and destroy objects derived from class `locale::facet` but not objects of the base class proper. Typically, you construct an object `_Myfac` derived from `facet` when you construct a `locale`, as in `locale loc(locale::classic(), new _Myfac);`

In such cases, the constructor for the base class `facet` should have a zero *references* argument. When the object is no longer needed, it's deleted, so you supply a nonzero *references* argument only in those rare cases where you take responsibility for the lifetime of the object.

## <a name="global"></a> locale::global

Resets the default locale for the program. This call affects the global locale for both C and C++.

```cpp
static locale global(const locale& new_default_locale);
```

### Parameters

*new_default_locale*\
The locale to be used as the default locale by the program.

### Return Value

The previous locale before the default locale was reset.

### Remarks

At program startup, the global locale is the same as the classic locale. The `global()` function calls `setlocale( LC_ALL, loc.name. c_str())` to establish a matching locale in the Standard C library.

### Example

```cpp
// locale_global.cpp
// compile by using: /EHsc
#include <locale>
#include <iostream>
#include <tchar.h>
using namespace std;

int main( )
{
   locale loc ( "German_germany" );
   locale loc1;
   cout << "The initial locale is: " << loc1.name( ) << endl;
   locale loc2 = locale::global ( loc );
   locale loc3;
   cout << "The current locale is: " << loc3.name( ) << endl;
   cout << "The previous locale was: " << loc2.name( ) << endl;
}
```

```Output
The initial locale is: C
The current locale is: German_Germany.1252
The previous locale was: C
```

## <a name="id_class"></a> id Class

The member class provides a unique facet identification used as an index for looking up facets in a locale.

```cpp
class id
{
   protected:    id();
   private:      id(const id&)
   void operator=(const id&)  // not defined
};
```

### Remarks

The member class describes the static member object required by each unique locale facet. You can't copy or assign an object of class `id`.

## <a name="locale"></a> locale::locale

Creates a locale, or a copy of a locale, or a copy of locale where a facet or a category has been replaced by a facet or category from another locale. Also includes a destructor.

```cpp
locale();

explicit locale(const char* locale_name, category new_category = all);
explicit locale(const string& locale_name);
locale(const locale& from_locale);
locale(const locale& from_locale, const locale& Other, category new_category);
locale(const locale& from_locale, const char* locale_name, category new_category);

template <class Facet>
locale(const locale& from_locale, const Facet* new_facet);

~locale();
```

### Parameters

*locale_name*\
Name of a locale.

*from_locale*\
A locale that is to be copied in constructing the new locale.

*Other*\
A locale from which to select a category.

*new_category*\
The category to be substituted into the constructed locale.

*new_facet*\
The facet to be substituted into the constructed locale.

### Remarks

The first constructor initializes the object to match the global locale. The second and third constructors initialize all the locale categories to have behavior consistent with the locale name *locale_name*. The remaining constructors copy *from_locale*, with the exceptions noted:

`locale(const locale& from_locale, const locale& Other, category new_category);`

replaces from *Other* those facets corresponding to a category C for which C & *new_category* is nonzero.

`locale(const locale& from_locale, const char* locale_name, category new_category);`

`locale(const locale& from_locale, const string& locale_name, category new_category);`

replaces from `locale(locale_name, all)` those facets corresponding to a category *replace_category* for which `replace_category & new_category` is nonzero.

`template<class Facet> locale(const locale& from_locale, Facet* new_facet);`

replaces in (or adds to) *from_locale* the facet *new_facet*, if *new_facet* isn't a null pointer.

If locale name *locale_name* is a null pointer or otherwise invalid, the function throws [runtime_error](../standard-library/runtime-error-class.md).

### Example

```cpp
// locale_locale.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>
#include <tchar.h>
using namespace std;

int main( ) {

   // Second constructor
   locale loc ( "German_germany" );
   _TCHAR * s1 = _T("Das ist wei\x00dfzz."); // \x00df is the German sharp-s, it comes before z in the German alphabet
   _TCHAR * s2 = _T("Das ist weizzz.");
   int result1 = use_facet<collate<_TCHAR> > ( loc ).
      compare (s1, &s1[_tcslen( s1 )-1 ],  s2, &s2[_tcslen( s2 )-1 ] );
   cout << isalpha (_T ( '\x00df' ), loc ) << result1 << endl;

   // The first (default) constructor
   locale loc2;
   int result2 = use_facet<collate<_TCHAR> > ( loc2 ).
      compare (s1, &s1[_tcslen( s1 )-1 ],  s2, &s2[_tcslen( s2 )-1 ] );
   cout << isalpha (_T ( '\x00df' ), loc2 )  << result2 << endl;

   // Third constructor
   locale loc3 (loc2,loc, _M_COLLATE );
   int result3 = use_facet<collate<_TCHAR> > ( loc3 ).
      compare (s1, &s1[_tcslen( s1 )-1 ],  s2, &s2[_tcslen( s2 )-1 ] );
   cout << isalpha (_T ( '\x00df' ), loc3 ) << result3 << endl;

   // Fourth constructor
   locale loc4 (loc2, "German_Germany", _M_COLLATE );
   int result4 = use_facet<collate<_TCHAR> > ( loc4 ).
      compare (s1, &s1[_tcslen( s1 )-1 ],  s2, &s2[_tcslen( s2 )-1 ] );
   cout << isalpha (_T ( '\x00df' ), loc4 ) << result4 << endl;
}
```

## <a name="name"></a> locale::name

Returns the stored locale name.

```cpp
string name() const;
```

### Return Value

A string giving the name of the locale.

### Example

```cpp
// locale_name.cpp
// compile with: /EHsc
#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main( )
{
   locale loc1( "german" );
   locale loc2 = locale::global( loc1 );
   cout << "The name of the previous locale is: "
        << loc2.name( ) << "." << endl;
   cout << "The name of the current locale is: "
        << loc1.name( ) << "." << endl;
}
```

```Output
The name of the previous locale is: C.
The name of the current locale is: German_Germany.1252.
```

## <a name="op_eq"></a> locale::operator=

Assigns a locale.

```cpp
const locale& operator=(const locale& other) noexcept;
```

## <a name="op_neq"></a> locale::operator!=

Tests two locales for inequality.

```cpp
bool operator!=(const locale& right) const;
```

### Parameters

*right*\
One of the locales to be tested for inequality.

### Return Value

A Boolean value that is **`true`** if the locales aren't copies of the same locale. It's **`false`** if the locales are copies of the same locale.

### Remarks

Two locales are equal if they're the same locale, if one is a copy of the other, or if they have identical names.

### Example

```cpp
// locale_op_ne.cpp
// compile with: /EHsc
#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main( )
{
   locale loc1( "German_Germany" );
   locale loc2( "German_Germany" );
   locale loc3( "English" );

   if ( loc1 != loc2 )
      cout << "locales loc1 (" << loc1.name( )
      << ") and\n loc2 (" << loc2.name( ) << ") are not equal." << endl;
   else
      cout << "locales loc1 (" << loc1.name( )
      << ") and\n loc2 (" << loc2.name( ) << ") are equal." << endl;

   if ( loc1 != loc3 )
      cout << "locales loc1 (" << loc1.name( )
      << ") and\n loc3 (" << loc3.name( ) << ") are not equal." << endl;
   else
      cout << "locales loc1 (" << loc1.name( )
      << ") and\n loc3 (" << loc3.name( ) << ") are equal." << endl;
}
```

```Output
locales loc1 (German_Germany.1252) and
loc2 (German_Germany.1252) are equal.
locales loc1 (German_Germany.1252) and
loc3 (English_United States.1252) are not equal.
```

## <a name="op_call"></a> locale::operator()

Compares two `basic_string` objects according to the lexicographic comparison rules defined by this locale's `std::collate<charT>` facet.

```cpp
template <class CharType, class Traits, class Allocator>
bool operator()(
    const basic_string<CharType, Traits, Allocator>& left,
    const basic_string<CharType, Traits, Allocator>& right) const;
```

### Parameters

*left*\
The first string to compare.

*right*\
The second string to compare.

### Return Value

- **`true`** if *left* is lexicographically less than *right*, otherwise **`false`**.

### Remarks

The member function effectively executes:

```cpp
const collate<CharType>& fac = use_fac<collate<CharType>>(*this);

return (fac.compare(left.begin(), left.end(), right.begin(), right.end()) < 0);
```

It means you can use a locale object as a function object.

### Example

```cpp
// locale_op_compare.cpp
// compile with: /EHsc
#include <iostream>
#include <string>
#include <locale>

int main( )
{
   using namespace std;
   const wchar_t *sa = L"ztesting";
   const wchar_t *sb = L"\0x00DFtesting";
   basic_string<wchar_t> a( sa );
   basic_string<wchar_t> b( sb );

   locale loc( "German_Germany" );
   cout << loc( a,b ) << endl;

   const collate<wchar_t>& fac = use_facet<collate<wchar_t> >( loc );
   cout << ( fac.compare( sa, sa + a.length( ),
       sb, sb + b.length( ) ) < 0) << endl;
}
```

```Output
0
0
```

## <a name="op_eq_eq"></a> locale::operator==

Tests two locales for equality.

```cpp
bool operator==(const locale& right) const;
```

### Parameters

*right*\
One of the locales to be tested for equality.

### Return Value

A Boolean value that is **`true`** if the locales are copies of the same locale. It's **`false`** if the locales aren't copies of the same locale.

### Remarks

Two locales are equal if they're the same locale, if one is a copy of the other, or if they have identical names.

### Example

```cpp
// locale_op_eq.cpp
// compile with: /EHsc
#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main( )
{
   locale loc1( "German_Germany" );
   locale loc2( "German_Germany" );
   locale loc3( "English" );

   if ( loc1 == loc2 )
      cout << "locales loc1 (" << loc1.name( )
      << ")\n and loc2 (" << loc2.name( ) << ") are equal."
      << endl;
   else
      cout << "locales loc1 (" << loc1.name( )
      << ")\n and loc2 (" << loc2.name( ) << ") are not equal."
      << endl;

   if ( loc1 == loc3 )
      cout << "locales loc1 (" << loc1.name( )
      << ")\n and loc3 (" << loc3.name( ) << ") are equal."
      << endl;
   else
      cout << "locales loc1 (" << loc1.name( )
      << ")\n and loc3 (" << loc3.name( ) << ") are not equal."
      << endl;
}
```

```Output
locales loc1 (German_Germany.1252)
and loc2 (German_Germany.1252) are equal.
locales loc1 (German_Germany.1252)
and loc3 (English_United States.1252) are not equal.
```

## See also

[\<locale>](../standard-library/locale.md)\
[Code Pages](../c-runtime-library/code-pages.md)\
[Locale Names, Languages, and Country/Region Strings](../c-runtime-library/locale-names-languages-and-country-region-strings.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
