---
title: "__readdr | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__readdr"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__readdr intrinsic"
ms.assetid: 061b05da-c85e-4052-b392-106f14bb84f1
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# __readdr
Reads the value of the specified debug register.  
  
## Syntax  
  
```  
unsigned         __readdr(unsigned int DebugRegister);  
unsigned __int64 __readdr(unsigned int DebugRegister);  
```  
  
#### Parameters  
 [in] `DebugRegister`  
 A constant from 0 through 7 that identifies the debug register.  
  
## Return Value  
 The value of the specified debug register.  
  
## Remarks  
 These intrinsics are available only in kernel mode, and the routines are available only as intrinsics.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__readdr`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **Header file** \<intrin.h>  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)   
 [__readeflags](../intrinsics/readeflags.md)