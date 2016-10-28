---
title: "Compiler Warning (level 3) C4792"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "C4792"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4792"
ms.assetid: c047ce69-a622-44e1-9425-d41aa9261c61
caps.latest.revision: 9
ms.author: "corob"
manager: "douge"
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
# Compiler Warning (level 3) C4792
function 'function' declared using sysimport and referenced from native code; import library required to link  
  
 A native function that was imported into the program with DllImport was called from an unmanaged function. Therefore, you must link to the import library for the DLL.  
  
 This warning cannot be resolved in code or by changing the way you compile. Use the [warning](../c/warning.md) pragma to disable this warning.  
  
 The following sample generates C4792:  
  
```  
// C4792.cpp  
// compile with: /clr /W3  
// C4792 expected  
using namespace System::Runtime::InteropServices;  
[DllImport("msvcrt")]  
extern "C" int __cdecl puts(const char *);  
int main() {}  
  
// Uncomment the following line to resolve.  
// #pragma warning(disable : 4792)  
#pragma unmanaged  
void func(void){  
   puts("test");  
}  
```