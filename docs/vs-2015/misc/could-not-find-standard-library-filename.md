---
title: "Could not find standard library: &#39;&lt;filename&gt;&#39; | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc40049"
  - "bc40049"
helpviewer_keywords: 
  - "BC40049"
ms.assetid: a292f97e-4852-4021-b300-7ab47beb95d9
caps.latest.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Could not find standard library: &#39;&lt;filename&gt;&#39;
[!INCLUDE[vbprvb](../includes/vbprvb-md.md)] is unable to find or open one of the standard DLL libraries needed for compilation and linking.  
  
 The unusable library is most likely to be either mscorlib.dll or microsoft.visualbasic.dll.  
  
 By default, this message is a warning. For information on hiding warnings or treating warnings as errors, see [Configuring Warnings in Visual Basic](http://msdn.microsoft.com/library/99cf4781-bd4d-47b4-91b9-217933509f82).  
  
 **Error ID:** BC40049  
  
### To correct this error  
  
1.  Verify that the file cited in the error message is present on the hard disk from which you are running [!INCLUDE[vbprvb](../includes/vbprvb-md.md)]. Normally the standard libraries should reside in a subdirectory under \WINNT\Microsoft.NET\Framework or \WINDOWS\Microsoft.NET\Framework.  
  
2.  Verify that neither the file nor the directory has a setting or attribute that prevents read access by [!INCLUDE[vbprvb](../includes/vbprvb-md.md)].  
  
3.  Verify that the file name and extension are spelled correctly. Capitalization is not a concern.  
  
4.  If the file appears to be properly placed and accessible, it might be corrupted on the disk. Reinstall [!INCLUDE[vbprvb](../includes/vbprvb-md.md)] if possible.  
  
5.  Note the exact file name and extension and contact Microsoft Product Support Services.  
  
## See Also  
 [Building from the Command Line](http://msdn.microsoft.com/library/e61947e9-a42e-4717-a699-5f70a98cdd03)   
 [How to: Invoke the Command-Line Compiler](http://msdn.microsoft.com/library/0fd9a8f6-f34e-4c35-a49d-9b9bbd8da4a9)   
 [Talk to Us](http://msdn.microsoft.com/library/e0846d4d-2ce1-48e3-b219-674ff070bf4e)