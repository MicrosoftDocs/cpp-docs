---
title: "numpunct Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "xlocnum/std::numpunct"
  - "std::numpunct"
  - "numpunct"
  - "std.numpunct"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "numpunct class"
ms.assetid: 73fb93cc-ac11-4c98-987c-bfa6267df596
caps.latest.revision: 22
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.mt: 
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
# numpunct Class
A template class that describes an object that can serve as a local facet to describe the sequences of type `CharType` used to represent information about the formatting and punctuation of numeric and Boolean expressions.  
  
## Syntax  
  
```  
template <class CharType>  
class numpunct : public locale::facet;  
```  
  
#### Parameters  
 `CharType`  
 The type used within a program to encode characters in a locale.  
  
## Remarks  
 As with any locale facet, the static object ID has an initial stored value of zero. The first attempt to access its stored value stores a unique positive value in **id.**  
  
### Constructors  
  
|||  
|-|-|  
|[numpunct](#numpunct__numpunct)|The constructor for objects of type `numpunct`.|  
  
### Typedefs  
  
|||  
|-|-|  
|[char_type](#numpunct__char_type)|A type that is used to describe a character used by a locale.|  
|[string_type](#numpunct__string_type)|A type that describes a string containing characters of type `CharType`.|  
  
### Member Functions  
  
|||  
|-|-|  
|[decimal_point](#numpunct__decimal_point)|Returns a locale-specific element to use as a decimal point.|  
|[do_decimal_point](#numpunct__do_decimal_point)|A protected virtual member function that is called to return a locale-specific element to use as a decimal point.|  
|[do_falsename](#numpunct__do_falsename)|A protected virtual member function that is called to return a string to use as a text representation of the value `false`.|  
|[do_grouping](#numpunct__do_grouping)|A protected virtual member function that is called to return a locale-specific rule for determining how digits are grouped to the left of any decimal point.|  
|[do_thousands_sep](#numpunct__do_thousands_sep)|A protected virtual member function that is called to return a locale-specific element to use as a thousands separator.|  
|[do_truename](#numpunct__do_truename)|A protected virtual member function that is called to return a string to use as a text representation of the value `true`.|  
|[falsename](#numpunct__falsename)|Returns a string to use as a text representation of the value `false`.|  
|[grouping](#numpunct__grouping)|Returns a locale-specific rule for determining how digits are grouped to the left of any decimal point.|  
|[thousands_sep](#numpunct__thousands_sep)|Returns a locale-specific element to use as a thousands separator.|  
|[truename](#numpunct__truename)|Returns a string to use as a text representation of the value `true`.|  
  
## Requirements  
 **Header:** \<locale>  
  
 **Namespace:** std  
  
##  <a name="numpunct__char_type"></a>  numpunct::char_type  
 A type that is used to describe a character used by a locale.  
  
```  
typedef CharType char_type;  
```  
  
### Remarks  
 The type is a synonym for the template parameter **CharType.**  
  
##  <a name="numpunct__decimal_point"></a>  numpunct::decimal_point  
 Returns a locale-specific element to use as a decimal point.  
  
```  
CharType decimal_point() const;
```  
  
### Return Value  
 A locale-specific element to use as a decimal point.  
  
### Remarks  
 The member function returns [do_decimal_point](#numpunct__do_decimal_point).  
  
### Example  
  
```cpp  
// numpunct_decimal_point.cpp  
// compile with: /EHsc  
#include <locale>  
#include <iostream>  
#include <sstream>  
using namespace std;  
int main( )  
{  
   locale loc( "german_germany" );  
  
   const numpunct <char> &npunct =   
   use_facet <numpunct <char> >( loc);  
   cout << loc.name( ) << " decimal point "<<   
   npunct.decimal_point( ) << endl;  
   cout << loc.name( ) << " thousands separator "   
   << npunct.thousands_sep( ) << endl;  
};  
```  
  
```Output  
German_Germany.1252 decimal point ,  
German_Germany.1252 thousands separator .  
```  
  
##  <a name="numpunct__do_decimal_point"></a>  numpunct::do_decimal_point  
 A protected virtual member function that is called to return a locale-specific element to use as a decimal point.  
  
```  
virtual CharType do_decimal_point() const;
```  
  
### Return Value  
 A locale-specific element to use as a decimal point.  
  
### Example  
  See the example for [decimal_point](#numpunct__decimal_point), where the virtual member function is called by `decimal_point`.  
  
##  <a name="numpunct__do_falsename"></a>  numpunct::do_falsename  
 The protected virtual member function returns a sequence to use as a text representation of the value **false**.  
  
```  
virtual string_type do_falsename() const;
```  
  
### Return Value  
 A string containing a sequence to use as a text representation of the value **false**.  
  
### Remarks  
 The member function returns the string "false" to represent the value **false** in all locales.  
  
### Example  
  See the example for [falsename](#numpunct__falsename), where the virtual member function is called by `falsename`.  
  
##  <a name="numpunct__do_grouping"></a>  numpunct::do_grouping  
 A protected virtual member function that is called to return a locale-specific rule for determining how digits are grouped to the left of any decimal point.  
  
```  
virtual string do_grouping() const;
```  
  
### Return Value  
 A locale-specific rule for determining how digits are grouped to the left of any decimal point.  
  
### Remarks  
 The protected virtual member function returns a locale-specific rule for determining how digits are grouped to the left of any decimal point. The encoding is the same as for **lconv::grouping**.  
  
### Example  
  See the example for [grouping](#numpunct__grouping), where the virtual member function is called by **grouping**.  
  
##  <a name="numpunct__do_thousands_sep"></a>  numpunct::do_thousands_sep  
 A protected virtual member function that is called to return a locale-specific element to use as a thousands separator.  
  
```  
virtual CharType do_thousands_sep() const;
```  
  
### Return Value  
 Returns a locale-specific element to use as a thousands separator.  
  
### Remarks  
 The protected virtual member function returns a locale-specific element of type **CharType** to use as a group separator to the left of any decimal point.  
  
### Example  
  See the example for [thousands_sep](#numpunct__thousands_sep), where the virtual member function is called by `thousands_sep`.  
  
##  <a name="numpunct__do_truename"></a>  numpunct::do_truename  
 A protected virtual member function that is called to return a string to use as a text representation of the value **true**.  
  
```  
virtual string_type do_truename() const;
```  
  
### Remarks  
 A string to use as a text representation of the value **true**.  
  
 All locales return a string "true" to represent the value **true**.  
  
### Example  
  See the example for [truename](#numpunct__truename), where the virtual member function is called by `truename`.  
  
##  <a name="numpunct__falsename"></a>  numpunct::falsename  
 Returns a string to use as a text representation of the value **false**.  
  
```  
string_type falsename() const;
```  
  
### Return Value  
 A string containing a sequence of **CharType**s to use as a text representation of the value **false**.  
  
### Remarks  
 The member function returns the string "false" to represent the value **false** in all locales.  
  
 The member function returns [do_falsename](#numpunct__do_falsename).  
  
### Example  
  
```cpp  
// numpunct_falsename.cpp  
// compile with: /EHsc  
#include <locale>  
#include <iostream>  
#include <sstream>  
using namespace std;  
int main( )  
{  
   locale loc( "English" );  
  
   const numpunct <char> &npunct = use_facet <numpunct <char> >( loc );  
   cout << loc.name( ) << " truename "<< npunct.truename( ) << endl;  
   cout << loc.name( ) << " falsename "<< npunct.falsename( ) << endl;  
  
   locale loc2( "French" );  
   const numpunct <char> &npunct2 = use_facet <numpunct <char> >(loc2);  
   cout << loc2.name( ) << " truename "<< npunct2.truename( ) << endl;  
   cout << loc2.name( ) << " falsename "<< npunct2.falsename( ) << endl;  
}  
```  
  
```Output  
English_United States.1252 truename true  
English_United States.1252 falsename false  
French_France.1252 truename true  
French_France.1252 falsename false  
```  
  
##  <a name="numpunct__grouping"></a>  numpunct::grouping  
 Returns a locale-specific rule for determining how digits are grouped to the left of any decimal point.  
  
```  
string grouping() const;
```  
  
### Return Value  
 A locale-specific rule for determining how digits are grouped to the left of any decimal point.  
  
### Remarks  
 The member function returns [do_grouping](#numpunct__do_grouping).  
  
### Example  
  
```cpp  
// numpunct_grouping.cpp  
// compile with: /EHsc  
#include <locale>  
#include <iostream>  
#include <sstream>  
using namespace std;  
int main( )  
{  
   locale loc( "german_germany");  
  
   const numpunct <char> &npunct =   
       use_facet < numpunct <char> >( loc );  
   for (unsigned int i = 0; i < npunct.grouping( ).length( ); i++)  
   {  
      cout << loc.name( ) << " international grouping:\n the "  
           << i <<"th group to the left of the radix character "  
           << "is of size " << (int)(npunct.grouping ( )[i])   
           << endl;  
   }  
}  
```  
  
```Output  
German_Germany.1252 international grouping:  
 the 0th group to the left of the radix character is of size 3  
```  
  
##  <a name="numpunct__numpunct"></a>  numpunct::numpunct  
 The constructor for objects of type `numpunct`.  
  
```  
explicit numpunct(size_t _Refs = 0);
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
  
##  <a name="numpunct__string_type"></a>  numpunct::string_type  
 A type that describes a string containing characters of type **CharType**.  
  
```  
typedef basic_string<CharType, Traits, Allocator> string_type;  
```  
  
### Remarks  
 The type describes a specialization of template class [basic_string](../standard-library/basic-string-class.md) whose objects can store copies of the punctuation sequences.  
  
##  <a name="numpunct__thousands_sep"></a>  numpunct::thousands_sep  
 Returns a locale-specific element to use as a thousands separator.  
  
```  
CharType thousands_sep() const;
```  
  
### Return Value  
 A locale-specific element to use as a thousands separator.  
  
### Remarks  
 The member function returns [do_thousands_sep](#numpunct__do_thousands_sep).  
  
### Example  
  
```cpp  
// numpunct_thou_sep.cpp  
// compile with: /EHsc  
#include <locale>  
#include <iostream>  
#include <sstream>  
using namespace std;  
int main( )  
{  
   locale loc( "german_germany" );  
  
   const numpunct <char> &npunct =   
   use_facet < numpunct < char > >( loc );  
   cout << loc.name( ) << " decimal point "<<   
   npunct.decimal_point( ) << endl;  
   cout << loc.name( ) << " thousands separator "   
   << npunct.thousands_sep( ) << endl;  
};  
```  
  
```Output  
German_Germany.1252 decimal point ,  
German_Germany.1252 thousands separator .  
```  
  
##  <a name="numpunct__truename"></a>  numpunct::truename  
 Returns a string to use as a text representation of the value **true**.  
  
```  
string_type falsename() const;
```  
  
### Return Value  
 A string to use as a text representation of the value **true**.  
  
### Remarks  
 The member function returns [do_truename](#numpunct__do_truename).  
  
 All locales return a string "true" to represent the value **true**.  
  
### Example  
  
```cpp  
// numpunct_truename.cpp  
// compile with: /EHsc  
#include <locale>  
#include <iostream>  
#include <sstream>  
using namespace std;  
int main( )  
{  
   locale loc( "English" );  
  
   const numpunct < char> &npunct = use_facet <numpunct <char> >( loc );  
   cout << loc.name( ) << " truename "<< npunct.truename( ) << endl;  
   cout << loc.name( ) << " falsename "<< npunct.falsename( ) << endl;  
  
   locale loc2("French");  
   const numpunct <char> &npunct2 = use_facet <numpunct <char> >( loc2 );  
   cout << loc2.name( ) << " truename "<< npunct2.truename( ) << endl;  
   cout << loc2.name( ) << " falsename "<< npunct2.falsename( ) << endl;  
}  
```  
  
```Output  
English_United States.1252 truename true  
English_United States.1252 falsename false  
French_France.1252 truename true  
French_France.1252 falsename false  
```  
  
## See Also  
 [\<locale>](../standard-library/locale.md)   
 [facet Class](../standard-library/locale-class.md#facet_class)   
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)

