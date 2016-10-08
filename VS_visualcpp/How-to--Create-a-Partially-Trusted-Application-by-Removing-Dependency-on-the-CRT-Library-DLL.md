---
title: "How to: Create a Partially Trusted Application by Removing Dependency on the CRT Library DLL"
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
ms.topic: get-started-article
ms.assetid: 4760cd0c-4227-4f23-a7fb-d25b51bf246e
caps.latest.revision: 9
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
# How to: Create a Partially Trusted Application by Removing Dependency on the CRT Library DLL
This topic discusses how to create a partially trusted Common Language Runtime application using Visual C++ by removing dependency on msvcm90.dll.  
  
 A Visual C++ application built with **/clr** will have a dependency on msvcm90.dll, which is part of the C-Runtime Library. When you want your application to be used in a partial trust environment, the CLR will enforce certain code access security rules on your DLL. Therefore, it will be necessary to remove this dependency because msvcm90.dll contains native code and code access security policy cannot be enforced on it.  
  
 If your application does not use any functionality of the C-Runtime Library and you would like to remove the dependency on this library from your code, you will have to use the **/NODEFAULTLIB:msvcmrt.lib** linker option and link with either ptrustm.lib or ptrustmd.lib. These libraries contain object files for initialization and uninitialization of an application, exception classes used by the initialization code, and managed exception handling code. Linking in one of these libraries will remove any dependency on msvcm90.dll.  
  
> [!NOTE]
>  The order of assembly uninitialization might differ for applications that use the ptrust libraries. For normal applications, assemblies are usually unloaded in the reverse order that they are loaded, but this is not guaranteed. For partial trust applications, assemblies are usually unloaded in the same order that they are loaded. This, also, is not guaranteed.  
  
### To create a partially trusted mixed (/clr) application  
  
1.  To remove the dependency on msvcm90.dll, you must specify to the linker not to include this library by using the **/NODEFAULTLIB:msvcmrt.lib** linker option. For information on how to do this using the Visual Studio development environment or programmatically, see [/NODEFAULTLIB (Ignore Libraries)](../VS_visualcpp/-NODEFAULTLIB--Ignore-Libraries-.md).  
  
2.  Add one of the ptrustm libraries to the linker input dependencies. Use ptrustm.lib if you are building your application in release mode. For debug mode, use ptrustmd.lib. For information on how to do this using the Visual Studio development environment or programmatically, see [.Lib Files as Linker Input](../VS_visualcpp/.Lib-Files-as-Linker-Input.md).  
  
## See Also  
 [Mixed (Native and Managed) Assemblies](../VS_visualcpp/Mixed--Native-and-Managed--Assemblies.md)   
 [Initialization of Mixed Assemblies](../VS_visualcpp/Initialization-of-Mixed-Assemblies.md)   
 [Library Support for Mixed Assemblies](../VS_visualcpp/Library-Support-for-Mixed-Assemblies.md)   
 [/link (Pass Options to Linker)](../VS_visualcpp/-link--Pass-Options-to-Linker-.md)   
 [PAVE Security in Native and .NET Framework Code](assetId:///bd61be84-c143-409a-a75a-44253724f784)