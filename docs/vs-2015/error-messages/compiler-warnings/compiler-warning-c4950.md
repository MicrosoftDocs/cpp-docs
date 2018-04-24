---
title: "Compiler Warning C4950 | Microsoft Docs"
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
  - "C4950"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4950"
ms.assetid: 50226a5c-c664-4d09-ac59-e9e874ca244f
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning C4950
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning C4950](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-c4950).  
  
  
type_or_member' : marked as obsolete  
  
 A member or type was marked as obsolete with the [ObsoleteAttribute](frlrfSystemObsoleteAttributeClassTopic).  
  
 C4950 is always issued as an error.  You can turn off this warning with the `#pragma warning` or **/wd**; see [warning](../../preprocessor/warning.md) or [/w, /W0, /W1, /W2, /W3, /W4, /w1, /w2, /w3, /w4, /Wall, /wd, /we, /wo, /Wv, /WX (Warning Level)](../../build/reference/compiler-option-warning-level.md) for more information.  
  
 The following sample generates C4950:  
  
```  
// C4950.cpp  
// compile with: /clr  
using namespace System;  
  
// Any reference to Func3 should generate an error with message  
[System::ObsoleteAttribute("Will be removed in next version", true)]  
Int32 Func3(Int32 a, Int32 b) {  
   return (a + b);  
}  
  
int main() {  
   Int32 MyInt3 = ::Func3(2, 2);   // C4950  
}  
```
