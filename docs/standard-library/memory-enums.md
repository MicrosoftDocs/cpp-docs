---
title: "&lt;memory&gt; enums | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["memory/std::pointer_safety"]
ms.assetid: b9be0a7b-0beb-40b2-8183-911de371c6b9
caps.latest.revision: 11
manager: "ghogen"
---
# &lt;memory&gt; enums

||
|-|
|[pointer_safety](#pointer_safety)|

## <a name="pointer_safety"></a>  pointer_safety Enumeration

The enumeration of possible values returned by `get_pointer_safety`.

class pointer_safety {
   relaxed,
   preferred,
   strict
   };

### Remarks

The scoped `enum` defines the values that can be returned by `get_pointer_safety()`:

`relaxed` -- pointers not safely derived (obviously pointers to declared or allocated objects) are treated the same as those safely derived.

`preferred` -- as before, but pointers not safely derived should not be dereferenced.

`strict` -- pointers not safely derived might be treated differently than those safely derived.

## See also

[\<memory>](../standard-library/memory.md)<br/>
