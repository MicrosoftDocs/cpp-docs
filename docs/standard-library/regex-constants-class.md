---
description: "Learn more about: regex_constants namespace"
title: "regex_constants Class"
ms.date: "09/10/2018"
f1_keywords: ["regex/std::regex_constants", "regex/std::regex_constants::error_collate", "regex/std::regex_constants::error_ctype", "regex/std::regex_constants::error_escape", "regex/std::regex_constants::error_backref", "regex/std::regex_constants::error_brack", "regex/std::regex_constants::error_paren", "regex/std::regex_constants::error_brace", "regex/std::regex_constants::error_badbrace", "regex/std::regex_constants::error_range", "regex/std::regex_constants::error_space", "regex/std::regex_constants::error_badrepeat", "regex/std::regex_constants::error_complexity", "regex/std::regex_constants::error_stack", "regex/std::regex_constants::error_parse", "regex/std::regex_constants::error_syntax", "regex/std::regex_constants::match_default", "regex/std::regex_constants::match_not_bol", "regex/std::regex_constants::match_not_eol", "regex/std::regex_constants::match_not_bow", "regex/std::regex_constants::match_not_eow", "regex/std::regex_constants::match_any", "regex/std::regex_constants::match_not_null", "regex/std::regex_constants::match_continuous", "regex/std::regex_constants::match_prev_avail", "regex/std::regex_constants::format_default", "regex/std::regex_constants::format_sed", "regex/std::regex_constants::format_no_copy", "regex/std::regex_constants::format_first_only", "regex/std::regex_constants::ECMAScript", "regex/std::regex_constants::basic", "regex/std::regex_constants::extended", "regex/std::regex_constants::awk", "regex/std::regex_constants::grep", "regex/std::regex_constants::egrep", "regex/std::regex_constants::icase", "regex/std::regex_constants::nosubs", "regex/std::regex_constants::optimize", "regex/std::regex_constants::collate"]
helpviewer_keywords: ["std::regex_constants [C++]", "std::regex_constants [C++], error_collate", "std::regex_constants [C++], error_ctype", "std::regex_constants [C++], error_escape", "std::regex_constants [C++], error_backref", "std::regex_constants [C++], error_brack", "std::regex_constants [C++], error_paren", "std::regex_constants [C++], error_brace", "std::regex_constants [C++], error_badbrace", "std::regex_constants [C++], error_range", "std::regex_constants [C++], error_space", "std::regex_constants [C++], error_badrepeat", "std::regex_constants [C++], error_complexity", "std::regex_constants [C++], error_stack", "std::regex_constants [C++], error_parse", "std::regex_constants [C++], error_syntax", "std::regex_constants [C++], match_default", "std::regex_constants [C++], match_not_bol", "std::regex_constants [C++], match_not_eol", "std::regex_constants [C++], match_not_bow", "std::regex_constants [C++], match_not_eow", "std::regex_constants [C++], match_any", "std::regex_constants [C++], match_not_null", "std::regex_constants [C++], match_continuous", "std::regex_constants [C++], match_prev_avail", "std::regex_constants [C++], format_default", "std::regex_constants [C++], format_sed", "std::regex_constants [C++], format_no_copy", "std::regex_constants [C++], format_first_only", "std::regex_constants [C++], ECMAScript", "std::regex_constants [C++], basic", "std::regex_constants [C++], extended", "std::regex_constants [C++], awk", "std::regex_constants [C++], grep", "std::regex_constants [C++], egrep", "std::regex_constants [C++], icase", "std::regex_constants [C++], nosubs", "std::regex_constants [C++], optimize", "std::regex_constants [C++], collate"]
ms.assetid: 4a69c0ba-c46d-46e4-bd29-6f4efb805f26
---
# regex_constants namespace

Namespace for regular expression flags.

## Syntax

```cpp
namespace regex_constants {
    enum syntax_option_type;
    enum match_flag_type;
    enum error_type;
}
```

## Remarks

The namespace `regex_constants` encapsulates several flag types and their associated flag values.

|Name|Description|
|-|-|
|[error_type](#error_type)|Flags for reporting regular expression syntax errors.|
|[match_flag_type](#match_flag_type)|Flags for regular expression matching options.|
|[syntax_option_type](#syntax_option_type)|Flags for selecting syntax options.|

## Requirements

**Header:** \<regex>

**Namespace:** std

## <a name="error_type"></a> regex_constants::error_type

Flags for reporting regular expression syntax errors.

```cpp
enum error_type
    {    // identify error
    error_collate,
    error_ctype,
    error_escape,
    error_backref,
    error_brack,
    error_paren,
    error_brace,
    error_badbrace,
    error_range,
    error_space,
    error_badrepeat,
    error_complexity,
    error_stack,
    error_parse,
    error_syntax
    };
```

### Remarks

The type is an enumerated type that describes an object that can hold error flags. The distinct flag values are:

`error_backref` -- the expression contained an invalid back reference

`error_badbrace` -- the expression contained an invalid count in a { } expression

`error_badrepeat` -- a repeat expression (one of '*', '', '+', '{' in most contexts) was not preceded by an expression

`error_brace` -- the expression contained an unmatched '{' or '}'

`error_brack` -- the expression contained an unmatched '[' or ']'

`error_collate` -- the expression contained an invalid collating element name

`error_complexity` -- an attempted match failed because it was too complex

`error_ctype` -- the expression contained an invalid character class name

`error_escape` -- the expression contained an invalid escape sequence

`error_paren` -- the expression contained an unmatched '(' or ')'

`error_parse` -- the expression failed to parse

`error_range` -- the expression contained an invalid character range specifier

`error_space` -- parsing a regular expression failed because there were not enough resources available

`error_stack` -- an attempted match failed because there was not enough memory available

`error_syntax` -- parsing failed on a syntax error

`error_backref` -- the expression contained an invalid back reference

## <a name="match_flag_type"></a> regex_constants::match_flag_type

Flags for regular expression matching options.

```cpp
enum match_flag_type
    {    // specify matching and formatting rules
    match_default = 0x0000,
    match_not_bol = 0x0001,
    match_not_eol = 0x0002,
    match_not_bow = 0x0004,
    match_not_eow = 0x0008,
    match_any = 0x0010,
    match_not_null = 0x0020,
    match_continuous = 0x0040,
    match_prev_avail = 0x0100,
    format_default = 0x0000,
    format_sed = 0x0400,
    format_no_copy = 0x0800,
    format_first_only = 0x1000,
    _Match_not_null = 0x2000
    };
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

## <a name="syntax_option_type"></a> regex_constants::syntax_option_type

Flags for selecting syntax options.

```cpp
enum syntax_option_type
    {    // specify RE syntax rules
    ECMAScript = 0x01,
    basic = 0x02,
    extended = 0x04,
    awk = 0x08,
    grep = 0x10,
    egrep = 0x20,
    _Gmask = 0x3F,

    icase = 0x0100,
    nosubs = 0x0200,
    optimize = 0x0400,
    collate = 0x0800
    };
```

### Remarks

The type is a bitmask type that describes language specifiers and syntax modifiers to be used when compiling a regular expression. Options can be combined with `|`. No more than one language specifier should be used at a time.

The language specifiers are:

`ECMAScript` -- compile as ECMAScript

`basic` -- compile as BRE

`extended` -- compile as ERE

`awk` -- compile as awk

`grep` -- compile as grep

`egrep` -- compile as egrep

The syntax modifiers are:

`icase` -- make matches case-insensitive

`nosubs` -- the implementaton need not keep track of the contents of capture groups

`optimize` -- the implementation should emphasize speed of matching rather than speed of regular expression compilation

`collate` -- make matches locale-sensitive

## See also

[\<regex>](../standard-library/regex.md)\
[regex_error Class](../standard-library/regex-error-class.md)\
[\<regex> functions](../standard-library/regex-functions.md)\
[regex_iterator Class](../standard-library/regex-iterator-class.md)\
[\<regex> operators](../standard-library/regex-operators.md)\
[regex_token_iterator Class](../standard-library/regex-token-iterator-class.md)\
[regex_traits Class](../standard-library/regex-traits-class.md)\
[\<regex> typedefs](../standard-library/regex-typedefs.md)
