---
title: "Compiler Warning (level 1) C4096 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4096"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4096"]
ms.assetid: abf3cca2-2f21-45d8-b025-6b513b00681e
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4096
'a': interface is not a COM interface; will not be emitted to IDL  
  
 An interface definition that you may have intended as a COM interface was not defined as a COM interface and therefore will not be emitted to the IDL file.  
  
 See [Interface Attributes](../../windows/interface-attributes.md) for a list attributes that indicate an interface is a COM interface.  
  
 The following sample generates C4096:  
  
```  
// C4096.cpp  
// compile with: /W1 /LD  
#include "windows.h"  
[module(name="xx")];  
  
// [object, uuid("00000000-0000-0000-0000-000000000001")]  
__interface a  
{  
};  
  
[coclass, uuid("00000000-0000-0000-0000-000000000002")]  
struct b : a  
{  
};   // C4096, remove coclass or uncomment object  
```