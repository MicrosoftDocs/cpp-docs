---
title: "How to: Read Data from the Windows Registry (C++-CLI)"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
H1: How to: Read Data from the Windows Registry (C++/CLI)
ms.assetid: aebf52c0-acc7-40e2-adbc-d34e0a1e467e
caps.latest.revision: 11
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# How to: Read Data from the Windows Registry (C++-CLI)
The following code example uses the <xref:Microsoft.Win32.Registry.CurrentUser?qualifyHint=False> key to read data from the Windows registry. First, the subkeys are enumerated using the <xref:Microsoft.Win32.RegistryKey.GetSubKeyNames?qualifyHint=False> method and then the Identities subkey is opened using the <xref:Microsoft.Win32.RegistryKey.OpenSubKey?qualifyHint=False> method. Like the root keys, each subkey is represented by the <xref:Microsoft.Win32.RegistryKey?qualifyHint=False> class. Finally, the new <xref:Microsoft.Win32.RegistryKey?qualifyHint=False> object is used to enumerate the key/value pairs.  
  
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
 The <xref:Microsoft.Win32.Registry?qualifyHint=False> class is merely a container for static instances of <xref:Microsoft.Win32.RegistryKey?qualifyHint=False>. Each instance represents a root registry node. The instances are <xref:Microsoft.Win32.Registry.ClassesRoot?qualifyHint=False>, <xref:Microsoft.Win32.Registry.CurrentConfig?qualifyHint=False>, <xref:Microsoft.Win32.Registry.CurrentUser?qualifyHint=False>, <xref:Microsoft.Win32.Registry.LocalMachine?qualifyHint=False>, and <xref:Microsoft.Win32.Registry.Users?qualifyHint=False>.  
  
 In addition to being static, the objects within the <xref:Microsoft.Win32.Registry?qualifyHint=False> class are read-only. Furthermore, instances of the <xref:Microsoft.Win32.RegistryKey?qualifyHint=False> class that are created to access the contents of the registry objects are read-only as well. For an example of how to override this behavior, see [How to: Write Data to the Windows Registry (C++/CLI)](../VS_visualcpp/How-to--Write-Data-to-the-Windows-Registry--C---CLI-.md).  
  
 There are two additional objects in the <xref:Microsoft.Win32.Registry?qualifyHint=False> class: <xref:Microsoft.Win32.Registry.DynData?qualifyHint=False> and <xref:Microsoft.Win32.Registry.PerformanceData?qualifyHint=False>. Both are instances of the <xref:Microsoft.Win32.RegistryKey?qualifyHint=False> class. The <xref:Microsoft.Win32.Registry.DynData?qualifyHint=False> object contains dynamic registry information, which is only supported in Windows 98 and Windows Me. The <xref:Microsoft.Win32.Registry.PerformanceData?qualifyHint=False> object can be used to access performance counter information for applications that use the Windows Performance Monitoring System. The <xref:Microsoft.Win32.Registry.PerformanceData?qualifyHint=False> node represents information that is not actually stored in the registry and therefore cannot be viewed using Regedit.exe.  
  
## See Also  
 [How to: Write Data to the Windows Registry (C++/CLI)](../VS_visualcpp/How-to--Write-Data-to-the-Windows-Registry--C---CLI-.md)   
 [Windows Operations (C++/CLI)](../VS_visualcpp/Windows-Operations--C---CLI-.md)   
 [.NET Programming with C++/CLI (Visual C++)](../VS_visualcpp/.NET-Programming-with-C---CLI--Visual-C---.md)