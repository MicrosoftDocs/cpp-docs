---
title: "Compiler Error C3247 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3247"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3247"]
ms.assetid: f9a2bbb5-3fce-40bf-9fd3-835a5f164dbb
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3247
'class1' : a coclass cannot inherit from another coclass 'class2'  
  
 A class marked with the [coclass](../../windows/coclass.md) attribute cannot inherit from another class marked with the `coclass` attribute.  
  
 The following sample generates C3247:  
  
```  
// C3247.cpp  
[module(name="MyLib")];  
[coclass]  
class a {  
};  
  
[coclass]  
class b : public a {   // C3247  
};  
int main() {  
}  
```