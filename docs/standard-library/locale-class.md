---
title: "locale Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "xlocale/std::locale"
  - "std::locale"
  - "std.locale"
  - "locale"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "locale class"
ms.assetid: 7dd6d271-472d-4750-8fb5-ea8f55fbef62
caps.latest.revision: 28
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# locale Class
The class that describes a locale object that encapsulates culture-specific information as a set of facets that collectively define a specific localized environment.  
  
## Syntax  
  
```  
class locale;  
```  
  
## Remarks  
 A facet is a pointer to an object of a class derived from class [facet](#facet_class) that has a public object of the form:  
  
```  
static locale::id id;  
```  
  
 You can define an open-ended set of these facets. You can also construct a locale object that designates an arbitrary number of facets.  
  
 Predefined groups of these facets represent the [locale categories](#locale__category) traditionally managed in the Standard C Library by the function `setlocale`.  
  
 Category collate (LC_COLLATE) includes the facets:  
  
```  
collate<char>  
collate<wchar_t>  
```  
  
 Category ctype (LC_CTYPE) includes the facets:  
  
```  
ctype<char>  
ctype<wchar_t>  
codecvt<char, char, mbstate_t>  
codecvt<wchar_t, char, mbstate_t>  
codecvt<char16_t, char, mbstate_t>  
codecvt<char32_t, char, mbstate_t>  
```  
  
 Category monetary (LC_MONETARY) includes the facets:  
  
```  
moneypunct<char, false>  
moneypunct<wchar_t, false>  
moneypunct<char, true>  
moneypunct<wchar_t, true>  
money_get<char, istreambuf_iterator<char>>  
money_get<wchar_t, istreambuf_iterator<wchar_t>>  
money_put<char, ostreambuf_iterator<char>>  
money_put<wchar_t, ostreambuf_iterator<wchar_t>>  
```  
  
 Category numeric (LC_NUMERIC) includes the facets:  
  
```  
num_get<char, istreambuf_iterator<char>>  
num_get<wchar_t, istreambuf_iterator<wchar_t>>  
num_put<char, ostreambuf_iterator<char>>  
num_put<wchar_t, ostreambuf_iterator<wchar_t>>  
numpunct<char>  
numpunct<wchar_t>  
```  
  
 Category time (LC_TIME) includes the facets:  
  
```  
time_get<char, istreambuf_iterator<char>>  
time_get<wchar_t, istreambuf_iterator<wchar_t>>  
time_put<char, ostreambuf_iterator<char>>  
time_put<wchar_t, ostreambuf_iterator<wchar_t>>  
```  
  
 Category messages (LC_MESSAGES) includes the facets:  
  
```  
messages<char>  
messages<wchar_t>  
```  
  
 (The last category is required by Posix, but not the C Standard.)  
  
 Some of these predefined facets are used by the iostreams classes, to control the conversion of numeric values to and from text sequences.  
  
 An object of class locale also stores a locale name as an object of class [string](../standard-library/string-typedefs.md#string). Using an invalid locale name to construct a locale facet or a locale object throws an object of class [runtime_error](../standard-library/runtime-error-class.md). The stored locale name is `"*"` if the locale object cannot be certain that a C-style locale corresponds exactly to that represented by the object. Otherwise, you can establish a matching locale within the Standard C Library, for the locale object `Loc`, by calling `setlocale`(LC_ALL `,` `Loc`. [name](#locale__name)`().c_str()`).  
  
 In this implementation, you can also call the static member function:  
  
```  
static locale empty();
```  
  
 to construct a locale object that has no facets. It is also a transparent locale; if the template functions [has_facet](../standard-library/locale-functions.md#has_facet) and [use_facet](../standard-library/locale-functions.md#use_facet) cannot find the requested facet in a transparent locale, they consult first the global locale and then, if that is transparent, the classic locale. Thus, you can write:  
  
```  
cout.imbue(locale::empty());
```  
  
Subsequent insertions to [cout](../standard-library/iostream.md#cout) are mediated by the current state of the global locale. You can even write:  
  
```  
locale loc(locale::empty(),
    locale::classic(),  
    locale::numeric);

cout.imbue(loc);
```   
  
 Numeric formatting rules for subsequent insertions to `cout` remain the same as in the C locale, even as the global locale supplies changing rules for inserting dates and monetary amounts.  
  
### Constructors  
  
|||  
|-|-|  
|[locale](#locale__locale)|Creates a locale, or a copy of a locale, or a copy of locale where a facet or a category has been replaced by a facet or category from another locale.|  
  
### Typedefs  
  
|||  
|-|-|  
|[category](#locale__category)|An integer type that provides bitmask values to denote standard facet families.|  
  
### Member Functions  
  
|||  
|-|-|  
|[combine](#locale__combine)|Inserts a facet from a specified locale into a target locale.|  
|[name](#locale__name)|Returns the stored locale name.|  
  
### Static Functions  
  
|||  
|-|-|  
|[classic](#locale__classic)|The static member function returns a locale object that represents the classic C locale.|  
|[global](#locale__global)|Resets the default local for the program.|  
  
### Operators  
  
|||  
|-|-|  
|[operator!=](#locale__operator_neq)|Tests two locales for inequality.|  
|[operator( )](#locale__operator__)|Compares two `basic_string` objects.|  
|[operator==](#locale__operator_eq_eq)|Tests two locales for equality.|  
  
### Classes  
  
|||  
|-|-|  
|[facet](#facet_class)|A class that serves as the base class for all locale facets.|  
|[id](#id_class)|The member class provides a unique facet identification used as an index for looking up facets in a locale.|  
  
## Requirements  
 **Header:** \<locale>  
  
 **Namespace:** std  
  
##  <a name="locale__category"></a>  locale::category  
 An integer type that provides bitmask values to denote standard facet families.  
  
```  
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
 The type is a synonym for an `int` type that can represent a group of distinct elements of a bitmask type local to class locale or can be used to represent any of the corresponding C locale categories. The elements are:  
  
- **collate**, corresponding to the C category LC_COLLATE  
  
- **ctype**, corresponding to the C category LC_CTYPE  
  
- **monetary**, corresponding to the C category LC_MONETARY  
  
- **numeric**, corresponding to the C category LC_NUMERIC  
  
- **time**, corresponding to the C category LC_TIME  
  
- **messages**, corresponding to the Posix category LC_MESSAGES  
  
 In addition, two useful values are:  
  
- **none**, corresponding to none of the C categories  
  
- **all**, corresponding to the C union of all categories LC_ALL  
  
 You can represent an arbitrary group of categories by using `OR` with these constants, as in **monetary** &#124; **time**.  
  
##  <a name="locale__classic"></a>  locale::classic  
 The static member function returns a locale object that represents the classic C locale.  
  
```  
static const locale& classic();
```  
  
### Return Value  
 A reference to the C locale.  
  
### Remarks  
 The classic C locale is the U.S. English ASCII locale within the Standard C Library that is implicitly used in programs that are not internationalized.  
  
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
  
##  <a name="locale__combine"></a>  locale::combine  
 Inserts a facet from a specified locale into a target locale.  
  
```  
template <class Facet>  
locale combine(const locale& Loc) const;
```  
  
### Parameters  
 `Loc`  
 The locale containing the facet to be inserted into the target locale.  
  
### Return Value  
 The member function returns a locale object that replaces in or adds to **\*this** the facet `Facet` listed in `Loc`.  
  
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
  
##  <a name="facet_class"></a>  facet Class  
 A class that serves as the base class for all locale facets.  

```    
class facet { 
protected:    
    explicit facet(size_t _Refs = 0);
   virtual ~facet();
private:    
   facet(const facet&)
   // not defined void operator=(const facet&)
     // not defined    
};  
```  
### Remarks  
 Note that you cannot copy or assign an object of class facet. You can construct and destroy objects derived from class `locale::facet` but not objects of the base class proper. Typically, you construct an object `_Myfac` derived from facet when you construct a locale, as in **localeloc**( `locale::classic`( ), **new**`_Myfac`);  
  
 In such cases, the constructor for the base class facet should have a zero `_Refs` argument. When the object is no longer needed, it is deleted. Thus, you supply a nonzero _ *Refs* argument only in those rare cases where you take responsibility for the lifetime of the object.  
  
##  <a name="locale__global"></a>  locale::global  
 Resets the default locale for the program. This affects the global locale for both C and C++.  
  
```  
static locale global(const locale& Loc);
```  
  
### Parameters  
 `Loc`  
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
  
##  <a name="id_class"></a>  id Class  
 The member class provides a unique facet identification used as an index for looking up facets in a locale.  
  
class id { protected:    id();
   private:    id(const id&)
   // not defined void operator=(const id&)  // not defined    };  
  
### Remarks  
 The member class describes the static member object required by each unique locale facet. Note that you cannot copy or assign an object of class **id**.  
  
##  <a name="locale__locale"></a>  locale::locale  
 Creates a locale, or a copy of a locale, or a copy of locale where a facet or a category has been replaced by a facet or category from another locale.  
  
```  
locale();

explicit locale(const char* Locname, category Cat = all);
explicit locale(const string& Locname);
locale( const locale& Loc);
locale(const locale& Loc, const locale& Other, category Cat);
locale(const locale& Loc, const char* Locname, category Cat);

template <class Facet>  
locale(const locale& Loc, const Facet* Fac);
```  
  
### Parameters  
 `Locname`  
 Name of a locale.  
  
 `Loc`  
 A locale that is to be copied in constructing the new locale.  
  
 `Other`  
 A locale from which to select a category.  
  
 `Cat`  
 The category to be substituted into the constructed locale.  
  
 `Fac`  
 The facet to be substituted into the constructed locale.  
  
### Remarks  
 The first constructor initializes the object to match the global locale. The second and third constructors initialize all the locale categories to have behavior consistent with the locale name `Locname`. The remaining constructors copy `Loc`, with the exceptions noted:  
  
 `locale(const locale& Loc, const locale& Other, category Cat);`  
  
 replaces from `Other` those facets corresponding to a category C for which C & `Cat` is nonzero.  
  
 `locale(const locale& Loc, const char* Locname, category Cat);`  
  
 `locale(const locale& Loc, const string& Locname, category Cat);`  
  
 replaces from `locale(Locname, _All)` those facets corresponding to a category C for which C & `Cat`is nonzero.  
  
 `template<class Facet> locale(const locale& Loc, Facet* Fac);`  
  
 replaces in (or adds to) `Loc` the facet `Fac`, if `Fac` is not a null pointer.  
  
 If a locale name `Locname` is a null pointer or otherwise invalid, the function throws [runtime_error](../standard-library/runtime-error-class.md).  
  
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
  
##  <a name="locale__name"></a>  locale::name  
 Returns the stored locale name.  
  
```  
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
  
##  <a name="locale__operator_neq"></a>  locale::operator!=  
 Tests two locales for inequality.  
  
```  
bool operator!=(const locale& right) const;
```  
  
### Parameters  
 ` right`  
 One of the locales to be tested for inequality.  
  
### Return Value  
 A Boolean value that is **true** if the locales are not copies of the same locale; **false** if the locales are copies of the same locale.  
  
### Remarks  
 Two locales are equal if they are the same locale, if one is a copy of the other, or if they have identical names.  
  
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
  
##  <a name="locale__operator__"></a>  locale::operator()  
 Compares two `basic_string` objects.  
  
```  
template <class CharType, class Traits, class Allocator>  
bool operator()(
    const basic_string<CharType, Traits, Allocator>& left,  
    const basic_string<CharType, Traits, Allocator>& right) const;
```  
  
### Parameters  
 ` left`  
 The left string.  
  
 ` right`  
 The right string.  
  
### Return Value  
 The member function returns:  
  
-   –1 if the first sequence compares less than the second sequence.  
  
-   +1 if the second sequence compares less than the first sequence.  
  
-   0 if the sequences are equivalent.  
  
### Remarks  
 The member function effectively executes:  
  
```  
const collate<CharType>& fac = use_fac<collate<CharType>>(*this);

return (fac.compare(left.begin(), left.end(), right.begin(), right.end()) <0);
```  
  
 Thus, you can use a locale object as a function object.  
  
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
   wchar_t *sa = L"ztesting";  
   wchar_t *sb = L"\0x00DFtesting";  
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
  
##  <a name="locale__operator_eq_eq"></a>  locale::operator==  
 Tests two locales for equality.  
  
```  
bool operator==(const locale& right) const;
```  
  
### Parameters  
 ` right`  
 One of the locales to be tested for equality.  
  
### Return Value  
 A Boolean value that is **true** if the locales are copies of the same locale; **false** if the locales are not copies of the same locale.  
  
### Remarks  
 Two locales are equal if they are the same locale, if one is a copy of the other, or if they have identical names.  
  
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
  
## See Also  
 [<locale>](../standard-library/locale.md)   
 [Code Pages](../c-runtime-library/code-pages.md)   
 [Locale Names, Languages, and Country/Region Strings](../c-runtime-library/locale-names-languages-and-country-region-strings.md)   
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)

