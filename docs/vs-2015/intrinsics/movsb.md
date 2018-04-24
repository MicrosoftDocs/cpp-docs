---
title: "__movsb | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__movsb"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "movsb instruction"
  - "rep movsb instruction"
  - "__movsb intrinsic"
ms.assetid: ba5469f6-f797-4cd2-bee8-74c7666c26d4
caps.latest.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# __movsb
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [__movsb](https://docs.microsoft.com/cpp/intrinsics/movsb).  
  
  
Microsoft Specific**  
  
 Generates a Move String (`rep movsb`) instruction.  
  
## Syntax  
  
```  
void __movsb(   
   unsigned char* Destination,   
   unsigned const char* Source,   
   size_t Count   
);  
```  
  
#### Parameters  
 [out] `Destination`  
 A pointer to the destination of the copy.  
  
 [in] `Source`  
 A pointer to the source of the copy.  
  
 [in] `Count`  
 The number of bytes to copy.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__movsb`|x86, [!INCLUDE[vcprx64](../includes/vcprx64-md.md)]|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 The result is that the first `Count` bytes pointed to by `Source` are copied to the `Destination` string.  
  
 This routine is only available as an intrinsic.  
  
## Example  
  
```  
// movsb.cpp  
// processor: x86, x64  
#include <stdio.h>  
#include <intrin.h>  
  
#pragma intrinsic(__movsb)  
  
int main()  
{  
    unsigned char s1[100];  
    unsigned char s2[100] = "A big black dog.";  
    __movsb(s1, s2, 100);  
  
    printf_s("%s %s", s1, s2);  
}  
```  
  
```Output  
A big black dog. A big black dog.  
```  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)

