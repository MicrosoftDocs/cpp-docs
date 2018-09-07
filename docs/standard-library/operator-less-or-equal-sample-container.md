---
title: "operator&lt;= (&lt;sample container&gt;) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["std::<=", "std.operator<=", "operator<=", "std.<=", "std::operator<=", "<="]
dev_langs: ["C++"]
helpviewer_keywords: ["operator<=", "operator <=", "<= operator, with specific objects", "<= operator"]
ms.assetid: 338577dd-dc88-4a2b-9e12-0379c54fc8a2
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# operator&lt;= (&lt;sample container&gt;)

> [!NOTE]
> This topic is in the Visual C++ documentation as a nonfunctional example of containers used in the C++ Standard Library. For more information, see [C++ Standard Library Containers](../standard-library/stl-containers.md).

Overloads **operator<=** to compare two objects of template class [Container](../standard-library/sample-container-class.md).

## Syntax

```cpp
template <class Ty>
bool operator<=(
    const Container <Ty>& left,
    const Container <Ty>& right);
```

## Return Value

Returns `!(right < left)`.

## See also

[\<sample container>](../standard-library/sample-container.md)<br/>
