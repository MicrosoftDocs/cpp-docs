---
title: "money_put Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std::money_put"
  - "xlocmon/std::money_put"
  - "money_put"
  - "std.money_put"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "money_put class"
ms.assetid: f439fd56-c9b1-414c-95e1-66c918c6eee6
caps.latest.revision: 19
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
# money_put Class
The template class describes an object that can serve as a locale facet to control conversions of monetary values to sequences of type `CharType`.  
  
## Syntax  
  
```  
template <class CharType,  
    class OutputIterator = ostreambuf_iterator<CharType>>  
class money_put : public locale::facet;  
```  
  
#### Parameters  
 `CharType`  
 The type used within a program to encode characters in a locale.  
  
 `OutputIterator`  
 The type of iterator to which the monetary put functions write their output.  
  
## Remarks  
 As with any locale facet, the static object ID has an initial stored value of zero. The first attempt to access its stored value stores a unique positive value in **id.**  
  
### Constructors  
  
|||  
|-|-|  
|[money_put](#money_put__money_put)|The constructor for objects of type `money_put`.|  
  
### Typedefs  
  
|||  
|-|-|  
|[char_type](#money_put__char_type)|A type that is used to describe a character used by a locale.|  
|[iter_type](#money_put__iter_type)|A type that describes an output iterator.|  
|[string_type](#money_put__string_type)|A type that describes a string containing characters of type `CharType`.|  
  
### Member Functions  
  
|||  
|-|-|  
|[do_put](#money_put__do_put)|A virtual function called to convert either number or a string to a character sequence that represents a monetary value.|  
|[put](#money_put__put)|Converts either number or a string to a character sequence that represents a monetary value.|  
  
## Requirements  
 **Header:** \<locale>  
  
 **Namespace:** std  
  
##  <a name="money_put__char_type"></a>  money_put::char_type  
 A type that is used to describe a character used by a locale.  
  
```  
typedef CharType char_type;  
```  
  
### Remarks  
 The type is a synonym for the template parameter **CharType**.  
  
##  <a name="money_put__do_put"></a>  money_put::do_put  
 A virtual function called to convert either number or a string to a character sequence that represents a monetary value.  
  
```  
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
 ` next`  
 An iterator addressing the first element of the inserted string.  
  
 `_Intl`  
 A Boolean value indicating the type of currency symbol expected in the sequence: **true** if international, **false** if domestic.  
  
 `_Iosbase`  
 A format flag which when set indicates that the currency symbol is optional; otherwise, it is required  
  
 `_Fill`  
 A character which is used for spacing.  
  
 ` val`  
 A string object to be converted.  
  
### Return Value  
 An output iterator the addresses the position one beyond the last element produced.  
  
### Remarks  
 The first virtual protected member function generates sequential elements beginning at ` next` to produce a monetary output field from the [string_type](#money_put__string_type) object ` val`. The sequence controlled by ` val` must begin with one or more decimal digits, optionally preceded by a minus sign (–), which represents the amount. The function returns an iterator designating the first element beyond the generated monetary output field.  
  
 The second virtual protected member function behaves the same as the first, except that it effectively first converts ` val` to a sequence of decimal digits, optionally preceded by a minus sign, then converts that sequence as above.  
  
 The format of a monetary output field is determined by the [locale facet](../standard-library/locale-class.md#facet_class) fac returned by the (effective) call [use_facet](../standard-library/locale-functions.md#use_facet) < [moneypunct](../standard-library/moneypunct-class.md)\< **CharType**, **intl**> >( **iosbase**. [getloc](../standard-library/ios-base-class.md#ios_base__getloc)).  
  
 Specifically:  
  
- **fac**. [pos_format](../standard-library/moneypunct-class.md#moneypunct__pos_format) determines the order in which components of the field are generated for a nonnegative value.  
  
- **fac**. [neg_format](../standard-library/moneypunct-class.md#moneypunct__neg_format) determines the order in which components of the field are generated for a negative value.  
  
- **fac**. [curr_symbol](../standard-library/moneypunct-class.md#moneypunct__curr_symbol) determines the sequence of elements to generate for a currency symbol.  
  
- **fac**. [positive_sign](../standard-library/moneypunct-class.md#moneypunct__positive_sign) determines the sequence of elements to generate for a positive sign.  
  
- **fac**. [negative_sign](../standard-library/moneypunct-class.md#moneypunct__negative_sign) determines the sequence of elements to generate for a negative sign.  
  
- **fac**. [grouping](../standard-library/moneypunct-class.md#moneypunct__grouping) determines how digits are grouped to the left of any decimal point.  
  
- **fac**. [thousands_sep](../standard-library/moneypunct-class.md#moneypunct__thousands_sep) determines the element that separates groups of digits to the left of any decimal point.  
  
- **fac**. [decimal_point](../standard-library/moneypunct-class.md#moneypunct__decimal_point) determines the element that separates the integer digits from any fraction digits.  
  
- **fac**. [frac_digits](../standard-library/moneypunct-class.md#moneypunct__frac_digits) determines the number of significant fraction digits to the right of any decimal point.  
  
 If the sign string ( **fac**. `negative_sign` or **fac**. `positive_sign`) has more than one element, only the first element is generated where the element equal to **money_base::sign** appears in the format pattern ( **fac**. `neg_format` or **fac**. `pos_format`). Any remaining elements are generated at the end of the monetary output field.  
  
 If **iosbase**. [flags](../standard-library/ios-base-class.md#ios_base__flags) & [showbase](../standard-library/ios-functions.md#showbase) is nonzero, the string **fac**. `curr_symbol` is generated where the element equal to **money_base::symbol** appears in the format pattern. Otherwise, no currency symbol is generated.  
  
 If no grouping constraints are imposed by **fac**. **grouping** (its first element has the value CHAR_MAX), then no instances of **fac**. `thousands_sep` are generated in the value portion of the monetary output field (where the element equal to **money_base::value** appears in the format pattern). If **fac**. `frac_digits` is zero, then no instance of **fac**. `decimal_point` is generated after the decimal digits. Otherwise, the resulting monetary output field places the low-order **fac**. `frac_digits` decimal digits to the right of the decimal point.  
  
 Padding occurs as for any numeric output field, except that if **iosbase**. **flags** & **iosbase**. [internal](../standard-library/ios-functions.md#internal) is nonzero, any internal padding is generated where the element equal to **money_base::space** appears in the format pattern, if it does appear. Otherwise, internal padding occurs before the generated sequence. The padding character is **fill**.  
  
 The function calls **iosbase**. **width**(0) to reset the field width to zero.  
  
### Example  
  See the example for [put](#money_put__put), where the virtual member function is called by **put**.  
  
##  <a name="money_put__iter_type"></a>  money_put::iter_type  
 A type that describes an output iterator.  
  
```  
typedef OutputIterator iter_type;  
```  
  
### Remarks  
 The type is a synonym for the template parameter **OutputIterator.**  
  
##  <a name="money_put__money_put"></a>  money_put::money_put  
 The constructor for objects of type `money_put`.  
  
```  
explicit money_put(size_t _Refs = 0);
```  
  
### Parameters  
 `_Refs`  
 Integer value used to specify the type of memory management for the object.  
  
### Remarks  
 The possible values for the `_Refs` parameter and their significance are:  
  
-   0: the lifetime of the object is managed by the locales that contain it.  
  
-   1: the lifetime of the object must be manually managed.  
  
-   \> 0: these values are not defined.  
  
 No direct examples are possible, because the destructor is protected.  
  
 The constructor initializes its base object with **locale::**[facet](../standard-library/locale-class.md#facet_class)( `_Refs`).  
  
##  <a name="money_put__put"></a>  money_put::put  
 Converts either number or a string to a character sequence that represents a monetary value.  
  
```  
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
 ` next`  
 An iterator addressing the first element of the inserted string.  
  
 `_Intl`  
 A Boolean value indicating the type of currency symbol expected in the sequence: **true** if international, **false** if domestic.  
  
 `_Iosbase`  
 A format flag which when set indicates that the currency symbol is optional; otherwise, it is required  
  
 `_Fill`  
 A character which is used for spacing.  
  
 ` val`  
 A string object to be converted.  
  
### Return Value  
 An output iterator the addresses the position one beyond the last element produced.  
  
### Remarks  
 Both member functions return [do_put](#money_put__do_put)( ` next`, `_Intl`, `_Iosbase`, `_Fill`, ` val`).  
  
### Example  
  
```cpp  
// money_put_put.cpp  
// compile with: /EHsc  
#include <locale>  
#include <iostream>  
#include <sstream>  
using namespace std;  
int main( )  
{  
//   locale loc( "german_germany" );  
   locale loc( "english_canada" );  
   basic_stringstream<char> psz, psz2;  
   ios_base::iostate st = 0;  
  
   psz2.imbue( loc );  
   psz2.flags( psz2.flags( )|ios_base::showbase ); // force the printing of the currency symbol  
   use_facet < money_put < char > >(loc).put(basic_ostream<char>::_Iter( psz2.rdbuf( ) ), true, psz2, st, 100012);  
   if (st & ios_base::failbit)  
      cout << "money_put( ) FAILED" << endl;  
   else  
      cout << "money_put( ) = \"" << psz2.rdbuf( )->str( ) <<"\""<< endl;     
  
   st = 0;  
};  
```  
  
```Output  
money_put( ) = "CAD1,000.12"  
```  
  
##  <a name="money_put__string_type"></a>  money_put::string_type  
 A type that describes a string containing characters of type **CharType**.  
  
```  
typedef basic_string<CharType, Traits, Allocator> string_type;  
```  
  
### Remarks  
 The type describes a specialization of template class [basic_string](../standard-library/basic-string-class.md) whose objects can store sequences of elements from the source sequence.  
  
## See Also  
 [\<locale>](../standard-library/locale.md)   
 [facet Class](../standard-library/locale-class.md#facet_class)   
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)

