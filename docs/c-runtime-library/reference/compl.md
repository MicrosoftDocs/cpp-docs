---
description: "Learn more about: compl"
title: "compl"
ms.date: "11/04/2016"
api_name: ["compl"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["std::compl", "std.compl", "compl"]
helpviewer_keywords: ["compl function"]
ms.assetid: e03f6fb5-cb8b-4afa-99c0-905f4105fb34
---
# compl

An alternative to the ~ operator.

## Syntax

```C
#define compl ~
```

## Remarks

The macro yields the operator ~.

## Example

```cpp
// iso646_compl.cpp
// compile with: /EHsc
#include <iostream>
#include <iso646.h>

int main( )
{
   using namespace std;
   int a = 1, result;

   result = ~a;
   cout << result << endl;

   result= compl(a);
   cout << result << endl;
}
```

```Output
-2
-2
```

## Requirements

**Header:** \<iso646.h>
