---
title: "lock::operator!= | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-cli"]
ms.topic: "reference"
f1_keywords: ["lock.operator!=", "msclr.lock.operator!=", "msclr::lock::operator!=", "lock::operator!="]
dev_langs: ["C++"]
helpviewer_keywords: ["lock::operator!="]
ms.assetid: ed1d674e-9ee9-4257-8a7e-2e3567d50222
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "dotnet"]
---
# lock::operator!=

Inequality operator.

## Syntax

```
template<class T> bool operator!=(
   T t
);
```

#### Parameters

*t*<br/>
The object to compare for inequality.

## Return Value

Returns **true** if `t` differs from the lock's object, **false** otherwise.

## Example

```cpp
// msl_lock_op_ineq.cpp
// compile with: /clr
#include <msclr/lock.h>

using namespace System;
using namespace System::Threading;
using namespace msclr;

int main () {
   Object^ o1 = gcnew Object;
   Object^ o2 = gcnew Object;
   lock l1(o1);
   if (l1 != o2) {
      Console::WriteLine("Inequal!");
   }
}
```

```Output
Inequal!
```

## Requirements

**Header file** \<msclr\lock.h>

**Namespace** msclr

## See Also

[lock Members](../dotnet/lock-members.md)<br/>
[lock::operator==](../dotnet/lock-operator-equality.md)