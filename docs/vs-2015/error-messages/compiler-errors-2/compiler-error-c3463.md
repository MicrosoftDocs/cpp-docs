---
title: "Compiler Error C3463 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3463"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3463"
ms.assetid: 153efcc0-085c-4615-84ea-d22942618bdf
caps.latest.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3463
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3463](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3463).  
  
  
type': type not allowed in attribute 'implements'  
  
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

