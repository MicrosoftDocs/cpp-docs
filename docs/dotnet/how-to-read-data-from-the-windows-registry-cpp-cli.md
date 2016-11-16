---
title: "How to: Read Data from the Windows Registry (C++-CLI) | Microsoft Docs"
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
  - "Visual C++, reading from Windows Registry"
  - "registry, reading"
ms.assetid: aebf52c0-acc7-40e2-adbc-d34e0a1e467e
caps.latest.revision: 11
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
# How to: Read Data from the Windows Registry (C++/CLI)
The following code example uses the <xref:Microsoft.Win32.Registry.CurrentUser> key to read data from the Windows registry. First, the subkeys are enumerated using the <xref:Microsoft.Win32.RegistryKey.GetSubKeyNames%2A> method and then the Identities subkey is opened using the <xref:Microsoft.Win32.RegistryKey.OpenSubKey%2A> method. Like the root keys, each subkey is represented by the <xref:Microsoft.Win32.RegistryKey> class. Finally, the new <xref:Microsoft.Win32.RegistryKey> object is used to enumerate the key/value pairs.  
  
## Example  
  
### Code  
  
```  
// registry_read.cpp  
// compile with: /clr  
using namespace System;  
using namespace Microsoft::Win32;  
  
int main( )  
{  
   array<String^>^ key = Registry::CurrentUser->GetSubKeyNames( );  
  
   Console::WriteLine("Subkeys within CurrentUser root key:");  
   for (int i=0; i<key->Length; i++)  
   {  
      Console::WriteLine("   {0}", key[i]);  
   }  
  
   Console::WriteLine("Opening subkey 'Identities'...");  
   RegistryKey^ rk = nullptr;  
   rk = Registry::CurrentUser->OpenSubKey("Identities");  
   if (rk==nullptr)  
   {  
      Console::WriteLine("Registry key not found - aborting");  
      return -1;  
   }  
  
   Console::WriteLine("Key/value pairs within 'Identities' key:");  
   array<String^>^ name = rk->GetValueNames( );  
   for (int i=0; i<name->Length; i++)  
   {  
      String^ value = rk->GetValue(name[i])->ToString();  
      Console::WriteLine("   {0} = {1}", name[i], value);  
   }  
  
   return 0;  
}  
```  
  
## Remarks  
 The <xref:Microsoft.Win32.Registry> class is merely a container for static instances of <xref:Microsoft.Win32.RegistryKey>. Each instance represents a root registry node. The instances are <xref:Microsoft.Win32.Registry.ClassesRoot>, <xref:Microsoft.Win32.Registry.CurrentConfig>, <xref:Microsoft.Win32.Registry.CurrentUser>, <xref:Microsoft.Win32.Registry.LocalMachine>, and <xref:Microsoft.Win32.Registry.Users>.  
  
 In addition to being static, the objects within the <xref:Microsoft.Win32.Registry> class are read-only. Furthermore, instances of the <xref:Microsoft.Win32.RegistryKey> class that are created to access the contents of the registry objects are read-only as well. For an example of how to override this behavior, see [How to: Write Data to the Windows Registry (C++/CLI)](../dotnet/how-to-write-data-to-the-windows-registry-cpp-cli.md).  
  
 There are two additional objects in the <xref:Microsoft.Win32.Registry> class: <xref:Microsoft.Win32.Registry.DynData> and <xref:Microsoft.Win32.Registry.PerformanceData>. Both are instances of the <xref:Microsoft.Win32.RegistryKey> class. The <xref:Microsoft.Win32.Registry.DynData> object contains dynamic registry information, which is only supported in Windows 98 and Windows Me. The <xref:Microsoft.Win32.Registry.PerformanceData> object can be used to access performance counter information for applications that use the Windows Performance Monitoring System. The <xref:Microsoft.Win32.Registry.PerformanceData> node represents information that is not actually stored in the registry and therefore cannot be viewed using Regedit.exe.  
  
## See Also  
 [How to: Write Data to the Windows Registry (C++/CLI)](../dotnet/how-to-write-data-to-the-windows-registry-cpp-cli.md)   
 [Windows Operations (C++/CLI)](../dotnet/windows-operations-cpp-cli.md)   
 [.NET Programming with C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)