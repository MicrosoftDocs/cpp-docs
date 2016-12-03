---
title: "Compiler Warning (level 1) C4165 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4165"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4165"
ms.assetid: f5bed515-2290-4f88-8dab-b45d95fe26ef
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4165
'HRESULT' is being converted to 'bool'; are you sure this is what you want?  
  
When using an HRESULT in an [if](../../cpp/if-else-statement-cpp.md) statement, the HRESULT will be converted to a [bool](../../cpp/bool-cpp.md) unless you explicitly test for the variable as an HRESULT. This warning is off by default.  
  
## Example  
The following sample generates C4165  
  
```cpp  
// C4165.cpp  
// compile with: /W1  
#include <windows.h>  
#pragma warning(1:4165)  
  
extern HRESULT hr;  
int main() {  
   if (hr) {  
   // try either of the following ...  
   // if (FAILED(hr)) { // C4165 expected  
   // if (hr != S_OK) {  
   }  
}  
```