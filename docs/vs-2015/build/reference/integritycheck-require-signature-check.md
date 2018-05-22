---
title: "-INTEGRITYCHECK (Require Signature Check) | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 9e738825-2c98-40cd-8ad2-5d0d9c14893e
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /INTEGRITYCHECK (Require Signature Check)
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [-INTEGRITYCHECK (Require Signature Check)](https://docs.microsoft.com/cpp/build/reference/integritycheck-require-signature-check).  
  
  
Specifies that the digital signature of the binary image must be checked at load time.  
  
```  
/INTEGRITYCHECK[:NO]  
```  
  
## Remarks  
 By default, **/INTEGRITYCHECK** is off.  
  
 The **/INTEGRITYCHECK** option sets—in the PE header of the DLL file or executable file—a flag for the memory manager to check for a digital signature in order to load the image in Windows. This option must be set for both 32-bit and 64-bit DLLs that implement kernel-mode code loaded by certain Windows features, and is recommended for all device drivers on Windows Vista, [!INCLUDE[win7](../../includes/win7-md.md)], [!INCLUDE[win8](../../includes/win8-md.md)], [!INCLUDE[winsvr08](../../includes/winsvr08-md.md)], and Windows Server 2012. Versions of Windows prior to Windows Vista ignore this flag. For more information, see [Forced Integrity Signing of Portable Executable (PE) files](http://social.technet.microsoft.com/wiki/contents/articles/255.forced-integrity-signing-of-portable-executable-pe-files.aspx).  
  
### To set this linker option in Visual Studio  
  
1.  Open the project **Property Pages** dialog box. For more information, see [How to: Open Project Property Pages](../../misc/how-to-open-project-property-pages.md).  
  
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

