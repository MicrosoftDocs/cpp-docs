---
description: "Learn more about: regex_error Class"
title: "regex_error Class"
ms.date: "09/10/2018"
f1_keywords: ["regex/std::regex_error", "regex/std::regex_error::code"]
helpviewer_keywords: ["regex_error class"]
ms.assetid: 3333a1a3-ca6f-4612-84b2-1b4c7e3db5a4
---
# regex_error Class

Reports a bad basic_regex object.

## Syntax

```cpp
class regex_error
: public std::runtime_error
```

## Remarks

The class describes an exception object thrown to report an error in the construction or use of a `basic_regex` object.

### Constructors

|Constructor|Description|
|-|-|
|[regex_error](#regex_error)|Constructs the object.|

### Member functions

|Member function|Description|
|-|-|
|[code](#code)|Returns the error code.|

## Requirements

**Header:** \<regex>

**Namespace:** std

## Example

```cpp
// std__regex__regex_error.cpp
// compile with: /EHsc
#include <regex>
#include <iostream>

int main()
    {
    std::regex_error paren(std::regex_constants::error_paren);

    try
        {
        std::regex rx("(a");
        }
    catch (const std::regex_error& rerr)
        {
        std::cout << "regex error: "
            << (rerr.code() == paren.code() ? "unbalanced parentheses" : "")
            << std::endl;
        }
    catch (...)
        {
        std::cout << "unknown exception" << std::endl;
        }

    return (0);
    }
```

```Output
regex error: unbalanced parentheses
```

## <a name="code"></a> regex_error::code

Returns the error code.

```cpp
regex_constants::error_code code() const;
```

### Remarks

The member function returns the value that was passed to the object's constructor.

## <a name="regex_error"></a> regex_error::regex_error

Constructs the object.

```cpp
regex_error(regex_constants::error_code error);
```

### Parameters

*error*\
The error code.

### Remarks

The constructor constructs an object that holds the value *error*.

## See also

[\<regex>](../standard-library/regex.md)\
[regex_constants Class](../standard-library/regex-constants-class.md)\
[\<regex> functions](../standard-library/regex-functions.md)\
[regex_iterator Class](../standard-library/regex-iterator-class.md)\
[\<regex> operators](../standard-library/regex-operators.md)\
[regex_token_iterator Class](../standard-library/regex-token-iterator-class.md)\
[regex_traits Class](../standard-library/regex-traits-class.md)\
[\<regex> typedefs](../standard-library/regex-typedefs.md)
