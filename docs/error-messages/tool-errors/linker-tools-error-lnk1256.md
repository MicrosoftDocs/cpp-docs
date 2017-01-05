---
title: "Linker Tools Error LNK1256 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
# Linker Tools Error LNK1256
ALINK operation failed : reason  
  
 A common reason for LNK1256 is an incorrect version number for an assembly. The value 65535 is not allowed for any part of the assembly version number. The valid range for assembly versions is 0 – 65534.  
  
 LNK1256 can also be caused if ALINK could not find the named key container. Delete the key container and add it again to the strong name CSP by using [Sn.exe (Strong Name Tool)](http://msdn.microsoft.com/Library/c1d2b532-1b8e-4c7a-8ac5-53b801135ec6).  
  
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