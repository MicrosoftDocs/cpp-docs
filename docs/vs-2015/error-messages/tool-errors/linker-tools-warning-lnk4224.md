---
title: "Linker Tools Warning LNK4224 | Microsoft Docs"
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
  - "LNK4224"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK4224"
ms.assetid: 8624b70e-0b93-43cf-b457-834d38632d0b
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Linker Tools Warning LNK4224
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Linker Tools Warning LNK4224](https://docs.microsoft.com/cpp/error-messages/tool-errors/linker-tools-warning-lnk4224).  
  
  
option is no longer supported; ignored  
  
 An invalid, obsolete linker option was specified and ignored.  
  
 For example, LNK4224 can occur if a /comment directive appears in .obj. The /comment directive would have been added via the [comment (C/C++)](../../preprocessor/comment-c-cpp.md) pragma, using the deprecated exestr option. Use dumpbin [/ALL](../../build/reference/all.md) to view the linker directives in an .obj file.  
  
 If possible, modify the source for the .obj and remove the pragma. If you do ignore this warning, it is possible that an .executable compiled with **/clr:pure** will not run as expected.  
  
## Example  
 The following sample generates LNK4224.  
  
```  
// LNK4224.cpp  
// compile with: /c /Zi  
// post-build command: link LNK4224.obj /debug /debugtype:map  
int main () {  
   return 0;  
}  
```

