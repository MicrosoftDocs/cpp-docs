---
title: "codecvt Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "codecvt"
  - "std::codecvt"
  - "std.codecvt"
  - "xlocale/std::codecvt"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "codecvt class"
ms.assetid: 37d3efa1-2b7f-42b6-b04f-7a972c8c2c86
caps.latest.revision: 23
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
# codecvt Class
A template class that describes an object that can serve as a locale facet. It is able to control conversions between a sequence of values used to encode characters within the program and a sequence of values used to encode characters outside the program.  
  
## Syntax  
  
```  
template <class CharType, class Byte, class StateType>  
class codecvt : public locale::facet, codecvt_base;  
```  
  
#### Parameters  
 `CharType`  
 The type used within a program to encode characters.  
  
 `Byte`  
 A type used to encode characters outside a program.  
  
 `StateType`  
 A type that can be used to represent intermediate states of a conversion between internal and external types of character representations.  
  
## Remarks  
 The template class describes an object that can serve as a [locale facet](../standard-library/locale-class.md#facet_class), to control conversions between a sequence of values of type `CharType` and a sequence of values of type `Byte`. The class `StateType` characterizes the transformation -- and an object of class `StateType` stores any necessary state information during a conversion.  
  
 The internal encoding uses a representation with a fixed number of bytes per character, usually either type `char` or type `wchar_t`.  
  
 As with any locale facet, the static object `id` has an initial stored value of zero. The first attempt to access its stored value stores a unique positive value in `id`.  
  
 The template versions of [do_in](#codecvt__do_in) and [do_out](#codecvt__do_out) always return `codecvt_base::noconv`.  
  
 The Standard C++ Library defines several explicit specializations:  
  
 `template<>`  
  
 `codecvt<wchar_t, char, mbstate_t>`  
  
 converts between `wchar_t` and `char` sequences.  
  
 `template<>`  
  
 `codecvt<char16_t, char, mbstate_t>`  
  
 converts between `char16_t` sequences encoded as UTF-16 and `char` sequences encoded as UTF-8.  
  
 `template<>`  
  
 `codecvt<char32_t, char, mbstate_t>`  
  
 converts between `char32_t` sequences encoded as UTF-32 (UCS-4) and `char` sequences encoded as UTF-8.  
  
### Constructors  
  
|||  
|-|-|  
|[codecvt](#codecvt__codecvt)|The constructor for objects of class `codecvt` that serves as a locale facet to handle conversions.|  
  
### Typedefs  
  
|||  
|-|-|  
|[extern_type](#codecvt__extern_type)|A character type that is used for external representations.|  
|[intern_type](#codecvt__intern_type)|A character type that is used for internal representations.|  
|[state_type](#codecvt__state_type)|A character type that is used to represent intermediate states during conversions between internal and external representations.|  
  
### Member Functions  
  
|||  
|-|-|  
|[always_noconv](#codecvt__always_noconv)|Tests whether no conversions need be done.|  
|[do_always_noconv](#codecvt__do_always_noconv)|A virtual function called to test whether no conversions need be done.|  
|[do_encoding](#codecvt__do_encoding)|A virtual function that tests if the encoding of the `Byte` stream is state dependent, whether the ratio between the `Byte`s used and the `CharType`s produced is constant, and, if so, determines the value of that ratio.|  
|[do_in](#codecvt__do_in)|A virtual function called to convert a sequence of internal `Byte`s to a sequence of external `CharType`s.|  
|[do_length](#codecvt__do_length)|A virtual function that determines how many `Byte`s from a given sequence of external `Byte`s produce not more than a given number of internal `CharType`s and returns that number of `Byte`s.|  
|[do_max_length](#codecvt__do_max_length)|A virtual function that returns the maximum number of external Bytes necessary to produce one internal `CharType`.|  
|[do_out](#codecvt__do_out)|A virtual function called to convert a sequence of internal `CharType`s to a sequence of external Bytes.|  
|[do_unshift](#codecvt__do_unshift)|A virtual function called to provide the `Byte`s needed in a state-dependent conversion to complete the last character in a sequence of `Byte`s.|  
|[encoding](#codecvt__encoding)|Tests if the encoding of the `Byte` stream is state dependent, whether the ratio between the `Byte`s used and the `CharType`s produced is constant, and, if so, determines the value of that ratio.|  
|[in](#codecvt__in)|Converts an external representation of a sequence of `Byte`s to an internal representation of a sequence of `CharType`s.|  
|[length](#codecvt__length)|Determines how many `Byte`s from a given sequence of external `Byte`s produce not more than a given number of internal `CharType`s and returns that number of `Byte`s.|  
|[max_length](#codecvt__max_length)|Returns the maximum number of external `Byte`s necessary to produce one internal `CharType`.|  
|[out](#codecvt__out)|Converts a sequence of internal `CharType`s to a sequence of external `Byte`s.|  
|[unshift](#codecvt__unshift)|Provides the external `Byte`s needed in a state-dependent conversion to complete the last character in the sequence of `Byte`s.|  
  
## Requirements  
 **Header:** \<locale>  
  
 **Namespace:** std  
  
##  <a name="codecvt__always_noconv"></a>  codecvt::always_noconv  
 Tests whether no conversions need be done.  
  
```  
bool always_noconv() const throw();
```  
  
### Return Value  
 A Boolean value that is **true** if no conversions need be done; **false** is at least one needs to be done.  
  
### Remarks  
 The member function returns [do_always_noconv](#codecvt__do_always_noconv).  
  
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
   bool result1 = use_facet<codecvt<char, char, mbstate_t> >   
      ( loc ).always_noconv( );  
  
   if ( result1 )  
      cout << "No conversion is needed." << endl;  
   else  
      cout << "At least one conversion is required." << endl;  
  
   bool result2 = use_facet<codecvt<wchar_t, char, mbstate_t> >   
      ( loc ).always_noconv( );  
  
   if ( result2 )  
      cout << "No conversion is needed." << endl;  
   else  
      cout << "At least one conversion is required." << endl;  
}  
```  
  
```Output  
No conversion is needed.  
At least one conversion is required.  
```  
  
##  <a name="codecvt__codecvt"></a>  codecvt::codecvt  
 The constructor for objects of class codecvt that serves as a locale facet to handle conversions.  
  
```  
explicit codecvt(size_t _Refs = 0);
```  
  
### Parameters  
 `_Refs`  
 Integer value used to specify the type of memory management for the object.  
  
### Remarks  
 The possible values for the `_Refs` parameter and their significance are:  
  
-   0: The lifetime of the object is managed by the locales that contain it.  
  
-   1: The lifetime of the object must be manually managed.  
  
-   \> 0: These values are not defined.  
  
 The constructor initializes its `locale::facet` base object with **locale::**[facet](../standard-library/locale-class.md#facet_class)( `_Refs`) *.*  
  
##  <a name="codecvt__do_always_noconv"></a>  codecvt::do_always_noconv  
 A virtual function called to test whether no conversions need be done.  
  
```  
virtual bool do_always_noconv() const throw();
```  
  
### Return Value  
 The protected virtual member function returns **true** only if every call to [do_in](#codecvt__do_in) or [do_out](#codecvt__do_out) returns **noconv**.  
  
 The template version always returns **true**.  
  
### Example  
  See the example for [always_noconv](#codecvt__always_noconv), which calls `do_always_noconv`.  
  
##  <a name="codecvt__do_encoding"></a>  codecvt::do_encoding  
 A virtual function that tests if the encoding of the **Byte** stream is state dependent, whether the ratio between the **Byte**s used and the **CharType**s produced is constant and, if so, determines the value of that ratio.  
  
```  
virtual int do_encoding() const throw();
```  
  
### Return Value  
 The protected virtual member function returns:  
  
-   –1, if the encoding of sequences of type `extern_type` is state dependent.  
  
-   0, if the encoding involves sequences of varying lengths.  
  
- *N*, if the encoding involves only sequences of length *N*  
  
### Example  
  See the example for [encoding](#codecvt__encoding), which calls `do_encoding`.  
  
##  <a name="codecvt__do_in"></a>  codecvt::do_in  
 A virtual function called to convert a sequence of external **Byte**s to a sequence of internal **CharType**s.  
  
```  
virtual result do_in(
    StateType& _State,  
    const Byte* first1,   
    const Byte* last1,   
    const Byte*& next1,  
    CharType* first2,  
    CharType* last2,  
    CharType*& next2,) const;
```  
  
### Parameters  
 `_State`  
 The conversion state that is maintained between calls to the member function.  
  
 ` first1`  
 Pointer to the beginning of the sequence to be converted.  
  
 ` last1`  
 Pointer to the end of the sequence to be converted.  
  
 ` next1`  
 Pointer beyond the end of the converted sequence, to the first unconverted character.  
  
 ` first2`  
 Pointer to the beginning of the converted sequence.  
  
 ` last2`  
 Pointer to the end of the converted sequence.  
  
 ` next2`  
 Pointer to the **CharType** that comes after the last converted **CharType**, to the first unaltered character in the destination sequence.  
  
### Return Value  
 A return that indicates the success, partial success, or failure of the operation. The function returns:  
  
- **codecvt_base::error** if the source sequence is ill formed.  
  
- `codecvt_base::noconv` if the function performs no conversion.  
  
- **codecvt_base::ok** if the conversion succeeds.  
  
- **codecvt_base::partial** if the source is insufficient or if the destination is not large enough, for the conversion to succeed.  
  
### Remarks  
 `_State` must represent the initial conversion state at the beginning of a new source sequence. The function alters its stored value as needed to reflect the current state of a successful conversion. Its stored value is otherwise unspecified.  
  
### Example  
  See the example for [in](#codecvt__in), which calls `do_in`.  
  
##  <a name="codecvt__do_length"></a>  codecvt::do_length  
 A virtual function that determines how many **Byte**s from a given sequence of external **Byte**s produce not more than a given number of internal **CharType**s and returns that number of **Byte**s.  
  
```  
virtual int do_length(
    const StateType& _State,  
    const Byte* first1,   
    const Byte* last1,  
    size_t _Len2) const;
```  
  
### Parameters  
 `_State`  
 The conversion state that is maintained between calls to the member function.  
  
 ` first1`  
 Pointer to the beginning of the external sequence.  
  
 ` last1`  
 Pointer to the end of the external sequence.  
  
 `_Len2`  
 The maximum number of **Byte**s that can be returned by the member function.  
  
### Return Value  
 An integer that represents a count of the maximum number of conversions, not greater than `_Len2`, defined by the external source sequence at [ ` first1`, ` last1`).  
  
### Remarks  
 The protected virtual member function effectively calls `do_in`( `_State`, ` first1`, ` last1`, ` next1`, `_Buf`, `_Buf` + `_Len2`, ` next2`) for `_State` (a copy of state), some buffer `_Buf`, and pointers ` next1`and ` next2`.  
  
 It then returns ` next2` – **buf**. Thus, it counts the maximum number of conversions, not greater than `_Len2`, defined by the source sequence at [ ` first1`, ` last1`).  
  
 The template version always returns the lesser of ` last1` – ` first1` and `_Len2`.  
  
### Example  
  See the example for [length](#codecvt__length), which calls **do_length**.  
  
##  <a name="codecvt__do_max_length"></a>  codecvt::do_max_length  
 A virtual function that returns the maximum number of external **Byte**s necessary to produce one internal **CharType**.  
  
```  
virtual int do_max_length() const throw();
```  
  
### Return Value  
 The maximum number of **Byte**s necessary to produce one **CharType**.  
  
### Remarks  
 The protected virtual member function returns the largest permissible value that can be returned by [do_length](#codecvt__do_length)( ` first1`, ` last1`, 1) for arbitrary valid values of ` first1` and ` last1`.  
  
### Example  
  See the example for [max_length](#codecvt__max_length), which calls `do_max_length`.  
  
##  <a name="codecvt__do_out"></a>  codecvt::do_out  
 A virtual function called to convert a sequence of internal **CharType**s to a sequence of external **Byte**s.  
  
```  
virtual result do_out(
    StateType& _State,  
    const CharType* first1,   
    const CharType* last1,  
    const CharType*& next1,  
    Byte* first2,   
    Byte* last2,   
    Byte*& next2) const;
```  
  
### Parameters  
 `_State`  
 The conversion state that is maintained between calls to the member function.  
  
 ` first1`  
 Pointer to the beginning of the sequence to be converted.  
  
 ` last1`  
 Pointer to the end of the sequence to be converted.  
  
 ` next1`  
 Reference to a pointer to the first unconverted **CharType**, after the last **CharType** converted.  
  
 ` first2`  
 Pointer to the beginning of the converted sequence.  
  
 ` last2`  
 Pointer to the end of the converted sequence.  
  
 ` next2`  
 Reference to a pointer to the first unconverted **Byte**, after the last **Byte** converted.  
  
### Return Value  
 The function returns:  
  
- **codecvt_base::error** if the source sequence is ill formed.  
  
- `codecvt_base::noconv` if the function performs no conversion.  
  
- **codecvt_base::ok** if the conversion succeeds.  
  
- **codecvt_base::partial** if the source is insufficient or if the destination is not large enough for the conversion to succeed.  
  
### Remarks  
 `_State` must represent the initial conversion state at the beginning of a new source sequence. The function alters its stored value as needed to reflect the current state of a successful conversion. Its stored value is otherwise unspecified.  
  
### Example  
  See the example for [out](#codecvt__out), which calls `do_out`.  
  
##  <a name="codecvt__do_unshift"></a>  codecvt::do_unshift  
 A virtual function called to provide the **Byte**s needed in a state-dependent conversion to complete the last character in a sequence of **Byte**s.  
  
```  
virtual result do_unshift(
    StateType& _State,  
    Byte* first2,   
    Byte* last2,   
    Byte*& next2) const;
```  
  
### Parameters  
 `_State`  
 The conversion state that is maintained between calls to the member function.  
  
 ` first2`  
 Pointer to the first position in the destination range.  
  
 ` last2`  
 Pointer to the last position in the destination range.  
  
 ` next2`  
 Pointer to the first unaltered element in the destination sequence.  
  
### Return Value  
 The function returns:  
  
- **codecvt_base::error** if _ *State* represents an invalid state  
  
- `codecvt_base::noconv` if the function performs no conversion  
  
- **codecvt_base::ok** if the conversion succeeds  
  
- **codecvt_base::partial** if the destination is not large enough for the conversion to succeed  
  
### Remarks  
 The protected virtual member function tries to convert the source element **CharType**(0) to a destination sequence that it stores within [ ` first2`, ` last2`), except for the terminating element **Byte**(0). It always stores in ` next2` a pointer to the first unaltered element in the destination sequence.  
  
 _ *State* must represent the initial conversion state at the beginning of a new source sequence. The function alters its stored value as needed to reflect the current state of a successful conversion. Typically, converting the source element **CharType**(0) leaves the current state in the initial conversion state.  
  
### Example  
  See the example for [unshift](#codecvt__unshift), which calls `do_unshift`.  
  
##  <a name="codecvt__encoding"></a>  codecvt::encoding  
 Tests if the encoding of the **Byte** stream is state dependent, whether the ratio between the **Byte**s used and the **CharType**s produced is constant, and, if so, determines the value of that ratio.  
  
```  
int encoding() const throw();
```  
  
### Return Value  
 If the return value is positive then that value is the constant number of **Byte** characters required to produce the **CharType** character.  
  
 The protected virtual member function returns:  
  
-   –1, if the encoding of sequences of type `extern_type` is state dependent.  
  
-   0, if the encoding involves sequences of varying lengths.  
  
- *N*, if the encoding involves only sequences of length *N.*  
  
### Remarks  
 The member function returns [do_encoding](#codecvt__do_encoding).  
  
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
   int result1 = use_facet<codecvt<char, char, mbstate_t> > ( loc ).encoding ( );  
   cout << result1 << endl;  
   result1 = use_facet<codecvt<wchar_t, char, mbstate_t> > ( loc ).encoding( );  
   cout << result1 << endl;  
   result1 = use_facet<codecvt<char, wchar_t, mbstate_t> > ( loc ).encoding( );  
   cout << result1 << endl;  
}  
```  
  
```Output  
1  
1  
1  
```  
  
##  <a name="codecvt__extern_type"></a>  codecvt::extern_type  
 A character type that is used for external representations.  
  
```  
typedef Byte extern_type;  
```  
  
### Remarks  
 The type is a synonym for the template parameter **Byte**.  
  
##  <a name="codecvt__in"></a>  codecvt::in  
 Converts an external representation of a sequence of **Byte**s to an internal representation of a sequence of **CharType**s.  
  
```  
result in(
    StateType& _State,  
    const Byte* first1,   
    const Byte* last1,   
    const Byte*& next1,  
    CharType* first2,  
    CharType* last2,  
    CharType*& next2,) const;
```  
  
### Parameters  
 `_State`  
 The conversion state that is maintained between calls to the member function.  
  
 ` first1`  
 Pointer to the beginning of the sequence to be converted.  
  
 ` last1`  
 Pointer to the end of the sequence to be converted.  
  
 ` next1`  
 Pointer beyond the end of the converted sequence to the first unconverted character.  
  
 ` first2`  
 Pointer to the beginning of the converted sequence.  
  
 ` last2`  
 Pointer to the end of the converted sequence.  
  
 ` next2`  
 Pointer to the **CharType** that comes after the last converted **Chartype** to the first unaltered character in the destination sequence.  
  
### Return Value  
 A return that indicates the success, partial success or failure of the operation. The function returns:  
  
- **codecvt_base::error** if the source sequence is ill formed.  
  
- `codecvt_base::noconv` if the function performs no conversion.  
  
- **codecvt_base::ok** if the conversion succeeds.  
  
- **codecvt_base::partial** if the source is insufficient or if the destination is not large enough for the conversion to succeed.  
  
### Remarks  
 `_State` must represent the initial conversion state at the beginning of a new source sequence. The function alters its stored value, as needed, to reflect the current state of a successful conversion. After a partial conversion, `_State` must be set so as to allow the conversion to resume when new characters arrive.  
  
 The member function returns [do_in](#codecvt__do_in)( `_State`, _ *First1,  last1,  next1, First2, _Llast2,  next2*).  
  
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
   char* pszExt = "This is the string to be converted!";  
   wchar_t pwszInt [LEN+1];  
   memset(&pwszInt[0], 0, (sizeof(wchar_t))*(LEN+1));  
   const char* pszNext;  
   wchar_t* pwszNext;  
   mbstate_t state = {0};  
   locale loc("C");//English_Britain");//German_Germany  
   int res = use_facet<codecvt<wchar_t, char, mbstate_t> >  
     ( loc ).in( state,  
          pszExt, &pszExt[strlen(pszExt)], pszNext,  
          pwszInt, &pwszInt[strlen(pszExt)], pwszNext );  
   pwszInt[strlen(pszExt)] = 0;  
   wcout << ( (res!=codecvt_base::error)  L"It worked! " : L"It didn't work! " )  
   << L"The converted string is:\n ["  
   << &pwszInt[0]  
   << L"]" << endl;  
   exit(-1);  
}  
```  
  
```Output  
It worked! The converted string is:  
 [This is the string to be converted!]  
```  
  
##  <a name="codecvt__intern_type"></a>  codecvt::intern_type  
 A character type that is used for internal representations.  
  
```  
typedef CharType intern_type;  
```  
  
### Remarks  
 The type is a synonym for the template parameter **CharType**.  
  
##  <a name="codecvt__length"></a>  codecvt::length  
 Determines how many **Byte**s from a given sequence of external **Byte**s produce not more than a given number of internal **CharType**s and returns that number of **Byte**s.  
  
```  
int length(
    const StateType& _State,  
    const Byte* first1,   
    const Byte* last1,  
    size_t _Len2) const;
```  
  
### Parameters  
 `_State`  
 The conversion state that is maintained between calls to the member function.  
  
 ` first1`  
 Pointer to the beginning of the external sequence.  
  
 ` last1`  
 Pointer to the end of the external sequence.  
  
 `_Len2`  
 The maximum number of Bytes that can be returned by the member function.  
  
### Return Value  
 An integer that represents a count of the maximum number of conversions, not greater than `_Len2`, defined by the external source sequence at [ ` first1`, ` last1`).  
  
### Remarks  
 The member function returns [do_length](#codecvt__do_length)( *_State,  first1*, ` last1`, `_Len2`).  
  
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
   char* pszExt = "This is the string whose length is to be measured!";  
   mbstate_t state = {0};  
   locale loc("C");//English_Britain");//German_Germany  
   int res = use_facet<codecvt<wchar_t, char, mbstate_t> >  
     ( loc ).length( state,  
          pszExt, &pszExt[strlen(pszExt)], LEN );  
   cout << "The length of the string is: ";  
   wcout << res;  
   cout << "." << endl;  
   exit(-1);  
}  
```  
  
```Output  
The length of the string is: 50.  
```  
  
##  <a name="codecvt__max_length"></a>  codecvt::max_length  
 Returns the maximum number of external **Byte**s necessary to produce one internal **CharType**.  
  
```  
int max_length() const throw();
```  
  
### Return Value  
 The maximum number of **Byte**s necessary to produce one **CharType**.  
  
### Remarks  
 The member function returns [do_max_length](#codecvt__do_max_length).  
  
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
   int res = use_facet<codecvt<char, char, mbstate_t> >  
     ( loc ).max_length( );  
   wcout << res << endl;  
}  
```  
  
```Output  
1  
```  
  
##  <a name="codecvt__out"></a>  codecvt::out  
 Converts a sequence of internal **CharType**s to a sequence of external **Byte**s.  
  
```  
result out(
    StateType& _State,  
    const CharType* first1,   
    const CharType* last1,  
    const CharType*& next1,  
    Byte* first2,   
    Byte* last2,   
    Byte*& next2) const;
```  
  
### Parameters  
 `_State`  
 The conversion state that is maintained between calls to the member function.  
  
 ` first1`  
 Pointer to the beginning of the sequence to be converted.  
  
 ` last1`  
 Pointer to the end of the sequence to be converted.  
  
 ` next1`  
 Reference to a pointer to the first unconverted **CharType** after the last **CharType** converted.  
  
 ` first2`  
 Pointer to the beginning of the converted sequence.  
  
 ` last2`  
 Pointer to the end of the converted sequence.  
  
 ` next2`  
 Reference to a pointer to the first unconverted **Byte** after the last converted **Byte**.  
  
### Return Value  
 The member function returns [do_out](#codecvt__do_out)( `_State`, ` first1`, ` last1`, ` next1`, ` first2`, ` last2`, ` next2`).  
  
### Remarks  
 For more information, see [codecvt::do_out](#codecvt__do_out).  
  
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
   char pszExt[LEN+1];  
   wchar_t *pwszInt = L"This is the wchar_t string to be converted.";  
   memset( &pszExt[0], 0, ( sizeof( char ) )*( LEN+1 ) );  
   char* pszNext;  
   const wchar_t* pwszNext;  
   mbstate_t state;  
   locale loc("C");//English_Britain");//German_Germany  
   int res = use_facet<codecvt<wchar_t, char, mbstate_t> >  
      ( loc ).out( state,  
      pwszInt, &pwszInt[wcslen( pwszInt )], pwszNext ,  
      pszExt, &pszExt[wcslen( pwszInt )], pszNext );  
   pszExt[wcslen( pwszInt )] = 0;  
   cout << ( ( res!=codecvt_base::error )  "It worked: " : "It didn't work: " )  
   << "The converted string is:\n ["  
   << &pszExt[0]  
   << "]" << endl;  
}  
```  
  
```Output  
It worked: The converted string is:  
 [This is the wchar_t string to be converted.]  
```  
  
##  <a name="codecvt__state_type"></a>  codecvt::state_type  
 A character type that is used to represent intermediate states during conversions between internal and external representations.  
  
```  
typedef StateType state_type;  
```  
  
### Remarks  
 The type is a synonym for the template parameter **StateType**.  
  
##  <a name="codecvt__unshift"></a>  codecvt::unshift  
 Provides the **Byte**s needed in a state-dependent conversion to complete the last character in a sequence of **Byte**s.  
  
```  
result unshift(
    StateType& _State,  
    Byte* first2,   
    Byte* last2,   
    Byte*& next2) const;
```  
  
### Parameters  
 `_State`  
 The conversion state that is maintained between calls to the member function.  
  
 ` first2`  
 Pointer to the first position in the destination range.  
  
 ` last2`  
 Pointer to the last position in the destination range.  
  
 ` next2`  
 Pointer to the first unaltered element in the destination sequence.  
  
### Return Value  
 The function returns:  
  
- **codecvt_base::error** if state represents an invalid state.  
  
- `codecvt_base::noconv` if the function performs no conversion.  
  
- **codecvt_base::ok** if the conversion succeeds.  
  
- **codecvt_base::partial** if the destination is not large enough for the conversion to succeed.  
  
### Remarks  
 The protected virtual member function tries to convert the source element **CharType**(0) to a destination sequence that it stores within [ ` first2`, ` last2`), except for the terminating element **Byte**(0). It always stores in ` next2` a pointer to the first unaltered element in the destination sequence.  
  
 `_State` must represent the initial conversion state at the beginning of a new source sequence. The function alters its stored value, as needed, to reflect the current state of a successful conversion. Typically, converting the source element **CharType**(0) leaves the current state in the initial conversion state.  
  
 The member function returns [do_unshift](#codecvt__do_unshift)( `_State`, ` first2`, ` last2`, ` next2` ).  
  
## See Also  
 [\<locale>](../standard-library/locale.md)   
 [Code Pages](../c-runtime-library/code-pages.md)   
 [Locale Names, Languages, and Country/Region Strings](../c-runtime-library/locale-names-languages-and-country-region-strings.md)   
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)

