---
description: "Learn more about: and"
title: "and"
ms.date: "11/04/2016"
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["And", "std.and", "std::and"]
helpviewer_keywords: ["and macro"]
ms.assetid: 2644ab57-8e1b-48f0-9021-cafe3e26bdc4
---
# and

An alternative to the && operator.

## Syntax

```C

#define and &&
```

## Remarks

The macro yields the operator &&.

## Example

```cpp
// iso646_and.cpp
// compile with: /EHsc
#include <iostream>
#include <iso646.h>

int main( )
{
   using namespace std;
   bool a = true, b = false, result;

   boolalpha(cout);

   result= a && b;
   cout << result << endl;

   result= a and b;
   cout << result << endl;
}
```

```Output
false
false
```

## Requirements

**Header:** \<iso646.h>
