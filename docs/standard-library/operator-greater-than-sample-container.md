---
title: "operator&gt; (&lt;sample container&gt;) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["std::operator>", "operator>", "std::>", ">"]
dev_langs: ["C++"]
helpviewer_keywords: ["> operator, comparing specific objects", "operator >"]
ms.assetid: 49bd417a-3305-4ffa-9884-39d3904ed87d
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# operator&gt; (&lt;sample container&gt;)

> [!NOTE]
> This topic is in the Visual C++ documentation as a nonfunctional example of containers used in the C++ Standard Library. For more information, see [C++ Standard Library Containers](../standard-library/stl-containers.md).

Overloads **operator>** to compare two objects of template class [Container](../standard-library/sample-container-class.md).

## Syntax

```cpp
template <class Ty>
bool operator*gt;(
    const Container <Ty>& left,
    const Container <Ty>& right);
```

## Return Value

Returns `right < left`.

## See also

[\<sample container>](../standard-library/sample-container.md)<br/>
