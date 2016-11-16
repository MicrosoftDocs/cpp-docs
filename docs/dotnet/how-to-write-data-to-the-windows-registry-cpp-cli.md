---
title: "How to: Write Data to the Windows Registry (C++-CLI) | Microsoft Docs"
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
helpviewer_keywords: 
  - "registry, writing to"
  - "Visual C++, writing to Windows Registry"
ms.assetid: 3d40b978-4baa-4779-bfe3-47e2917b757f
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
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
# How to: Write Data to the Windows Registry (C++/CLI)
The following code example uses the <xref:Microsoft.Win32.Registry.CurrentUser> key to create a writable instance of the <xref:Microsoft.Win32.RegistryKey> class corresponding to the **Software** key. The <xref:Microsoft.Win32.RegistryKey.CreateSubKey%2A> method is then used to create a new key and add to key/value pairs.  
  
## Example  
  
### Code  
  
```  
// registry_write.cpp  
// compile with: /clr  
using namespace System;  
using namespace Microsoft::Win32;  
  
int main()  
{  
   // The second OpenSubKey argument indicates that  
   // the subkey should be writable.   
   RegistryKey^ rk;  
   rk  = Registry::CurrentUser->OpenSubKey("Software", true);  
   if (!rk)  
   {  
      Console::WriteLine("Failed to open CurrentUser/Software key");  
      return -1;  
   }  
  
   RegistryKey^ nk = rk->CreateSubKey("NewRegKey");  
   if (!nk)  
   {  
      Console::WriteLine("Failed to create 'NewRegKey'");  
      return -1;  
   }  
  
   String^ newValue = "NewValue";  
   try  
   {  
      nk->SetValue("NewKey", newValue);  
      nk->SetValue("NewKey2", 44);  
   }  
   catch (Exception^)  
   {  
      Console::WriteLine("Failed to set new values in 'NewRegKey'");  
      return -1;  
   }  
  
   Console::WriteLine("New key created.");  
   Console::Write("Use REGEDIT.EXE to verify ");  
   Console::WriteLine("'CURRENTUSER/Software/NewRegKey'\n");  
   return 0;  
}  
```  
  
## Remarks  
 You can use the .NET Framework to access the registry with the <xref:Microsoft.Win32.Registry> and [RegistryKey](https://msdn.microsoft.com/en-us/library/microsoft.win32.registrykey.aspx) classes, which are both defined in the <xref:Microsoft.Win32> namespace. The **Registry** class is a container for static instances of the <xref:Microsoft.Win32.RegistryKey> class. Each instance represents a root registry node. The instances are <xref:Microsoft.Win32.Registry.ClassesRoot>, <xref:Microsoft.Win32.Registry.CurrentConfig>, <xref:Microsoft.Win32.Registry.CurrentUser>, <xref:Microsoft.Win32.Registry.LocalMachine>, and <xref:Microsoft.Win32.Registry.Users>.  
  
## See Also  
 [How to: Read Data from the Windows Registry (C++/CLI)](../dotnet/how-to-read-data-from-the-windows-registry-cpp-cli.md)   
 [.NET Programming with C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)