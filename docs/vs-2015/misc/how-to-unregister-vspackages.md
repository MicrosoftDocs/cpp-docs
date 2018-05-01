---
title: "How to: Unregister VSPackages | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "sample applications [Visual Studio SDK], uninstalling"
  - "setup, VSPackages"
ms.assetid: b51522f0-c033-4d93-b928-2171a953032b
caps.latest.revision: 14
manager: "douge"
---
# How to: Unregister VSPackages
By default, when you build VSPackages, they are registered to the experimental registry hive. Your experimental hive may fill with VSPackages that you do not intend to keep after you have experimented with them.  
  
 To delete all packages that are registered in the experimental hive, just reset the hive by using the CreateExpInstance tool with the /Reset option. For more information, see [The Experimental Instance](http://msdn.microsoft.com/library/ead0df4e-6f88-4b42-9297-581b7902f050).  
  
## Unregistering Individual VSPackages  
  
#### To unregister an unmanaged VSPackage  
  
1.  Click **Start**, click **Run**, type `regsvr32 /u`*pathToVSPackage.dll*, and then click OK.  
  
 Because unmanaged VSPackages contain self-registration code, you can use the regsvr32 utility to register them and unregister them.  
  
#### To unregister a managed VSPackage  
  
1.  Click **Start**, click **Run** type *Visual Studio SDK installation path*`\EnvSDK\tools\bin\x86\regpkg /unregister`*pathToVSPackage.dll*, and then click OK.  
  
 The RegPkg tool reads the registration attributes that can be embedded in a managed VSPackage. The **/unregister** switch instructs RegPkg to remove the information from the registry.  
  
## See Also  
 [Visual Studio Integration Samples](http://msdn.microsoft.com/en-us/b5dbf078-3af2-4fed-a1ea-171e4ee73a43)