---
title: "Compiler Warning (level 1) C4490 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4490"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4490"
ms.assetid: f9b03ecf-41a1-4f4d-a74c-2c1e88234ccc
caps.latest.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4490
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4490](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4490).  
  
  
override' : incorrect use of override specifier; 'function' does not match a base ref class method  
  
 An override specifier was used incorrectly. For example, you do not override an interface function, you implement it.  
  
 For more information, see [Override Specifiers](../../windows/override-specifiers-cpp-component-extensions.md).  
  
## Example  
 The following sample generates C4490.  
  
```  
// C4490.cpp  
// compile with: /clr /c /W1  
  
interface struct IFace {  
   void Test();  
};  
  
ref struct Class1 : public IFace {  
   virtual void Test() override {}   // C4490  
   // try the following line instead  
   // virtual void Test() {}  
};  
```

