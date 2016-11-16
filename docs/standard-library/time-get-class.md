---
title: "time_get Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std.time_get"
  - "xloctime/std::time_get"
  - "time_get"
  - "std::time_get"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "time_get class"
ms.assetid: 869d5f5b-dbab-4628-8333-bdea7e272023
caps.latest.revision: 21
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
# time_get Class
The template class describes an object that can serve as a locale facet to control conversions of sequences of type `CharType` to time values.  
  
## Syntax  
  
```  
template <class CharType,  
    class InputIterator = istreambuf_iterator<CharType>>  
class time_get : public time_base;  
```  
  
#### Parameters  
 `CharType`  
 The type used within a program to encode characters.  
  
 `InputIterator`  
 The iterator from which the time values are read.  
  
## Remarks  
 As with any locale facet, the static object ID has an initial stored value of zero. The first attempt to access its stored value stores a unique positive value in **id.**  
  
### Constructors  
  
|||  
|-|-|  
|[time_get](#time_get__time_get)|The constructor for objects of type `time_get`.|  
  
### Typedefs  
  
|||  
|-|-|  
|[char_type](#time_get__char_type)|A type that is used to describe a character used by a locale.|  
|[iter_type](#time_get__iter_type)|A type that describes an input iterator.|  
  
### Member Functions  
  
|||  
|-|-|  
|[date_order](#time_get__date_order)|Returns the date order used by a facet.|  
|[do_date_order](#time_get__do_date_order)|A protected virtual member function that is called to return the date order used by a facet.|  
|[do_get](#time_get__do_get)|Reads and converts character data to a time value.|  
|[do_get_date](#time_get__do_get_date)|A protected virtual member function that is called to parse a string as the date produced by the `x` specifier for `strftime`.|  
|[do_get_monthname](#time_get__do_get_monthname)|A protected virtual member function that is called to parse a string as the name of the month.|  
|[do_get_time](#time_get__do_get_time)|A protected virtual member function that is called to parse a string as the date produced by the `X` specifier for `strftime`.|  
|[do_get_weekday](#time_get__do_get_weekday)|A protected virtual member function that is called to parse a string as the name of the day of the week.|  
|[do_get_year](#time_get__do_get_year)|A protected virtual member function that is called to parses a string as the name of the year.|  
|[get](#time_get__get)|Reads from a source of character data and converts that data to a time that is stored in a time struct.|  
|[get_date](#time_get__get_date)|Parses a string as the date produced by the `x` specifier for `strftime`.|  
|[get_monthname](#time_get__get_monthname)|Parses a string as the name of the month.|  
|[get_time](#time_get__get_time)|Parses a string as the date produced by the `X` specifier for `strftime`.|  
|[get_weekday](#time_get__get_weekday)|Parses a string as the name of the day of the week.|  
|[get_year](#time_get__get_year)|Parses a string as the name of the year.|  
  
## Requirements  
 **Header:** \<locale>  
  
 **Namespace:** std  
  
##  <a name="time_get__char_type"></a>  time_get::char_type  
 A type that is used to describe a character used by a locale.  
  
```  
typedef CharType char_type;  
```  
  
### Remarks  
 The type is a synonym for the template parameter **CharType**.  
  
##  <a name="time_get__date_order"></a>  time_get::date_order  
 Returns the date order used by a facet.  
  
```  
dateorder date_order() const;
```  
  
### Return Value  
 The date order used by a facet.  
  
### Remarks  
 The member function returns [do_date_order](#time_get__do_date_order).  
  
### Example  
  
```cpp  
// time_get_date_order.cpp  
// compile with: /EHsc  
#include <locale>  
#include <iostream>  
#include <sstream>  
#include <time.h>  
using namespace std;  
void po( char *p )  
{  
   locale loc( p );  
  
   time_get <char>::dateorder order = use_facet <time_get <char> >( loc ).date_order ( );  
   cout << loc.name( );  
   switch (order){  
      case time_base::dmy: cout << "(day, month, year)" << endl;  
      break;  
      case time_base::mdy: cout << "(month, day, year)" << endl;  
      break;  
      case time_base::ydm: cout << "(year, day, month)" << endl;  
      break;  
      case time_base::ymd: cout << "(year, month, day)"<< endl;  
      break;  
      case time_base::no_order: cout << "(no_order)"<< endl;  
      break;  
   }  
}  
  
int main( )  
{  
   po( "C" );  
   po( "german" );  
   po( "English_Britain" );  
}  
```  
  
```Output  
C(month, day, year)  
German_Germany.1252(day, month, year)  
English_United Kingdom.1252(day, month, year)  
```  
  
##  <a name="time_get__do_date_order"></a>  time_get::do_date_order  
 A protected virtual member function that is called to return the date order used by a facet.  
  
```  
virtual dateorder do_date_order() const;
```  
  
### Return Value  
 The date order used by a facet.  
  
### Remarks  
 The virtual protected member function returns a value of type **time_base::dateorder**, which describes the order in which date components are matched by [do_get_date](#time_get__do_get_date). In this implementation, the value is **time_base::mdy**, corresponding to dates of the form December 2, 1979.  
  
### Example  
  See the example for [date_order](#time_get__date_order), which calls `do_date_order`.  
  
##  <a name="time_get__do_get"></a>  time_get::do_get  
 Reads and converts character data to a time value. Accepts one conversion specifier and modifier.  
  
```  
virtual iter_type  
    do_get(
 iter_type first,   
    iter_type last,  
    ios_base& _Iosbase,   
    ios_base::iostate& _State,   
    tm* _Pt,  
    char _Fmt,   
    char _Mod) const;
```  
  
### Parameters  
 ` first`  
 An Input iterator that indicates the start of the sequence to convert.  
  
 ` last`  
 An Input iterator that indicates the end of the sequence.  
  
 `_Iosbase`  
 A stream object.  
  
 `_State`  
 A field in _Iosbase where appropriate bitmask elements are set to indicate errors.  
  
 `_Pt`  
 A pointer to the time structure where the time is to be stored.  
  
 `_Fmt`  
 A conversion specifier character.  
  
 `_Mod`  
 An optional modifier character.  
  
### Return Value  
 Returns an iterator that designates the first unconverted element. A conversion failure sets `ios_base::failbit` in `_State` and returns ` first`.  
  
### Remarks  
 The virtual member function converts and skips one or more input elements in the range `[`` first``,` ` last``)` to determine the values stored in one or more members of `*pt`. A conversion failure sets `ios_base::failbit` in `_State` and returns ` first`. Otherwise, the function returns an iterator designating the first unconverted element.  
  
 The conversion specifiers are:  
  
 `'a'` or `'A'` -- behaves the same as [time_get::get_weekday](#time_get__get_weekday).  
  
 `'b'`, `'B'`, or `'h'` -- behaves the same as [time_get::get_monthname](#time_get__get_monthname).  
  
 `'c'` -- behaves the same as `"%b %d %H : %M : %S %Y"`.  
  
 `'C'` -- converts a decimal input field in the range [0, 99] to the value `val` and stores `val * 100 - 1900` in `pt-&tm_year`.  
  
 `'d'` or `'e'` -- converts a decimal input field in the range [1, 31] and stores its value in `pt-&tm_mday`.  
  
 `'D'` -- behaves the same as `"%m / %d / %y"`.  
  
 `'H'` -- converts a decimal input field in the range [0, 23] and stores its value in `pt-&tm_hour`.  
  
 `'I'` -- converts a decimal input field in the range [0, 11] and stores its value in `pt-&tm_hour`.  
  
 `'j'` -- converts a decimal input field in the range [1, 366] and stores its value in `pt-&tm_yday`.  
  
 `'m'` -- converts a decimal input field in the range [1, 12] to the value `val` and stores `val - 1` in and stores its value in `pt-&tm_mon`.  
  
 `'M'` -- converts a decimal input field in the range [0, 59] and stores its value in `pt-&tm_min`.  
  
 `'n'` or `'t'` -- behaves the same as `" "`.  
  
 `'p'` -- converts "AM" or "am" to zero and "PM" or "PM" to 12 and adds this value to `pt-&tm_hour`.  
  
 `'r'` -- behaves the same as `"%I : %M : %S %p"`.  
  
 `'R'` -- behaves the same as `"%H %M"`.  
  
 `'S'` -- converts a decimal input field in the range [0, 59] and stores its value in `pt-&tm_sec`.  
  
 `'T'` or `'X'` -- behaves the same as `"%H : %M : S"`.  
  
 `'U'` -- converts a decimal input field in the range [0, 53] and stores its value in `pt-&tm_yday`.  
  
 `'w'` -- converts a decimal input field in the range [0, 6] and stores its value in `pt-&tm_wday`.  
  
 `'W'` -- converts a decimal input field in the range [0, 53] and stores its value in `pt-&tm_yday`.  
  
 `'x'` -- behaves the same as `"%d / %m / %y"`.  
  
 `'y'` -- converts a decimal input field in the range [0, 99] to the value `val` and stores `val < 69  val + 100 : val` in `pt-&tm_year`.  
  
 `'Y'` -- behaves the same as [time_get::get_year](#time_get__get_year).  
  
 Any other conversion specifier sets `ios_base::failbit` in `state` and returns. In this implementation, any modifier has no effect.  
  
##  <a name="time_get__do_get_date"></a>  time_get::do_get_date  
 A protected virtual member function that is called to parse a string as the date produced by the *x* specifier for `strftime`.  
  
```  
virtual iter_type do_get_date(iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    tm* _Pt) const;
```  
  
### Parameters  
 ` first`  
 Input iterator addressing the beginning of the sequence to be converted.  
  
 ` last`  
 Input iterator addressing the end of the sequence to be converted.  
  
 `_Iosbase`  
 A format flag which when set indicates that the currency symbol is optional; otherwise, it is required.  
  
 `_State`  
 Sets the appropriate bitmask elements for the stream state according to whether the operations succeeded.  
  
 `_Pt`  
 A pointer to where the date information is to be stored.  
  
### Return Value  
 An input iterator addressing the first element beyond the input field.  
  
### Remarks  
 The virtual protected member function tries to match sequential elements beginning at first in the sequence [ ` first`, ` last`) until it has recognized a complete, nonempty date input field. If successful, it converts this field to its equivalent value as the components **tm::tm_mon**, **tm::tm_day**, and **tm::tm_year**, and stores the results in _ *Pt*-> **tm_mon**, \_ *Pt*-> **tm_day** and \_ *Pt*-> **tm_year**, respectively. It returns an iterator designating the first element beyond the date input field. Otherwise, the function sets `_Iosbase`**::failbit** in `_State`. It returns an iterator designating the first element beyond any prefix of a valid date input field. In either case, if the return value equals ` last`, the function sets `ios_base::eofbit` in `_State`.  
  
 The format for the date input field is locale dependent. For the default locale, the date input field has the form MMM DD, YYYY, where:  
  
-   MMM is matched by calling [get_monthname](#time_get__get_monthname), giving the month.  
  
-   DD is a sequence of decimal digits whose corresponding numeric value must be in the range [1, 31], giving the day of the month.  
  
-   YYYY is matched by calling [get_year](#time_get__get_year), giving the year.  
  
 The literal spaces and commas must match corresponding elements in the input sequence.  
  
### Example  
  See the example for [get_date](#time_get__get_date), which calls `do_get_date`.  
  
##  <a name="time_get__do_get_monthname"></a>  time_get::do_get_monthname  
 A protected virtual member function that is called to parse a string as the name of the month.  
  
```  
virtual iter_type do_get_monthname(iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    tm* _Pt) const;
```  
  
### Parameters  
 ` first`  
 Input iterator addressing the beginning of the sequence to be converted.  
  
 ` last`  
 Input iterator addressing the end of the sequence to be converted.  
  
 `_Iosbase`  
 Unused.  
  
 `_State`  
 An output parameter that sets the appropriate bitmask elements for the stream state according to whether the operations succeeded.  
  
 `_Pt`  
 A pointer to where the month information is to be stored.  
  
### Return Value  
 An input iterator addressing the first element beyond the input field.  
  
### Remarks  
 The virtual protected member function tries to match sequential elements beginning at first in the sequence [ ` first`, ` last`) until it has recognized a complete, nonempty month input field. If successful, it converts this field to its equivalent value as the component **tm::tm_mon**, and stores the result in _ *Pt*-> **tm_mon**. It returns an iterator designating the first element beyond the month input field. Otherwise, the function sets `ios_base::failbit` in \_ *State*. It returns an iterator designating the first element beyond any prefix of a valid month input field. In either case, if the return value equals ` last`, the function sets `ios_base::eofbit` in \_ *State*.  
  
 The month input field is a sequence that matches the longest of a set of locale-specific sequences, such as Jan, January, Feb, February, and so on. The converted value is the number of months since January.  
  
### Example  
  See the example for [get_monthname](#time_get__get_monthname), which calls `do_get_monthname`.  
  
##  <a name="time_get__do_get_time"></a>  time_get::do_get_time  
 A protected virtual member function that is called to parse a string as the date produced by the *X* specifier for `strftime`.  
  
```  
virtual iter_type do_get_time(iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    tm* _Pt) const;
```  
  
### Parameters  
 ` first`  
 Input iterator addressing the beginning of the sequence to be converted.  
  
 ` last`  
 Input iterator addressing the end of the sequence to be converted.  
  
 `_Iosbase`  
 Unused.  
  
 `_State`  
 Sets the appropriate bitmask elements for the stream state according to whether the operations succeeded.  
  
 `_Pt`  
 A pointer to where the date information is to be stored.  
  
### Return Value  
 An input iterator addressing the first element beyond the input field.  
  
### Remarks  
 The virtual protected member function tries to match sequential elements beginning at first in the sequence [ ` first`, ` last`) until it has recognized a complete, nonempty time input field. If successful, it converts this field to its equivalent value as the components **tm::tm_hour**, **tm::tm_min**, and **tm::tm_sec**, and stores the results in _ *Pt*-> **tm_hour**, \_ *Pt*-> **tm_min**, and \_ *Pt*-> **tm_sec**, respectively. It returns an iterator designating the first element beyond the time input field. Otherwise, the function sets `ios_base::failbit` in \_ *State*. It returns an iterator designating the first element beyond any prefix of a valid time input field. In either case, if the return value equals ` last`, the function sets `ios_base::eofbit` in \_ *State*.  
  
 In this implementation, the time input field has the form HH:MM:SS, where:  
  
-   HH is a sequence of decimal digits whose corresponding numeric value must be in the range [0, 24), giving the hour of the day.  
  
-   MM is a sequence of decimal digits whose corresponding numeric value must be in the range [0, 60), giving the minutes past the hour.  
  
-   SS is a sequence of decimal digits whose corresponding numeric value must be in the range [0, 60), giving the seconds past the minute.  
  
 The literal colons must match corresponding elements in the input sequence.  
  
### Example  
  See the example for [get_time](#time_get__get_time), which calls `do_get_time`.  
  
##  <a name="time_get__do_get_weekday"></a>  time_get::do_get_weekday  
 A protected virtual member function that is called to parse a string as the name of the day of the week.  
  
```  
virtual iter_type do_get_weekday(iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    tm* _Pt) const;
```  
  
### Parameters  
 ` first`  
 Input iterator addressing the beginning of the sequence to be converted.  
  
 ` last`  
 Input iterator addressing the end of the sequence to be converted.  
  
 `_Iosbase`  
 A format flag which when set indicates that the currency symbol is optional; otherwise, it is required.  
  
 `_State`  
 Sets the appropriate bitmask elements for the stream state according to whether the operations succeeded.  
  
 `_Pt`  
 A pointer to where the weekday information is to be stored.  
  
### Return Value  
 An input iterator addressing the first element beyond the input field.  
  
### Remarks  
 The virtual protected member function tries to match sequential elements beginning at ` first` in the sequence [ ` first`, ` last`) until it has recognized a complete, nonempty weekday input field. If successful, it converts this field to its equivalent value as the component **tm::tm_wday**, and stores the result in _ *Pt*-> **tm_wday**. It returns an iterator designating the first element beyond the weekday input field. Otherwise, the function sets `ios_base::failbit` in \_ *State*. It returns an iterator designating the first element beyond any prefix of a valid weekday input field. In either case, if the return value equals ` last`, the function sets `ios_base::eofbit` in \_ *State*.  
  
 The weekday input field is a sequence that matches the longest of a set of locale-specific sequences, such as Sun, Sunday, Mon, Monday, and so on. The converted value is the number of days since Sunday.  
  
### Example  
  See the example for [get_weekday](#time_get__get_weekday), which calls `do_get_weekday`.  
  
##  <a name="time_get__do_get_year"></a>  time_get::do_get_year  
 A protected virtual member function that is called to parses a string as the name of the year.  
  
```  
virtual iter_type do_get_year(iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    tm* _Pt) const;
```  
  
### Parameters  
 ` first`  
 Input iterator addressing the beginning of the sequence to be converted.  
  
 ` last`  
 Input iterator addressing the end of the sequence to be converted.  
  
 `_Iosbase`  
 A format flag which when set indicates that the currency symbol is optional; otherwise, it is required.  
  
 `_State`  
 Sets the appropriate bitmask elements for the stream state according to whether the operations succeeded.  
  
 `_Pt`  
 A pointer to where the year information is to be stored.  
  
### Return Value  
 An input iterator addressing the first element beyond the input field.  
  
### Remarks  
 The virtual protected member function tries to match sequential elements beginning at ` first` in the sequence [ ` first`, ` last`) until it has recognized a complete, nonempty year input field. If successful, it converts this field to its equivalent value as the component **tm::tm_year**, and stores the result in _ *Pt*-> **tm_year**. It returns an iterator designating the first element beyond the year input field. Otherwise, the function sets `ios_base::failbit` in \_ *State*. It returns an iterator designating the first element beyond any prefix of a valid year input field. In either case, if the return value equals ` last`, the function sets `ios_base::eofbit` in \_ *State*.  
  
 The year input field is a sequence of decimal digits whose corresponding numeric value must be in the range [1900, 2036). The stored value is this value minus 1900. In this implementation, values in the range [69, 136) represent the range of years [1969, 2036). Values in the range [0, 69) are also permissible, but may represent either the range of years [1900, 1969) or [2000, 2069), depending on the specific translation environment.  
  
### Example  
  See the example for [get_year](#time_get__get_year), which calls `do_get_year`.  
  
##  <a name="time_get__get"></a>  time_get::get  
 Reads from a source of character data and converts that data to a time that is stored in a time struct. The first function accepts one conversion specifier and modifier, the second accepts several.  
  
```  
iter_type get(
    iter_type first,   
    iter_type last,  
    ios_base& _Iosbase,   
    ios_base::iostate& _State,   
    tm* _Pt,  
    char _Fmt,   
    char _Mod) const;

 
iter_type get(
    iter_type first,   
    iter_type last,  
    ios_base& _Iosbase,   
    ios_base::iostate& _State,   
    tm* _Pt,  
    char_type* _Fmt_first, 
    char_type* _Fmt_last) const;
```  
  
### Parameters  
 ` first`  
 Input iterator that indicates where the sequence to be converted starts.  
  
 ` last`  
 Input iterator that indicates the end of the sequence to be converted.  
  
 `_Iosbase`  
 The stream.  
  
 `_State`  
 The appropriate bitmask elements are set for the stream state to indicate errors.  
  
 `_Pt`  
 Pointer to the time structure where the time is to be stored.  
  
 `_Fmt`  
 A conversion specifier character.  
  
 `_Mod`  
 An optional modifier character.  
  
 `_Fmt_first`  
 Points to where the format directives start.  
  
 `_Fmt_last`  
 Points to the end of the format directives.  
  
### Return Value  
 Returns an iterator to the first character after the data that was used to assign the time struct *_Pt.  
  
### Remarks  
 The first member function returns `do_get` `(`` first``,` ` last``,` `_Iosbase``,` `_State``,` `_Pt``,` `_Fmt``,` `_Mod``)`.  
  
 The second member function calls `do_get` under the control of the format delimited by `[``_Fmt_first``,``_Fmt_last``)`. It treats the format as a sequence of fields, each of which determines the conversion of zero or more input elements delimited by `[first, last)`. It returns an iterator designating the first unconverted element. There are three kinds of fields:  
  
 A per cent (%) in the format, followed by an optional modifier `mod` in the set [EOQ#], followed by a conversion specifier `fmt`, replaces `first` with the value returned by `do_get` `(`` first``,` ` last``,` `_Iosbase``,` `_State``,` `_Pt``,` `_Fmt``,` `_Mod``)`. A conversion failure sets `ios_base::failbit` in `state` and returns.  
  
 A whitespace element in the format skips past zero or more input whitespace elements.  
  
 Any other element in the format must match the next input element, which is skipped. A match failure sets `ios_base::failbit` in `state` and returns.  
  
##  <a name="time_get__get_date"></a>  time_get::get_date  
 Parses a string as the date produced by the *x* specifier for `strftime`.  
  
```  
iter_type get_date(iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    tm* _Pt) const;
```  
  
### Parameters  
 ` first`  
 Input iterator addressing the beginning of the sequence to be converted.  
  
 ` last`  
 Input iterator addressing the end of the sequence to be converted.  
  
 `_Iosbase`  
 A format flag which when set indicates that the currency symbol is optional; otherwise, it is required.  
  
 `_State`  
 Sets the appropriate bitmask elements for the stream state according to whether the operations succeeded.  
  
 `_Pt`  
 A pointer to where the date information is to be stored.  
  
### Return Value  
 An input iterator addressing the first element beyond the input field.  
  
### Remarks  
 The member function returns [do_get_date](#time_get__do_get_date)( ` first`, ` last`, `_Iosbase`, `_State`, `_Pt`).  
  
 Note that months are counted from 0 to 11.  
  
### Example  
  
```cpp  
// time_get_get_date.cpp  
// compile with: /EHsc  
#include <locale>  
#include <iostream>  
#include <sstream>  
#include <time.h>  
using namespace std;  
int main( )  
{  
   locale loc;  
   basic_stringstream< char > pszGetF, pszPutF, pszGetI, pszPutI;  
   ios_base::iostate st = 0;  
   struct tm t;  
   memset(&t, 0, sizeof(struct tm));  
  
   pszGetF << "July 4, 2000";  
   pszGetF.imbue( loc );  
   basic_istream<char>::_Iter i = use_facet <time_get<char> >  
   (loc).get_date(basic_istream<char>::_Iter(pszGetF.rdbuf( ) ),  
            basic_istream<char>::_Iter(0), pszGetF, st, &t);  
  
   if ( st & ios_base::failbit )  
      cout << "time_get("<< pszGetF.rdbuf( )->str( )<< ") FAILED on char: " << *i << endl;  
   else  
  
      cout << "time_get("<< pszGetF.rdbuf( )->str( )<< ") ="  
      << "\ntm_sec: " << t.tm_sec  
      << "\ntm_min: " << t.tm_min  
      << "\ntm_hour: " << t.tm_hour  
      << "\ntm_mday: " << t.tm_mday  
      << "\ntm_mon: " << t.tm_mon  
      << "\ntm_year: " << t.tm_year  
      << "\ntm_wday: " << t.tm_wday  
      << "\ntm_yday: " << t.tm_yday  
      << "\ntm_isdst: " << t.tm_isdst  
      << endl;  
}  
```  
  
```Output  
time_get(July 4, 2000) =  
tm_sec: 0  
tm_min: 0  
tm_hour: 0  
tm_mday: 4  
tm_mon: 6  
tm_year: 100  
tm_wday: 0  
tm_yday: 0  
tm_isdst: 0  
```  
  
##  <a name="time_get__get_monthname"></a>  time_get::get_monthname  
 Parses a string as the name of the month.  
  
```  
iter_type get_monthname(iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    tm* _Pt) const;
```  
  
### Parameters  
 ` first`  
 Input iterator addressing the beginning of the sequence to be converted.  
  
 ` last`  
 Input iterator addressing the end of the sequence to be converted.  
  
 `_Iosbase`  
 Unused.  
  
 `_State`  
 An output parameter that sets the appropriate bitmask elements for the stream state according to whether the operations succeeded.  
  
 `_Pt`  
 A pointer to where the month information is to be stored.  
  
### Return Value  
 An input iterator addressing the first element beyond the input field.  
  
### Remarks  
 The member function returns [do_get_monthname](#time_get__do_get_monthname)( ` first`, ` last`, `_Iosbase`, `_State`, `_Pt`).  
  
### Example  
  
```cpp  
// time_get_get_monthname.cpp  
// compile with: /EHsc  
#include <locale>  
#include <iostream>  
#include <sstream>  
#include <time.h>  
using namespace std;  
int main( )  
{  
   locale loc ( "French" );  
   basic_stringstream<char> pszGetF, pszPutF, pszGetI, pszPutI;  
   ios_base::iostate st = 0;  
   struct tm t;  
   memset( &t, 0, sizeof( struct tm ) );  
  
   pszGetF << "juillet";  
   pszGetF.imbue( loc );  
   basic_istream<char>::_Iter i = use_facet <time_get <char> >  
   (loc).get_monthname(basic_istream<char>::_Iter(pszGetF.rdbuf( )),  
              basic_istream<char>::_Iter(0), pszGetF, st, &t);  
  
   if (st & ios_base::failbit)  
      cout << "time_get("<< pszGetF.rdbuf( )->str( )<< ") FAILED on char: " << *i << endl;  
   else  
  
      cout << "time_get("<< pszGetF.rdbuf( )->str( )<< ") ="  
      << "\ntm_sec: " << t.tm_sec  
      << "\ntm_min: " << t.tm_min  
      << "\ntm_hour: " << t.tm_hour  
      << "\ntm_mday: " << t.tm_mday  
      << "\ntm_mon: " << t.tm_mon  
      << "\ntm_year: " << t.tm_year  
      << "\ntm_wday: " << t.tm_wday  
      << "\ntm_yday: " << t.tm_yday  
      << "\ntm_isdst: " << t.tm_isdst  
      << endl;  
}  
```  
  
```Output  
time_get(juillet) =  
tm_sec: 0  
tm_min: 0  
tm_hour: 0  
tm_mday: 0  
tm_mon: 6  
tm_year: 0  
tm_wday: 0  
tm_yday: 0  
tm_isdst: 0  
```  
  
##  <a name="time_get__get_time"></a>  time_get::get_time  
 Parses a string as the date produced by the *X* specifier for `strftime`.  
  
```  
iter_type get_time(iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    tm* _Pt) const;
```  
  
### Parameters  
 ` first`  
 Input iterator addressing the beginning of the sequence to be converted.  
  
 ` last`  
 Input iterator addressing the end of the sequence to be converted.  
  
 `_Iosbase`  
 Unused.  
  
 `_State`  
 Sets the appropriate bitmask elements for the stream state according to whether the operations succeeded.  
  
 `_Pt`  
 A pointer to where the date information is to be stored.  
  
### Return Value  
 An input iterator addressing the first element beyond the input field.  
  
### Remarks  
 The member function returns [do_get_time](#time_get__do_get_time)( ` first`, ` last`, `_Iosbase`, `_State`, `_Pt`).  
  
### Example  
  
```cpp  
// time_get_get_time.cpp  
// compile with: /EHsc  
#include <locale>  
#include <iostream>  
#include <sstream>  
#include <time.h>  
using namespace std;  
int main( )  
{  
   locale loc;  
   basic_stringstream<char> pszGetF, pszPutF, pszGetI, pszPutI;  
   ios_base::iostate st = 0;  
   struct tm t;  
   memset( &t, 0, sizeof( struct tm ) );  
  
   pszGetF << "11:13:20";  
   pszGetF.imbue( loc );  
   basic_istream<char>::_Iter i = use_facet   
      <time_get <char> >  
      (loc).get_time(basic_istream<char>::_Iter(pszGetF.rdbuf( )),  
               basic_istream<char>::_Iter(0), pszGetF, st, &t);  
  
   if (st & ios_base::failbit)  
      cout << "time_get::get_time("<< pszGetF.rdbuf( )->str( )<< ") FAILED on char: " << *i << endl;  
   else  
  
      cout << "time_get::get_time("<< pszGetF.rdbuf( )->str( )<< ") ="  
      << "\ntm_sec: " << t.tm_sec  
      << "\ntm_min: " << t.tm_min  
      << "\ntm_hour: " << t.tm_hour  
      << endl;  
}  
```  
  
```Output  
time_get::get_time(11:13:20) =  
tm_sec: 20  
tm_min: 13  
tm_hour: 11  
```  
  
##  <a name="time_get__get_weekday"></a>  time_get::get_weekday  
 Parses a string as the name of the day of the week.  
  
```  
iter_type get_weekday(iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    tm* _Pt) const;
```  
  
### Parameters  
 ` first`  
 Input iterator addressing the beginning of the sequence to be converted.  
  
 ` last`  
 Input iterator addressing the end of the sequence to be converted.  
  
 `_Iosbase`  
 A format flag which when set indicates that the currency symbol is optional; otherwise, it is required.  
  
 `_State`  
 Sets the appropriate bitmask elements for the stream state according to whether the operations succeeded.  
  
 `_Pt`  
 A pointer to where the weekday information is to be stored.  
  
### Return Value  
 An input iterator addressing the first element beyond the input field.  
  
### Remarks  
 The member function returns [do_get_weekday](#time_get__do_get_weekday)( ` first`, ` last`, `_Iosbase`, `_State`, `_Pt`).  
  
### Example  
  
```cpp  
// time_get_get_weekday.cpp  
// compile with: /EHsc  
#include <locale>  
#include <iostream>  
#include <sstream>  
#include <time.h>  
using namespace std;  
int main( )  
{  
   locale loc ( "French" );  
   basic_stringstream< char > pszGetF, pszPutF, pszGetI, pszPutI;  
   ios_base::iostate st = 0;  
   struct tm t;  
   memset( &t, 0, sizeof( struct tm ) );  
  
   pszGetF << "mercredi";  
   pszGetF.imbue(loc);  
   basic_istream<char>::_Iter i = use_facet   
      <time_get<char> >  
      (loc).get_weekday(basic_istream<char>::_Iter(pszGetF.rdbuf( )),     
               basic_istream<char>::_Iter(0), pszGetF, st, &t);  
  
   if (st & ios_base::failbit)  
      cout << "time_get::get_time("<< pszGetF.rdbuf( )->str( )<< ") FAILED on char: " << *i << endl;  
   else  
  
      cout << "time_get::get_time("<< pszGetF.rdbuf( )->str( )<< ") ="  
      << "\ntm_wday: " << t.tm_wday  
      << endl;  
}  
```  
  
```Output  
time_get::get_time(mercredi) =  
tm_wday: 3  
```  
  
##  <a name="time_get__get_year"></a>  time_get::get_year  
 Parses a string as the name of the year.  
  
```  
iter_type get_year(iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    tm* _Pt) const;
```  
  
### Parameters  
 ` first`  
 Input iterator addressing the beginning of the sequence to be converted.  
  
 ` last`  
 Input iterator addressing the end of the sequence to be converted.  
  
 `_Iosbase`  
 A format flag which when set indicates that the currency symbol is optional; otherwise, it is required.  
  
 `_State`  
 Sets the appropriate bitmask elements for the stream state according to whether the operations succeeded.  
  
 `_Pt`  
 A pointer to where the year information is to be stored.  
  
### Return Value  
 An input iterator addressing the first element beyond the input field.  
  
### Remarks  
 The member function returns [do_get_year](#time_get__do_get_year)( ` first`, ` last`, `_Iosbase`, `_State`, `_Pt`).  
  
### Example  
  
```cpp  
// time_get_get_year.cpp  
// compile with: /EHsc  
#include <locale>  
#include <iostream>  
#include <sstream>  
#include <time.h>  
using namespace std;  
int main( )  
{  
   locale loc;  
   basic_stringstream<char> pszGetF, pszPutF, pszGetI, pszPutI;  
   ios_base::iostate st = 0;  
   struct tm t;  
   memset( &t, 0, sizeof( struct tm ) );  
  
   pszGetF << "1928";  
  
   pszGetF.imbue( loc );  
   basic_istream<char>::_Iter i = use_facet   
      <time_get<char> >  
      (loc).get_year(basic_istream<char>::_Iter(pszGetF.rdbuf( )),     
               basic_istream<char>::_Iter(0), pszGetF, st, &t);  
  
   if (st & ios_base::failbit)  
      cout << "time_get::get_year("<< pszGetF.rdbuf( )->str( )<< ") FAILED on char: " << *i << endl;  
   else  
  
      cout << "time_get::get_year("<< pszGetF.rdbuf( )->str( )<< ") ="  
      << "\ntm_year: " << t.tm_year  
      << endl;  
}  
```  
  
```Output  
time_get::get_year(1928) =  
tm_year: 28  
```  
  
##  <a name="time_get__iter_type"></a>  time_get::iter_type  
 A type that describes an input iterator.  
  
```  
typedef InputIterator iter_type;  
```  
  
### Remarks  
 The type is a synonym for the template parameter **InputIterator**.  
  
##  <a name="time_get__time_get"></a>  time_get::time_get  
 The constructor for objects of type `time_get`.  
  
```  
explicit time_get(size_t _Refs = 0);
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
 [time_base Class](../standard-library/time-base-class.md)   
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)

