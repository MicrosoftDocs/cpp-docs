---
title: "Compiler Error C3381 | Microsoft Docs"
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
  - "C3381"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3381"
ms.assetid: d276c89f-8377-4cb6-a8d4-7770885f06c4
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3381
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3381](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3381).  
  
  
assembly' : assembly access specifiers are only available in code compiled with a /clr option  
  
 Native types can be visible outside the assembly, but you can only specify assembly access for native types in a **/clr** compilation.  
  
 For more information, see [Type visibility](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Type_visibility) and [/clr (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md).  
  
## Example  
 The following sample generates C3381.  
  
```  
// C3381.cpp  
// compile with: /c  
public class A {};   // C3381  
```

