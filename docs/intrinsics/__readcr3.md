---
title: "__readcr3"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "__readcr3"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__readcr3 intrinsic"
ms.assetid: e24392c3-cad7-4788-8f31-94bf2e9e0053
caps.latest.revision: 11
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
# __readcr3
**Microsoft Specific**  
  
 Reads the CR3 register and returns its value.  
  
## Syntax  
  
```  
unsigned __int64 __readcr3(void);  
```  
  
## Return Value  
 The value in the CR3 register.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__readcr3`|x86, [!INCLUDE[vcprx64](../build/includes/vcprx64_md.md)]|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 This intrinsic is only available in kernel mode, and the routine is only available as an intrinsic.  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)