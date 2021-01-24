---
description: "Learn more about: bitor"
title: "bitor"
ms.date: "11/04/2016"
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["bitor", "std.bitor", "std::bitor"]
helpviewer_keywords: ["bitor function"]
ms.assetid: 3c0a3711-9c74-41f2-b400-2f7797da30d1
---
# bitor

An alternative to the &#124; operator.

## Syntax

```C

#define bitor |
```

## Remarks

The macro yields the operator &#124;.

## Example

```cpp
// iso646_bitor.cpp
// compile with: /EHsc
#include <iostream>
#include <iso646.h>

int main( )
{
   using namespace std;
   int a = 1, b = 2, result;

   result = a | b;
   cout << result << endl;

   result= a bitor b;
   cout << result << endl;
}
```

```Output
3
3
```

## Requirements

**Header:** \<iso646.h>
