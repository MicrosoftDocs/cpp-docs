---
title: "bitand | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
apitype: "DLLExport"
f1_keywords: ["std::bitand", "std.bitand", "bitand"]
dev_langs: ["C++"]
helpviewer_keywords: ["bitand function"]
ms.assetid: 279cf9b5-fac1-49de-b329-f1a31b3481fe
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# bitand

An alternative to the & operator.

## Syntax

```C

#define bitand &

```

## Remarks

The macro yields the operator

## Example

```cpp
// iso646_bitand.cpp
// compile with: /EHsc
#include <iostream>
#include <iso646.h>

int main( )
{
   using namespace std;
   int a = 1, b = 2, result;

   result = a & b;
   cout << result << endl;

   result= a bitand b;
   cout << result << endl;
}
```

```Output
0
0
```

## Requirements

**Header:** \<iso646.h>