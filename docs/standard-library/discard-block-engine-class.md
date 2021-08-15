---
description: "Learn more about: discard_block_engine Class"
title: "discard_block_engine Class"
ms.date: "11/04/2016"
f1_keywords: ["random/std::discard_block_engine"]
helpviewer_keywords: ["discard_block_engine class"]
ms.assetid: aa84808e-38fe-4fa0-9f73-d5b9a653345b
---
# discard_block_engine Class

Generates a random sequence by discarding values returned by its base engine.

## Syntax

```cpp
template <class Engine, size_t P, size_t R>
class discard_block_engine;
```

### Parameters

*Engine*\
The base engine type.

*P*\
**Block size**. The number of values in each block.

*R*\
**Used block**. The number of values in each block that are used. The rest are discarded (`P` - `R`). **Precondition**: `0 < R ≤ P`

## Members

`discard_block_engine::discard_block_engine`\
`discard_block_engine::base`\
`discard_block_engine::base_type`\
`discard_block_engine::discard`\
`discard_block_engine::operator()`\
`discard_block_engine::seed`

For more information about engine members, see [\<random>](../standard-library/random.md).

## Remarks

This class template describes an engine adaptor that produces values by discarding some of the values returned by its base engine.

## Requirements

**Header:** \<random>

**Namespace:** std

## See also

[\<random>](../standard-library/random.md)
