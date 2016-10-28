---
title: "Compiler Error C3293"
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
  - "C3293"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3293"
ms.assetid: b772cf98-52e0-4e24-be23-1f5d87d999ac
caps.latest.revision: 6
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
# Compiler Error C3293
'accessor': use 'default' to access the default property (indexer) for class 'type'  
  
 An indexed property was accessed incorrectly.  See [How to: Use Indexed Properties](../notintoc/how-to--use-indexed-properties.md) for more information.  
  
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