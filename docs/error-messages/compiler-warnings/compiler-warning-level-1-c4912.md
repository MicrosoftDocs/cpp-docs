---
title: "Compiler Warning (level 1) C4912 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4912"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4912"]
ms.assetid: ba1f1a66-8c20-4792-9ac8-43e49f729ae2
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4912
'attribute': attribute has undefined behavior on a nested UDT  
  
 Attributes that apply to nested UDTs (user-defined type, which could be a typedef, union, or struct) may be ignored.  
  
 The following code shows how this warning would be generated:  
  
```  
// C4912.cpp  
// compile with: /W1  
#include <windows.h>  
[emitidl, module(name="xx")];  
  
[object, uuid("00000000-0000-0000-0000-000000000002")]  
__interface IMy  
{  
};  
  
[coclass, default(IMy), appobject, uuid("00000000-0000-0000-0000-000000000001")]  
class CMy : public IMy  
{  
   [export, v1_enum] typedef enum myEnum { k3_1 = 1, k3_2 = 2 } myEnumv;   // C4912  
};  
int main()  
{  
}  
```