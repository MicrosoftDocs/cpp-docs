---
title: "Compiler Warning (level 1) C4628 | Microsoft Docs"
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
  - "C4628"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4628"
ms.assetid: 20fdc6f8-5f6a-40cc-aff8-c7ccf3d8ec26
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4628
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4628](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4628).  
  
  
digraphs not supported with -Ze. Character sequence 'digraph' not interpreted as alternate token for 'char'  
  
 Digraphs are not supported under [/Ze](../../build/reference/za-ze-disable-language-extensions.md). This warning will be followed by an error.  
  
 This warning is off by default. See [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md) for more information.  
  
 The following sample generates C4628:  
  
```  
// C4628.cpp  
// compile with: /WX  
#pragma warning(default : 4628)  
int main()  
<%   // C4628 <% digraph for {  
}  
```

