---
title: "xor | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
apitype: "DLLExport"
f1_keywords: ["Xor", "std::xor", "std.xor"]
dev_langs: ["C++"]
helpviewer_keywords: ["xor function"]
ms.assetid: 0fe9554b-d87b-4487-92ed-366c6dc21df2
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# xor

An alternative to the ^ operator.

## Syntax

```C

#define xor ^

```

## Remarks

The macro yields the operator ^.

## Example

```cpp
// iso646_xor.cpp
// compile with: /EHsc
#include <iostream>
#include <iso646.h>

int main( )
{
   using namespace std;
   int a = 3, b = 2, result;

   result= a ^ b;
   cout << result << endl;

   result= a xor_eq b;
   cout << result << endl;
}
```

```Output
1
1
```

## Requirements

**Header:** \<iso646.h>