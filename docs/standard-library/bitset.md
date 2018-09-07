---
title: "&lt;bitset&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["<bitset>"]
dev_langs: ["C++"]
helpviewer_keywords: ["<bitset> header", "bitset header"]
ms.assetid: af30a9b9-489e-46e3-9d29-5f3ea07ae6dc
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# &lt;bitset&gt;

Defines the template class bitset and two supporting template functions for representing and manipulating fixed-size sequences of bits.

## Syntax

```

#include <bitset>

```

### Operators

|Operator|Description|
|-|-|
|[operator&](../standard-library/bitset-operators.md#op_amp)|Performs a bitwise AND between two bitsets.|
|[operator<\<](../standard-library/bitset-operators.md#op_lt_lt)|Inserts a text representation of the bit sequence into the standard output stream.|
|[operator>>](../standard-library/bitset-operators.md#op_gt_gt)|Inserts a text representation of the bit sequence into the standard input stream.|
|[operator^](../standard-library/bitset-operators.md#op_xor)|Performs a bitwise EXCLUSIVE-OR between two bitsets.|
|[operator&#124;](../standard-library/bitset-operators.md#op_or)|Performs a bitwise OR between two bitsets.|

### Classes

|Class|Description|
|-|-|
|[bitset Class](../standard-library/bitset-class.md)|The template class describes a type of object that stores a sequence consisting of a fixed number of bits that provide a compact way of keeping flags for a set of items or conditions.|

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)<br/>
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
