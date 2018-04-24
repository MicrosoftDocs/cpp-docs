---
title: "Installing Database Support (MFC-ATL) | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "data access [C++], installing database support"
  - "installing database support"
  - "ATL [C++], database support"
  - "databases [C++], installing database support"
ms.assetid: 3820ba96-4fb8-4405-83dd-bb3bc5998667
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Installing Database Support (MFC/ATL)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Installing Database Support (MFC-ATL)](https://docs.microsoft.com/cpp/data/installing-database-support-mfc-atl).  
  
  
When you run Setup for Visual C++ .NET, the following database components are installed automatically:  
  
-   All the necessary ATL OLE DB components. For more information, see [Installing ATL Database Support](../data/installing-atl-database-support.md).  
  
-   A set of ODBC drivers with the ODBC driver manager and the ODBC administrator program. For more information, see "ODBC Drivers Installed" and "ODBC SDK Components Installed" in [Installing MFC Database Support](../data/installing-mfc-database-support.md).  
  
-   Necessary components from the DAO software development kit (SDK). This includes Help files, which are not integrated with this documentation. However, if you work with DAO, you need to install a version of Jet compatible with your operating system. For more information, see "DAO SDK Components Installed" in [Installing MFC Database Support](../data/installing-mfc-database-support.md).  
  
 As part of the baseline installation, Setup also installs Microsoft Data Access Components (MDAC), which are necessary to support data access programming in Visual C++ .NET.  
  
 Visual C++ .NET installs the MDAC 2.7 SDK. You should check the Microsoft Universal Data Access Web site at [http://go.microsoft.com/fwlink/?LinkId=121548](http://go.microsoft.com/fwlink/?LinkId=121548) for updates to and news about the MDAC SDK.  
  
 If you are redistributing data access applications, you should also have the MDAC 2.7 redistribution program. The MDAC 2.7 SDK is designed for use with the MDAC 2.7 redistribution program (Mdac_typ.exe) included in the MDAC directory on the Visual Studio .NET Prerequisites CD-ROM. You can also download Mdac_typ.exe from the MDAC 2.7 SDK download link previously listed. For more information about redistributing components, see [Redistributing Controls](../data/ado-rdo/redistributing-controls.md).  
  
## See Also  
 [Data Access](../Topic/Data%20Access%20in%20Visual%20C++.md)

