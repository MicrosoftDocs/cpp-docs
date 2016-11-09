---
title: "Registering Services"
ms.custom: ""
ms.date: "10/20/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "services, registering"
ms.assetid: c4ebac40-0374-4dda-948e-06fdda0e9c81
caps.latest.revision: 8
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
# Registering Services
To support on-demand loading, a service provider must register its global services with [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].  
  
 During development, managed service providers register services and service overrides by adding attributes to the source code for packages, and then building the packages in the [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] IDE. This runs the RegPkg.exe utility on the resulting assembly, registering the package and preparing it for deployment. For more information, see [How to: Register a Service](../misc/how-to-register-a-service.md).  
  
 Unmanaged service providers must register the services they provide with [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] in the services section or the service overrides section of the system registry. The following .reg file fragment shows how the service, SVsTextManager, might be registered:  
  
```  
[HKEY_LOCAL_MACHINE\Software\Microsoft\VisualStudio\<version number>\Services\{F5E7E71D-1401-11d1-883B-0000F87579D2}]  
@="{F5E7E720-1401-11d1-883B-0000F87579D2}"  
"Name"="SVsTextManager"  
```  
  
 In the example above, version number is the version of [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)], such as 7.1 or 8.0, the key {F5E7E71D-1401-11d1-883B-0000F87579D2} is the service identifier (SID) of the service, SVsTextManager, and the default value {F5E7E720-1401-11d1-883B-0000F87579D2} is the package GUID of the text manager VSPackage, which provides the service.  
  
## Remote Services and Background Threads  
 Services that you provide are not automatically available remotely or to background threads. To make them available, you must build and register a type library.  
  
 From unmanaged code that uses the Visual Studio Library (VSL), you can register your type library this way:  
  
```  
#define VSL_REGISTER_TYPE_LIB TRUE  
#include <VSLPackageDllEntryPoints.cpp>  
```  
  
 From managed code, you can add a post-build step like this:  
  
```  
regasm /tlb MyAssembly.dll  
```  
  
## See Also  
 [Using and Providing Services](../Topic/Using%20and%20Providing%20Services.md)   
 [Service Essentials](../Topic/Service%20Essentials.md)