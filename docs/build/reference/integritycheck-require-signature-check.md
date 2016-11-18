---
title: "-INTEGRITYCHECK (Require Signature Check) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 9e738825-2c98-40cd-8ad2-5d0d9c14893e
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# /INTEGRITYCHECK (Require Signature Check)
Specifies that the digital signature of the binary image must be checked at load time.  
  
```  
/INTEGRITYCHECK[:NO]  
```  
  
## Remarks  
 By default, **/INTEGRITYCHECK** is off.  
  
 The **/INTEGRITYCHECK** option sets—in the PE header of the DLL file or executable file—a flag for the memory manager to check for a digital signature in order to load the image in Windows. This option must be set for both 32-bit and 64-bit DLLs that implement kernel-mode code loaded by certain Windows features, and is recommended for all device drivers on Windows Vista, [!INCLUDE[win7](../../build/includes/win7_md.md)], [!INCLUDE[win8](../../build/reference/includes/win8_md.md)], [!INCLUDE[winsvr08](../../build/reference/includes/winsvr08_md.md)], and [!INCLUDE[winserver8](../../build/reference/includes/winserver8_md.md)]. Versions of Windows prior to Windows Vista ignore this flag. For more information, see [Forced Integrity Signing of Portable Executable (PE) files](http://social.technet.microsoft.com/wiki/contents/articles/255.forced-integrity-signing-of-portable-executable-pe-files.aspx).  
  
### To set this linker option in Visual Studio  
  
1.  Open the project **Property Pages** dialog box. For more information, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Expand the **Configuration Properties** node.  
  
3.  Expand the **Linker** node.  
  
4.  Select the **Command Line** property page.  
  
5.  In **Additional Options**, enter `/INTEGRITYCHECK` or `/INTEGRITYCHECK:NO`.  
  
## See Also  
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)   
 [Forced Integrity Signing of Portable Executable (PE) files](http://social.technet.microsoft.com/wiki/contents/articles/255.forced-integrity-signing-of-portable-executable-pe-files.aspx)   
 [Kernel-Mode Code Signing Walkthrough](http://msdn.microsoft.com/windows/hardware/gg487328.aspx)   
 [AppInit DLLs in Windows 7 and Windows Server 2008](http://msdn.microsoft.com/windows/hardware/gg463040.aspx)