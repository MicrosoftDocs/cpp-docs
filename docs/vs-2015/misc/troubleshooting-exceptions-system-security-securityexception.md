---
title: "Troubleshooting Exceptions: System.Security.SecurityException | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "EHSecurity"
dev_langs: 
  - "JScript"
  - "VB"
  - "CSharp"
  - "C++"
helpviewer_keywords: 
  - "System.Security.SecurityException class"
  - "SecurityException class"
ms.assetid: 7679ef74-dd15-439f-bfeb-0fb45f8b2373
caps.latest.revision: 26
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Troubleshooting Exceptions: System.Security.SecurityException
A <xref:System.Security.SecurityException> exception is thrown when a security error is detected.  
  
## Associated Tips  
 Adjust the permission level of the assembly via the property page.  
 For more information, see <xref:Microsoft.VisualStudio.VCProjectEngine.VCConfiguration.SqlPermissionLevel%2A>.  
  
 Store application data in isolated storage.  
 Isolated storage is a data storage that provides isolation and safety by defining standardized ways of associating code with saved data. For more information, [Isolated Storage](../Topic/Isolated%20Storage.md).  
  
 If using <xref:System.Windows.Forms.OpenFileDialog> , use the <xref:System.Windows.Forms.OpenFileDialog.OpenFile%2A> method to open or save a file.  
 This allows the application to perform in a partial-trust situation.  
  
 Make sure the application is reading and writing to existing event logs on the local computer.  
 The application may not have sufficient permissions to create logs on or write to non-local computers.  
  
 If calling unmanaged libraries, use equivalent managed libraries.  
 An equivalent API may exist in the Framework. For more information, see [Troubleshooting Interoperability](../Topic/Troubleshooting%20Interoperability%20\(Visual%20Basic\).md).  
  
 Use safe windows.  
 The <xref:System.Security.Permissions.UIPermissionWindow> enumeration specifies the type of windows that code is allowed to use.  
  
 Allow users to print through the <xref:System.Windows.Forms.PrintDialog> component.  
 This allows the application to perform in a partial-trust situation. For more information, see <xref:System.Windows.Forms.PrintDialog>.  
  
 Print to the default printer.  
 This allows the application to perform in a partial-trust situation. You may be trying to access a printer to which you do not have rights.  
  
 Retrieve data from the same Web server from which it was deployed.  
 This allows the application to perform in a partial-trust situation.  
  
 When deploying an Office solution, check to make sure you have fulfilled all necessary security requirements.  
 For more information see [Specific Security Considerations for Office Solutions](../Topic/Specific%20Security%20Considerations%20for%20Office%20Solutions.md).  
  
 If an assembly implementing the custom security object references other assemblies, add the referenced assemblies to the full trust assembly list.  
 For more information, see [Caspol.exe (Code Access Security Policy Tool)](../Topic/Caspol.exe%20\(Code%20Access%20Security%20Policy%20Tool\).md).  
  
## See Also  
 <xref:System.Security.SecurityException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)