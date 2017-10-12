---
title: "Compiler Error C3189 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C3189"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3189"]
ms.assetid: b254de79-931e-4a59-a9f4-1c690d90ca5e
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3189
'typeid\<type abstract declarator>': this syntax is no longer supported, use ::typeid instead  
  
 An obsolete form of [typeid](../../windows/typeid-cpp-component-extensions.md) was used, use the new form.  
  
 The following sample generates C3189:  
  
```  
// C3189.cpp  
// compile with: /clr  
int main() {  
   System::Type^ t  = typeid<System::Object>;   // C3189  
   System::Type^ t2  = System::Object::typeid;   // OK  
}  
```