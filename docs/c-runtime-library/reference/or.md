---
title: "or | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
apitype: "DLLExport"
f1_keywords: ["std::or", "std.or", "Or"]
dev_langs: ["C++"]
helpviewer_keywords: ["or function"]
ms.assetid: 6523b3ac-0a18-44ec-9e9a-b9bab8525ead
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
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