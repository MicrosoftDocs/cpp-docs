---
title: "Compiler Warning (level 1) C4912"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-csharp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: ba1f1a66-8c20-4792-9ac8-43e49f729ae2
caps.latest.revision: 6
manager: douge
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
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