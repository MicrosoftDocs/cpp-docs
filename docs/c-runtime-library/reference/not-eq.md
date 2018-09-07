---
title: "not_eq | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
apitype: "DLLExport"
f1_keywords: ["not_eq", "std::not_eq", "std.not_eq"]
dev_langs: ["C++"]
helpviewer_keywords: ["not_eq function"]
ms.assetid: d87ad299-8b50-4393-a57f-06f70e1f23fb
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# not_eq

An alternative to the != operator.

## Syntax

```C

#define not_eq !=

```

## Remarks

The macro yields the operator !=.

## Example

```cpp
// iso646_not_eq.cpp
// compile with: /EHsc
#include <iostream>
#include <iso646.h>

int main( )
{
   using namespace std;
   int a = 0, b = 1;

   if (a != b)
      cout << "a is not equal to b" << endl;

   if (a not_eq b)
      cout << "a is not equal to b" << endl;
}
```

```Output
a is not equal to b
a is not equal to b
```

## Requirements

**Header:** \<iso646.h>