---
title: "Installing MFC Database Support | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "installing ODBC"
  - "ODBC drivers [C++], installing"
  - "ODBC components [C++], installing"
  - "DAO [C++], installing components"
  - "databases [C++], MFC"
  - "installing DAO"
  - "databases [C++], installing database support"
ms.assetid: a6c2fc84-9e0e-4f39-a464-0bcbc415b946
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
# Installing MFC Database Support
##  <a name="_core_odbc_drivers_installed"></a> ODBC Drivers Installed  
 Setup installs the following ODBC drivers:  
  
-   Microsoft Access driver  
  
-   Microsoft dBASE driver  
  
-   Microsoft Excel driver  
  
-   Microsoft FoxPro VFP driver  
  
-   Microsoft Visual FoxPro driver  
  
-   Microsoft ODBC for Oracle driver  
  
-   Microsoft Paradox driver  
  
-   Microsoft Text driver  
  
-   Microsoft SQL Server driver  
  
 For information about obtaining additional drivers and for a list of ODBC drivers included in this version of Visual C++, see [ODBC Driver List](../data/odbc/odbc-driver-list.md).  
  
##  <a name="_core_odbc_sdk_components_installed"></a> ODBC SDK Components Installed  
 Visual C++ includes many key ODBC components, including the required header files, libraries, DLLs, and tools. These include the ODBC Administrator Control Panel application, which you use to configure ODBC data sources, and the ODBC driver manager. Also included are ODBC drivers for many popular DBMSs, as listed in [ODBC Drivers Installed](#_core_odbc_drivers_installed).  
  
 The ODBC SDK gives you additional information and tools for writing and testing ODBC drivers. Note that as of Visual C++ .NET, the ODBC SDK is no longer included on the Visual C++ .NET installation media and is available as part of the [!INCLUDE[winsdkshort](../atl-mfc-shared/reference/includes/winsdkshort_md.md)] installed with the Visual Studio .NET Prerequisites.  
  
##  <a name="_core_dao_sdk_components_installed"></a> DAO SDK Components Installed  
  
> [!NOTE]
>  Microsoft recommends using OLE DB or ODBC for new projects. DAO should only be used in maintaining existing applications.  
  
 The following components of the DAO SDK are installed by default:  
  
-   Microsoft Jet (4.0 SP3)  
  
-   Microsoft Jet (3.x MDB)  
  
-   Microsoft Jet (1.x, 2.x)  
  
-   All the database formats listed under [What Databases Can I Access with DAO and ODBC?](../data/what-data-sources-can-i-access-with-dao-and-odbc-q.md)  
  
 In Visual C++ .NET, the DAO SDK is installed with the Visual Studio .NET Prerequisites. Run \Jet\Jetsetup.exe.  
  
> [!NOTE]
>  Microsoft recommends that you use Jet 4.0 Service Pack 3 (version 2927.04) or later. Jet 4.0 Service Pack 3 shipped with Windows 2000 and Windows ME. Using this version of Jet reduces the number of Jet versions that must be tested with your application. Windows XP might ship with another version of Jet. See "Note on Redistributing DAO Components" in [Redistributing Controls](../data/ado-rdo/redistributing-controls.md).  
  
 If you want to install other DAO SDK components, such as the DAO SDK C++ classes, example files, or the Windows Help version of the DAO Help file, install the DAO SDK from the Visual C++ 6.0 CD-ROM.  
  
 For updates to and news about OLE DB, see the Universal Data Access Web site at [http://go.microsoft.com/fwlink/?LinkId=121548](http://go.microsoft.com/fwlink/?linkid=121548).  
  
## See Also  
 [Data Access Programming (MFC/ATL)](../data/data-access-programming-mfc-atl.md)