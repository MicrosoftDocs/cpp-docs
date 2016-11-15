---
title: "Troubleshooting Code Access Security Exceptions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "vs-ide-debug"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "JScript"
  - "VB"
  - "CSharp"
  - "C++"
helpviewer_keywords: 
  - "CodeAccessPermission class"
  - "CodeAccessSecurityException class"
  - "code access security, troubleshooting"
  - "security [debugger], troubleshooting code access security"
  - "troubleshooting code access security"
ms.assetid: ca368d3b-f6d0-4c89-af59-d94f343fca35
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
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
# Troubleshooting Code Access Security Exceptions
Permissions control what your code is allowed to do and not do. At the time an application executes, it is given a set of permissions by the runtime. If it has sufficient permissions, it runs properly; otherwise a security exception occurs.  
  
 The permissions your code is given are determined by the location from which the application was launched (for example, the Internet, intranet, or the local computer) and the security settings on the computer on which the application is running. Since these settings can differ from computer to computer, you cannot always anticipate whether or not the code will receive sufficient permissions.  
  
 Requesting permissions ensures that your code will execute if the security policy on the local computer allows it. If you do not request the necessary permissions, you run the risk of your code not executing. For more information on Code Access permissions and requesting them, see [Code Access Permissions](http://msdn.microsoft.com/en-us/e5ae402f-6dda-4732-bbe8-77296630f675) or [NIB: Requesting Permissions](http://msdn.microsoft.com/en-us/0447c49d-8cba-45e4-862c-ff0b59bebdc2). For more information on `Try...Catch` blocks, see [Try...Catch...Finally Statement](/dotnet/articles/visual-basic/language-reference/statements/try-catch-finally-statement).  
  
 [!INCLUDE[ndptecclick](../ide/includes/ndptecclick_md.md)] applications can request additional permissions, if needed, using the Security Page in the Application Designer. For more information, see [How to: Set Custom Permissions for a ClickOnce Application](../Topic/How%20to:%20Set%20Custom%20Permissions%20for%20a%20ClickOnce%20Application.md).  
  
 Possible causes of Code Access security exceptions include:  
  
-   **Clipboard.** Pasting from the Clipboard programmatically is a restricted feature of managed code, because the clipboard may contain sensitive information.  
  
-   **Registry or file system access.** Access to the local file system is restricted. If you are accessing a file or resource that is deployed with your assembly, use the code `Assembly.GetExecutingAssembly.Location` to get the path to your assembly.  
  
-   **Network access.** Make sure your assembly uses the same protocol with which your assembly was loaded. Generally, network communication is allowed only to the URL that was the source of the assembly.  
  
-   **Printing.** Software running in the Internet zone can print only by using a common dialog. It is restricted to default-printer use only if it uses a common dialog to allow the user to select a printer.  
  
-   **Serialization.** The ability to rebuild an object from arbitrary data is restricted to code running with full trust. For XML serialization, the `XmlSerializer` type should technically be useable by partially trusted code. For more information on the `XmlSerializer` type, see [XmlSerializer Class](https://msdn.microsoft.com/en-us/library/system.xml.serialization.xmlserializer.aspx).  
  
-   **Reflection.** Many of the reflection-related features of the runtime are restricted from use by partially trusted code.  
  
## Testing Code to Determine If It Will Throw a Code Access SecurityException  
 If you have a block of code with the potential to throw a `CodeAccessSecurityException`, use a `Try...Catch` block to allow your code to execute if it can, and to work around the failure if it cannot.  
  
 Sometimes you may want to design your application to adjust its behavior depending on the permissions the host system has granted it. For example, you may want to disable a Print command on a menu if the application does not have printing permissions.  
  
 To test for this, you can create an instance of a `CodeAccessPermission`-derived class such as `FileIOPermission`. Then you can execute the `Demand` method on the permission inside of a `Try...Catch` block. If the exception is thrown, then your assembly does not have the permission.  
  
 The following example tests whether the assembly has `EventLogPermission` permission by executing or creating an `EventLogPermission` and executing its `Demand` method within a `Try...Catch` block to determine whether or not the `Demand` is successful.  
  
```  
Try  
    Dim MyPermission As New EventLogPermission  
    MyPermission.Demand()  
    MsgBox(MyPermission.ToString())  
Catch ex As Exception  
    MsgBox("Assembly lacks EventLogPermission.")  
End Try  
```  
  
## See Also  
 [Code Access Permissions](http://msdn.microsoft.com/en-us/e5ae402f-6dda-4732-bbe8-77296630f675)   
 [NIB: Requesting Permissions](http://msdn.microsoft.com/en-us/0447c49d-8cba-45e4-862c-ff0b59bebdc2)   
 [Code Access Security Basics](../Topic/Code%20Access%20Security%20Basics.md)