---
description: "Learn more about: or_eq"
title: "or_eq"
ms.date: "11/04/2016"
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["std::or_eq", "or_eq", "std.or_eq"]
helpviewer_keywords: ["or_eq function"]
ms.assetid: 1eb92464-ed58-40d8-a30e-f0a6aa2f4318
---
# or_eq

An alternative to the &#124;= operator.

## Syntax

```C

#define or_eq |=
```

## Remarks

The macro yields the operator &#124;=.

## Example

```cpp
// iso646_oreq.cpp
// compile with: /EHsc
#include <iostream>
#include <iso646.h>

int main( )
{
   using namespace std;
   int a = 3, b = 2, result;

   result= a |= b;
   cout << result << endl;

   result= a or_eq b;
   cout << result << endl;
}
```

```Output
3
3
```

## Requirements

**Header:** \<iso646.h>
