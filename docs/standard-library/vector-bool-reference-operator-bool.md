---
title: "vector&lt;bool&gt;::reference::operator bool | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-standard-libraries"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["operatorbool", "vector<bool>::reference::operatorbool", "bool", "std::vector<bool>::reference::operatorbool"]
dev_langs: ["C++"]
helpviewer_keywords: ["BOOL operator", "reference::operator bool"]
ms.assetid: b0e57869-18cc-4296-9061-da502f30120d
caps.latest.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# vector&lt;bool&gt;::reference::operator bool

Provides an implicit conversion from `vector<bool>::reference` to `bool`.

## Syntax

```cpp
operator bool() const;
```

## Return Value

The Boolean value of the element of the [vector\<bool>](../standard-library/vector-bool-class.md) object.

## Remarks

The `vector<bool>` object cannot be modified by this operator.

## Requirements

**Header:** \<vector>

**Namespace:** std

## See also

[vector\<bool>::reference Class](../standard-library/vector-bool-reference-class.md)<br/>
[C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)<br/>
