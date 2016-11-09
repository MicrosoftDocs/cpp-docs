---
title: "Availability of Features in Visual Studio Versions | Microsoft Docs"
ms.custom: ""
ms.date: "11/02/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "Visual Studio, availability of features"
ms.assetid: cb2728da-7705-4dea-a1c3-12a0388cb652
caps.latest.revision: 18
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
# Availability of Features in Visual Studio Versions
The following table shows whether certain features are supported in the listed versions of Visual Studio Professional.  
  
-   "Yes" means that the Visual Studio version includes the feature.  
  
-   "Add" means that the Visual Studio version does not include the feature, but it is available and you can get more information by clicking the link.  
  
-   "No" means that the Visual Studio version does not include the feature.  
  
||Visual Studio 2010<br /><br /> and<br /><br /> Visual Studio 2010 SP1|[!INCLUDE[vs_dev11_long](../build/includes/vs_dev11_long_md.md)]|[!INCLUDE[vs_dev12](../atl-mfc-shared/includes/vs_dev12_md.md)]|  
|-|-----------------------------------------------------------|-------------------------------------------------------------------|--------------------------------------------------------------|  
|Supported .NET Framework versions|2.0, 3.0, 3.5 SP1, 4|2.0, 3.0, 3.5 SP1, 4, 4.5|2.0, 3.0, 3.5 SP1, 4, 4.5, 4.5.1|  
|Local Web Server|Yes|Yes|Yes|  
|SQL Server Express|2008|2008|2008|  
|Connect to SQL Server versions through Server Explorer|2000, 2005, 2008|2000, 2005, 2008|2000, 2005, 2008|  
|ASP.NET AJAX <sup>1</sup>|Yes|Yes|Yes|  
|ASP.NET Model View Controller|Yes|Yes|Yes|  
|ASP.NET Dynamic Data|Yes|Yes|Yes|  
|MSBuild|Yes|Yes|Yes|  
|ADO.NET Entity Framework|Yes|Yes|Yes|  
|ADO.NET Data Services|Yes|Yes|Yes|  
|Microsoft Azure Tools|Add|Add||  
|Smart Devices|No|No||  
|Parallel Computing|Yes <sup>2</sup>|Yes|Yes|  
|Windows Communication Foundation|Yes|Yes|Yes|  
|Windows Presentation Foundation|Yes|Yes|Yes|  
|.NET Rich Internet Application Services|[Add](http://go.microsoft.com/fwlink/?LinkID=230768)|Yes|Yes|  
|Silverlight 1|Yes|Yes|Yes|  
|Silverlight 2|No|Yes|Yes|  
|Silverlight 3|Yes|Yes|Yes|  
|Silverlight 4|[Add](http://go.microsoft.com/fwlink/?LinkID=153710)|Yes|Yes|  
|Silverlight 5|[Add](http://go.microsoft.com/fwlink/?LinkID=215392), SP1 only.|Yes|Yes|  
|IronPython|[Add](http://go.microsoft.com/fwlink/?LinkID=183863)|[Add](http://go.microsoft.com/fwlink/?LinkID=183863)|[Add](http://go.microsoft.com/fwlink/?LinkID=183863)|  
|IronRuby|[Add](http://go.microsoft.com/fwlink/?LinkID=183864)|[Add](http://go.microsoft.com/fwlink/?LinkID=183864)|[Add](http://go.microsoft.com/fwlink/?LinkID=183864)|  
|Visual Studio Tools for Office|Yes <sup>4</sup><br /><br /> (Office 2007, Office 2010)|Yes <sup>4</sup>(Office 2010)|Yes <sup>4</sup>(Office 2013)|  
|Report Projects|Yes|Yes|Yes|  
|Report Wizard|Yes|Yes|Yes|  
|Language-Integrated Query (LINQ)|Yes|Yes|Yes|  
|SharePoint Development|Yes, targeting SharePoint 2010|Yes, targeting SharePoint 2010|Yes, targeting SharePoint 2013|  
|.NET Framework 4 Client Profile support|Yes|No|No|  
  
1.  ASP.NET AJAX:  
  
     Server-side: The controls are included in ASP.NET 3.5, and are already in the **Toolbox** in Visual Studio. If you are using an earlier version of ASP.NET, for example, ASP.NET 2.0, then you can download the [ASP.NET AJAX Extensions](http://go.microsoft.com/fwlink/?LinkID=75360).  
  
     Client-side: The client-side ASP.NET AJAX Library is included in ASP.NET 3.5 SP1.  
  
2.  Parallel Computing:  
  
     Parallel Extensions contains the Task Parallel Library (TPL), Parallel LINQ (PLINQ), and the concurrency data structures; these components are included in the .NET Framework 4. The equivalent libraries for native C++ development are the Concurrency Runtime and the Agents library, which are included in Visual Studio 2010. The profiler and debugger enhancements are also included in Visual Studio 2010.  
  
3.  IronPython and IronRuby:  
  
     On the CodePlex Web sites for IronPython and IronRuby, several versions are available. Select the version that applies to your environment. The minimal requirement for both languages is the .NET Framework 2.0 SP1.  
  
4.  Visual Studio Tools for Office (VSTO) compatibility and Add-in functionality:  
  
    ||Visual Studio 2010|[!INCLUDE[vs_dev11_long](../build/includes/vs_dev11_long_md.md)]|[!INCLUDE[vs_dev12](../atl-mfc-shared/includes/vs_dev12_md.md)]|  
    |-|------------------------|-------------------------------------------------------------------|--------------------------------------------------------------|  
    |Document-level|Word 2007, Word 2010, Excel 2007, Excel 2010|Word 2010, Excel 2010|Word 2013, Excel 2013|  
    |Application-level|Word 2007, Word 2010, Excel 2007, Excel 2010, InfoPath 2007, InfoPath 2010, Outlook 2007, Outlook 2010, PowerPoint 2007, PowerPoint 2010, Visio 2007, Visio 2010, Project 2007, Project 2010|Word 2010, Excel 2010, InfoPath 2010, Outlook 2010, PowerPoint 2010, Visio 2010, Project 2010|Word 2013, Excel 2013, InfoPath 2013, Outlook 2013, PowerPoint 2013, Visio 2013, Project 2013|