---
title: "Avoiding Exceptions thrown by COM Objects Built with -clr | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: ["C++"]
helpviewer_keywords: ["interop [C++], CLR shutdown exceptions", "/clr compiler option [C++], CLR shutdown exceptions", "mixed assemblies [C++], CLR shutdown exceptions", "/clr compiler option [C++], COM objects", "interoperability [C++], CLR shutdown exceptions", "CLR shutdown exceptions [C++]"]
ms.assetid: 41249d83-4b51-4e46-866f-27f475f2498c
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus", "dotnet"]
---
# Avoiding Exceptions on CLR Shutdown When Consuming COM Objects Built with /clr
Once the common language runtime (CLR) enters shutdown mode, native functions have limited access to CLR services. When attempting to call Release on a COM object compiled with **/clr**, the CLR transitions to native code and then transitions back into managed code to service the IUnknown::Release call (which is defined in managed code). The CLR prevents the call back into managed code since it is in shutdown mode.  
  
 To resolve this, ensure that destructors called from Release methods only contain native code.  
  
## See Also  
 [Mixed (Native and Managed) Assemblies](../dotnet/mixed-native-and-managed-assemblies.md)