---
title: "operator== (&lt;sample container&gt;) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["std.==", "std::==", "operator==", "std.operator==", "std::operator==", "=="]
dev_langs: ["C++"]
helpviewer_keywords: ["operator ==, containers", "operator==, containers", "== operator, with specific standard C++ objects"]
ms.assetid: d3d8754e-5157-4b8b-bf9c-da41856f5eed
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# operator== (&lt;sample container&gt;)

> [!NOTE]
> This topic is in the Visual C++ documentation as a nonfunctional example of containers used in the C++ Standard Library. For more information, see [C++ Standard Library Containers](../standard-library/stl-containers.md).

Overloads `operator==` to compare two objects of template class [Container](../standard-library/sample-container-class.md).

## Syntax

```cpp
template <class Ty>
bool operator==(
    const Container <Ty>& left,
    const Container <Ty>& right);
```

## Return Value

Returns `left.`[size](../standard-library/container-class-size.md) ` == right.size && equal(left.`[begin](../standard-library/container-class-begin.md)`, left.`[end](../standard-library/container-class-end.md)`, right.begin)`.

## See also

[\<sample container>](../standard-library/sample-container.md)<br/>
