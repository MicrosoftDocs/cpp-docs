---
description: "Learn more about: or"
title: "or"
ms.date: "11/04/2016"
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["std::or", "std.or", "Or"]
helpviewer_keywords: ["or function"]
ms.assetid: 6523b3ac-0a18-44ec-9e9a-b9bab8525ead
---
# or

An alternative to the &#124;&#124; operator.

## Syntax

```C

#define or ||
```

## Remarks

The macro yields the operator &#124;&#124;.

## Example

```cpp
// iso646_or.cpp
// compile with: /EHsc
#include <iostream>
#include <iso646.h>

int main( )
{
   using namespace std;
   bool a = true, b = false, result;

   boolalpha(cout);

   result= a || b;
   cout << result << endl;

   result= a or b;
   cout << result << endl;
}
```

```Output
true
true
```

## Requirements

**Header:** \<iso646.h>
