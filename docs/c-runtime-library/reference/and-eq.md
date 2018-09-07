---
title: "and_eq | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
apitype: "DLLExport"
f1_keywords: ["and_eq", "std.and_eq", "std::and_eq"]
dev_langs: ["C++"]
helpviewer_keywords: ["and_eq macro"]
ms.assetid: 11091772-e359-4c2b-95c6-00841ac04354
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# and_eq

An alternative to the &= operator.

## Syntax

```C

#define and_eq &=

```

## Remarks

The macro yields the operator &=.

## Example

```cpp
// iso646_and_eq.cpp
// compile with: /EHsc
#include <iostream>
#include <iso646.h>

int main( )
{
   using namespace std;
   int a = 3, b = 2, result;

   result= a &= b;
   cout << result << endl;

   result= a and_eq b;
   cout << result << endl;
}
```

```Output
2
2
```

## Requirements

**Header:** \<iso646.h>