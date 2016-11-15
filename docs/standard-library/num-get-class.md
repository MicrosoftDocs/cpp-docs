---
title: "num_get Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "num_get"
  - "std::num_get"
  - "std.num_get"
  - "xlocnum/std::num_get"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "num_get class"
ms.assetid: 9933735d-3918-4b17-abad-5fca2adc62d7
caps.latest.revision: 18
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
# num_get Class
A template class that describes an object that can serve as a locale facet to control conversions of sequences of type `CharType` to numeric values.  
  
## Syntax  
  
```
template <class CharType, class InputIterator = istreambuf_iterator<CharType>>  
class num_get : public locale::facet;
```  
  
#### Parameters  
 `CharType`  
 The type used within a program to encode characters in a locale.  
  
 `InputIterator`  
 The type of iterator from which the numeric get functions read their input.  
  
## Remarks  
 As with any locale facet, the static object ID has an initial stored value of zero. The first attempt to access its stored value stores a unique positive value in **id.**  
  
### Constructors  
  
|||  
|-|-|  
|[num_get](#num_get__num_get)|The constructor for objects of type `num_get` that are used to extract numerical values from sequences.|  
  
### Typedefs  
  
|||  
|-|-|  
|[char_type](#num_get__char_type)|A type that is used to describe a character used by a locale.|  
|[iter_type](#num_get__iter_type)|A type that describes an input iterator.|  
  
### Member Functions  
  
|||  
|-|-|  
|[do_get](#num_get__do_get)|A virtual function that is called to extracts a numerical or Boolean value from a character sequence.|  
|[get](#num_get__get)|Extracts a numerical or Boolean value from a character sequence.|  
  
## Requirements  
 **Header:** \<locale>  
  
 **Namespace:** std  
  
##  <a name="num_get__char_type"></a>  num_get::char_type  
 A type that is used to describe a character used by a locale.  
  
```
typedef CharType char_type;
```  
  
### Remarks  
 The type is a synonym for the template parameter **CharType**.  
  
##  <a name="num_get__do_get"></a>  num_get::do_get  
 A virtual function that is called to extracts a numerical or Boolean value from a character sequence.  
  
```
virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    long& val) const;virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    unsigned short& val) const;

virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    unsigned int& val) const;

virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    unsigned long& val) const;

virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    long long& val) const;

virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    unsigned long long& val) const;

virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    float& val) const;

virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    double& val) const;

virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    long double& val) const;

virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    void *& val) const;

virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    bool& val) const;
```  
  
### Parameters  
 `first`  
 The beginning of the range of characters from which to read the number.  
  
 `last`  
 The end of the range of characters from which to read the number.  
  
 `_Iosbase`  
 The [ios_base](../standard-library/ios-base-class.md) whose flags are used by the conversion.  
  
 `_State`  
 The state to which failbit (see [ios_base::iostate](../standard-library/ios-base-class.md#ios_base__iostate)) is added upon failure.  
  
 `val`  
 The value that was read.  
  
### Return Value  
 The iterator after the value has been read.  
  
### Remarks  
 The first virtual protected member function,  
  
 `virtual iter_type do_get(`  
  
 `iter_type first,`  
  
 `iter_type last,`  
  
 `ios_base& _Iosbase,`  
  
 `ios_base::iostate& _State,`  
  
 `long& val`  
  
 `) const;`  
  
 matches sequential elements beginning at `first` in the sequence `[``first``,` `last``)` until it has recognized a complete, nonempty integer input field. If successful, it converts this field to its equivalent value as type `long``,` and stores the result in `val`. It returns an iterator designating the first element beyond the numeric input field. Otherwise, the function stores nothing in `val` and sets `ios_base::failbit` in `state`. It returns an iterator designating the first element beyond any prefix of a valid integer input field. In either case, if the return value equals `last`, the function sets `ios_base::eofbit` in `state`.  
  
 The integer input field is converted by the same rules used by the scan functions for matching and converting a series of `char` elements from a file. (Each such `char` element is assumed to map to an equivalent element of type `Elem` by a simple, one-to-one, mapping.) The equivalent scan conversion specification is determined as follows:  
  
 If `iosbase.`[ios_base::flags](../standard-library/ios-base-class.md#ios_base__flags)`() & ios_base::basefield == ios_base::`[oct](../standard-library/ios-functions.md#oct), the conversion specification is `lo`.  
  
 If `iosbase.flags() & ios_base::basefield == ios_base::`[hex](../standard-library/ios-functions.md#hex), the conversion specification is `lx`.  
  
 If `iosbase.flags() & ios_base::basefield == 0`, the conversion specification is `li`.  
  
 Otherwise, the conversion specification is `ld`.  
  
 The format of an integer input field is further determined by the [locale facet](../standard-library/locale-class.md#facet_class)`fac` returned by the call [use_facet](../standard-library/locale-functions.md#use_facet) `<`[numpunct](../standard-library/numpunct-class.md)`<Elem>(iosbase.` [ios_base::getloc](../standard-library/ios-base-class.md#ios_base__getloc)`())`. Specifically:  
  
 `fac.` [numpunct::grouping](../standard-library/numpunct-class.md#numpunct__grouping) `()` determines how digits are grouped to the left of any decimal point  
  
 `fac.` [numpunct::thousands_sep](../standard-library/numpunct-class.md#numpunct__thousands_sep) `()` determines the sequence that separates groups of digits to the left of any decimal point.  
  
 If no instances of `fac.thousands_sep()` occur in the numeric input field, no grouping constraint is imposed. Otherwise, any grouping constraints imposed by `fac.grouping()` are enforced and separators are removed before the scan conversion occurs.  
  
 The fourth virtual protected member function:  
  
 `virtual iter_type do_get(`  
  
 `iter_type first,`  
  
 `iter_type last,`  
  
 `ios_base& _Iosbase,`  
  
 `ios_base::iostate& _State,`  
  
 `unsigned long& val`  
  
 `) const;`  
  
 behaves the same as the first, except that it replaces a conversion specification of `ld` with `lu`. If successful it converts the numeric input field to a value of type `unsigned long` and stores that value in `val`.  
  
 The fifth virtual protected member function:  
  
 `virtual iter_type do_get(`  
  
 `iter_type first,`  
  
 `iter_type last,`  
  
 `ios_base& _Iosbase,`  
  
 `ios_base::iostate& _State,`  
  
 `long long& val`  
  
 `) const;`  
  
 behaves the same as the first, except that it replaces a conversion specification of `ld` with `lld`. If successful it converts the numeric input field to a value of type `long long` and stores that value in `val`.  
  
 The sixth virtual protected member function:  
  
 `virtual iter_type do_get(`  
  
 `iter_type first,`  
  
 `iter_type last,`  
  
 `ios_base& _Iosbase,`  
  
 `ios_base::iostate& _State,`  
  
 `unsigned long long& val`  
  
 `) const;`  
  
 behaves the same as the first, except that it replaces a conversion specification of `ld` with `llu`. If successful it converts the numeric input field to a value of type `unsigned long long` and stores that value in `val`.  
  
 The seventh virtual protected member function:  
  
 `virtual iter_type do_get(`  
  
 `iter_type first,`  
  
 `iter_type last,`  
  
 `ios_base& _Iosbase,`  
  
 `ios_base::iostate& _State,`  
  
 `float& val`  
  
 `) const;`  
  
 behaves the same as the first, except that it endeavors to match a complete, nonempty floating-point input field. `fac.`[numpunct::decimal_point](../standard-library/numpunct-class.md#numpunct__decimal_point)`()` determines the sequence that separates the integer digits from the fraction digits. The equivalent scan conversion specifier is `lf`.  
  
 The eighth virtual protected member function:  
  
 `virtual iter_type do_get(`  
  
 `iter_type first,`  
  
 `iter_type last,`  
  
 `ios_base& _Iosbase,`  
  
 `ios_base::iostate& _State,`  
  
 `double& val`  
  
 `) const;`  
  
 behaves the same as the first, except that it endeavors to match a complete, nonempty floating-point input field. `fac.`[numpunct::decimal_point](../standard-library/numpunct-class.md#numpunct__decimal_point)`()` determines the sequence that separates the integer digits from the fraction digits. The equivalent scan conversion specifier is `lf`.  
  
 The ninth virtual protected member function:  
  
 `virtual iter_type do_get(`  
  
 `iter_type first,`  
  
 `iter_type last,`  
  
 `ios_base& _Iosbase,`  
  
 `ios_base::iostate& _State,`  
  
 `long double& val`  
  
 `) const;`  
  
 behaves the same as the eighth, except that the equivalent scan conversion specifier is `Lf`.  
  
 The ninth virtual protected member function:  
  
 `virtual iter_type do_get(`  
  
 `iter_type first,`  
  
 `iter_type last,`  
  
 `ios_base& _Iosbase,`  
  
 `ios_base::iostate& _State,`  
  
 `void *& val`  
  
 `) const;`  
  
 behaves the same the first, except that the equivalent scan conversion specifier is `p`.  
  
 The last (eleventh) virtual protected member function:  
  
 `virtual iter_type do_get(`  
  
 `iter_type first,`  
  
 `iter_type last,`  
  
 `ios_base& _Iosbase,`  
  
 `ios_base::iostate& _State,`  
  
 `bool& val`  
  
 `) const;`  
  
 behaves the same as the first, except that it endeavors to match a complete, nonempty Boolean input field. If successful it converts the Boolean input field to a value of type `bool` and stores that value in `val`.  
  
 A Boolean input field takes one of two forms. If `iosbase.flags() & ios_base::`[boolalpha](../standard-library/ios-functions.md#boolalpha) is false, it is the same as an integer input field, except that the converted value must be either 0 (for false) or 1 (for true). Otherwise, the sequence must match either `fac.`[numpunct::falsename](../standard-library/numpunct-class.md#numpunct__falsename)`()` (for false), or `fac.`[numpunct::truename](../standard-library/numpunct-class.md#numpunct__truename)`()` (for true).  
  
### Example  
  See the example for [get](#num_get__get), where the virtual member function is called by `do_get`.  
  
##  <a name="num_get__get"></a>  num_get::get  
 Extracts a numerical or Boolean value from a character sequence.  
  
```
iter_type get(
    iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    bool& val) const;

iter_type get(
    iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    unsigned short& val) const;

iter_type get(
    iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    unsigned int& val) const;

iter_type get(
    iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    long& val) const;

iter_type get(
    iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    unsigned long& val) const;

iter_type get(
    iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    long long& val) const;

iter_type get(
    iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    unsigned long long& val) const;

iter_type get(
    iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    float& val) const;

iter_type get(
    iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    double& val) const;

iter_type get(
    iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    long double& val) const;

iter_type get(
    iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    void *& val) const;
```  
  
### Parameters  
 `first`  
 The beginning of the range of characters from which to read the number.  
  
 `last`  
 The end of the range of characters from which to read the number.  
  
 `_Iosbase`  
 The [ios_base](../standard-library/ios-base-class.md) whose flags are used by the conversion.  
  
 `_State`  
 The state to which failbit (see [ios_base::iostate](../standard-library/ios-base-class.md#ios_base__iostate)) is added upon failure.  
  
 `val`  
 The value that was read.  
  
### Return Value  
 The iterator after the value has been read.  
  
### Remarks  
 All member functions return [do_get](#num_get__do_get)( `first`, `last`, `_Iosbase`, `_State`, `val`).  
  
 The first virtual protected member function tries to match sequential elements beginning at first in the sequence [ `first`, `last`) until it has recognized a complete, nonempty integer input field. If successful, it converts this field to its equivalent value as type **long** and stores the result in `val`. It returns an iterator designating the first element beyond the numeric input field. Otherwise, the function stores nothing in `val` and sets `ios_base::failbit` in _ *State*. It returns an iterator designating the first element beyond any prefix of a valid integer input field. In either case, if the return value equals **last**, the function sets `ios_base::eofbit` in `_State`.  
  
 The integer input field is converted by the same rules used by the scan functions for matching and converting a series of `char` elements from a file. Each such `char` element is assumed to map to an equivalent element of type **CharType** by a simple, one-to-one mapping. The equivalent scan conversion specification is determined as follows:  
  
-   If **iosbase**. [flags](../standard-library/ios-base-class.md#ios_base__flags) & `ios_base::basefield` == `ios_base::`[oct](../standard-library/ios-functions.md#oct), the conversion specification is **lo**.  
  
-   If **iosbase.flags** & **ios_base::basefield** == `ios_base::`[hex](../standard-library/ios-functions.md#hex), the conversion specification is **lx**.  
  
-   If **iosbase.flags** & **ios_base::basefield** == 0, the conversion specification is `li`.  
  
-   Otherwise, the conversion specification is **ld**.  
  
 The format of an integer input field is further determined by the [locale facet](../standard-library/locale-class.md#facet_class)**fac** returned by the call [use_facet](../standard-library/locale-functions.md#use_facet) < [numpunct](../standard-library/numpunct-class.md)\< **Elem**>( **iosbase**. [getloc](../standard-library/ios-base-class.md#ios_base__getloc)). Specifically:  
  
- **fac**. [grouping](../standard-library/numpunct-class.md#numpunct__grouping) determines how digits are grouped to the left of any decimal point.  
  
- **fac**. [thousands_sep](../standard-library/numpunct-class.md#numpunct__thousands_sep) determines the sequence that separates groups of digits to the left of any decimal point.  
  
 If no instances of **fac**. `thousands_sep` occur in the numeric input field, no grouping constraint is imposed. Otherwise, any grouping constraints imposed by **fac**. **grouping** is enforced and separators are removed before the scan conversion occurs.  
  
 The second virtual protected member function:  
  
```
virtual iter_type do_get(iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    unsigned long& val) const;
```  
  
 behaves the same as the first, except that it replaces a conversion specification of **ld** with **lu**. If successful, it converts the numeric input field to a value of type `unsigned long` and stores that value in `val`.  
  
 The third virtual protected member function:  
  
```
virtual iter_type do_get(iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    double& val) const;
```  
  
 behaves the same as the first, except that it tries to match a complete, nonempty floating-point input field. **fac**. [decimal_point](../standard-library/numpunct-class.md#numpunct__decimal_point) determines the sequence that separates the integer digits from the fraction digits. The equivalent scan conversion specifier is **lf**.  
  
 The fourth virtual protected member function:  
  
```
virtual iter_type do_get(iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    long double& val) const;
```  
  
 behaves the same the third, except that the equivalent scan conversion specifier is **Lf**.  
  
 The fifth virtual protected member function:  
  
```
virtual iter_type do_get(iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    void *& val) const;
```  
  
 behaves the same the first, except that the equivalent scan conversion specifier is **p**.  
  
 The sixth virtual protected member function:  
  
```
virtual iter_type do_get(iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    bool& val) const;
```  
  
 behaves the same as the first, except that it tries to match a complete, nonempty boolean input field. If successful it converts the Boolean input field to a value of type `bool` and stores that value in `val`.  
  
 A boolean input field takes one of two forms. If **iosbase**. **flags** & `ios_base::`[boolalpha](../standard-library/ios-functions.md#boolalpha) is **false**, it is the same as an integer input field, except that the converted value must be either 0 (for **false**) or 1 (for **true**). Otherwise, the sequence must match either **fac**. [falsename](../standard-library/numpunct-class.md#numpunct__falsename) (for **false**), or **fac**. [truename](../standard-library/numpunct-class.md#numpunct__truename) (for **true**).  
  
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
  
##  <a name="num_get__iter_type"></a>  num_get::iter_type  
 A type that describes an input iterator.  
  
```
typedef InputIterator iter_type;
```  
  
### Remarks  
 The type is a synonym for the template parameter **InputIterator**.  
  
##  <a name="num_get__num_get"></a>  num_get::num_get  
 The constructor for objects of type `num_get` that are used to extract numerical values from sequences.  
  
```
explicit num_get(size_t _Refs = 0);
```  
  
### Parameters  
 `_Refs`  
 Integer value used to specify the type of memory management for the object.  
  
### Remarks  
 The possible values for the `_Refs` parameter and their significance are:  
  
-   0: The lifetime of the object is managed by the locales that contain it.  
  
-   1: The lifetime of the object must be manually managed.  
  
-   \> 0: These values are not defined.  
  
 No direct examples are possible, because the destructor is protected.  
  
 The constructor initializes its base object with **locale::**[facet](../standard-library/locale-class.md#facet_class)( `_Refs`).  
  
## See Also  
 [\<locale>](../standard-library/locale.md)   
 [facet Class](../standard-library/locale-class.md#facet_class)   
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)



