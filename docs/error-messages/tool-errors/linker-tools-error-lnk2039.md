---
title: "Linker Tools Error LNK2039 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["LNK2039"]
dev_langs: ["C++"]
helpviewer_keywords: ["LNK2039"]
ms.assetid: eaa296bd-4901-41f6-8410-6d03ee827144
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Linker Tools Error LNK2039
importing ref class '\<type>' that is defined in another.obj; it should be either imported or defined, but not both  
  
 The ref class '<`type`>' is imported in the specified .obj file but is also defined in another .obj file. This condition can cause runtime failure or other unexpected behavior.  
  
### To correct this error  
  
1.  Check whether '`type`' must be defined in the other .obj file and check whether it must be imported from the .winmd file.  
  
2.  Remove either the definition or the import.  
  
## See Also  
 [Linker Tools Errors and Warnings](../../error-messages/tool-errors/linker-tools-errors-and-warnings.md)   
 [Linker Tools Error LNK1332](../../error-messages/tool-errors/linker-tools-error-lnk1332.md)