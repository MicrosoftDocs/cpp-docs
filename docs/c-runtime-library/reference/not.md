---
description: "Learn more about: not"
title: "not"
ms.date: "11/04/2016"
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["std::not", "std.not", "Not"]
helpviewer_keywords: ["not function"]
ms.assetid: d2ddbd5c-33c0-4aff-8961-feac155b4ba1
---
# not

An alternative to the ! operator.

## Syntax

```C

#define not !
```

## Remarks

The macro yields the operator !.

## Example

```cpp
// iso646_not.cpp
// compile with: /EHsc
#include <iostream>
#include <iso646.h>

int main( )
{
   using namespace std;
   int a = 0;

   if (!a)
      cout << "a is zero" << endl;

   if (not(a))
      cout << "a is zero" << endl;
}
```

```Output
a is zero
a is zero
```

## Requirements

**Header:** \<iso646.h>
