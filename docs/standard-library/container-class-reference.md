---
title: "Container Class::reference | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
dev_langs: ["C++"]
helpviewer_keywords: ["reference method"]
ms.assetid: ab85a9fb-c628-4761-9a5f-a0231fad7690
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Container Class::reference

> [!NOTE]
> This topic is in the Visual C++ documentation as a nonfunctional example of containers used in the C++ Standard Library. For more information, see [C++ Standard Library Containers](../standard-library/stl-containers.md).

Describes an object that can serve as a reference to an element of the controlled sequence.

## Syntax

```

typedef T2 reference;
```

## Remarks

It is described here as a synonym for the unspecified type `T2` (typically `Alloc::reference`). An object of type `reference` can be cast to an object of type [const_reference](../standard-library/container-class-const-reference.md).

## See also

[Sample Container Class](../standard-library/sample-container-class.md)<br/>
