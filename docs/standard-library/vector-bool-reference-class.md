---
description: "Learn more about: vector&lt;bool&gt;::reference Class"
title: "vector&lt;bool&gt;::reference Class"
ms.date: "11/04/2016"
f1_keywords: ["vector/vector<bool>::reference"]
helpviewer_keywords: ["vector<bool> reference class"]
ms.assetid: f27854f9-0ef0-4e7e-ad2e-cd53b6cb3334
---
# vector&lt;bool&gt;::reference Class

The `vector<bool>::reference` class is a proxy class provided by the [vector\<bool> Class](../standard-library/vector-bool-class.md) to simulate `bool&`.

## Remarks

A simulated reference is required because C++ does not natively allow direct references to bits. `vector<bool>` uses only one bit per element, which can be referenced by using this proxy class. However, the reference simulation is not complete because certain assignments are not valid. For example, because the address of the `vector<bool>::reference` object cannot be taken, the following code that tries to use `vector<bool>::operator&` is not correct:

```cpp
vector<bool> vb;
// ...
bool* pb = &vb[1]; // conversion error - do not use
bool& refb = vb[1];   // conversion error - do not use
```

### Member functions

|Member function|Description|
|-|-|
|[flip](../standard-library/vector-bool-reference-flip.md)|Inverts the Boolean value of a vector element.|
|[operator bool](../standard-library/vector-bool-reference-operator-bool.md)|Provides an implicit conversion from `vector<bool>::reference` to **`bool`**.|
|[operator=](../standard-library/vector-bool-reference-operator-assign.md)|Assigns a Boolean value to a bit, or the value held by a referenced element to a bit.|

## Requirements

**Header**: \<vector>

**Namespace:** std

## See also

[\<vector>](../standard-library/vector.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)
