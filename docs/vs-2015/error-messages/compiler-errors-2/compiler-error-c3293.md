---
title: "Compiler Error C3293 | Microsoft Docs"
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
  - "C3293"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3293"
ms.assetid: b772cf98-52e0-4e24-be23-1f5d87d999ac
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3293
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3293](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3293).  
  
  
accessor': use 'default' to access the default property (indexer) for class 'type'  
  
 An indexed property was accessed incorrectly.  See [How to: Use Indexed Properties](../../misc/how-to-use-indexed-properties.md) for more information.  
  
## Example  
 The following sample generates C3293.  
  
```  
// C3293.cpp  
// compile with: /clr /c  
using namespace System;  
ref class IndexerClass {  
public:  
   // default indexer  
   property int default[int] {  
      int get(int index) { return 0; }  
      void set(int index, int value) {}  
   }  
};  
  
int main() {  
   IndexerClass ^ ic = gcnew IndexerClass;  
   ic->Item[0] = 21;   // C3293  
   ic->default[0] = 21;   // OK  
  
   String ^s = "Hello";  
   wchar_t wc = s->Chars[0];   // C3293  
   wchar_t wc2 = s->default[0];   // OK  
   Console::WriteLine(wc2);  
}  
```

