---
title: "Compiler Error C3463 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3463"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3463"]
ms.assetid: 153efcc0-085c-4615-84ea-d22942618bdf
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3463
'type': type not allowed in attribute 'implements'  
  
 An invalid type was passed to the [implements](../../windows/implements-cpp.md) attribute. For example, you can pass an interface to `implements`, but you cannot pass a pointer to an interface.  
  
## Example  
 The following sample generates C3463.  
  
```  
// C3463.cpp  
// compile with: /c  
#include <windows.h>  
[object, uuid("00000000-0000-0000-0000-000000000001")]  
__interface X {};  
  
typedef X* PX;  
  
[ coclass, uuid("00000000-0000-0000-0000-000000000002"), implements(interfaces=PX) ]   // C3463  
// try the following line instead  
// [ coclass, uuid("00000000-0000-0000-0000-000000000002"), implements(interfaces=X) ]  
class CMyClass : public X {};  
```