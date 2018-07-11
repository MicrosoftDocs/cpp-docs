---
title: "char_traits&lt;wchar_t&gt; Struct | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["char_traits<wchar_t>", "iosfwd/std::char_traits<wchar_t>"]
dev_langs: ["C++"]
helpviewer_keywords: ["char_traits<wchar_t> class"]
ms.assetid: 31f34072-04d6-4871-88fe-48e17d473484
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# char_traits&lt;wchar_t&gt; Struct

A class that is a specialization of the template struct **char_traits\<CharType>** to an element of type **wchar_t**.

## Syntax

```cpp
template <>
struct char_traits<wchar_t>;
```

## Remarks

Specialization allows the struct to take advantage of library functions that manipulate objects of this type **wchar_t**.

## Requirements

**Header:** \<string>

**Namespace:** std

## See also

[char_traits Struct](../standard-library/char-traits-struct.md)<br/>
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
