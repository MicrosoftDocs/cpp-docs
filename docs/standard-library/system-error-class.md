---
title: "system_error Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["system_error/std::system_error"]
dev_langs: ["C++"]
helpviewer_keywords: ["system_error class"]
ms.assetid: 2eeaacbb-8a4a-4ad7-943a-997901a77f32
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# system_error Class

Represents the base class for all exceptions thrown to report a low-level system error.

## Syntax

```cpp
class system_error : public runtime_error {
public:
    explicit system_error(error_code _Errcode,
    const string& _Message = "");

    system_error(error_code _Errcode,
    const char *_Message);

    system_error(error_code::value_type _Errval,
    const error_category& _Errcat,
    const string& _Message);

    system_error(error_code::value_type _Errval,
    const error_category& _Errcat,
    const char *_Message);
const error_code& code() const throw();
const error_code& code() const throw();

};
```

## Remarks

The value returned by `what` in the class [exception](../standard-library/exception-class.md) is constructed from `_Message` and the stored object of type [error_code](../standard-library/error-code-class.md) (either `code` or `error_code(_Errval, _Errcat)`).

The member function `code` returns the stored [error_code](../standard-library/error-code-class.md) object.

## Requirements

**Header:** \<system_error>

**Namespace:** std

## See also

[<system_error>](../standard-library/system-error.md)<br/>
