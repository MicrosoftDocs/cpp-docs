---
title: "Building C/C++ Side-by-side Assemblies | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["side-by-side applications [C++]"]
ms.assetid: 7fa20b16-3737-4f76-a0b5-1dacea19a1e8
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Building C/C++ Side-by-side Assemblies
A [side-by-side assembly](/windows/desktop/SbsCs/about-side-by-side-assemblies-) is a collection of resources—a group of DLLs, windows classes, COM servers, type libraries, or interfaces—available for an application to use at runtime. The primary advantage of repackaging DLLs in assemblies is that multiple versions of assemblies can be used by applications at the same time and it is possible to service currently installed assemblies in case of an update release.  
  
 A Visual C++ application may use one or several DLLs in different parts of the application. At runtime, the DLLs are loaded into the main process and the required code is executed. The application relies on the operating system to locate the requested DLLs, understand what other dependent DLLs have to be loaded and then load them together with the requested DLL. On Windows operating systems versions earlier than Windows XP, Windows Server 2003, and Windows Vista, the operating system loader searches for dependent DLLs in either the application's local folder or another folder specified on the system path. On Windows XP, Windows Server 2003, and Windows Vista, the operating system loader can also search for dependent DLLs using a [manifest](https://msdn.microsoft.com/library/windows/desktop/aa375365) file and search for side-by-side assemblies that contain these DLLs.  
  
 By default, when a DLL is built with Visual Studio, it has an [application manifest](/windows/desktop/SbsCs/application-manifests) embedded as an RT_MANIFEST resource with ID equal to 2. Just as for an executable, this manifest describes dependencies of this DLL on other assemblies. This assumes that the DLL is not part of a side-by-side assembly and applications that depend on this DLL are not going to use an application manifest to load it, but instead rely on the operating system loader to find this DLL on the system path.  
  
> [!NOTE]
>  It is important for a DLL that uses an application manifest to have the manifest embedded as a resource with ID equal to 2. If the DLL is dynamically loaded at runtime (for example, using the [LoadLibrary](https://msdn.microsoft.com/library/windows/desktop/ms684175) function), the operating system loader loads dependent assemblies specified in the DLL's manifest. An external application manifest for DLLs is not checked during a `LoadLibrary` call. If the manifest is not embedded, the loader may attempt to load incorrect versions of assemblies or fail to find to find dependent assemblies.  
  
 One or several related DLLs can be repackaged into a side-by-side assembly with a corresponding [assembly manifest](/windows/desktop/SbsCs/assembly-manifests), which describes which files form the assembly as well as the dependence of the assembly on other side-by-side assemblies.  
  
> [!NOTE]
>  If an assembly contains one DLL, it is recommended to embed the assembly manifest into this DLL as a resource with ID equal to 1, and give the private assembly the same name as the DLL. For example, if the name of the DLL is mylibrary.dll, the value of the name attribute used in the \<assemblyIdentity> element of the manifest may also be mylibrary. In some cases, when a library has an extension other than .dll (for example, an MFC ActiveX Controls project creates an .ocx library) an external assembly manifest can be created. In this case, the name of the assembly and its manifest must be different than the name of the DLL (for example, MyAssembly, MyAssembly.manifest, and mylibrary.ocx). However it is still recommended to rename such libraries to have the extension.dll and embed the manifest as a resource to reduce the future maintenance cost of this assembly. For more information about how the operating system searches for private assemblies, see [Assembly Searching Sequence](/windows/desktop/SbsCs/assembly-searching-sequence).  
  
 This change may allow deployment of corresponding DLLs as a [private assembly](/windows/desktop/Msi/private-assemblies) in an application local folder or as a [shared assembly](/windows/desktop/Msi/shared-assemblies) in the WinSxS assembly cache. Several steps have to be followed in order to achieve correct runtime behavior of this new assembly; they are described in [Guidelines for Creating Side-by-side Assemblies](/windows/desktop/SbsCs/guidelines-for-creating-side-by-side-assemblies). After an assembly is correctly authored it can deployed as either a shared or private assembly together with an application that depends on it. When installing side-by-side assemblies as a shared assembly, you may either follow the guidelines outlined in [Installing Win32 Assemblies for Side-by-Side Sharing on Windows XP](/windows/desktop/Msi/installing-win32-assemblies-for-side-by-side-sharing-on-windows-xp) or use [merge modules](https://msdn.microsoft.com/library/windows/desktop/aa369820). When installing side-by-side assemblies as a private assembly, you may just copy the corresponding DLL, resources and assembly manifest as part of the installation process to the application local folder on the target computer, ensuring that this assembly can be found by the loader at runtime (see [Assembly Searching Sequence](/windows/desktop/SbsCs/assembly-searching-sequence)). Another way is to use [Windows Installer](/windows/desktop/Msi/windows-installer-portal) and follow the guidelines outlined in [Installing Win32 Assemblies for the Private Use of an Application on Windows XP](/windows/desktop/Msi/installing-win32-assemblies-for-the-private-use-of-an-application-on-windows-xp).  
  
## See Also  
 [Deployment Examples](../ide/deployment-examples.md)   
 [Building C/C++ Isolated Applications](../build/building-c-cpp-isolated-applications.md)   
 [Building C/C++ Isolated Applications and Side-by-side Assemblies](../build/building-c-cpp-isolated-applications-and-side-by-side-assemblies.md)