---
description: "Learn more about: &lt;forward_list&gt; functions"
title: "&lt;forward_list&gt; functions"
ms.date: "11/04/2016"
f1_keywords: ["forward_list/std::swap"]
ms.assetid: 0d6bc656-7049-4651-a4bd-c9a805e47756
---
# &lt;forward_list&gt; functions

## <a name="swap"></a> swap

Exchanges the elements of two forward lists.

```cpp
void swap(forward_list <Type, Allocator>& left, forward_list <Type, Allocator>& right);
```

### Parameters

*left*\
An object of type `forward_list`.

*right*\
An object of type `forward_list`.

### Remarks

This template function executes `left.swap(right)`.
