---
title: "regex_traits&lt;wchar_t&gt; Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["regex/std::regex_traits<wchar_t>"]
dev_langs: ["C++"]
helpviewer_keywords: ["regex_traits<wchar_t> class"]
ms.assetid: 288d6fdb-fb8e-4a4d-904a-53916be7f95b
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# regex_traits&lt;wchar_t&gt; Class

Specialization of regex_traits for wchar_t.

## Syntax

```cpp
template <>
class regex_traits<wchar_t>
```

## Remarks

The class is an explicit specialization of template class [regex_traits](../standard-library/regex-traits-class.md) for elements of type **wchar_t** (so that it can take advantage of library functions that manipulate objects of this type).

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
