---
title: "Default ATL Project Configurations | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ATL projects, default configurations"
ms.assetid: 7e272722-41af-4330-b965-a6d74ec16880
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
# Default ATL Project Configurations
This topic compares the default ATL project configurations in Visual C++ .NET with the default project configurations in Visual C++ 6.0.  
  
## Visual C++ .NET Default Configurations  
 In Visual C++ .NET, the ATL Project Wizard creates two project configurations by default.  
  
### Visual C++ .NET Configurations  
  
|Configuration|Character set|Use of ATL|  
|-------------------|-------------------|----------------|  
|Release|MBCS|DLL|  
|Debug|MBCS|DLL|  
  
 **Character set**, **Use of ATL** and can all be changed in the **Project Settings** dialog under the **General** tab. You can also add your own configurations using the Configuration Manager. For details, see [Build Configurations](/visualstudio/ide/understanding-build-configurations).  
  
## Version 6.0 Default Configurations  
 In Visual C++ version 6.0, the ATL COM AppWizard (now called the ATL Project Wizard) created six project configurations by default. The configurations were variations on Release, Debug, Unicode, and use of CRT and ATL settings. All these configurations can be duplicated in Visual C++ .NET using the Configuration Manager, if so desired.  
  
### Version 6.0 Configurations  
  
|Configuration|Character set|Use of ATL|  
|-------------------|-------------------|----------------|  
|Debug|MBCS|Static|  
|Debug Unicode|UNICODE|Static|  
|Release Min Dependency|MBCS|Static|  
|Release Min Dependency Unicode|UNICODE|Static|  
|Release Min Size|MBCS|DLL|  
|Release Min Size Unicode|UNICODE|DLL|  
  
## See Also  
 [Programming with ATL and C Run-Time Code](../../atl/programming-with-atl-and-c-run-time-code.md)   
 [Working with Project Properties](../../ide/working-with-project-properties.md)   
 [Configuration Manager Dialog Box](http://msdn.microsoft.com/en-us/fa182dca-282e-4ae5-bf37-e155344ca18b)   
 [Compiling and Building](/visualstudio/ide/compiling-and-building-in-visual-studio)

