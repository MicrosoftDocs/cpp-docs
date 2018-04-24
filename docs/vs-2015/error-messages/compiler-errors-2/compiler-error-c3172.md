---
title: "Compiler Error C3172 | Microsoft Docs"
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
  - "C3172"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3172"
ms.assetid: 1834e2fd-6036-4c33-aff2-b51bc7c99441
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3172
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3172](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3172).  
  
  
module_name': cannot specify different idl_module attributes in a project  
  
 [idl_module](../../windows/idl-module.md) attributes with the same name but different `dllname` or `version`parameters were found in two of the files in a compilation. Only one unique `idl_module` attribute can be specified per compilation.  
  
 Identical `idl_module` attributes can be specified in more than one source code file.  
  
 For example, if the following `idl_module` attributes were found:  
  
```  
// C3172.cpp  
[module(name="MyMod")];  
[ idl_module(name="x", dllname="file.dll", version="1.1") ];  
int main() {}  
```  
  
 And then,  
  
```  
// C3172b.cpp  
// compile with: C3172.cpp  
// C3172 expected  
[ idl_module(name="x", dllname="file.dll", version="1.0") ];  
```  
  
 the compiler would generate C3172 (note the different version values).

