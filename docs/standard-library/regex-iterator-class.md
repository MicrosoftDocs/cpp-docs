---
title: "regex_iterator Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std::tr1::regex_iterator"
  - "std.tr1.regex_iterator"
  - "regex_iterator"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "regex_iterator class [TR1]"
ms.assetid: 0cfd8fd0-5a95-4f3c-bf8e-6ef028c423d3
caps.latest.revision: 16
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
# regex_iterator Class
Iterator class for matches.  
  
## Syntax  
```
class regex_iterator {  
   public:  
   typedef basic_regex<Elem, RXtraits>  
   regex_type;  
   typedef match_results<BidIt> value_type;  
   typedef std::forward_iterator_tag iterator_category;  
   typedef std::ptrdiff_t difference_type;  
   typedef const match_results<BidIt>* pointer;  
   typedef const match_results<BidIt>& reference;  
   regex_iterator();
   regex_iterator(BidIt first, BidIt last,  
   const regex_type& re,  
   regex_constants::match_flag_type f = regex_constants::match_default);
   bool operator==(const regex_iterator& right);
   bool operator!=(const regex_iterator& right);
   const match_results<BidIt>& operator*();
   const match_results<BidIt> * operator->();
   regex_iterator& operator++();
   regex_iterator& operator++(int);
   BidIt begin;
   // exposition only  
   BidIt end;
   // exposition only  
   regex_type *pregex;     // exposition only  
   regex_constants::match_flag_type flags; // exposition only  
   match_results<BidIt> match;
   // exposition only  
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
 The template class describes a constant forward iterator object. It extracts objects of type `match_results<BidIt>` by repeatedly applying its regular expression object `*pregex` to the character sequence defined by the iterator range `[begin, end)`.  
  
## Examples  
 See the following topics for examples on regular expressions:  
  
- [regex_match Function](../standard-library/regex-functions.md#regex_match_function)  
  
- [regex_replace Function](../standard-library/regex-functions.md#regex_replace_function)  
  
- [regex_search Function](../standard-library/regex-functions.md#regex_search_function)  
  
- [swap Function](../standard-library/regex-functions.md#swap_function)  
  
## Requirements  
 **Header:** \<regex>  
  
 **Namespace:** std  
  
##  <a name="regex_iterator__difference_type"></a>  regex_iterator::difference_type  
 The type of an iterator difference.  
  
```  
typedef std::ptrdiff_t difference_type;  
```  
  
### Remarks  
 The type is a synonym for `std::ptrdiff_t`.  
  
### Example  
  
```cpp  
// std_tr1__regex__regex_iterator_difference_type.cpp   
// compile with: /EHsc   
#include <regex>   
#include <iostream>   
  
typedef std::regex_iterator<const char *> Myiter;   
int main()   
    {   
    const char *pat = "axayaz";   
    Myiter::regex_type rx("a");   
    Myiter next(pat, pat + strlen(pat), rx);   
    Myiter end;   
  
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
  
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
match == a  
match == a  
match == a  
```  
  
##  <a name="regex_iterator__iterator_category"></a>  regex_iterator::iterator_category  
 The type of the iterator category.  
  
```  
typedef std::forward_iterator_tag iterator_category;  
```  
  
### Remarks  
 The type is a synonym for `std::forward_iterator_tag`.  
  
### Example  
  
```cpp  
// std_tr1__regex__regex_iterator_iterator_category.cpp   
// compile with: /EHsc   
#include <regex>   
#include <iostream>   
  
typedef std::regex_iterator<const char *> Myiter;   
int main()   
    {   
    const char *pat = "axayaz";   
    Myiter::regex_type rx("a");   
    Myiter next(pat, pat + strlen(pat), rx);   
    Myiter end;   
  
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
  
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
match == a  
match == a  
match == a  
```  
  
##  <a name="regex_iterator__operator_neq"></a>  regex_iterator::operator!=  
 Compares iterators for inequality.  
  
```  
bool operator!=(const regex_iterator& right);
```  
  
### Parameters  
 `right`  
 The iterator to compare to.  
  
### Remarks  
 The member function returns `!(*this == right)`.  
  
### Example  
  
```cpp  
// std_tr1__regex__regex_iterator_operator_ne.cpp   
// compile with: /EHsc   
#include <regex>   
#include <iostream>   
  
typedef std::regex_iterator<const char *> Myiter;   
int main()   
    {   
    const char *pat = "axayaz";   
    Myiter::regex_type rx("a");   
    Myiter next(pat, pat + strlen(pat), rx);   
    Myiter end;   
  
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
  
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
match == a  
match == a  
match == a  
```  
  
##  <a name="regex_iterator__operator_star"></a>  regex_iterator::operator*  
 Accesses the designated match.  
  
```  
const match_results<BidIt>& operator*();
```  
  
### Remarks  
 The member function returns the stored value `match`.  
  
### Example  
  
```cpp  
// std_tr1__regex__regex_iterator_operator_star.cpp   
// compile with: /EHsc   
#include <regex>   
#include <iostream>   
  
typedef std::regex_iterator<const char *> Myiter;   
int main()   
    {   
    const char *pat = "axayaz";   
    Myiter::regex_type rx("a");   
    Myiter next(pat, pat + strlen(pat), rx);   
    Myiter end;   
  
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
  
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
match == a  
match == a  
match == a  
```  
  
##  <a name="regex_iterator__operator_add_add"></a>  regex_iterator::operator++  
 Increments the iterator.  
  
```  
regex_iterator& operator++();

regex_iterator& operator++(int);
```  
  
### Remarks  
 If the current match has no characters the first operator calls `regex_search(begin, end, match, *pregex, flags | regex_constants::match_prev_avail | regex_constants::match_not_null)`; otherwise it advances the stored value `begin` to point to the first character after the current match then calls `regex_search(begin, end, match, *pregex, flags | regex_constants::match_prev_avail)`. In either case, if the search fails the operator sets the object to an end-of-sequence iterator. The operator returns the object.  
  
 The second operator makes a copy of the object, increments the object, then returns the copy.  
  
### Example  
  
```cpp  
// std_tr1__regex__regex_iterator_operator_inc.cpp   
// compile with: /EHsc   
#include <regex>   
#include <iostream>   
  
typedef std::regex_iterator<const char *> Myiter;   
int main()   
    {   
    const char *pat = "axayaz";   
    Myiter::regex_type rx("a");   
    Myiter next(pat, pat + strlen(pat), rx);   
    Myiter end;   
  
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
  
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
match == a  
match == a  
match == a  
```  
  
##  <a name="regex_iterator__operator_eq"></a>  regex_iterator::operator=  
 Compares iterators for equality.  
  
```  
bool operator==(const regex_iterator& right);
```  
  
### Parameters  
 `right`  
 The iterator to compare to.  
  
### Remarks  
 The member function returns true if `*this` and `right` are both end-of-sequence iterators or if neither is an end-of-sequence iterator and `begin == right.begin`, `end == right.end`, `pregex == right.pregex`, and `flags == right.flags`. Otherwise it returns false.  
  
### Example  
  
```cpp  
// std_tr1__regex__regex_iterator_operator_as.cpp   
// compile with: /EHsc   
#include <regex>   
#include <iostream>   
  
typedef std::regex_iterator<const char *> Myiter;   
int main()   
    {   
    const char *pat = "axayaz";   
    Myiter::regex_type rx("a");   
    Myiter next(pat, pat + strlen(pat), rx);   
    Myiter end;   
  
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
  
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
match == a  
match == a  
match == a  
```  
  
##  <a name="regex_iterator__operator-_gt_"></a>  regex_iterator::operator-&gt;  
 Accesses the designated match.  
  
```  
const match_results<BidIt> * operator->();
```  
  
### Remarks  
 The member function returns the address of the stored value `match`.  
  
### Example  
  
```cpp  
// std_tr1__regex__regex_iterator_operator_arrow.cpp   
// compile with: /EHsc   
#include <regex>   
#include <iostream>   
  
typedef std::regex_iterator<const char *> Myiter;   
int main()   
    {   
    const char *pat = "axayaz";   
    Myiter::regex_type rx("a");   
    Myiter next(pat, pat + strlen(pat), rx);   
    Myiter end;   
  
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
  
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
match == a  
match == a  
match == a  
```  
  
##  <a name="regex_iterator__pointer"></a>  regex_iterator::pointer  
 The type of a pointer to a match.  
  
```  
typedef match_results<BidIt> *pointer;  
```  
  
### Remarks  
 The type is a synonym for `match_results<BidIt>*`, where `BidIt` is the template parameter.  
  
### Example  
  
```cpp  
// std_tr1__regex__regex_iterator_pointer.cpp   
// compile with: /EHsc   
#include <regex>   
#include <iostream>   
  
typedef std::regex_iterator<const char *> Myiter;   
int main()   
    {   
    const char *pat = "axayaz";   
    Myiter::regex_type rx("a");   
    Myiter next(pat, pat + strlen(pat), rx);   
    Myiter end;   
  
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
  
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
match == a  
match == a  
match == a  
```  
  
##  <a name="regex_iterator__reference"></a>  regex_iterator::reference  
 The type of a reference to a match.  
  
```  
typedef match_results<BidIt>& reference;  
```  
  
### Remarks  
 The type is a synonym for `match_results<BidIt>&`, where `BidIt` is the template parameter.  
  
### Example  
  
```cpp  
// std_tr1__regex__regex_iterator_reference.cpp   
// compile with: /EHsc   
#include <regex>   
#include <iostream>   
  
typedef std::regex_iterator<const char *> Myiter;   
int main()   
    {   
    const char *pat = "axayaz";   
    Myiter::regex_type rx("a");   
    Myiter next(pat, pat + strlen(pat), rx);   
    Myiter end;   
  
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
  
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
match == a  
match == a  
match == a  
```  
  
##  <a name="regex_iterator__regex_iterator"></a>  regex_iterator::regex_iterator  
 Constructs the iterator.  
  
```  
regex_iterator();

regex_iterator(BidIt first,
    BidIt last,  
    const regex_type& re,
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
 The first constructor constructs an end-of-sequence iterator. The second constructor initializes the stored value `begin` with `first`, the stored value `end` with `last`, the stored value `pregex` with `&re`, and the stored value `flags` with `f`. It then calls `regex_search(begin, end, match, *pregex, flags)`. If the search fails, the constructor sets the object to an end-of-sequence iterator.  
  
### Example  
  
```cpp  
// std_tr1__regex__regex_iterator_construct.cpp   
// compile with: /EHsc   
#include <regex>   
#include <iostream>   
  
typedef std::regex_iterator<const char *> Myiter;   
int main()   
    {   
    const char *pat = "axayaz";   
    Myiter::regex_type rx("a");   
    Myiter next(pat, pat + strlen(pat), rx);   
    Myiter end;   
  
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
  
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
match == a  
match == a  
match == a  
```  
  
##  <a name="regex_iterator__regex_type"></a>  regex_iterator::regex_type  
 The type of the regular expression to match.  
  
```  
typedef basic_regex<Elem, RXtraits> regex_type;  
```  
  
### Remarks  
 The typedef is a synonym for `basic_regex<Elem, RXtraits>`.  
  
### Example  
  
```cpp  
// std_tr1__regex__regex_iterator_regex_type.cpp   
// compile with: /EHsc   
#include <regex>   
#include <iostream>   
  
typedef std::regex_iterator<const char *> Myiter;   
int main()   
    {   
    const char *pat = "axayaz";   
    Myiter::regex_type rx("a");   
    Myiter next(pat, pat + strlen(pat), rx);   
    Myiter end;   
  
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
  
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
match == a  
match == a  
match == a  
```  
  
##  <a name="regex_iterator__value_type"></a>  regex_iterator::value_type  
 The type of a match.  
  
```  
typedef match_results<BidIt> value_type;  
```  
  
### Remarks  
 The type is a synonym for `match_results<BidIt>`, where `BidIt` is the template parameter.  
  
### Example  
  
```cpp  
// std_tr1__regex__regex_iterator_value_type.cpp   
// compile with: /EHsc   
#include <regex>   
#include <iostream>   
  
typedef std::regex_iterator<const char *> Myiter;   
int main()   
    {   
    const char *pat = "axayaz";   
    Myiter::regex_type rx("a");   
    Myiter next(pat, pat + strlen(pat), rx);   
    Myiter end;   
  
    for (; next != end; ++next)   
        std::cout << "match == " << next->str() << std::endl;   
  
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
match == a  
match == a  
match == a  
```  
  
## See Also  
 [\<regex>](../standard-library/regex.md)   
 [regex_iterator](../standard-library/regex-iterator-class.md)

