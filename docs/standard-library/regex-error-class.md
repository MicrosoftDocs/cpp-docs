---
title: "regex_error Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["regex/std::regex_error", "regex/std::regex_error::code"]
dev_langs: ["C++"]
helpviewer_keywords: ["regex_error class"]
ms.assetid: 3333a1a3-ca6f-4612-84b2-1b4c7e3db5a4
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# regex_error Class

Reports a bad basic_regex object.

## Syntax

```cpp
class regex_error
: public std::runtime_error {
public:
    explicit regex_error(regex_constants::error_code error);

    regex_constants::error_code code() const;


};
```

## Remarks

The class describes an exception object thrown to report an error in the construction or use of a `basic_regex` object.

## Requirements

**Header:** \<regex>

**Namespace:** std

## <a name="code"></a>  regex_error::code

Returns the error code.

```cpp
regex_constants::error_code code() const;
```

### Remarks

The member function returns the value that was passed to the object's constructor.

### Example

```cpp
// std__regex__regex_error_code.cpp
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
            << (rerr.code() == paren.code()
                 "unbalanced parentheses" : "")
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

## <a name="regex_error"></a>  regex_error::regex_error

Constructs the object.

```cpp
regex_error(regex_constants::error_code error);
```

### Parameters

*error*<br/>
The error code.

### Remarks

The constructor constructs an object that holds the value *error*.

### Example

```cpp
// std__regex__regex_error_construct.cpp
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
            << (rerr.code() == paren.code()
                 "unbalanced parentheses" : "")
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

## See also

[\<regex>](../standard-library/regex.md)<br/>
[regex_constants Class](../standard-library/regex-constants-class.md)<br/>
[\<regex> functions](../standard-library/regex-functions.md)<br/>
[regex_iterator Class](../standard-library/regex-iterator-class.md)<br/>
[\<regex> operators](../standard-library/regex-operators.md)<br/>
[regex_token_iterator Class](../standard-library/regex-token-iterator-class.md)<br/>
[regex_traits Class](../standard-library/regex-traits-class.md)<br/>
[\<regex> typedefs](../standard-library/regex-typedefs.md)<br/>
