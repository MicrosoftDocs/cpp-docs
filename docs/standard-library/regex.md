---
title: "&lt;regex&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "<regex>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "regex header [TR1]"
ms.assetid: 5dd4ef74-6063-4dbc-b692-1960bb736f0b
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
# &lt;regex&gt;
Defines a template class to parse [Regular Expressions (C++)](../standard-library/regular-expressions-cpp.md), and several template classes and functions to search text for matches to a regular expression object.  
  
## Syntax  
  
```  
#include <regex>  
```  
  
## Remarks  
 To create a regular expression object, use the template class [basic_regex Class](../standard-library/basic-regex-class.md) or one of its specializations, [regex](../standard-library/regex-typedefs.md#regex_typedef) and [wregex](../standard-library/regex-typedefs.md#wregex_typedef), together with the syntax flags of type [regex_constants::syntax_option_type](../standard-library/regex-constants-class.md#regex_constants__syntax_option_type).  
  
 To search text for matches to a regular expression object, use the template functions [regex_match Function](../standard-library/regex-functions.md#regex_match_function) and [regex_search Function](../standard-library/regex-functions.md#regex_search_function), together with the match flags of type [regex_constants::match_flag_type](../standard-library/regex-constants-class.md#regex_constants__match_flag_type). These functions return results by using the template class [match_results Class](../standard-library/match-results-class.md) and its specializations, [cmatch](../standard-library/regex-typedefs.md#cmatch_typedef), [wcmatch](../standard-library/regex-typedefs.md#wcmatch_typedef), [smatch](../standard-library/regex-typedefs.md#smatch_typedef), and [wsmatch](../standard-library/regex-typedefs.md#wsmatch_typedef), together with the template class [sub_match Class](../standard-library/sub-match-class.md) and its specializations, [csub_match](../standard-library/regex-typedefs.md#csub_match_typedef), [wcsub_match](../standard-library/regex-typedefs.md#wcsub_match_typedef), [ssub_match](../standard-library/regex-typedefs.md#ssub_match_typedef), and [wssub_match](../standard-library/regex-typedefs.md#wssub_match_typedef).  
  
 To replace text that matches a regular expression object, use the template function [regex_replace Function](../standard-library/regex-functions.md#regex_replace_function), together with the match flags of type [regex_constants::match_flag_type](../standard-library/regex-constants-class.md#regex_constants__match_flag_type).  
  
 To iterate through multiple matches of a regular expression object, use the template classes [regex_iterator Class](../standard-library/regex-iterator-class.md) and [regex_token_iterator Class](../standard-library/regex-token-iterator-class.md) or one of their specializations, [cregex_iterator](../standard-library/regex-typedefs.md#cregex_iterator_typedef), [sregex_iterator](../standard-library/regex-typedefs.md#sregex_iterator_typedef), [wcregex_iterator](../standard-library/regex-typedefs.md#wcregex_iterator_typedef), [wsregex_iterator](../standard-library/regex-typedefs.md#wsregex_iterator_typedef), [cregex_token_iterator](../standard-library/regex-typedefs.md#cregex_token_iterator_typedef), [sregex_token_iterator](../standard-library/regex-typedefs.md#sregex_token_iterator_typedef), [wcregex_token_iterator](../standard-library/regex-typedefs.md#wcregex_token_iterator_typedef), or [wsregex_token_iterator](../standard-library/regex-typedefs.md#wsregex_token_iterator_typedef), together with the match flags of type [regex_constants::match_flag_type](../standard-library/regex-constants-class.md#regex_constants__match_flag_type).  
  
 To modify the details of the grammar of regular expressions, write a class that implements the regular expression traits.  
  
### Classes  
  
|||  
|-|-|  
|[basic_regex](../standard-library/basic-regex-class.md)|Wraps a regular expression.|  
|[match_results](../standard-library/match-results-class.md)|Holds a sequence of submatches.|  
|[regex_constants](../standard-library/regex-constants-class.md)|Holds assorted constants.|  
|[regex_error](../standard-library/regex-error-class.md)|Reports a bad regular expression.|  
|[regex_iterator](../standard-library/regex-iterator-class.md)|Iterates through match results.|  
|[regex_traits](../standard-library/regex-traits-class.md)|Describes characteristics of elements for matching.|  
|[regex_traits\<char>](../standard-library/regex-traits-char-class.md)|Describes characteristics of `char` for matching.|  
|[regex_traits<wchar_t>](../standard-library/regex-traits-wchar-t-class.md)|Describes characteristics of `wchar_t` for matching.|  
|[regex_token_iterator](../standard-library/regex-token-iterator-class.md)|Iterates through submatches.|  
|[sub_match](../standard-library/sub-match-class.md)|Describes a submatch.|  
  
### Type Definitions  
  
|||  
|-|-|  
|[cmatch](../standard-library/regex-typedefs.md#cmatch_typedef)|Type definition for `char``match_results`.|  
|[cregex_iterator](../standard-library/regex-typedefs.md#cregex_iterator_typedef)|Type definition for `char``regex_iterator`.|  
|[cregex_token_iterator](../standard-library/regex-typedefs.md#cregex_token_iterator_typedef)|Type definition for `char``regex_token_iterator`.|  
|[csub_match](../standard-library/regex-typedefs.md#csub_match_typedef)|Type definition for `char``sub_match`.|  
|[regex](../standard-library/regex-typedefs.md#regex_typedef)|Type definition for `char``basic_regex`.|  
|[smatch](../standard-library/regex-typedefs.md#smatch_typedef)|Type definition for `string``match_results`.|  
|[sregex_iterator](../standard-library/regex-typedefs.md#sregex_iterator_typedef)|Type definition for `string``regex_iterator`.|  
|[sregex_token_iterator](../standard-library/regex-typedefs.md#sregex_token_iterator_typedef)|Type definition for `string``regex_token_iterator`.|  
|[ssub_match](../standard-library/regex-typedefs.md#ssub_match_typedef)|Type definition for `string``sub_match`.|  
|[wcmatch](../standard-library/regex-typedefs.md#wcmatch_typedef)|Type definition for `wchar_t``match_results`.|  
|[wcregex_iterator](../standard-library/regex-typedefs.md#wcregex_iterator_typedef)|Type definition for `wchar_t``regex_iterator`.|  
|[wcregex_token_iterator](../standard-library/regex-typedefs.md#wcregex_token_iterator_typedef)|Type definition for `wchar_t``regex_token_iterator`.|  
|[wcsub_match](../standard-library/regex-typedefs.md#wcsub_match_typedef)|Type definition for `wchar_t``sub_match`.|  
|[wregex](../standard-library/regex-typedefs.md#wregex_typedef)|Type definition for `wchar_t``basic_regex`.|  
|[wsmatch](../standard-library/regex-typedefs.md#wsmatch_typedef)|Type definition for `wstring``match_results`.|  
|[wsregex_iterator](../standard-library/regex-typedefs.md#wsregex_iterator_typedef)|Type definition for `wstring``regex_iterator`.|  
|[wsregex_token_iterator](../standard-library/regex-typedefs.md#wsregex_token_iterator_typedef)|Type definition for `wstring``regex_token_iterator`.|  
|[wssub_match](../standard-library/regex-typedefs.md#wssub_match_typedef)|Type definition for `wstring``sub_match`.|  
  
### Functions  
  
|||  
|-|-|  
|[regex_match](../standard-library/regex-functions.md#regex_match_function)|Exactly matches a regular expression.|  
|[regex_replace](../standard-library/regex-functions.md#regex_replace_function)|Replaces matched regular expressions.|  
|[regex_search](../standard-library/regex-functions.md#regex_search_function)|Searches for a regular expression match.|  
|[swap](../standard-library/regex-functions.md#swap_function)|Swaps `basic_regex` or `match_results` objects.|  
  
### Operators  
  
|||  
|-|-|  
|[operator==](../standard-library/regex-operators.md#operator_eq_eq)|Comparison of various objects, equal.|  
|[operator!=](../standard-library/regex-operators.md#operator_neq)|Comparison of various objects, not equal.|  
|[operator<](../standard-library/regex-operators.md#operator_lt_)|Comparison of various objects, less than.|  
|[operator\<=](../standard-library/regex-operators.md#operator_lt__eq)|Comparison of various objects, less than or equal.|  
|[operator>](../standard-library/regex-operators.md#operator_gt_)|Comparison of various objects, greater than.|  
|[operator>=](../standard-library/regex-operators.md#operator_gt__eq)|Comparison of various objects, greater than or equal.|  
|[operator<<](../standard-library/regex-operators.md#operator_lt__lt_)|Inserts a `sub_match` in a stream.|  
  
## See Also  
 [Regular Expressions (C++)](../standard-library/regular-expressions-cpp.md)



