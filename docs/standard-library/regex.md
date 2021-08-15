---
description: "Learn more about: &lt;regex&gt;"
title: "&lt;regex&gt;"
ms.date: "11/04/2016"
f1_keywords: ["<regex>"]
helpviewer_keywords: ["regex header"]
ms.assetid: 5dd4ef74-6063-4dbc-b692-1960bb736f0b
---
# &lt;regex&gt;

Defines a class template to parse [Regular Expressions (C++)](../standard-library/regular-expressions-cpp.md), and several class templates and functions to search text for matches to a regular expression object.

## Syntax

```cpp
#include <regex>
```

## Remarks

To create a regular expression object, use the class template [basic_regex Class](../standard-library/basic-regex-class.md) or one of its specializations, [regex](../standard-library/regex-typedefs.md#regex) and [wregex](../standard-library/regex-typedefs.md#wregex), together with the syntax flags of type [regex_constants::syntax_option_type](../standard-library/regex-constants-class.md#syntax_option_type).

To search text for matches to a regular expression object, use the template functions [regex_match](../standard-library/regex-functions.md#regex_match) and [regex_search](../standard-library/regex-functions.md#regex_search), together with the match flags of type [regex_constants::match_flag_type](../standard-library/regex-constants-class.md#match_flag_type). These functions return results by using the class template [match_results Class](../standard-library/match-results-class.md) and its specializations, [cmatch](../standard-library/regex-typedefs.md#cmatch), [wcmatch](../standard-library/regex-typedefs.md#wcmatch), [smatch](../standard-library/regex-typedefs.md#smatch), and [wsmatch](../standard-library/regex-typedefs.md#wsmatch), together with the class template [sub_match Class](../standard-library/sub-match-class.md) and its specializations, [csub_match](../standard-library/regex-typedefs.md#csub_match), [wcsub_match](../standard-library/regex-typedefs.md#wcsub_match), [ssub_match](../standard-library/regex-typedefs.md#ssub_match), and [wssub_match](../standard-library/regex-typedefs.md#wssub_match).

To replace text that matches a regular expression object, use the template function [regex_replace](../standard-library/regex-functions.md#regex_replace), together with the match flags of type [regex_constants::match_flag_type](../standard-library/regex-constants-class.md#match_flag_type).

To iterate through multiple matches of a regular expression object, use the class templates [regex_iterator Class](../standard-library/regex-iterator-class.md) and [regex_token_iterator Class](../standard-library/regex-token-iterator-class.md) or one of their specializations, [cregex_iterator](../standard-library/regex-typedefs.md#cregex_iterator), [sregex_iterator](../standard-library/regex-typedefs.md#sregex_iterator), [wcregex_iterator](../standard-library/regex-typedefs.md#wcregex_iterator), [wsregex_iterator](../standard-library/regex-typedefs.md#wsregex_iterator), [cregex_token_iterator](../standard-library/regex-typedefs.md#cregex_token_iterator), [sregex_token_iterator](../standard-library/regex-typedefs.md#sregex_token_iterator), [wcregex_token_iterator](../standard-library/regex-typedefs.md#wcregex_token_iterator), or [wsregex_token_iterator](../standard-library/regex-typedefs.md#wsregex_token_iterator), together with the match flags of type [regex_constants::match_flag_type](../standard-library/regex-constants-class.md#match_flag_type).

To modify the details of the grammar of regular expressions, write a class that implements the regular expression traits.

### Classes

|Class|Description|
|-|-|
|[basic_regex](../standard-library/basic-regex-class.md)|Wraps a regular expression.|
|[match_results](../standard-library/match-results-class.md)|Holds a sequence of submatches.|
|[regex_constants](../standard-library/regex-constants-class.md)|Holds assorted constants.|
|[regex_error](../standard-library/regex-error-class.md)|Reports a bad regular expression.|
|[regex_iterator](../standard-library/regex-iterator-class.md)|Iterates through match results.|
|[regex_traits](../standard-library/regex-traits-class.md)|Describes characteristics of elements for matching.|
|[regex_traits\<char>](../standard-library/regex-traits-char-class.md)|Describes characteristics of **`char`** for matching.|
|[regex_traits<wchar_t>](../standard-library/regex-traits-wchar-t-class.md)|Describes characteristics of **`wchar_t`** for matching.|
|[regex_token_iterator](../standard-library/regex-token-iterator-class.md)|Iterates through submatches.|
|[sub_match](../standard-library/sub-match-class.md)|Describes a submatch.|

### Type Definitions

|Name|Description|
|-|-|
|[cmatch](../standard-library/regex-typedefs.md#cmatch)|Type definition for **`char`** `match_results`.|
|[cregex_iterator](../standard-library/regex-typedefs.md#cregex_iterator)|Type definition for **`char`** `regex_iterator`.|
|[cregex_token_iterator](../standard-library/regex-typedefs.md#cregex_token_iterator)|Type definition for **`char`** `regex_token_iterator`.|
|[csub_match](../standard-library/regex-typedefs.md#csub_match)|Type definition for **`char`** `sub_match`.|
|[regex](../standard-library/regex-typedefs.md#regex)|Type definition for **`char`** `basic_regex`.|
|[smatch](../standard-library/regex-typedefs.md#smatch)|Type definition for `string` `match_results`.|
|[sregex_iterator](../standard-library/regex-typedefs.md#sregex_iterator)|Type definition for `string` `regex_iterator`.|
|[sregex_token_iterator](../standard-library/regex-typedefs.md#sregex_token_iterator)|Type definition for `string` `regex_token_iterator`.|
|[ssub_match](../standard-library/regex-typedefs.md#ssub_match)|Type definition for `string` `sub_match`.|
|[wcmatch](../standard-library/regex-typedefs.md#wcmatch)|Type definition for **`wchar_t`** `match_results`.|
|[wcregex_iterator](../standard-library/regex-typedefs.md#wcregex_iterator)|Type definition for **`wchar_t`** `regex_iterator`.|
|[wcregex_token_iterator](../standard-library/regex-typedefs.md#wcregex_token_iterator)|Type definition for **`wchar_t`** `regex_token_iterator`.|
|[wcsub_match](../standard-library/regex-typedefs.md#wcsub_match)|Type definition for **`wchar_t`** `sub_match`.|
|[wregex](../standard-library/regex-typedefs.md#wregex)|Type definition for **`wchar_t`** `basic_regex`.|
|[wsmatch](../standard-library/regex-typedefs.md#wsmatch)|Type definition for `wstring` `match_results`.|
|[wsregex_iterator](../standard-library/regex-typedefs.md#wsregex_iterator)|Type definition for `wstring` `regex_iterator`.|
|[wsregex_token_iterator](../standard-library/regex-typedefs.md#wsregex_token_iterator)|Type definition for `wstring` `regex_token_iterator`.|
|[wssub_match](../standard-library/regex-typedefs.md#wssub_match)|Type definition for `wstring` `sub_match`.|

### Functions

|Function|Description|
|-|-|
|[regex_match](../standard-library/regex-functions.md#regex_match)|Exactly matches a regular expression.|
|[regex_replace](../standard-library/regex-functions.md#regex_replace)|Replaces matched regular expressions.|
|[regex_search](../standard-library/regex-functions.md#regex_search)|Searches for a regular expression match.|
|[swap](../standard-library/regex-functions.md#swap)|Swaps `basic_regex` or `match_results` objects.|

### Operators

|Operator|Description|
|-|-|
|[operator==](../standard-library/regex-operators.md#op_eq_eq)|Comparison of various objects, equal.|
|[operator!=](../standard-library/regex-operators.md#op_neq)|Comparison of various objects, not equal.|
|[operator<](../standard-library/regex-operators.md#op_lt)|Comparison of various objects, less than.|
|[operator\<=](../standard-library/regex-operators.md#op_gt_eq)|Comparison of various objects, less than or equal.|
|[operator>](../standard-library/regex-operators.md#op_gt)|Comparison of various objects, greater than.|
|[operator>=](../standard-library/regex-operators.md#op_gt_eq)|Comparison of various objects, greater than or equal.|
|[operator<<](../standard-library/regex-operators.md#op_lt_lt)|Inserts a `sub_match` in a stream.|

## See also

[Regular Expressions (C++)](../standard-library/regular-expressions-cpp.md)\
[regex_constants Class](../standard-library/regex-constants-class.md)\
[regex_error Class](../standard-library/regex-error-class.md)\
[\<regex> functions](../standard-library/regex-functions.md)\
[regex_iterator Class](../standard-library/regex-iterator-class.md)\
[\<regex> operators](../standard-library/regex-operators.md)\
[regex_token_iterator Class](../standard-library/regex-token-iterator-class.md)\
[regex_traits Class](../standard-library/regex-traits-class.md)\
[\<regex> typedefs](../standard-library/regex-typedefs.md)
