---
title: "Compiler Warning (level 3) C4638 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4638"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4638"
ms.assetid: 2c07923a-e103-4e40-bd11-fdfed428a5ec
caps.latest.revision: 8
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
# Compiler Warning (level 3) C4638
XML document comment target: reference to unknown symbol 'symbol'  
  
 The compiler was unable to resolve a symbol (***symbol***). The symbol must be valid in the compilation.  
  
 The following sample generates C4638:  
  
```  
// C4638.cpp  
// compile with: /clr /doc /LD /W3  
using namespace System;  
  
/// Text for class MyClass.  
public ref class MyClass {   
public:  
   /// <summary> Text </summary>  
   /// <see cref="aSymbolThatAppearsNowhereInMyProject"/>  
   // Try the following line instead:  
   // /// <see cref="System::Console::WriteLine"/>  
   void MyMethod() {}  
};   // C4638  
```