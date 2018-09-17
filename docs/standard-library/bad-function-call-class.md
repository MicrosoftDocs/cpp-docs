---
title: "bad_function_call Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["functional/std::bad_function_call"]
dev_langs: ["C++"]
helpviewer_keywords: ["bad_function_call class"]
ms.assetid: b70a0268-43ff-4f3b-a283-faf1cb172d4c
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# bad_function_call Class

Reports a bad function call.

## Syntax

```cpp
class bad_function_call : public std::exception {};
```

## Remarks

The class describes an exception thrown to indicate that a call to `operator()` on a [function Class](../standard-library/function-class.md)
