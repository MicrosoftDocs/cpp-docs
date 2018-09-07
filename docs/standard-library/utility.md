---
title: "&lt;utility&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["<utility>"]
dev_langs: ["C++"]
helpviewer_keywords: ["utility header"]
ms.assetid: c4491103-5da9-47a1-9c2b-ed8bc64b0599
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# &lt;utility&gt;

Defines C++ Standard Library types, functions, and operators that help to construct and manage pairs of objects, which are useful whenever two objects need to be treated as if they were one.

## Syntax

```cpp
#include <utility>

```

## Remarks

Pairs are widely used in the C++ Standard Library. They are required both as the arguments and return values for various functions and as element types for containers such as [map class](../standard-library/map-class.md) and [multimap class](../standard-library/multimap-class.md). The \<utility> header is automatically included by \<map> to assist in managing their key/value pair type elements.

### Classes

|Class|Description|
|-|-|
|[tuple_element](../standard-library/tuple-element-class-tuple.md)|A class that wraps the type of a `pair` element.|
|[tuple_size](../standard-library/tuple-size-class-tuple.md)|A class that wraps `pair` element count.|

### Functions

|Function|Description|
|-|-|
|[forward](../standard-library/utility-functions.md#forward)|Preserves the reference type (either `lvalue` or `rvalue`) of the argument from being obscured by perfect forwarding.|
|[get](../standard-library/utility-functions.md#get)|A function that gets an element from a `pair` object.|
|[make_pair](../standard-library/utility-functions.md#make_pair)|A template helper function used to construct objects of type `pair`, where the component types are based on the data types passed as parameters.|
|[move](../standard-library/utility-functions.md#move)|Returns the passed in argument as an `rvalue` reference.|
|[swap](../standard-library/utility-functions.md#swap)|Exchanges the elements of two `pair` objects.|

### Operators

|Operator|Description|
|-|-|
|[operator!=](../standard-library/utility-operators.md#op_neq)|Tests if the pair object on the left side of the operator is not equal to the pair object on the right side.|
|[operator==](../standard-library/utility-operators.md#op_eq_eq)|Tests if the pair object on the left side of the operator is equal to the pair object on the right side.|
|[operator<](../standard-library/utility-operators.md#op_lt)|Tests if the pair object on the left side of the operator is less than the pair object on the right side.|
|[operator\<=](../standard-library/utility-operators.md#op_gt_eq)|Tests if the pair object on the left side of the operator is less than or equal to the pair object on the right side.|
|[operator>](../standard-library/utility-operators.md#op_gt)|Tests if the pair object on the left side of the operator is greater than the pair object on the right side.|
|[operator>=](../standard-library/utility-operators.md#op_gt_eq)|Tests if the pair object on the left side of the operator is greater than or equal to the pair object on the right side.|

### Structs

|||
|-|-|
|[identity](../standard-library/identity-structure.md)||
|[pair](../standard-library/pair-structure.md)|A type that provides for the ability to treat two objects as a single object.|

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)<br/>
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
