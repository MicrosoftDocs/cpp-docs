---
title: "basic_regex Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std::tr1::basic_regex"
  - "basic_regex"
  - "std.tr1.basic_regex"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "basic_regex class [TR1]"
ms.assetid: 8a18c6b4-f22a-4cfd-bc16-b4267867ebc3
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
# basic_regex Class
Wraps a regular expression.  
  
## Syntax  
  
```  
class basic_regex {  
   public:  
   basic_regex();
   explicit basic_regex(const Elem *ptr,  
   flag_type flags = ECMAScript);
   basic_regex(const Elem *ptr, size_type len,  
   flag_type flags = ECMAScript);
   basic_regex(const basic_regex& right);
   template <class STtraits, class STalloc>  
   explicit basic_regex(const basic_string<Elem, STtraits, STalloc>& str,  
   flag_type flags = ECMAScript);
   template <class InIt>  
   explicit basic_regex(InIt first, InIt last,  
   flag_type flags = ECMAScript);
   basic_regex& operator=(const basic_regex& right);
   basic_regex& operator=(const Elem *ptr);
   template <class STtraits, class STalloc>  
   basic_regex& operator=(const basic_string<Elem, STtraits, STalloc>& str);
   basic_regex& assign(const basic_regex& right);
   basic_regex& assign(const Elem *ptr,  
   flag_type flags = ECMAScript);
   basic_regex& assign(const Elem *ptr, size_type len,  
   flag_type flags = ECMAScript);
   template <class STtraits, class STalloc>  
   basic_regex& assign(const basic_string<Elem, STtraits, STalloc>& str,  
   flag_type flags = ECMAScript);
   template <class InIt>  
   basic_regex& assign(InIt first, InIt last,  
   flag_type flags = ECMAScript);
   locale_type imbue(locale_type loc);
   locale_type getloc() const;
   void swap(basic_regex& other) throw();
   unsigned mark_count() const;
   flag_type flags() const;
   typedef Elem value_type;  
   typedef regex_constants::syntax_option_type flag_type;  
   typedef typename RXtraits::locale_type locale_type;  
   static const flag_type icase = regex_constants::icase;  
   static const flag_type nosubs = regex_constants::nosubs;  
   static const flag_type optimize = regex_constants::optimize;  
   static const flag_type collate = regex_constants::collate;  
   static const flag_type ECMAScript = regex_constants::ECMAScript;  
   static const flag_type basic = regex_constants::basic;  
   static const flag_type extended = regex_constants::extended;  
   static const flag_type awk = regex_constants::awk;  
   static const flag_type grep = regex_constants::grep;  
   static const flag_type egrep = regex_constants::egrep;  
   private:  
   RXtraits traits;    // exposition only  
   };  
   ```   
  
#### Parameters  
 `Elem`  
 The type of elements to match.  
  
 `RXtraits`  
 Traits class for elements.  
  
## Remarks  
 The template class describes an object that holds a regular expression. Objects of this template class can be passed to the template functions [regex_match Function](../standard-library/regex-functions.md#regex_match_function), [regex_search Function](../standard-library/regex-functions.md#regex_search_function), and [regex_replace Function](../standard-library/regex-functions.md#regex_replace_function), along with suitable text string arguments, to search for text that matches the regular expression. There are two specializations of this template class, with the type definitions [regex](../standard-library/regex-typedefs.md#regex_typedef) for elements of type `char`, and [wregex](../standard-library/regex-typedefs.md#wregex_typedef) for elements of type `wchar_t`.  
  
 The template argument `RXtraits` describes various important properties of the syntax of the regular expressions that the template class supports. A class that specifies these regular expression traits must have the same external interface as an object of template class [regex_traits Class](../standard-library/regex-traits-class.md).  
  
 Some functions take an operand sequence that defines a regular expression. You can specify such an operand sequence several ways:  
  
 `ptr` -- a null-terminated sequence (such as a C string, for `Elem` of type `char`) beginning at `ptr` (which must not be a null pointer), where the terminating element is the value `value_type()` and is not part of the operand sequence  
  
 `ptr`, `count` -- a sequence of `count` elements beginning at `ptr` (which must not be a null pointer)  
  
 `str` -- the sequence specified by the `basic_string` object `str`  
  
 `first`, `last` -- a sequence of elements delimited by the iterators `first` and `last`, in the range `[first, last)`  
  
 `right` -- the `basic_regex` object `right`  
  
 These member functions also take an argument `flags` that specifies various options for the interpretation of the regular expression in addition to those described by the `RXtraits` type.  
  
## Requirements  
 **Header:** \<regex>  
  
 **Namespace:** std  
  
##  <a name="basic_regex__assign"></a>  basic_regex::assign  
 Assigns a value to the regular expressoin object.  
  
```  
basic_regex& assign(
    const basic_regex& right);

basic_regex& assign(
    const Elem* ptr,  
    flag_type flags = ECMAScript);

basic_regex& assign(
    const Elem* ptr,   
    size_type len,  
    flag_type flags = ECMAScript);

basic_regex& assign(
    initializer_list<_Elem> IList,  
    flag_type flags = regex_constants::ECMAScript);

template <class STtraits, class STalloc>  
basic_regex& assign(
    const basic_string<Elem, STtraits, STalloc>& str,  
    flag_type flags = ECMAScript);

template <class InIt>  
basic_regex& assign(
    InIt first, InIt last,  
    flag_type flags = ECMAScript);
```  
  
### Parameters  
 `STtraits`  
 Traits class for a string source.  
  
 `STalloc`  
 Allocator class for a string source.  
  
 `InIt`  
 Input iterator type for a range source.  
  
 `right`  
 Regex source to copy.  
  
 `ptr`  
 Pointer to beginning of sequence to copy.  
  
 `flags`  
 Syntax option flags to add while copying.  
  
 `len/TD>`  
 Length of sequence to copy.  
  
 `str`  
 String to copy.  
  
 `first`  
 Beginning of sequence to copy.  
  
 `last`  
 End of sequence to copy.  
  
 `IList`  
 The initializer_list to copy.  
  
### Remarks  
 The member functions each replace the regular expression held by `*this` with the regular expression described by the operand sequence, then return `*this`.  
  
### Example  
  
```cpp  
// std_tr1__regex__basic_regex_assign.cpp   
// compile with: /EHsc   
#include <regex>   
#include <iostream>   
  
using namespace std;  
  
int main()  
{  
    regex::value_type elem = 'x';  
    regex::flag_type flag = regex::grep;  
  
    elem = elem;  // to quiet "unused" warnings   
    flag = flag;  
  
    // constructors   
    regex rx0;  
    cout << "match(\"abc\", \"\") == " << boolalpha  
        << regex_match("abc", rx0) << endl;  
  
    regex rx1("abcd", regex::ECMAScript);  
    cout << "match(\"abc\", \"abcd\") == " << boolalpha  
        << regex_match("abc", rx1) << endl;  
  
    regex rx2("abcd", 3);  
    cout << "match(\"abc\", \"abc\") == " << boolalpha  
        << regex_match("abc", rx2) << endl;  
  
    regex rx3(rx2);  
    cout << "match(\"abc\", \"abc\") == " << boolalpha  
        << regex_match("abc", rx3) << endl;  
  
    string str("abcd");  
    regex rx4(str);  
    cout << "match(string(\"abcd\"), \"abc\") == " << boolalpha  
        << regex_match("abc", rx4) << endl;  
  
    regex rx5(str.begin(), str.end() - 1);  
    cout << "match(string(\"abc\"), \"abc\") == " << boolalpha  
        << regex_match("abc", rx5) << endl;  
    cout << endl;  
  
    // assignments   
    rx0 = "abc";  
    rx0 = rx1;  
    rx0 = str;  
  
    rx0.assign("abcd", regex::ECMAScript);  
    rx0.assign("abcd", 3);  
    rx0.assign(rx1);  
    rx0.assign(str);  
    rx0.assign(str.begin(), str.end() - 1);  
  
    rx0.swap(rx1);  
  
    // mark_count   
    cout << "\"abc\" mark_count == "  
        << regex("abc").mark_count() << endl;  
    cout << "\"(abc)\" mark_count == "  
        << regex("(abc)").mark_count() << endl;  
  
    // locales   
    regex::locale_type loc = rx0.imbue(locale());  
    cout << "getloc == imbued == " << boolalpha  
        << (loc == rx0.getloc()) << endl;  
  
    // initializer_list  
    regex rx6({ 'a', 'b', 'c' }, regex::ECMAScript);  
    cout << "match(\"abc\") == " << boolalpha  
        << regex_match("abc", rx6);  
    cout << endl;   
}  
  
```  
  
```Output  
match("abc", "") == falsematch("abc", "abcd") == falsematch("abc", "abc") == truematch("abc", "abc") == truematch(string("abcd"), "abc") == falsematch(string("abc"), "abc") == true"abc" mark_count == 0"(abc)" mark_count == 1getloc == imbued == truematch("abc") == true  
```  
  
##  <a name="basic_regex__basic_regex"></a>  basic_regex::basic_regex  
 Construct the regular expression object.  
  
```  
basic_regex();

explicit basic_regex(
    const Elem* ptr,  
    flag_type flags);

explicit basic_regex(
    const Elem* ptr,   
    size_type len,  
    flag_type flags);

basic_regex(
    const basic_regex& right);

basic_regex(
    initializer_list<Type> IList,  
    flag_type flags);

template <class STtraits, class STalloc>  
explicit basic_regex(
    const basic_string<Elem, STtraits, STalloc>& str,  
    flag_type flags);

template <class InIt>  
explicit basic_regex(
    InIt first,   
    InIt last,  
    flag_type flags);
```  
  
### Parameters  
 `STtraits`  
 Traits class for a string source.  
  
 `STalloc`  
 Allocator class for a string source.  
  
 `InIt`  
 Input iterator type for a range source.  
  
 `right`  
 Regex source to copy.  
  
 `ptr`  
 Pointer to beginning of sequence to copy.  
  
 `flags`  
 Syntax option flags to add while copying.  
  
 `len/TD>`  
 Length of sequence to copy.  
  
 `str`  
 String to copy.  
  
 `first`  
 Beginning of sequence to copy.  
  
 `last`  
 End of sequence to copy.  
  
 `IList`  
 The initializer_list to copy.  
  
### Remarks  
 All constructors store a default-constructed object of type `RXtraits`.  
  
 The first constructor constructs an empty `basic_regex` object. The other constructors construct a `basic_regex` object that holds the regular expression described by the operand sequence.  
  
 An empty `basic_regex` object does not match any character sequence when passed to [regex_match Function](../standard-library/regex-functions.md#regex_match_function), [regex_search Function](../standard-library/regex-functions.md#regex_search_function), or [regex_replace Function](../standard-library/regex-functions.md#regex_replace_function).  
  
### Example  
  
```cpp  
// std_tr1__regex__basic_regex_construct.cpp   
// compile with: /EHsc   
#include <regex>   
#include <iostream>   
  
using namespace std;  
  
int main()  
{  
    regex::value_type elem = 'x';  
    regex::flag_type flag = regex::grep;  
  
    elem = elem;  // to quiet "unused" warnings   
    flag = flag;  
  
    // constructors   
    regex rx0;  
    cout << "match(\"abc\", \"\") == " << boolalpha  
        << regex_match("abc", rx0) << endl;  
  
    regex rx1("abcd", regex::ECMAScript);  
    cout << "match(\"abc\", \"abcd\") == " << boolalpha  
        << regex_match("abc", rx1) << endl;  
  
    regex rx2("abcd", 3);  
    cout << "match(\"abc\", \"abc\") == " << boolalpha  
        << regex_match("abc", rx2) << endl;  
  
    regex rx3(rx2);  
    cout << "match(\"abc\", \"abc\") == " << boolalpha  
        << regex_match("abc", rx3) << endl;  
  
    string str("abcd");  
    regex rx4(str);  
    cout << "match(string(\"abcd\"), \"abc\") == " << boolalpha  
        << regex_match("abc", rx4) << endl;  
  
    regex rx5(str.begin(), str.end() - 1);  
    cout << "match(string(\"abc\"), \"abc\") == " << boolalpha  
        << regex_match("abc", rx5) << endl;  
    cout << endl;  
  
    // assignments   
    rx0 = "abc";  
    rx0 = rx1;  
    rx0 = str;  
  
    rx0.assign("abcd", regex::ECMAScript);  
    rx0.assign("abcd", 3);  
    rx0.assign(rx1);  
    rx0.assign(str);  
    rx0.assign(str.begin(), str.end() - 1);  
  
    rx0.swap(rx1);  
  
    // mark_count   
    cout << "\"abc\" mark_count == "  
        << regex("abc").mark_count() << endl;  
    cout << "\"(abc)\" mark_count == "  
        << regex("(abc)").mark_count() << endl;  
  
    // locales   
    regex::locale_type loc = rx0.imbue(locale());  
    cout << "getloc == imbued == " << boolalpha  
        << (loc == rx0.getloc()) << endl;  
  
    // initializer_list  
    regex rx6{ { 'a', 'b', 'c' } };  
    cout << "match(\"abc\", \"abc\") == " << boolalpha  
        << regex_match("abc", rx6);  
    cout << endl;  
}  
  
```  
  
```Output  
match("abc", "") == falsematch("abc", "abcd") == falsematch("abc", "abc") == truematch("abc", "abc") == truematch(string("abcd"), "abc") == falsematch(string("abc"), "abc") == true"abc" mark_count == 0"(abc)" mark_count == 1getloc == imbued == truematch("abc", "abc") == true  
```  
  
##  <a name="basic_regex__flag_type"></a>  basic_regex::flag_type  
 The type of syntax option flags.  
  
```  
typedef regex_constants::syntax_option_type flag_type;  
```  
  
### Remarks  
 The type is a synonym for [regex_constants::syntax_option_type](../standard-library/regex-constants-class.md#regex_constants__syntax_option_type).  
  
### Example  
  
```cpp  
// std_tr1__regex__basic_regex_flag_type.cpp   
// compile with: /EHsc   
#include <regex>   
#include <iostream>   
  
int main()   
    {   
    std::regex::value_type elem = 'x';   
    std::regex::flag_type flag = std::regex::grep;   
  
    elem = elem;  // to quiet "unused" warnings   
    flag = flag;   
  
// constructors   
    std::regex rx0;   
    std::cout << "match(\"abc\", \"\") == " << std::boolalpha   
        << regex_match("abc", rx0) << std::endl;   
  
    std::regex rx1("abcd", std::regex::ECMAScript);   
    std::cout << "match(\"abc\", \"abcd\") == " << std::boolalpha   
        << regex_match("abc", rx1) << std::endl;   
  
    std::regex rx2("abcd", 3);   
    std::cout << "match(\"abc\", \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx2) << std::endl;   
  
    std::regex rx3(rx2);   
    std::cout << "match(\"abc\", \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx3) << std::endl;   
  
    std::string str("abcd");   
    std::regex rx4(str);   
    std::cout << "match(string(\"abcd\"), \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx4) << std::endl;   
  
    std::regex rx5(str.begin(), str.end() - 1);   
    std::cout << "match(string(\"abc\"), \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx5) << std::endl;   
    std::cout << std::endl;   
  
// assignments   
    rx0 = "abc";   
    rx0 = rx1;   
    rx0 = str;   
  
    rx0.assign("abcd", std::regex::ECMAScript);   
    rx0.assign("abcd", 3);   
    rx0.assign(rx1);   
    rx0.assign(str);   
    rx0.assign(str.begin(), str.end() - 1);   
  
    rx0.swap(rx1);   
  
// mark_count   
    std::cout << "\"abc\" mark_count == "   
        << std::regex("abc").mark_count() << std::endl;   
    std::cout << "\"(abc)\" mark_count == "   
        << std::regex("(abc)").mark_count() << std::endl;   
  
// locales   
    std::regex::locale_type loc = rx0.imbue(std::locale());   
    std::cout << "getloc == imbued == " << std::boolalpha   
        << (loc == rx0.getloc()) << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
match("abc", "") == false  
match("abc", "abcd") == false  
match("abc", "abc") == true  
match("abc", "abc") == true  
match(string("abcd"), "abc") == false  
match(string("abc"), "abc") == true  
  
"abc" mark_count == 0  
"(abc)" mark_count == 1  
getloc == imbued == true  
```  
  
##  <a name="basic_regex__flags"></a>  basic_regex::flags  
 Returns syntax option flags.  
  
```  
flag_type flags() const;
```  
  
### Remarks  
 The member function returns the value of the `flag_type` argument passed to the most recent call to one of the [basic_regex::assign](#basic_regex__assign) member functions or, if no such call has been made, the value passed to the constructor.  
  
### Example  
  
```cpp  
// std_tr1__regex__basic_regex_flags.cpp   
// compile with: /EHsc   
#include <regex>   
#include <iostream>   
  
int main()   
    {   
    std::regex::value_type elem = 'x';   
    std::regex::flag_type flag = std::regex::grep;   
  
    elem = elem;  // to quiet "unused" warnings   
    flag = flag;   
  
// constructors   
    std::regex rx0;   
    std::cout << "match(\"abc\", \"\") == " << std::boolalpha   
        << regex_match("abc", rx0) << std::endl;   
  
    std::regex rx1("abcd", std::regex::ECMAScript);   
    std::cout << "match(\"abc\", \"abcd\") == " << std::boolalpha   
        << regex_match("abc", rx1) << std::endl;   
  
    std::regex rx2("abcd", 3);   
    std::cout << "match(\"abc\", \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx2) << std::endl;   
  
    std::regex rx3(rx2);   
    std::cout << "match(\"abc\", \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx3) << std::endl;   
  
    std::string str("abcd");   
    std::regex rx4(str);   
    std::cout << "match(string(\"abcd\"), \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx4) << std::endl;   
  
    std::regex rx5(str.begin(), str.end() - 1);   
    std::cout << "match(string(\"abc\"), \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx5) << std::endl;   
    std::cout << std::endl;   
  
// assignments   
    rx0 = "abc";   
    rx0 = rx1;   
    rx0 = str;   
  
    rx0.assign("abcd", std::regex::ECMAScript);   
    rx0.assign("abcd", 3);   
    rx0.assign(rx1);   
    rx0.assign(str);   
    rx0.assign(str.begin(), str.end() - 1);   
  
    rx0.swap(rx1);   
  
// mark_count   
    std::cout << "\"abc\" mark_count == "   
        << std::regex("abc").mark_count() << std::endl;   
    std::cout << "\"(abc)\" mark_count == "   
        << std::regex("(abc)").mark_count() << std::endl;   
  
// locales   
    std::regex::locale_type loc = rx0.imbue(std::locale());   
    std::cout << "getloc == imbued == " << std::boolalpha   
        << (loc == rx0.getloc()) << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
match("abc", "") == false  
match("abc", "abcd") == false  
match("abc", "abc") == true  
match("abc", "abc") == true  
match(string("abcd"), "abc") == false  
match(string("abc"), "abc") == true  
  
"abc" mark_count == 0  
"(abc)" mark_count == 1  
getloc == imbued == true  
```  
  
##  <a name="basic_regex__getloc"></a>  basic_regex::getloc  
 Returns the stored locale object.  
  
```  
locale_type getloc() const;
```  
  
### Remarks  
 The member function returns `traits.`[regex_traits::getloc](../standard-library/regex-traits-class.md#regex_traits__getloc)`()`.  
  
### Example  
  
```cpp  
// std_tr1__regex__basic_regex_getloc.cpp   
// compile with: /EHsc   
#include <regex>   
#include <iostream>   
  
int main()   
    {   
    std::regex::value_type elem = 'x';   
    std::regex::flag_type flag = std::regex::grep;   
  
    elem = elem;  // to quiet "unused" warnings   
    flag = flag;   
  
// constructors   
    std::regex rx0;   
    std::cout << "match(\"abc\", \"\") == " << std::boolalpha   
        << regex_match("abc", rx0) << std::endl;   
  
    std::regex rx1("abcd", std::regex::ECMAScript);   
    std::cout << "match(\"abc\", \"abcd\") == " << std::boolalpha   
        << regex_match("abc", rx1) << std::endl;   
  
    std::regex rx2("abcd", 3);   
    std::cout << "match(\"abc\", \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx2) << std::endl;   
  
    std::regex rx3(rx2);   
    std::cout << "match(\"abc\", \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx3) << std::endl;   
  
    std::string str("abcd");   
    std::regex rx4(str);   
    std::cout << "match(string(\"abcd\"), \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx4) << std::endl;   
  
    std::regex rx5(str.begin(), str.end() - 1);   
    std::cout << "match(string(\"abc\"), \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx5) << std::endl;   
    std::cout << std::endl;   
  
// assignments   
    rx0 = "abc";   
    rx0 = rx1;   
    rx0 = str;   
  
    rx0.assign("abcd", std::regex::ECMAScript);   
    rx0.assign("abcd", 3);   
    rx0.assign(rx1);   
    rx0.assign(str);   
    rx0.assign(str.begin(), str.end() - 1);   
  
    rx0.swap(rx1);   
  
// mark_count   
    std::cout << "\"abc\" mark_count == "   
        << std::regex("abc").mark_count() << std::endl;   
    std::cout << "\"(abc)\" mark_count == "   
        << std::regex("(abc)").mark_count() << std::endl;   
  
// locales   
    std::regex::locale_type loc = rx0.imbue(std::locale());   
    std::cout << "getloc == imbued == " << std::boolalpha   
        << (loc == rx0.getloc()) << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
match("abc", "") == false  
match("abc", "abcd") == false  
match("abc", "abc") == true  
match("abc", "abc") == true  
match(string("abcd"), "abc") == false  
match(string("abc"), "abc") == true  
  
"abc" mark_count == 0  
"(abc)" mark_count == 1  
getloc == imbued == true  
```  
  
##  <a name="basic_regex__imbue"></a>  basic_regex::imbue  
 Alters the stored locale object.  
  
```  
locale_type imbue(locale_type loc);
```  
  
### Parameters  
 `loc`  
 The locale object to store.  
  
### Remarks  
 The member function empties `*this` and returns `traits.`[regex_traits::imbue](../standard-library/regex-traits-class.md#regex_traits__imbue)`(loc)`.  
  
### Example  
  
```cpp  
// std_tr1__regex__basic_regex_imbue.cpp   
// compile with: /EHsc   
#include <regex>   
#include <iostream>   
  
int main()   
    {   
    std::regex::value_type elem = 'x';   
    std::regex::flag_type flag = std::regex::grep;   
  
    elem = elem;  // to quiet "unused" warnings   
    flag = flag;   
  
// constructors   
    std::regex rx0;   
    std::cout << "match(\"abc\", \"\") == " << std::boolalpha   
        << regex_match("abc", rx0) << std::endl;   
  
    std::regex rx1("abcd", std::regex::ECMAScript);   
    std::cout << "match(\"abc\", \"abcd\") == " << std::boolalpha   
        << regex_match("abc", rx1) << std::endl;   
  
    std::regex rx2("abcd", 3);   
    std::cout << "match(\"abc\", \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx2) << std::endl;   
  
    std::regex rx3(rx2);   
    std::cout << "match(\"abc\", \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx3) << std::endl;   
  
    std::string str("abcd");   
    std::regex rx4(str);   
    std::cout << "match(string(\"abcd\"), \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx4) << std::endl;   
  
    std::regex rx5(str.begin(), str.end() - 1);   
    std::cout << "match(string(\"abc\"), \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx5) << std::endl;   
    std::cout << std::endl;   
  
// assignments   
    rx0 = "abc";   
    rx0 = rx1;   
    rx0 = str;   
  
    rx0.assign("abcd", std::regex::ECMAScript);   
    rx0.assign("abcd", 3);   
    rx0.assign(rx1);   
    rx0.assign(str);   
    rx0.assign(str.begin(), str.end() - 1);   
  
    rx0.swap(rx1);   
  
// mark_count   
    std::cout << "\"abc\" mark_count == "   
        << std::regex("abc").mark_count() << std::endl;   
    std::cout << "\"(abc)\" mark_count == "   
        << std::regex("(abc)").mark_count() << std::endl;   
  
// locales   
    std::regex::locale_type loc = rx0.imbue(std::locale());   
    std::cout << "getloc == imbued == " << std::boolalpha   
        << (loc == rx0.getloc()) << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
match("abc", "") == false  
match("abc", "abcd") == false  
match("abc", "abc") == true  
match("abc", "abc") == true  
match(string("abcd"), "abc") == false  
match(string("abc"), "abc") == true  
  
"abc" mark_count == 0  
"(abc)" mark_count == 1  
getloc == imbued == true  
```  
  
##  <a name="basic_regex__locale_type"></a>  basic_regex::locale_type  
 The type of the stored locale object.  
  
```  
typedef typename RXtraits::locale_type locale_type;  
```  
  
### Remarks  
 The type is a synonym for [regex_traits::locale_type](../standard-library/regex-traits-class.md#regex_traits__locale_type).  
  
### Example  
  
```cpp  
// std_tr1__regex__basic_regex_locale_type.cpp   
// compile with: /EHsc   
#include <regex>   
#include <iostream>   
  
int main()   
    {   
    std::regex::value_type elem = 'x';   
    std::regex::flag_type flag = std::regex::grep;   
  
    elem = elem;  // to quiet "unused" warnings   
    flag = flag;   
  
// constructors   
    std::regex rx0;   
    std::cout << "match(\"abc\", \"\") == " << std::boolalpha   
        << regex_match("abc", rx0) << std::endl;   
  
    std::regex rx1("abcd", std::regex::ECMAScript);   
    std::cout << "match(\"abc\", \"abcd\") == " << std::boolalpha   
        << regex_match("abc", rx1) << std::endl;   
  
    std::regex rx2("abcd", 3);   
    std::cout << "match(\"abc\", \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx2) << std::endl;   
  
    std::regex rx3(rx2);   
    std::cout << "match(\"abc\", \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx3) << std::endl;   
  
    std::string str("abcd");   
    std::regex rx4(str);   
    std::cout << "match(string(\"abcd\"), \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx4) << std::endl;   
  
    std::regex rx5(str.begin(), str.end() - 1);   
    std::cout << "match(string(\"abc\"), \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx5) << std::endl;   
    std::cout << std::endl;   
  
// assignments   
    rx0 = "abc";   
    rx0 = rx1;   
    rx0 = str;   
  
    rx0.assign("abcd", std::regex::ECMAScript);   
    rx0.assign("abcd", 3);   
    rx0.assign(rx1);   
    rx0.assign(str);   
    rx0.assign(str.begin(), str.end() - 1);   
  
    rx0.swap(rx1);   
  
// mark_count   
    std::cout << "\"abc\" mark_count == "   
        << std::regex("abc").mark_count() << std::endl;   
    std::cout << "\"(abc)\" mark_count == "   
        << std::regex("(abc)").mark_count() << std::endl;   
  
// locales   
    std::regex::locale_type loc = rx0.imbue(std::locale());   
    std::cout << "getloc == imbued == " << std::boolalpha   
        << (loc == rx0.getloc()) << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
match("abc", "") == false  
match("abc", "abcd") == false  
match("abc", "abc") == true  
match("abc", "abc") == true  
match(string("abcd"), "abc") == false  
match(string("abc"), "abc") == true  
  
"abc" mark_count == 0  
"(abc)" mark_count == 1  
getloc == imbued == true  
```  
  
##  <a name="basic_regex__mark_count"></a>  basic_regex::mark_count  
 Returns number of subexpressions matched.  
  
```  
unsigned mark_count() const;
```  
  
### Remarks  
 The member function returns the number of capture groups in the regular expression.  
  
### Example  
  
```cpp  
// std_tr1__regex__basic_regex_mark_count.cpp   
// compile with: /EHsc   
#include <regex>   
#include <iostream>   
  
int main()   
    {   
    std::regex::value_type elem = 'x';   
    std::regex::flag_type flag = std::regex::grep;   
  
    elem = elem;  // to quiet "unused" warnings   
    flag = flag;   
  
// constructors   
    std::regex rx0;   
    std::cout << "match(\"abc\", \"\") == " << std::boolalpha   
        << regex_match("abc", rx0) << std::endl;   
  
    std::regex rx1("abcd", std::regex::ECMAScript);   
    std::cout << "match(\"abc\", \"abcd\") == " << std::boolalpha   
        << regex_match("abc", rx1) << std::endl;   
  
    std::regex rx2("abcd", 3);   
    std::cout << "match(\"abc\", \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx2) << std::endl;   
  
    std::regex rx3(rx2);   
    std::cout << "match(\"abc\", \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx3) << std::endl;   
  
    std::string str("abcd");   
    std::regex rx4(str);   
    std::cout << "match(string(\"abcd\"), \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx4) << std::endl;   
  
    std::regex rx5(str.begin(), str.end() - 1);   
    std::cout << "match(string(\"abc\"), \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx5) << std::endl;   
    std::cout << std::endl;   
  
// assignments   
    rx0 = "abc";   
    rx0 = rx1;   
    rx0 = str;   
  
    rx0.assign("abcd", std::regex::ECMAScript);   
    rx0.assign("abcd", 3);   
    rx0.assign(rx1);   
    rx0.assign(str);   
    rx0.assign(str.begin(), str.end() - 1);   
  
    rx0.swap(rx1);   
  
// mark_count   
    std::cout << "\"abc\" mark_count == "   
        << std::regex("abc").mark_count() << std::endl;   
    std::cout << "\"(abc)\" mark_count == "   
        << std::regex("(abc)").mark_count() << std::endl;   
  
// locales   
    std::regex::locale_type loc = rx0.imbue(std::locale());   
    std::cout << "getloc == imbued == " << std::boolalpha   
        << (loc == rx0.getloc()) << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
match("abc", "") == false  
match("abc", "abcd") == false  
match("abc", "abc") == true  
match("abc", "abc") == true  
match(string("abcd"), "abc") == false  
match(string("abc"), "abc") == true  
  
"abc" mark_count == 0  
"(abc)" mark_count == 1  
getloc == imbued == true  
```  
  
##  <a name="basic_regex__operator_eq"></a>  basic_regex::operator=  
 Assigns a value to the regular expression object.  
  
```  
basic_regex& operator=(const basic_regex& right);

basic_regex& operator=(const Elem *str);

template <class STtraits, class STalloc>  
basic_regex& operator=(const basic_string<Elem, STtraits, STalloc>& str);
```  
  
### Parameters  
 `STtraits`  
 Traits class for a string source.  
  
 `STalloc`  
 Allocator class for a string source.  
  
 `right`  
 Regex source to copy.  
  
 `str`  
 String to copy.  
  
### Remarks  
 The operators each replace the regular expression held by `*this` with the regular expression described by the operand sequence, then return `*this`.  
  
### Example  
  
```cpp  
// std_tr1__regex__basic_regex_operator_as.cpp   
// compile with: /EHsc   
#include <regex>   
#include <iostream>   
  
int main()   
    {   
    std::regex::value_type elem = 'x';   
    std::regex::flag_type flag = std::regex::grep;   
  
    elem = elem;  // to quiet "unused" warnings   
    flag = flag;   
  
// constructors   
    std::regex rx0;   
    std::cout << "match(\"abc\", \"\") == " << std::boolalpha   
        << regex_match("abc", rx0) << std::endl;   
  
    std::regex rx1("abcd", std::regex::ECMAScript);   
    std::cout << "match(\"abc\", \"abcd\") == " << std::boolalpha   
        << regex_match("abc", rx1) << std::endl;   
  
    std::regex rx2("abcd", 3);   
    std::cout << "match(\"abc\", \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx2) << std::endl;   
  
    std::regex rx3(rx2);   
    std::cout << "match(\"abc\", \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx3) << std::endl;   
  
    std::string str("abcd");   
    std::regex rx4(str);   
    std::cout << "match(string(\"abcd\"), \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx4) << std::endl;   
  
    std::regex rx5(str.begin(), str.end() - 1);   
    std::cout << "match(string(\"abc\"), \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx5) << std::endl;   
    std::cout << std::endl;   
  
// assignments   
    rx0 = "abc";   
    rx0 = rx1;   
    rx0 = str;   
  
    rx0.assign("abcd", std::regex::ECMAScript);   
    rx0.assign("abcd", 3);   
    rx0.assign(rx1);   
    rx0.assign(str);   
    rx0.assign(str.begin(), str.end() - 1);   
  
    rx0.swap(rx1);   
  
// mark_count   
    std::cout << "\"abc\" mark_count == "   
        << std::regex("abc").mark_count() << std::endl;   
    std::cout << "\"(abc)\" mark_count == "   
        << std::regex("(abc)").mark_count() << std::endl;   
  
// locales   
    std::regex::locale_type loc = rx0.imbue(std::locale());   
    std::cout << "getloc == imbued == " << std::boolalpha   
        << (loc == rx0.getloc()) << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
match("abc", "") == false  
match("abc", "abcd") == false  
match("abc", "abc") == true  
match("abc", "abc") == true  
match(string("abcd"), "abc") == false  
match(string("abc"), "abc") == true  
  
"abc" mark_count == 0  
"(abc)" mark_count == 1  
getloc == imbued == true  
```  
  
##  <a name="basic_regex__swap"></a>  basic_regex::swap  
 Swaps two regular expression objects.  
  
```  
void swap(basic_regex& right) throw();
```  
  
### Parameters  
 `right`  
 The regular expression object to swap with.  
  
### Remarks  
 The member function swaps the regular expressions between `*this` and `right`. It does so in constant time and throws no exceptions.  
  
### Example  
  
```cpp  
// std_tr1__regex__basic_regex_swap.cpp   
// compile with: /EHsc   
#include <regex>   
#include <iostream>   
  
int main()   
    {   
    std::regex::value_type elem = 'x';   
    std::regex::flag_type flag = std::regex::grep;   
  
    elem = elem;  // to quiet "unused" warnings   
    flag = flag;   
  
// constructors   
    std::regex rx0;   
    std::cout << "match(\"abc\", \"\") == " << std::boolalpha   
        << regex_match("abc", rx0) << std::endl;   
  
    std::regex rx1("abcd", std::regex::ECMAScript);   
    std::cout << "match(\"abc\", \"abcd\") == " << std::boolalpha   
        << regex_match("abc", rx1) << std::endl;   
  
    std::regex rx2("abcd", 3);   
    std::cout << "match(\"abc\", \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx2) << std::endl;   
  
    std::regex rx3(rx2);   
    std::cout << "match(\"abc\", \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx3) << std::endl;   
  
    std::string str("abcd");   
    std::regex rx4(str);   
    std::cout << "match(string(\"abcd\"), \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx4) << std::endl;   
  
    std::regex rx5(str.begin(), str.end() - 1);   
    std::cout << "match(string(\"abc\"), \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx5) << std::endl;   
    std::cout << std::endl;   
  
// assignments   
    rx0 = "abc";   
    rx0 = rx1;   
    rx0 = str;   
  
    rx0.assign("abcd", std::regex::ECMAScript);   
    rx0.assign("abcd", 3);   
    rx0.assign(rx1);   
    rx0.assign(str);   
    rx0.assign(str.begin(), str.end() - 1);   
  
    rx0.swap(rx1);   
  
// mark_count   
    std::cout << "\"abc\" mark_count == "   
        << std::regex("abc").mark_count() << std::endl;   
    std::cout << "\"(abc)\" mark_count == "   
        << std::regex("(abc)").mark_count() << std::endl;   
  
// locales   
    std::regex::locale_type loc = rx0.imbue(std::locale());   
    std::cout << "getloc == imbued == " << std::boolalpha   
        << (loc == rx0.getloc()) << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
match("abc", "") == false  
match("abc", "abcd") == false  
match("abc", "abc") == true  
match("abc", "abc") == true  
match(string("abcd"), "abc") == false  
match(string("abc"), "abc") == true  
  
"abc" mark_count == 0  
"(abc)" mark_count == 1  
getloc == imbued == true  
```  
  
##  <a name="basic_regex__value_type"></a>  basic_regex::value_type  
 The element type.  
  
```  
typedef Elem value_type;  
```  
  
### Remarks  
 The type is a synonym for the template parameter `Elem`.  
  
### Example  
  
```cpp  
// std_tr1__regex__basic_regex_value_type.cpp   
// compile with: /EHsc   
#include <regex>   
#include <iostream>   
  
int main()   
    {   
    std::regex::value_type elem = 'x';   
    std::regex::flag_type flag = std::regex::grep;   
  
    elem = elem;  // to quiet "unused" warnings   
    flag = flag;   
  
// constructors   
    std::regex rx0;   
    std::cout << "match(\"abc\", \"\") == " << std::boolalpha   
        << regex_match("abc", rx0) << std::endl;   
  
    std::regex rx1("abcd", std::regex::ECMAScript);   
    std::cout << "match(\"abc\", \"abcd\") == " << std::boolalpha   
        << regex_match("abc", rx1) << std::endl;   
  
    std::regex rx2("abcd", 3);   
    std::cout << "match(\"abc\", \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx2) << std::endl;   
  
    std::regex rx3(rx2);   
    std::cout << "match(\"abc\", \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx3) << std::endl;   
  
    std::string str("abcd");   
    std::regex rx4(str);   
    std::cout << "match(string(\"abcd\"), \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx4) << std::endl;   
  
    std::regex rx5(str.begin(), str.end() - 1);   
    std::cout << "match(string(\"abc\"), \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx5) << std::endl;   
    std::cout << std::endl;   
  
// assignments   
    rx0 = "abc";   
    rx0 = rx1;   
    rx0 = str;   
  
    rx0.assign("abcd", std::regex::ECMAScript);   
    rx0.assign("abcd", 3);   
    rx0.assign(rx1);   
    rx0.assign(str);   
    rx0.assign(str.begin(), str.end() - 1);   
  
    rx0.swap(rx1);   
  
// mark_count   
    std::cout << "\"abc\" mark_count == "   
        << std::regex("abc").mark_count() << std::endl;   
    std::cout << "\"(abc)\" mark_count == "   
        << std::regex("(abc)").mark_count() << std::endl;   
  
// locales   
    std::regex::locale_type loc = rx0.imbue(std::locale());   
    std::cout << "getloc == imbued == " << std::boolalpha   
        << (loc == rx0.getloc()) << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
match("abc", "") == false  
match("abc", "abcd") == false  
match("abc", "abc") == true  
match("abc", "abc") == true  
match(string("abcd"), "abc") == false  
match(string("abc"), "abc") == true  
  
"abc" mark_count == 0  
"(abc)" mark_count == 1  
getloc == imbued == true  
```  
  
## See Also  
 [\<regex>](../standard-library/regex.md)   
 [regex_match Function](../standard-library/regex-functions.md#regex_match_function)   
 [regex_search Function](../standard-library/regex-functions.md#regex_search_function)   
 [regex_replace Function](../standard-library/regex-functions.md#regex_replace_function)   
 [regex](../standard-library/regex-typedefs.md#regex_typedef)   
 [wregex](../standard-library/regex-typedefs.md#wregex_typedef)   
 [regex_traits Class](../standard-library/regex-traits-class.md)

