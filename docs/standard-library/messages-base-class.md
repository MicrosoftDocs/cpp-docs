---
title: "messages_base Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["xlocmes/std::messages_base"]
dev_langs: ["C++"]
helpviewer_keywords: ["messages_base class"]
ms.assetid: 9aad38c6-4c13-445d-b096-364bd0836efb
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# messages_base Class

The base class describes an `int` type for the catalog of messages.

## Syntax

```cpp
struct messages_base : locale::facet {
    typedef int catalog;
    explicit messages_base(size_t _Refs = 0)
};
```

## Remarks

The type catalog is a synonym for type `int` that describes the possible return values from messages:: [do_open](../standard-library/messages-class.md#do_open).

## Requirements

**Header:** \<locale>

**Namespace:** std

## See also

[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
