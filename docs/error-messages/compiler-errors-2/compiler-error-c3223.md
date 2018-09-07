---
title: "Compiler Error C3223 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3223"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3223"]
ms.assetid: 1f4380b4-0413-40db-a868-62f97babaf78
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3223
'property' : you cannot apply 'typeid' to a property  
  
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