---
title: "lock::operator== | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-cli"]
ms.topic: "reference"
f1_keywords: ["lock::operator==", "msclr.lock.operator==", "msclr::lock::operator==", "lock.operator=="]
dev_langs: ["C++"]
helpviewer_keywords: ["lock::operator=="]
ms.assetid: 3dcf1e5a-53fc-495d-9df5-d7849a41c36c
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "dotnet"]
---
# lock::operator==
Equality operator.  
  
## Syntax  
  
```  
template<class T> bool operator==(  
   T t  
);  
```  
  
#### Parameters  
 `t`  
 The object to compare for equality.  
  
## Return Value  
 Returns `true` if `t` is the same as the lock's object, `false` otherwise.  
  
## Example  
  
```  
// msl_lock_op_eq.cpp  
// compile with: /clr  
#include <msclr/lock.h>  
  
using namespace System;  
using namespace System::Threading;  
using namespace msclr;  
  
int main () {  
   Object^ o1 = gcnew Object;  
   lock l1(o1);  
   if (l1 == o1) {  
      Console::WriteLine("Equal!");  
   }  
}  
```  
  
```Output  
Equal!  
```  
  
## Requirements  
 **Header file** \<msclr\lock.h>  
  
 **Namespace** msclr  
  
## See Also  
 [lock Members](../dotnet/lock-members.md)   
 [lock::operator!=](../dotnet/lock-operator-inequality.md)