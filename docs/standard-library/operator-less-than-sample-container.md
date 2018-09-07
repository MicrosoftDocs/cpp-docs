---
title: "operator&lt; (&lt;sample container&gt;) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["std::operator<", "operator<", "std.<", "<", "std.operator<", "std::<"]
dev_langs: ["C++"]
helpviewer_keywords: ["< operator, comparing specific objects", "operator<, valarrays", "< operator", "operator <, valarrays"]
ms.assetid: 31027dd6-53be-428b-b950-1dcb25393597
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# operator&lt; (&lt;sample container&gt;)

> [!NOTE]
> This topic is in the Visual C++ documentation as a nonfunctional example of containers used in the C++ Standard Library. For more information, see [C++ Standard Library Containers](../standard-library/stl-containers.md).

Overloads **operator<** to compare two objects of template class [Container](../standard-library/sample-container-class.md).

## Syntax

```cpp
template <class Ty>
bool operator<(
    const Container <Ty>& left,
    const Container <Ty>& right);
```

## Return Value

Returns `lexicographical_compare(left.begin, left.end, right.begin, right.end)`.

## See also

[\<sample container>](../standard-library/sample-container.md)<br/>
[begin](../standard-library/container-class-begin.md)<br/>
[end](../standard-library/container-class-end.md)  