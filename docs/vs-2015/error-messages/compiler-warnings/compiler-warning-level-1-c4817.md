---
title: "Compiler Warning (level 1) C4817 | Microsoft Docs"
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
  - "C4817"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4817"
ms.assetid: a68f5486-6940-4934-9f93-bfd4d71f92a9
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4817
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4817](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4817).  
  
  
member' : illegal use of '.' to access this member; compiler replaced with '->'  
  
 The wrong member access operator was used.  
  
## Example  
 The following sample generates C4817.  
  
```  
// C4817.cpp  
// compile with: /clr /W1  
using namespace System;  
int main() {  
   array<Int32> ^ a = gcnew array<Int32>(100);  
   Console::WriteLine( a.Length );   // C4817  
   Console::WriteLine( a->Length );   // OK  
}  
```  
  
## Example  
 C4817 can also be generated using **/clr:oldSyntax**. The following sample generates C4817.  
  
```  
// C4817_b.cpp  
// compile with: /clr:oldSyntax /W1  
using namespace System;  
int main() {  
   Int32 a[] = new Int32[11];  
   Console::WriteLine( a.Length );  
   // Console::WriteLine( a->Length );  
}  
```

