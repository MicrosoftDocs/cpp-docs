---
title: "&lt;forward_list&gt; functions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.topic: "reference"
f1_keywords: ["forward_list/std::swap"]
ms.assetid: 0d6bc656-7049-4651-a4bd-c9a805e47756
---
# &lt;forward_list&gt; functions

||
|-|
|[swap](#swap)|

## <a name="swap"></a>  swap

Exchanges the elements of two forward lists.

```cpp
void swap(
    forward_list <Type, Allocator>& left,
    forward_list <Type, Allocator>& right);
```

### Parameters

|Parameter|Description|
|---------------|-----------------|
|*left*|An object of type `forward_list`.|
|*right*|An object of type `forward_list`.|

### Remarks

This template function executes `left.swap(right)`.

## See also

[<forward_list>](../standard-library/forward-list.md)<br/>
