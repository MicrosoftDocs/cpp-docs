---
title: "Compiler Error C3459 | Microsoft Docs"
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
  - "C3459"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3459"
ms.assetid: 3d290a20-d313-4c07-9bd8-c5c159cb169f
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3459
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3459](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3459).  
  
  
attribute': attribute allowed only on class indexer (default indexed property)  
  
 An attribute that is designed to be applied to a class indexer property was used incorrectly.  
  
 For more information, see [How to: Use Indexed Properties](../../misc/how-to-use-indexed-properties.md).  
  
## Example  
 The following sample generates C3459.  
  
```  
// C3459.cpp  
// compile with: /clr /c  
public ref class MyString {  
public:  
   [System::Runtime::CompilerServices::IndexerName("Chars")]   // C3459  
   property int Prop;  
};  
  
// OK  
public ref class MyString2 {  
   array<int>^ MyArr;  
public:  
   MyString2() {  
      MyArr = gcnew array<int>(5);  
   }  
  
   [System::Runtime::CompilerServices::IndexerName("Chars")]   // OK  
   property int default[int] {  
      int get(int index) {  
         return MyArr[index];  
      }  
      void set(int index, int value) {  
         MyArr[index] = value;  
      }  
   }  
};  
```

