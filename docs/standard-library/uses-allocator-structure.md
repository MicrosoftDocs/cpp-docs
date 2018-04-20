---
title: "uses_allocator Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-standard-libraries"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["future/std::uses_allocator"]
dev_langs: ["C++"]
ms.assetid: c418f002-62e9-4806-b70c-41c663cae583
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# uses_allocator Structure

Specializations that always hold true.

## Syntax

```cpp
template <class Ty, class Alloc>
struct uses_allocator<promise<Ty>, Alloc> : true_type;
template <class Ty, class Alloc>
struct uses_allocator<packaged_task<Ty>, Alloc> : true_type;
```

## Requirements

**Header:** \<future>

**Namespace:** std

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)<br/>
[\<future>](../standard-library/future.md)<br/>
