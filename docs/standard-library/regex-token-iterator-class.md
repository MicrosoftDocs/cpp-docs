---
title: "regex_token_iterator Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "regex_token_iterator"
  - "std.tr1.regex_token_iterator"
  - "std::tr1::regex_token_iterator"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "regex_token_iterator class [TR1]"
ms.assetid: a213ba48-8e4e-4b6b-871a-2637acf05f15
caps.latest.revision: 15
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
# regex_token_iterator Class
Iterator class for submatches.  
  
## Syntax  
```  
class regex_token_iterator {  
   public:  
   typedef basic_regex<Elem, RXtraits>  
   regex_type;  
   typedef sub_match<BidIt> value_type;  
   typedef std::forward_iterator_tag iterator_category;  
   typedef std::ptrdiff_t difference_type;  
   typedef const sub_match<BidIt> *pointer;  
   typedef const sub_match<BidIt>& reference;  
   regex_token_iterator();
   regex_token_iterator(BidIt first, BidIt last,  
   const regex_type& re, int submatch = 0,  
   regex_constants::match_flag_type f = regex_constants::match_default);
   regex_token_iterator(BidIt first, BidIt last,  
   const regex_type& re, const std::vector<int> submatches,  
   regex_constants::match_flag_type f = regex_constants::match_default);
   template <std::size_t N>  
   regex_token_iterator(BidIt first, BidIt last,  
   const regex_type& re, const int (&submatches)[N],  
   regex_constants::match_flag_type f = regex_constants::match_default);
   bool operator==(const regex_token_iterator& right);
   bool operator!=(const regex_token_iterator& right);
   const basic_string<Elem>& operator*();
   const basic_string<Elem> * operator->();
   regex_token_iterator& operator++();
   regex_token_iterator& operator++(int);
   private:  
   regex_iterator<BidIt, Elem, RXtraits>  
   it; // exposition only  
   vector<int> subs;
   // exposition only  
   int pos;  // exposition only  
   };  
```  
#### Parameters  
 `BidIt`  
 The iterator type for submatches.  
  
 `Elem`  
 The type of elements to match.  
  
 `RXtraits`  
 Traits class for elements.  
  
## Remarks  
 The template class describes a constant forward iterator object. Conceptually, it holds a `regex_iterator` object that it uses to search for regular expression matches in a character sequence. It extracts objects of type `sub_match<BidIt>` representing the submatches identified by the index values in the stored vector `subs` for each regular expression match.  
  
 An index value of -1 designates the character sequence beginning immediately after the end of the previous regular expression match, or beginning at the start of the character sequence if there was no previous regular expression match, and extending to but not including the first character of the current regular expression match, or to the end of the character sequence if there is no current match. Any other index value `idx` designates the contents of the capture group held in `it.match[idx]`.  
  
## Requirements  
 **Header:** \<regex>  
  
 **Namespace:** std  
  
##  <a name="regex_token_iterator__difference_type"></a>  regex_token_iterator::difference_type  
 The type of an iterator difference.  
  
```  
typedef std::ptrdiff_t difference_type;  
```  
  
### Remarks  
 The type is a synonym for `std::ptrdiff_t`.  
  
### Example  
  
```cpp  
  
#include <regex>   
#include <iostream>   
  
typedef std::regex_token_iterator<const char *> Myiter;   
int main()   
    {   
    const char *pat = "aaxaayaaz";   
    Myiter::regex_type rx("(a)a");   
    Myiter next(pat, pat + strlen(pat), rx);   
    Myiter end;   
  
// show whole match   
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
    std::cout << std::endl;   
  
// show prefix before match   
    next = Myiter(pat, pat + strlen(pat), rx, -1);   
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
    std::cout << std::endl;   
  
// show (a) submatch only   
    next = Myiter(pat, pat + strlen(pat), rx, 1);   
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
    std::cout << std::endl;   
  
// show prefixes and submatches   
    std::vector<int> vec;   
    vec.push_back(-1);   
    vec.push_back(1);   
    next = Myiter(pat, pat + strlen(pat), rx, vec);   
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
    std::cout << std::endl;   
  
// show prefixes and whole matches   
    int arr[] = {-1, 0};   
    next = Myiter(pat, pat + strlen(pat), rx, arr);   
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
    std::cout << std::endl;   
  
// other members   
    Myiter it1(pat, pat + strlen(pat), rx);   
    Myiter it2(it1);   
    next = it1;   
  
    Myiter::iterator_category cat = std::forward_iterator_tag();   
    Myiter::difference_type dif = -3;   
    Myiter::value_type mr = *it1;   
    Myiter::reference ref = mr;   
    Myiter::pointer ptr = &ref;   
  
    dif = dif; // to quiet "unused" warnings   
    ptr = ptr;   
  
    return (0);   
    }  
  
```  
  
```Output  
match == aa  
match == aa  
match == aa  
  
match ==   
match == x  
match == y  
match == z  
  
match == a  
match == a  
match == a  
  
match ==   
match == a  
match == x  
match == a  
match == y  
match == a  
match == z  
  
match ==   
match == aa  
match == x  
match == aa  
match == y  
match == aa  
match == z  
  
```  
  
##  <a name="regex_token_iterator__iterator_category"></a>  regex_token_iterator::iterator_category  
 The type of the iterator category.  
  
```  
typedef std::forward_iterator_tag iterator_category;  
```  
  
### Remarks  
 The type is a synonym for `std::forward_iterator_tag`.  
  
### Example  
  
```cpp  
// std_tr1__regex__regex_token_iterator_iterator_category.cpp   
// compile with: /EHsc   
#include <regex>   
#include <iostream>   
  
typedef std::regex_token_iterator<const char *> Myiter;   
int main()   
    {   
    const char *pat = "aaxaayaaz";   
    Myiter::regex_type rx("(a)a");   
    Myiter next(pat, pat + strlen(pat), rx);   
    Myiter end;   
  
// show whole match   
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
    std::cout << std::endl;   
  
// show prefix before match   
    next = Myiter(pat, pat + strlen(pat), rx, -1);   
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
    std::cout << std::endl;   
  
// show (a) submatch only   
    next = Myiter(pat, pat + strlen(pat), rx, 1);   
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
    std::cout << std::endl;   
  
// show prefixes and submatches   
    std::vector<int> vec;   
    vec.push_back(-1);   
    vec.push_back(1);   
    next = Myiter(pat, pat + strlen(pat), rx, vec);   
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
    std::cout << std::endl;   
  
// show prefixes and whole matches   
    int arr[] = {-1, 0};   
    next = Myiter(pat, pat + strlen(pat), rx, arr);   
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
    std::cout << std::endl;   
  
// other members   
    Myiter it1(pat, pat + strlen(pat), rx);   
    Myiter it2(it1);   
    next = it1;   
  
    Myiter::iterator_category cat = std::forward_iterator_tag();   
    Myiter::difference_type dif = -3;   
    Myiter::value_type mr = *it1;   
    Myiter::reference ref = mr;   
    Myiter::pointer ptr = &ref;   
  
    dif = dif; // to quiet "unused" warnings   
    ptr = ptr;   
  
    return (0);   
    }  
  
```  
  
```Output  
match == aa  
match == aa  
match == aa  
  
match ==   
match == x  
match == y  
match == z  
  
match == a  
match == a  
match == a  
  
match ==   
match == a  
match == x  
match == a  
match == y  
match == a  
match == z  
  
match ==   
match == aa  
match == x  
match == aa  
match == y  
match == aa  
match == z  
  
```  
  
##  <a name="regex_token_iterator__operator_neq"></a>  regex_token_iterator::operator!=  
 Compares iterators for inequality.  
  
```  
bool operator!=(const regex_token_iterator& right);
```  
  
### Parameters  
 `right`  
 The iterator to compare to.  
  
### Remarks  
 The member function returns `!(*this == right)`.  
  
### Example  
  
```cpp  
// std_tr1__regex__regex_token_iterator_operator_ne.cpp   
// compile with: /EHsc   
#include <regex>   
#include <iostream>   
  
typedef std::regex_token_iterator<const char *> Myiter;   
int main()   
    {   
    const char *pat = "aaxaayaaz";   
    Myiter::regex_type rx("(a)a");   
    Myiter next(pat, pat + strlen(pat), rx);   
    Myiter end;   
  
// show whole match   
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
    std::cout << std::endl;   
  
// show prefix before match   
    next = Myiter(pat, pat + strlen(pat), rx, -1);   
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
    std::cout << std::endl;   
  
// show (a) submatch only   
    next = Myiter(pat, pat + strlen(pat), rx, 1);   
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
    std::cout << std::endl;   
  
// show prefixes and submatches   
    std::vector<int> vec;   
    vec.push_back(-1);   
    vec.push_back(1);   
    next = Myiter(pat, pat + strlen(pat), rx, vec);   
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
    std::cout << std::endl;   
  
// show prefixes and whole matches   
    int arr[] = {-1, 0};   
    next = Myiter(pat, pat + strlen(pat), rx, arr);   
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
    std::cout << std::endl;   
  
// other members   
    Myiter it1(pat, pat + strlen(pat), rx);   
    Myiter it2(it1);   
    next = it1;   
  
    Myiter::iterator_category cat = std::forward_iterator_tag();   
    Myiter::difference_type dif = -3;   
    Myiter::value_type mr = *it1;   
    Myiter::reference ref = mr;   
    Myiter::pointer ptr = &ref;   
  
    dif = dif; // to quiet "unused" warnings   
    ptr = ptr;   
  
    return (0);   
    }  
  
```  
  
```Output  
match == aa  
match == aa  
match == aa  
  
match ==   
match == x  
match == y  
match == z  
  
match == a  
match == a  
match == a  
  
match ==   
match == a  
match == x  
match == a  
match == y  
match == a  
match == z  
  
match ==   
match == aa  
match == x  
match == aa  
match == y  
match == aa  
match == z  
  
```  
  
##  <a name="regex_token_iterator__operator_star"></a>  regex_token_iterator::operator*  
 Accesses the designated submatch.  
  
```  
const sub_match<BidIt>& operator*();
```  
  
### Remarks  
 The member function returns a `sub_match<BidIt>` object representing the capture group identified by the index value `subs[pos]`.  
  
### Example  
  
```cpp  
// std_tr1__regex__regex_token_iterator_operator_star.cpp   
// compile with: /EHsc   
#include <regex>   
#include <iostream>   
  
typedef std::regex_token_iterator<const char *> Myiter;   
int main()   
    {   
    const char *pat = "aaxaayaaz";   
    Myiter::regex_type rx("(a)a");   
    Myiter next(pat, pat + strlen(pat), rx);   
    Myiter end;   
  
// show whole match   
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
    std::cout << std::endl;   
  
// show prefix before match   
    next = Myiter(pat, pat + strlen(pat), rx, -1);   
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
    std::cout << std::endl;   
  
// show (a) submatch only   
    next = Myiter(pat, pat + strlen(pat), rx, 1);   
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
    std::cout << std::endl;   
  
// show prefixes and submatches   
    std::vector<int> vec;   
    vec.push_back(-1);   
    vec.push_back(1);   
    next = Myiter(pat, pat + strlen(pat), rx, vec);   
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
    std::cout << std::endl;   
  
// show prefixes and whole matches   
    int arr[] = {-1, 0};   
    next = Myiter(pat, pat + strlen(pat), rx, arr);   
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
    std::cout << std::endl;   
  
// other members   
    Myiter it1(pat, pat + strlen(pat), rx);   
    Myiter it2(it1);   
    next = it1;   
  
    Myiter::iterator_category cat = std::forward_iterator_tag();   
    Myiter::difference_type dif = -3;   
    Myiter::value_type mr = *it1;   
    Myiter::reference ref = mr;   
    Myiter::pointer ptr = &ref;   
  
    dif = dif; // to quiet "unused" warnings   
    ptr = ptr;   
  
    return (0);   
    }  
  
```  
  
```Output  
match == aa  
match == aa  
match == aa  
  
match ==   
match == x  
match == y  
match == z  
  
match == a  
match == a  
match == a  
  
match ==   
match == a  
match == x  
match == a  
match == y  
match == a  
match == z  
  
match ==   
match == aa  
match == x  
match == aa  
match == y  
match == aa  
match == z  
  
```  
  
##  <a name="regex_token_iterator__operator_add_add"></a>  regex_token_iterator::operator++  
 Increments the iterator.  
  
```  
regex_token_iterator& operator++();

regex_token_iterator& operator++(int);
```  
  
### Remarks  
 If the stored iterator `it` is an end-of-sequence iterator the first operator sets the stored value `pos` to the value of `subs.size()` (thus making an end-of-sequence iterator). Otherwise the operator increments the stored value `pos`; if the result is equal to the value `subs.size()` it sets the stored value `pos` to zero and increments the stored iterator `it`. If incrementing the stored iterator leaves it unequal to an end-of-sequence iterator the operator does nothing further. Otherwise, if the end of the preceding match was at the end of the character sequence the operator sets the stored value of `pos` to `subs.size()`. Otherwise, the operator repeatedly increments the stored value `pos` until `pos == subs.size()` or `subs[pos] == -1` (thus ensuring that the next dereference of the iterator will return the tail of the character sequence if one of the index values is -1). In all cases the operator returns the object.  
  
 The second operator makes a copy of the object, increments the object, then returns the copy.  
  
### Example  
  
```cpp  
// std_tr1__regex__regex_token_iterator_operator_inc.cpp   
// compile with: /EHsc   
#include <regex>   
#include <iostream>   
  
typedef std::regex_token_iterator<const char *> Myiter;   
int main()   
    {   
    const char *pat = "aaxaayaaz";   
    Myiter::regex_type rx("(a)a");   
    Myiter next(pat, pat + strlen(pat), rx);   
    Myiter end;   
  
// show whole match   
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
    std::cout << std::endl;   
  
// show prefix before match   
    next = Myiter(pat, pat + strlen(pat), rx, -1);   
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
    std::cout << std::endl;   
  
// show (a) submatch only   
    next = Myiter(pat, pat + strlen(pat), rx, 1);   
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
    std::cout << std::endl;   
  
// show prefixes and submatches   
    std::vector<int> vec;   
    vec.push_back(-1);   
    vec.push_back(1);   
    next = Myiter(pat, pat + strlen(pat), rx, vec);   
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
    std::cout << std::endl;   
  
// show prefixes and whole matches   
    int arr[] = {-1, 0};   
    next = Myiter(pat, pat + strlen(pat), rx, arr);   
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
    std::cout << std::endl;   
  
// other members   
    Myiter it1(pat, pat + strlen(pat), rx);   
    Myiter it2(it1);   
    next = it1;   
  
    Myiter::iterator_category cat = std::forward_iterator_tag();   
    Myiter::difference_type dif = -3;   
    Myiter::value_type mr = *it1;   
    Myiter::reference ref = mr;   
    Myiter::pointer ptr = &ref;   
  
    dif = dif; // to quiet "unused" warnings   
    ptr = ptr;   
  
    return (0);   
    }  
  
```  
  
```Output  
match == aa  
match == aa  
match == aa  
  
match ==   
match == x  
match == y  
match == z  
  
match == a  
match == a  
match == a  
  
match ==   
match == a  
match == x  
match == a  
match == y  
match == a  
match == z  
  
match ==   
match == aa  
match == x  
match == aa  
match == y  
match == aa  
match == z  
  
```  
  
##  <a name="regex_token_iterator__operator_eq_eq"></a>  regex_token_iterator::operator==  
 Compares iterators for equality.  
  
```  
bool operator==(const regex_token_iterator& right);
```  
  
### Parameters  
 right  
 The iterator to compare to.  
  
### Remarks  
 The member function returns `it == right.it && subs == right.subs && pos == right.pos`.  
  
### Example  
  
```cpp  
// std_tr1__regex__regex_token_iterator_operator_eq.cpp   
// compile with: /EHsc   
#include <regex>   
#include <iostream>   
  
typedef std::regex_token_iterator<const char *> Myiter;   
int main()   
    {   
    const char *pat = "aaxaayaaz";   
    Myiter::regex_type rx("(a)a");   
    Myiter next(pat, pat + strlen(pat), rx);   
    Myiter end;   
  
// show whole match   
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
    std::cout << std::endl;   
  
// show prefix before match   
    next = Myiter(pat, pat + strlen(pat), rx, -1);   
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
    std::cout << std::endl;   
  
// show (a) submatch only   
    next = Myiter(pat, pat + strlen(pat), rx, 1);   
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
    std::cout << std::endl;   
  
// show prefixes and submatches   
    std::vector<int> vec;   
    vec.push_back(-1);   
    vec.push_back(1);   
    next = Myiter(pat, pat + strlen(pat), rx, vec);   
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
    std::cout << std::endl;   
  
// show prefixes and whole matches   
    int arr[] = {-1, 0};   
    next = Myiter(pat, pat + strlen(pat), rx, arr);   
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
    std::cout << std::endl;   
  
// other members   
    Myiter it1(pat, pat + strlen(pat), rx);   
    Myiter it2(it1);   
    next = it1;   
  
    Myiter::iterator_category cat = std::forward_iterator_tag();   
    Myiter::difference_type dif = -3;   
    Myiter::value_type mr = *it1;   
    Myiter::reference ref = mr;   
    Myiter::pointer ptr = &ref;   
  
    dif = dif; // to quiet "unused" warnings   
    ptr = ptr;   
  
    return (0);   
    }  
  
```  
  
```Output  
match == aa  
match == aa  
match == aa  
  
match ==   
match == x  
match == y  
match == z  
  
match == a  
match == a  
match == a  
  
match ==   
match == a  
match == x  
match == a  
match == y  
match == a  
match == z  
  
match ==   
match == aa  
match == x  
match == aa  
match == y  
match == aa  
match == z  
  
```  
  
##  <a name="regex_token_iterator__operator-_gt_"></a>  regex_token_iterator::operator-&gt;  
 Accesses the designated submatch.  
  
```  
const sub_match<BidIt> * operator->();
```  
  
### Remarks  
 The member function returns a pointer to a `sub_match<BidIt>` object representing the capture group identified by the index value `subs[pos]`.  
  
### Example  
  
```cpp  
// std_tr1__regex__regex_token_iterator_operator_arrow.cpp   
// compile with: /EHsc   
#include <regex>   
#include <iostream>   
  
typedef std::regex_token_iterator<const char *> Myiter;   
int main()   
    {   
    const char *pat = "aaxaayaaz";   
    Myiter::regex_type rx("(a)a");   
    Myiter next(pat, pat + strlen(pat), rx);   
    Myiter end;   
  
// show whole match   
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
    std::cout << std::endl;   
  
// show prefix before match   
    next = Myiter(pat, pat + strlen(pat), rx, -1);   
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
    std::cout << std::endl;   
  
// show (a) submatch only   
    next = Myiter(pat, pat + strlen(pat), rx, 1);   
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
    std::cout << std::endl;   
  
// show prefixes and submatches   
    std::vector<int> vec;   
    vec.push_back(-1);   
    vec.push_back(1);   
    next = Myiter(pat, pat + strlen(pat), rx, vec);   
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
    std::cout << std::endl;   
  
// show prefixes and whole matches   
    int arr[] = {-1, 0};   
    next = Myiter(pat, pat + strlen(pat), rx, arr);   
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
    std::cout << std::endl;   
  
// other members   
    Myiter it1(pat, pat + strlen(pat), rx);   
    Myiter it2(it1);   
    next = it1;   
  
    Myiter::iterator_category cat = std::forward_iterator_tag();   
    Myiter::difference_type dif = -3;   
    Myiter::value_type mr = *it1;   
    Myiter::reference ref = mr;   
    Myiter::pointer ptr = &ref;   
  
    dif = dif; // to quiet "unused" warnings   
    ptr = ptr;   
  
    return (0);   
    }  
  
```  
  
```Output  
match == aa  
match == aa  
match == aa  
  
match ==   
match == x  
match == y  
match == z  
  
match == a  
match == a  
match == a  
  
match ==   
match == a  
match == x  
match == a  
match == y  
match == a  
match == z  
  
match ==   
match == aa  
match == x  
match == aa  
match == y  
match == aa  
match == z  
  
```  
  
##  <a name="regex_token_iterator__pointer"></a>  regex_token_iterator::pointer  
 The type of a pointer to a match.  
  
```  
typedef sub_match<BidIt> *pointer;  
```  
  
### Example  
  
```cpp  
// std_tr1__regex__regex_token_iterator_pointer.cpp   
// compile with: /EHsc   
#include <regex>   
#include <iostream>   
  
typedef std::regex_token_iterator<const char *> Myiter;   
int main()   
    {   
    const char *pat = "aaxaayaaz";   
    Myiter::regex_type rx("(a)a");   
    Myiter next(pat, pat + strlen(pat), rx);   
    Myiter end;   
  
// show whole match   
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
    std::cout << std::endl;   
  
// show prefix before match   
    next = Myiter(pat, pat + strlen(pat), rx, -1);   
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
    std::cout << std::endl;   
  
// show (a) submatch only   
    next = Myiter(pat, pat + strlen(pat), rx, 1);   
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
    std::cout << std::endl;   
  
// show prefixes and submatches   
    std::vector<int> vec;   
    vec.push_back(-1);   
    vec.push_back(1);   
    next = Myiter(pat, pat + strlen(pat), rx, vec);   
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
    std::cout << std::endl;   
  
// show prefixes and whole matches   
    int arr[] = {-1, 0};   
    next = Myiter(pat, pat + strlen(pat), rx, arr);   
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
    std::cout << std::endl;   
  
// other members   
    Myiter it1(pat, pat + strlen(pat), rx);   
    Myiter it2(it1);   
    next = it1;   
  
    Myiter::iterator_category cat = std::forward_iterator_tag();   
    Myiter::difference_type dif = -3;   
    Myiter::value_type mr = *it1;   
    Myiter::reference ref = mr;   
    Myiter::pointer ptr = &ref;   
  
    dif = dif; // to quiet "unused" warnings   
    ptr = ptr;   
  
    return (0);   
    }  
  
```  
  
```Output  
match == aa  
match == aa  
match == aa  
  
match ==   
match == x  
match == y  
match == z  
  
match == a  
match == a  
match == a  
  
match ==   
match == a  
match == x  
match == a  
match == y  
match == a  
match == z  
  
match ==   
match == aa  
match == x  
match == aa  
match == y  
match == aa  
match == z  
  
```  
  
### Remarks  
 The type is a synonym for `sub_match<BidIt>*`, where `BidIt` is the template parameter.  
  
##  <a name="regex_token_iterator__reference"></a>  regex_token_iterator::reference  
 The type of a reference to a submatch.  
  
```  
typedef sub_match<BidIt>& reference;  
```  
  
### Remarks  
 The type is a synonym for `sub_match<BidIt>&`, where `BidIt` is the template parameter.  
  
### Example  
  
```cpp  
// std_tr1__regex__regex_token_iterator_reference.cpp   
// compile with: /EHsc   
#include <regex>   
#include <iostream>   
  
typedef std::regex_token_iterator<const char *> Myiter;   
int main()   
    {   
    const char *pat = "aaxaayaaz";   
    Myiter::regex_type rx("(a)a");   
    Myiter next(pat, pat + strlen(pat), rx);   
    Myiter end;   
  
// show whole match   
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
    std::cout << std::endl;   
  
// show prefix before match   
    next = Myiter(pat, pat + strlen(pat), rx, -1);   
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
    std::cout << std::endl;   
  
// show (a) submatch only   
    next = Myiter(pat, pat + strlen(pat), rx, 1);   
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
    std::cout << std::endl;   
  
// show prefixes and submatches   
    std::vector<int> vec;   
    vec.push_back(-1);   
    vec.push_back(1);   
    next = Myiter(pat, pat + strlen(pat), rx, vec);   
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
    std::cout << std::endl;   
  
// show prefixes and whole matches   
    int arr[] = {-1, 0};   
    next = Myiter(pat, pat + strlen(pat), rx, arr);   
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
    std::cout << std::endl;   
  
// other members   
    Myiter it1(pat, pat + strlen(pat), rx);   
    Myiter it2(it1);   
    next = it1;   
  
    Myiter::iterator_category cat = std::forward_iterator_tag();   
    Myiter::difference_type dif = -3;   
    Myiter::value_type mr = *it1;   
    Myiter::reference ref = mr;   
    Myiter::pointer ptr = &ref;   
  
    dif = dif; // to quiet "unused" warnings   
    ptr = ptr;   
  
    return (0);   
    }  
  
```  
  
```Output  
match == aa  
match == aa  
match == aa  
  
match ==   
match == x  
match == y  
match == z  
  
match == a  
match == a  
match == a  
  
match ==   
match == a  
match == x  
match == a  
match == y  
match == a  
match == z  
  
match ==   
match == aa  
match == x  
match == aa  
match == y  
match == aa  
match == z  
  
```  
  
##  <a name="regex_token_iterator__regex_token_iterator"></a>  regex_token_iterator::regex_token_iterator  
 Constructs the iterator.  
  
```  
regex_token_iterator();

regex_token_iterator(BidIt first, BidIt last,  
    const regex_type& re, int submatch = 0,  
    regex_constants::match_flag_type f = regex_constants::match_default);

regex_token_iterator(BidIt first, BidIt last,  
    const regex_type& re, const vector<int> submatches,  
    regex_constants::match_flag_type f = regex_constants::match_default);

template <std::size_t N>  
regex_token_iterator(BidIt first, BidIt last,  
    const regex_type& re, const int (&submatches)[N],  
    regex_constants::match_flag_type f = regex_constants::match_default);
```  
  
### Parameters  
 `first`  
 Beginning of sequence to match.  
  
 `last`  
 End of sequence to match.  
  
 `re`  
 Regular expression for matches.  
  
 `f`  
 Flags for matches.  
  
### Remarks  
 The first constructor constructs an end-of-sequence iterator.  
  
 The second constructor constructs an object whose stored iterator `it` is initialized to `regex_iterator<BidIt, Elem, RXtraits>(first, last, re, f)`, whose stored vector `subs` holds exactly one integer, with value `submatch`, and whose stored value `pos` is zero. Note: the resulting object extracts the submatch identified by the index value `submatch` for each successful regular expression match.  
  
 The third constructor constructs an object whose stored iterator `it` is initialized to `regex_iterator<BidIt, Elem, RXtraits>(first, last, re, f)`, whose stored vector `subs` holds a copy of the constructor argument `submatches`, and whose stored value `pos` is zero.  
  
 The fourth constructor constructs an object whose stored iterator `it` is initialized to `regex_iterator<BidIt, Elem, RXtraits>(first, last, re, f)`, whose stored vector `subs` holds the `N` values pointed to by the constructor argument `submatches`, and whose stored value `pos` is zero.  
  
### Example  
  
```cpp  
// std_tr1__regex__regex_token_iterator_construct.cpp   
// compile with: /EHsc   
#include <regex>   
#include <iostream>   
  
typedef std::regex_token_iterator<const char *> Myiter;   
int main()   
    {   
    const char *pat = "aaxaayaaz";   
    Myiter::regex_type rx("(a)a");   
    Myiter next(pat, pat + strlen(pat), rx);   
    Myiter end;   
  
// show whole match   
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
    std::cout << std::endl;   
  
// show prefix before match   
    next = Myiter(pat, pat + strlen(pat), rx, -1);   
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
    std::cout << std::endl;   
  
// show (a) submatch only   
    next = Myiter(pat, pat + strlen(pat), rx, 1);   
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
    std::cout << std::endl;   
  
// show prefixes and submatches   
    std::vector<int> vec;   
    vec.push_back(-1);   
    vec.push_back(1);   
    next = Myiter(pat, pat + strlen(pat), rx, vec);   
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
    std::cout << std::endl;   
  
// show prefixes and whole matches   
    int arr[] = {-1, 0};   
    next = Myiter(pat, pat + strlen(pat), rx, arr);   
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
    std::cout << std::endl;   
  
// other members   
    Myiter it1(pat, pat + strlen(pat), rx);   
    Myiter it2(it1);   
    next = it1;   
  
    Myiter::iterator_category cat = std::forward_iterator_tag();   
    Myiter::difference_type dif = -3;   
    Myiter::value_type mr = *it1;   
    Myiter::reference ref = mr;   
    Myiter::pointer ptr = &ref;   
  
    dif = dif; // to quiet "unused" warnings   
    ptr = ptr;   
  
    return (0);   
    }  
  
```  
  
```Output  
match == aa  
match == aa  
match == aa  
  
match ==   
match == x  
match == y  
match == z  
  
match == a  
match == a  
match == a  
  
match ==   
match == a  
match == x  
match == a  
match == y  
match == a  
match == z  
  
match ==   
match == aa  
match == x  
match == aa  
match == y  
match == aa  
match == z  
  
```  
  
##  <a name="regex_token_iterator__regex_type"></a>  regex_token_iterator::regex_type  
 The type of the regular expression to match.  
  
```  
typedef basic_regex<Elem, RXtraits> regex_type;  
```  
  
### Remarks  
 The typedef is a synonym for `basic_regex<Elem, RXtraits>`.  
  
### Example  
  
```cpp  
// std_tr1__regex__regex_token_iterator_regex_type.cpp   
// compile with: /EHsc   
#include <regex>   
#include <iostream>   
  
typedef std::regex_token_iterator<const char *> Myiter;   
int main()   
    {   
    const char *pat = "aaxaayaaz";   
    Myiter::regex_type rx("(a)a");   
    Myiter next(pat, pat + strlen(pat), rx);   
    Myiter end;   
  
// show whole match   
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
    std::cout << std::endl;   
  
// show prefix before match   
    next = Myiter(pat, pat + strlen(pat), rx, -1);   
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
    std::cout << std::endl;   
  
// show (a) submatch only   
    next = Myiter(pat, pat + strlen(pat), rx, 1);   
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
    std::cout << std::endl;   
  
// show prefixes and submatches   
    std::vector<int> vec;   
    vec.push_back(-1);   
    vec.push_back(1);   
    next = Myiter(pat, pat + strlen(pat), rx, vec);   
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
    std::cout << std::endl;   
  
// show prefixes and whole matches   
    int arr[] = {-1, 0};   
    next = Myiter(pat, pat + strlen(pat), rx, arr);   
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
    std::cout << std::endl;   
  
// other members   
    Myiter it1(pat, pat + strlen(pat), rx);   
    Myiter it2(it1);   
    next = it1;   
  
    Myiter::iterator_category cat = std::forward_iterator_tag();   
    Myiter::difference_type dif = -3;   
    Myiter::value_type mr = *it1;   
    Myiter::reference ref = mr;   
    Myiter::pointer ptr = &ref;   
  
    dif = dif; // to quiet "unused" warnings   
    ptr = ptr;   
  
    return (0);   
    }  
  
```  
  
```Output  
match == aa  
match == aa  
match == aa  
  
match ==   
match == x  
match == y  
match == z  
  
match == a  
match == a  
match == a  
  
match ==   
match == a  
match == x  
match == a  
match == y  
match == a  
match == z  
  
match ==   
match == aa  
match == x  
match == aa  
match == y  
match == aa  
match == z  
  
```  
  
##  <a name="regex_token_iterator__value_type"></a>  regex_token_iterator::value_type  
 The type of a submatch.  
  
```  
typedef sub_match<BidIt> value_type;  
```  
  
### Remarks  
 The type is a synonym for `sub_match<BidIt>`, where `BidIt` is the template parameter.  
  
### Example  
  
```cpp  
// std_tr1__regex__regex_token_iterator_value_type.cpp   
// compile with: /EHsc   
#include <regex>   
#include <iostream>   
  
typedef std::regex_token_iterator<const char *> Myiter;   
int main()   
    {   
    const char *pat = "aaxaayaaz";   
    Myiter::regex_type rx("(a)a");   
    Myiter next(pat, pat + strlen(pat), rx);   
    Myiter end;   
  
// show whole match   
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
    std::cout << std::endl;   
  
// show prefix before match   
    next = Myiter(pat, pat + strlen(pat), rx, -1);   
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
    std::cout << std::endl;   
  
// show (a) submatch only   
    next = Myiter(pat, pat + strlen(pat), rx, 1);   
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
    std::cout << std::endl;   
  
// show prefixes and submatches   
    std::vector<int> vec;   
    vec.push_back(-1);   
    vec.push_back(1);   
    next = Myiter(pat, pat + strlen(pat), rx, vec);   
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
    std::cout << std::endl;   
  
// show prefixes and whole matches   
    int arr[] = {-1, 0};   
    next = Myiter(pat, pat + strlen(pat), rx, arr);   
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
    std::cout << std::endl;   
  
// other members   
    Myiter it1(pat, pat + strlen(pat), rx);   
    Myiter it2(it1);   
    next = it1;   
  
    Myiter::iterator_category cat = std::forward_iterator_tag();   
    Myiter::difference_type dif = -3;   
    Myiter::value_type mr = *it1;   
    Myiter::reference ref = mr;   
    Myiter::pointer ptr = &ref;   
  
    dif = dif; // to quiet "unused" warnings   
    ptr = ptr;   
  
    return (0);   
    }  
  
```  
  
```Output  
match == aa  
match == aa  
match == aa  
  
match ==   
match == x  
match == y  
match == z  
  
match == a  
match == a  
match == a  
  
match ==   
match == a  
match == x  
match == a  
match == y  
match == a  
match == z  
  
match ==   
match == aa  
match == x  
match == aa  
match == y  
match == aa  
match == z  
  
```  
  
## See Also  
 [\<regex>](../standard-library/regex.md)   
 [regex_token_iterator](../standard-library/regex-token-iterator-class.md)   
 [regex_iterator Class](../standard-library/regex-iterator-class.md)

