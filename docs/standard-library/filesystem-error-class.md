---
title: "filesystem_error Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["filesystem/std::experimental::filesystem::filesystem_error"]
dev_langs: ["C++"]
ms.assetid: c53aac27-c1fa-43e4-8967-48ea8ba1f172
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# filesystem_error Class

A base class for all exceptions that are thrown to report a low-level system overflow.

## Syntax

```cpp
class filesystem_error    : public system_error;
```

## Remarks

The class serves as the base class for all exceptions thrown to report an error in \<filesystem> functions. It stores an object of type string, called mymesg here for the purposes of exposition. It also stores two objects of type path, called mypval1 and mypval2.

## filesystem_error::filesystem_error

```cpp
filesystem_error(const string& what_arg,
    error_code ec);

filesystem_error(const string& what_arg,
    const path& pval1,
    error_code ec);

filesystem_error(const string& what_arg,
    const path& pval1,
    const path& pval2,
    error_code ec);
```

The first constructor constructs its message from what_arg and ec. The second constructor also constructs its message from pval1, which it stores in mypval1. The third constructor also constructs its message from pval1, which it stores in mypval1, and from pval2, which it stores in mypval2.

## filesystem_error::path1

```cpp
const path& path1() const noexcept;
```

The member function returns mypval1

## filesystem_error::path2

```cpp
const path& path2() const noexcept;
```

The member function returns mypval2

## filesystem_error::what

```cpp
const char *what() const noexcept;
```

The member function returns a pointer to an NTBS, preferably composed from runtime_error::what(), system_error::what(), mymesg, mypval1.native_string(), and mypval2.native_string().

## Requirements

**Header:** \<filesystem>

**Namespace:** std::experimental::filesystem

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)<br/>
[system_error Class](../standard-library/system-error-class.md)<br/>
[\<filesystem>](../standard-library/filesystem.md)<br/>
[\<exception>](../standard-library/exception.md)<br/>
