---
title: "Compiler Error C3618 | Microsoft Docs"
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
  - "C3618"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3618"
ms.assetid: cacc105d-4389-4cb8-ae6c-41a3622e9a86
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3618
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3618](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3618).  
  
  
function': a method marked DllImport cannot be defined  
  
 A method marked with <xref:System.Runtime.InteropServices.DllImportAttribute> is defined in the specified.DLL.  
  
## Example  
 The following sample generates C3618.  
  
```  
// C3618.cpp  
// compile with: /clr /c  
using namespace System;  
using namespace System::Runtime::InteropServices;  
  
[ DllImport("user32.dll", EntryPoint="MessageBox", CharSet=CharSet::Ansi) ]  // CHANGED   
void Func();   
  
void Func() {}   // C3618, remove this function definition to resolve  
```

