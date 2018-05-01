---
title: "Compiler Error C3189 | Microsoft Docs"
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
  - "C3189"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3189"
ms.assetid: b254de79-931e-4a59-a9f4-1c690d90ca5e
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3189
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3189](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3189).  
  
  
typeid\<type abstract declarator>': this syntax is no longer supported, use ::typeid instead  
  
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

