---
title: "These project configuration(s) are out of date: &lt;configuration&gt;. Would you like to build them? | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VS.Message.BuildOutOfDateProjects"
ms.assetid: d0711f3b-3a2e-4247-afad-9e6468f9df96
caps.latest.revision: 8
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
# These project configuration(s) are out of date: &lt;configuration&gt;. Would you like to build them?
You are editing a Visual Studio project or have selected a project in Solution Explorer, and you have chosen to Start (F5) the project or Start Without Debugging (CTRL+F5). One or more projects permit debugging without rebuilding, even if the project has been modified since the last build.  
  
 The integrated development environment (IDE) is asking whether or not to rebuild projects that permit debugging without rebuilding.  
  
### To respond to this message  
  
-   Select one of the buttons at the bottom of the message. The options are:  
  
|Term|Definition|  
|----------|----------------|  
|**Yes**|You will rebuild out-of-date projects. This means:<br /><br /> -   If the project has not yet been built, the project is built.<br />-   If the project has been modified since the last build, the project is rebuilt.<br />-   The project is debugged or started without debugging.|  
|**No**|You will rebuild only those out-of-date projects that must be rebuilt before debugging. This means:<br /><br /> -   If the project permits debugging without rebuilding (for example, a Visual C++ MFC Application project), the project is not rebuilt.<br />-   If the project must be rebuilt before debugging (for example, a Visual Basic project), the project is rebuilt.<br />-   The project is debugged, or started without debugging.|  
|**Cancel**|The current operation is stopped. No project is built, started, or debugged.|  
  
## See Also  
 [Configuration Manager Dialog Box](http://msdn.microsoft.com/en-us/fa182dca-282e-4ae5-bf37-e155344ca18b)   
 [How to: Create Solution and Project Build Configurations](../Topic/How%20to:%20Create%20Solution%20and%20Project%20Build%20Configurations.md)   
 [How to: Create and Remove Project Dependencies](../Topic/How%20to:%20Create%20and%20Remove%20Project%20Dependencies.md)   
 [Project Dependencies Dialog Box](http://msdn.microsoft.com/en-us/d66e48c3-3722-40dd-99b4-53d93cac128e)   
 [Project Dependencies, Common Properties, Solution Property Pages Dialog Box](http://msdn.microsoft.com/en-us/2ba638fc-719c-4a79-b166-3455a4374e31)   
 [Compiling and Building](/visual-studio/ide/compiling-and-building-in-visual-studio)   
 [Understanding Build Configurations](/visual-studio/ide/understanding-build-configurations)   
 [NIB:Projects as Containers](http://msdn.microsoft.com/en-us/87d40f63-f487-4767-8963-64beec27ba1b)   
 [NIB:Item Management in Projects](http://msdn.microsoft.com/en-us/762e606b-7f44-4b66-97a1-e30a703654a0)