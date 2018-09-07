---
title: "regex_traits&lt;char&gt; Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["regex/std::regex_traits<char>"]
dev_langs: ["C++"]
helpviewer_keywords: ["regex_traits<char> class"]
ms.assetid: ce95ebcd-3687-4ad5-bf1d-b89fdc633675
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# regex_traits&lt;char&gt; Class

Specialization of regex_traits for char.

## Syntax

```cpp
template <>
class regex_traits<char>
```

## Remarks

The class is an explicit specialization of template class [regex_traits](../standard-library/regex-traits-class.md) for elements of type **char** (so that it can take advantage of library functions that manipulate objects of this type).

## Requirements

**Header:** \<regex>

**Namespace:** std

## See also

[\<regex>](../standard-library/regex.md)<br/>
[regex_constants Class](../standard-library/regex-constants-class.md)<br/>
[regex_error Class](../standard-library/regex-error-class.md)<br/>
[\<regex> functions](../standard-library/regex-functions.md)<br/>
[regex_iterator Class](../standard-library/regex-iterator-class.md)<br/>
[\<regex> operators](../standard-library/regex-operators.md)<br/>
[regex_token_iterator Class](../standard-library/regex-token-iterator-class.md)<br/>
[regex_traits Class](../standard-library/regex-traits-class.md)<br/>
[\<regex> typedefs](../standard-library/regex-typedefs.md)<br/>
