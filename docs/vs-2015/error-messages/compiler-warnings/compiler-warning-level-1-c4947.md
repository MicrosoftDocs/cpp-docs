---
title: "Compiler Warning (level 1) C4947 | Microsoft Docs"
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
  - "C4947"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4947"
ms.assetid: 5a1d484e-b4c7-4de2-a145-d8dcfc2fc1d2
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4947
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4947](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4947).  
  
  
type_or_member' : marked as obsolete  
  
 A member or type was marked as obsolete with the [ObsoleteAttribute](frlrfSystemObsoleteAttributeClassTopic) class.  
  
 The following sample generates C4947:  
  
```  
// C4947.cpp  
// compile with: /clr /W1  
// C4947 expected  
using namespace System;  
  
[System::ObsoleteAttribute]  
ref struct S {  
   [System::ObsoleteAttribute]  
   int i;  
  
   [System::ObsoleteAttribute]  
   void mFunc(){}  
};  
  
// Any reference to Func1 should generate a warning  
[System::ObsoleteAttribute]  
Int32 Func1(Int32 a, Int32 b) {  
   return (a + b);  
}  
  
// Any reference to Func2 should generate a warning with  message  
[System::ObsoleteAttribute("Will be removed in next version")]  
Int32 Func2(Int32 a, Int32 b) {  
   return (a + b);  
}  
  
int main() {  
   Int32 MyInt1 = ::Func1(2, 2);  
   Int32 MyInt2 = ::Func2(2, 2);  
  
   S^ s = gcnew S();  
   s->i = 10;  
   s->mFunc();  
}  
```
