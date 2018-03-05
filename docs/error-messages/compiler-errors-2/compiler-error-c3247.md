---
title: "Compiler Error C3247 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["C3247"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3247"]
ms.assetid: f9a2bbb5-3fce-40bf-9fd3-835a5f164dbb
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
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