---
title: "Compiler Error C3340 | Microsoft Docs"
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
  - "C3340"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3340"
ms.assetid: 23b12298-b92a-4717-8380-f165c998cb8a
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3340
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3340](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3340).  
  
  
interface': interface cannot be both 'restricted' and 'default' in coclass 'class'  
  
 The [restricted](../../windows/restricted.md) attribute and the [default](../../windows/default-cpp.md) attribute are mutually exclusive.  
  
 The following sample generates C3340:  
  
```  
// C3340.cpp  
#include <windows.h>  
[module(name="MyModule")];  
  
[ object, uuid(373a1a4c-469b-11d3-a6b0-00c04f79ae8f) ]  
__interface IMyIface  
{  
   HRESULT f1();  
};  
  
[ coclass, uuid(373a1a4d-469b-11d3-a6b0-00c04f79ae8f),  
default(IMyIface),  
source(IMyIface),restricted(IMyIface) ]  
class CmyClass // C3340  
{  
};  
  
int main()  
{  
}  
```

