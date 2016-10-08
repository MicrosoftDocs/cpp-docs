---
title: "&lt;regex&gt;"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 5dd4ef74-6063-4dbc-b692-1960bb736f0b
caps.latest.revision: 21
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# &lt;regex&gt;
Defines a template class to parse [Regular Expressions (C++)](../VS_visualcpp/Regular-Expressions--C---.md), and several template classes and functions to search text for matches to a regular expression object.  
  
## Syntax  
  
```  
#include <regex>  
```  
  
## Remarks  
 To create a regular expression object, use the template class [basic_regex Class](../VS_visualcpp/basic_regex-Class.md) or one of its specializations, [regex](../VS_visualcpp/-regex--typedefs.md#regex_typedef) and [wregex](../VS_visualcpp/-regex--typedefs.md#wregex_typedef), together with the syntax flags of type [regex_constants::syntax_option_type](../VS_visualcpp/regex_constants-Class.md#regex_constants__syntax_option_type).  
  
 To search text for matches to a regular expression object, use the template functions [regex_match Function](../VS_visualcpp/-regex--functions.md#regex_match_function) and [regex_search Function](../VS_visualcpp/-regex--functions.md#regex_search_function), together with the match flags of type [regex_constants::match_flag_type](../VS_visualcpp/regex_constants-Class.md#regex_constants__match_flag_type). These functions return results by using the template class [match_results Class](../VS_visualcpp/match_results-Class.md) and its specializations, [cmatch](../VS_visualcpp/-regex--typedefs.md#cmatch_typedef), [wcmatch](../VS_visualcpp/-regex--typedefs.md#wcmatch_typedef), [smatch](../VS_visualcpp/-regex--typedefs.md#smatch_typedef), and [wsmatch](../VS_visualcpp/-regex--typedefs.md#wsmatch_typedef), together with the template class [sub_match Class](../VS_visualcpp/sub_match-Class.md) and its specializations, [csub_match](../VS_visualcpp/-regex--typedefs.md#csub_match_typedef), [wcsub_match](../VS_visualcpp/-regex--typedefs.md#wcsub_match_typedef), [ssub_match](../VS_visualcpp/-regex--typedefs.md#ssub_match_typedef), and [wssub_match](../VS_visualcpp/-regex--typedefs.md#wssub_match_typedef).  
  
 To replace text that matches a regular expression object, use the template function [regex_replace Function](../VS_visualcpp/-regex--functions.md#regex_replace_function), together with the match flags of type [regex_constants::match_flag_type](../VS_visualcpp/regex_constants-Class.md#regex_constants__match_flag_type).  
  
 To iterate through multiple matches of a regular expression object, use the template classes [regex_iterator Class](../VS_visualcpp/regex_iterator-Class.md) and [regex_token_iterator Class](../VS_visualcpp/regex_token_iterator-Class.md) or one of their specializations, [cregex_iterator](../VS_visualcpp/-regex--typedefs.md#cregex_iterator_typedef), [sregex_iterator](../VS_visualcpp/-regex--typedefs.md#sregex_iterator_typedef), [wcregex_iterator](../VS_visualcpp/-regex--typedefs.md#wcregex_iterator_typedef), [wsregex_iterator](../VS_visualcpp/-regex--typedefs.md#wsregex_iterator_typedef), [cregex_token_iterator](../VS_visualcpp/-regex--typedefs.md#cregex_token_iterator_typedef), [sregex_token_iterator](../VS_visualcpp/-regex--typedefs.md#sregex_token_iterator_typedef), [wcregex_token_iterator](../VS_visualcpp/-regex--typedefs.md#wcregex_token_iterator_typedef), or [wsregex_token_iterator](../VS_visualcpp/-regex--typedefs.md#wsregex_token_iterator_typedef), together with the match flags of type [regex_constants::match_flag_type](../VS_visualcpp/regex_constants-Class.md#regex_constants__match_flag_type).  
  
 To modify the details of the grammar of regular expressions, write a class that implements the regular expression traits.  
  
### Classes  
  
|||  
|-|-|  
|[basic_regex](../VS_visualcpp/basic_regex-Class.md)|Wraps a regular expression.|  
|[match_results](../VS_visualcpp/match_results-Class.md)|Holds a sequence of submatches.|  
|[regex_constants](../VS_visualcpp/regex_constants-Class.md)|Holds assorted constants.|  
|[regex_error](../VS_visualcpp/regex_error-Class.md)|Reports a bad regular expression.|  
|[regex_iterator](../VS_visualcpp/regex_iterator-Class.md)|Iterates through match results.|  
|[regex_traits](../VS_visualcpp/regex_traits-Class.md)|Describes characteristics of elements for matching.|  
|[regex_traits<char\>](../VS_visualcpp/regex_traits-char--Class.md)|Describes characteristics of `char` for matching.|  
|[regex_traits<wchar_t>](../VS_visualcpp/regex_traits-wchar_t--Class.md)|Describes characteristics of `wchar_t` for matching.|  
|[regex_token_iterator](../VS_visualcpp/regex_token_iterator-Class.md)|Iterates through submatches.|  
|[sub_match](../VS_visualcpp/sub_match-Class.md)|Describes a submatch.|  
  
### Type Definitions  
  
|||  
|-|-|  
|[cmatch](../VS_visualcpp/-regex--typedefs.md#cmatch_typedef)|Type definition for `char``match_results`.|  
|[cregex_iterator](../VS_visualcpp/-regex--typedefs.md#cregex_iterator_typedef)|Type definition for `char``regex_iterator`.|  
|[cregex_token_iterator](../VS_visualcpp/-regex--typedefs.md#cregex_token_iterator_typedef)|Type definition for `char``regex_token_iterator`.|  
|[csub_match](../VS_visualcpp/-regex--typedefs.md#csub_match_typedef)|Type definition for `char``sub_match`.|  
|[regex](../VS_visualcpp/-regex--typedefs.md#regex_typedef)|Type definition for `char``basic_regex`.|  
|[smatch](../VS_visualcpp/-regex--typedefs.md#smatch_typedef)|Type definition for `string``match_results`.|  
|[sregex_iterator](../VS_visualcpp/-regex--typedefs.md#sregex_iterator_typedef)|Type definition for `string``regex_iterator`.|  
|[sregex_token_iterator](../VS_visualcpp/-regex--typedefs.md#sregex_token_iterator_typedef)|Type definition for `string``regex_token_iterator`.|  
|[ssub_match](../VS_visualcpp/-regex--typedefs.md#ssub_match_typedef)|Type definition for `string``sub_match`.|  
|[wcmatch](../VS_visualcpp/-regex--typedefs.md#wcmatch_typedef)|Type definition for `wchar_t``match_results`.|  
|[wcregex_iterator](../VS_visualcpp/-regex--typedefs.md#wcregex_iterator_typedef)|Type definition for `wchar_t``regex_iterator`.|  
|[wcregex_token_iterator](../VS_visualcpp/-regex--typedefs.md#wcregex_token_iterator_typedef)|Type definition for `wchar_t``regex_token_iterator`.|  
|[wcsub_match](../VS_visualcpp/-regex--typedefs.md#wcsub_match_typedef)|Type definition for `wchar_t``sub_match`.|  
|[wregex](../VS_visualcpp/-regex--typedefs.md#wregex_typedef)|Type definition for `wchar_t``basic_regex`.|  
|[wsmatch](../VS_visualcpp/-regex--typedefs.md#wsmatch_typedef)|Type definition for `wstring``match_results`.|  
|[wsregex_iterator](../VS_visualcpp/-regex--typedefs.md#wsregex_iterator_typedef)|Type definition for `wstring``regex_iterator`.|  
|[wsregex_token_iterator](../VS_visualcpp/-regex--typedefs.md#wsregex_token_iterator_typedef)|Type definition for `wstring``regex_token_iterator`.|  
|[wssub_match](../VS_visualcpp/-regex--typedefs.md#wssub_match_typedef)|Type definition for `wstring``sub_match`.|  
  
### Functions  
  
|||  
|-|-|  
|[regex_match](../VS_visualcpp/-regex--functions.md#regex_match_function)|Exactly matches a regular expression.|  
|[regex_replace](../VS_visualcpp/-regex--functions.md#regex_replace_function)|Replaces matched regular expressions.|  
|[regex_search](../VS_visualcpp/-regex--functions.md#regex_search_function)|Searches for a regular expression match.|  
|[swap](../VS_visualcpp/-regex--functions.md#swap_function)|Swaps `basic_regex` or `match_results` objects.|  
  
### Operators  
  
|||  
|-|-|  
|[operator==](../VS_visualcpp/-regex--operators.md#operator_eq_eq)|Comparison of various objects, equal.|  
|[operator!=](../VS_visualcpp/-regex--operators.md#operator_neq)|Comparison of various objects, not equal.|  
|[operator<](../VS_visualcpp/-regex--operators.md#operator_lt_)|Comparison of various objects, less than.|  
|[operator<=](../VS_visualcpp/-regex--operators.md#operator_lt__eq)|Comparison of various objects, less than or equal.|  
|[operator>](../VS_visualcpp/-regex--operators.md#operator_gt_)|Comparison of various objects, greater than.|  
|[operator>=](../VS_visualcpp/-regex--operators.md#operator_gt__eq)|Comparison of various objects, greater than or equal.|  
|[operator<<](../VS_visualcpp/-regex--operators.md#operator_lt__lt_)|Inserts a `sub_match` in a stream.|  
  
## See Also  
 [Regular Expressions (C++)](../VS_visualcpp/Regular-Expressions--C---.md)