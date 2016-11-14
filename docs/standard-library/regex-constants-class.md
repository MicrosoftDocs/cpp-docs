---
title: "regex_constants Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std::tr1::regex_constants"
  - "std.tr1.regex_constants"
  - "regex_constants"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "regex_constants class [TR1]"
ms.assetid: 4a69c0ba-c46d-46e4-bd29-6f4efb805f26
caps.latest.revision: 18
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
# regex_constants Class
Namespace for regular expression flags.  
  
## Syntax  
  
```  
namespace regex_constants {  
    typedef T1 syntax_option_type;  
    typedef T2 match_flag_type;  
    typedef T3 error_type;  
 }  
```  
  
## Remarks  
 The namespace `regex_constants` encapsulates several flag types and their associated flag values.  
  
## Requirements  
 **Header:** \<regex>  
  
 **Namespace:** std  
  
##  <a name="regex_constants__error_type"></a>  regex_constants::error_type  
 Flags for reporting regular expression syntax errors.  
  
```  
typedef T3 error_type;  
static const error_type error_badbrace,
    error_badrepeat,
    error_brace,  
    error_brack,
    error_collate,
    error_complexity,
    error_ctype,  
    error_escape,
    error_paren,
    error_range,
    error_space,  
    error_stack,
    error_backref;  
```  
  
### Remarks  
 The type is an enumerated type that describes an object that can hold error flags. The distinct flag values are:  
  
 `error_badbrace` -- the expression contained an invalid count in a { } expression  
  
 `error_badrepeat` -- a repeat expression (one of '*', '', '+', '{' in most contexts) was not preceded by an expression  
  
 `error_brace` -- the expression contained an unmatched '{' or '}'  
  
 `error_brack` -- the expression contained an unmatched '[' or ']'  
  
 `error_collate` -- the expression contained an invalid collating element name  
  
 `error_complexity` -- an attempted match failed because it was too complex  
  
 `error_ctype` -- the expression contained an invalid character class name  
  
 `error_escape` -- the expression contained an invalid escape sequence  
  
 `error_paren` -- the expression contained an unmatched '(' or ')'  
  
 `error_range` -- the expression contained an invalid character range specifier  
  
 `error_space` -- parsing a regular expression failed because there were not enough resources available  
  
 `error_stack` -- an attempted match failed because there was not enough memory available  
  
 `error_backref` -- the expression contained an invalid back reference  
  
##  <a name="regex_constants__match_flag_type"></a>  regex_constants::match_flag_type  
 Flags for regular expression matching options.  
  
```  
typedef T2 match_flag_type;  
static const match_flag_type match_any,
    match_default,
    match_not_bol,  
    match_not_bow,
    match_continuous,
    match_not_eol,
    match_not_eow,  
    match_not_null,
    match_partial,
    match_prev_avail;  
```  
  
### Remarks  
 The type is a bitmask type that describes options to be used when matching a text sequence against a regular expression and format flags to be used when replacing text. Options can be combined with `|`.  
  
 The match options are:  
  
 `match_default`  
  
 `match_not_bol` -- do not treat the first position in the target sequence as the beginning of a line  
  
 `match_not_eol` -- do not treat the past-the-end position in the target sequence as the end of a line  
  
 `match_not_bow` -- do not treat the first position in the target sequence as the beginning of a word  
  
 `match_not_eow` -- do not treat the past-the-end position in the target sequence as the end of a word  
  
 `match_any` -- if more than one match is possible any match is acceptable  
  
 `match_not_null` -- do not treat an empty subsequence as a match  
  
 `match_continuous` -- do not search for matches other than at the beginning of the target sequence  
  
 `match_prev_avail` -- `--first` is a valid iterator; ignore `match_not_bol` and `match_not_bow` if set  
  
 The format flags are:  
  
 `format_default` -- use ECMAScript format rules  
  
 `format_sed` -- use sed format rules  
  
 `format_no_copy` -- do not copy text that does not match the regular expression  
  
 `format_first_only` -- do not search for matches after the first one  
  
##  <a name="regex_constants__syntax_option_type"></a>  regex_constants::syntax_option_type  
 Flags for selecting syntax options.  
  
```  
typedef T1 syntax_option_type;  
static const syntax_option_type awk,
    basic,
    collate,
    ECMAScript,  
    egrep,
    extended,
    grep,
    icase,
    nosubs,
    optimize;  
```  
  
### Remarks  
 The type is a bitmask type that describes language specifiers and syntax modifiers to be used when compiling a regular expression. Options can be combined with `|`. No more than one language specifier should be used at a time.  
  
 The language specifiers are:  
  
 `basic` -- compile as BRE  
  
 `extended` -- compile as ERE  
  
 `ECMAScript` -- compile as ECMAScript  
  
 `awk` -- compile as awk  
  
 `grep` -- compile as grep  
  
 `egrep` -- compile as egrep  
  
 The syntax modifiers are:  
  
 `icase` -- make matches case-insensitive  
  
 `nosubs` -- the implementaton need not keep track of the contents of capture groups  
  
 `optimize` -- the implementation should emphasize speed of matching rather than speed of regular expression compilation  
  
 `collate` -- make matches locale-sensitive  
  
## See Also  
 [\<regex>](../standard-library/regex.md)   
 [regex_constants](../standard-library/regex-constants-class.md)
