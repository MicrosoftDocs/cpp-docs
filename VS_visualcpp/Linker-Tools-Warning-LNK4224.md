---
title: "Linker Tools Warning LNK4224"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: error-reference
ms.assetid: 8624b70e-0b93-43cf-b457-834d38632d0b
caps.latest.revision: 10
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Linker Tools Warning LNK4224
option is no longer supported; ignored  
  
 An invalid, obsolete linker option was specified and ignored.  
  
 For example, LNK4224 can occur if a /comment directive appears in .obj. The /comment directive would have been added via the [comment (C/C++)](../VS_visualcpp/comment--C-C---.md) pragma, using the deprecated exestr option. Use dumpbin [/ALL](../VS_visualcpp/-ALL.md) to view the linker directives in an .obj file.  
  
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