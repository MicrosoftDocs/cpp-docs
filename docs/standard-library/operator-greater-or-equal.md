---
title: "operator&gt;= | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["operator>=", "std::>=", "std.operator>=", ">=", "std.>=", "std::operator>="]
dev_langs: ["C++"]
helpviewer_keywords: [">= operator, comparing specific objects", "operator >=", "operator>="]
ms.assetid: 14fbebf5-8b75-4afa-a51b-3112d31c07cf
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# operator&gt;=

> [!NOTE]
> This topic is in the Visual C++ documentation as a nonfunctional example of containers used in the C++ Standard Library. For more information, see [C++ Standard Library Containers](../standard-library/stl-containers.md).

Overloads **operator>=** to compare two objects of template class [Container](../standard-library/sample-container-class.md).

## Syntax

```cpp
template <class Ty>
bool operator>=(
    const Container <Ty>& left,
    const Container <Ty>& right);
```

## Return Value

Returns `!(left < right)`.

## See also

[\<sample container>](../standard-library/sample-container.md)<br/>
