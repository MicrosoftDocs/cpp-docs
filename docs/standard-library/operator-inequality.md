---
title: "operator!= | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-standard-libraries"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["std::!=", "!=", "std::operator!=", "std.operator!=", "std.!=", "operator!="]
dev_langs: ["C++"]
helpviewer_keywords: ["!= operator", "operator!=", "operator !="]
ms.assetid: ef2be7f0-1c94-4edc-b65c-731fddd519f4
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# operator!=

> [!NOTE]
> This topic is in the Visual C++ documentation as a nonfunctional example of containers used in the C++ Standard Library. For more information, see [C++ Standard Library Containers](../standard-library/stl-containers.md).

Overloads `operator!=` to compare two objects of template class [Container](../standard-library/sample-container-class.md).

## Syntax

```cpp
template <class Ty>
bool operator!=(
    const Container <Ty>& left,
    const Container <Ty>& right);
```

## Return Value

Returns `!(left == right)`.

## See also

[\<sample container>](../standard-library/sample-container.md)<br/>
