---
title: "Compiler Error C3223 | Microsoft Docs"
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
  - "C3223"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3223"
ms.assetid: 1f4380b4-0413-40db-a868-62f97babaf78
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3223
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3223](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3223).  
  
  
property' : you cannot apply 'typeid' to a property  
  
 You cannot apply [typeid](../../windows/typeid-cpp-component-extensions.md) to a property.  
  
## Example  
 The following sample generates C3223.  
  
```  
// C3223.cpp  
// compile with: /clr  
ref class R {  
public:  
   property int myprop;  
};  
  
int main() {  
   System::Type^ type2 = R::myprop::typeid;   // C3223  
}  
```

