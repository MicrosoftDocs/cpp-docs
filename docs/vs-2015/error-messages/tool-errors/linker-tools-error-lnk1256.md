---
title: "Linker Tools Error LNK1256 | Microsoft Docs"
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
  - "xml"
  - "LNK1256"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK1256"
ms.assetid: 55b64b2b-a56b-436c-a55e-ec9c6dcb050e
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Linker Tools Error LNK1256
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Linker Tools Error LNK1256](https://docs.microsoft.com/cpp/error-messages/tool-errors/linker-tools-error-lnk1256).  
  
  
ALINK operation failed : reason  
  
 A common reason for LNK1256 is an incorrect version number for an assembly. The value 65535 is not allowed for any part of the assembly version number. The valid range for assembly versions is 0 – 65534.  
  
 LNK1256 can also be caused if ALINK could not find the named key container. Delete the key container and add it again to the strong name CSP by using [Sn.exe (Strong Name Tool)](../Topic/Sn.exe%20\(Strong%20Name%20Tool\).md).  
  
 Another reason for LNK1256 is a version mismatch between the linker and Alink.dll. This can be caused by a corrupted Visual Studio installation. Use **Programs and Features** in the Windows Control Panel to repair or reinstall Visual Studio.  
  
 The following sample generates LNK1256:  
  
```  
// LNK1256.cpp  
// compile with: /clr /LD  
// LNK1256 expected  
[assembly:System::Reflection::AssemblyVersionAttribute("1.0.65535")];  
public class CMyClass {  
public:  
   int value;  
};  
```

