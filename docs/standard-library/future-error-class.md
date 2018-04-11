---
title: "future_error Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-standard-libraries"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["future/std::future_error"]
dev_langs: ["C++"]
ms.assetid: 6071c545-ac2a-49ef-9967-07b0125da861
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# future_error Class

Describes an exception object that can be thrown by methods of types that manage [future](../standard-library/future-class.md) objects.

## Syntax

```cpp
class future_error : public logic_error {
public:
    future_error(error_code code);

const error_code& code() const throw();

const char *what() const throw();

};
```

## Requirements

**Header:** \<future>

**Namespace:** std

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)<br/>
[logic_error Class](../standard-library/logic-error-class.md)<br/>
[error_code Class](../standard-library/error-code-class.md)<br/>
