---
title: "Compiler Error C2870 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2870"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2870"
ms.assetid: 80523ee9-1fd3-4dc4-8a77-5083deb99066
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Compiler Error C2870
'name' : a namespace definition must appear either at file scope or immediately within another namespace definition  
  
 You defined namespace `name` incorrectly. Namespaces must be defined at file scope (outside all blocks and classes) or immediately within another namespace.  
  
 The following sample generates C2870:  
  
```  
// C2870.cpp  
// compile with: /c  
int main() {  
   namespace A { int i; };   // C2870  
}  
```