---
title: "Redistributing Controls | Microsoft Docs"
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
  - "ActiveX controls [C++], redistributing"
  - "redistributable controls"
ms.assetid: 32d03b95-d328-4f10-ad9b-f3ebbe03339d
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
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
# Redistributing Controls
Visual C++ .NET supplies ActiveX controls that you can use in applications. You can then redistribute the controls along with the applications. In the **Insert ActiveX Control** dialog box, highlighting a control will display its .ocx or .dll file.  
  
 For a list of the redistributable Visual C++–supplied ActiveX controls, see Program Files\Microsoft Visual Studio .NET 2003\redist.txt on Disc 2 of the Visual C++ .NET product CD-ROM; any .ocx files in the Win\System folder are redistributable.  
  
 [MFC ActiveX Controls: Distributing ActiveX Controls](../../mfc/mfc-activex-controls-distributing-activex-controls.md) explains how to install and register redistributable ActiveX controls.  
  
 [Merge Module Projects](http://msdn.microsoft.com/en-us/e92e4f85-fba5-45ee-a432-892a956daeb9) explains how Visual Studio .NET deployment handles the redistribution of files through merge modules.  
  
 [Redistributing Database Support Files](../../ide/redistributing-database-support-files.md) discusses how to redistribute support files for the database technologies found in the Microsoft Data Access SDK.  
  
 If your application uses an ActiveX control that connects to a database, you need to install or do the following:  
  
-   **DCOM for Windows.** You need to run Dcom98.exe or Dcom95.exe on any computer running versions of Windows earlier than Windows 2000. (Dcom98.exe is specifically for Windows 98; Dcom95.exe is specifically for Windows 95.)  
  
-   **MDAC 2.8 SDK.** You should install the Microsoft Data Access 2.8 SDK on the target computer. You can download this from [http://go.microsoft.com/fwlink/?LinkId=205525](http://go.microsoft.com/fwlink/?linkid=205525).  
  
-   **MDAC 2.8 redistribution program.** The MDAC 2.8 SDK is designed for use with the MDAC 2.8 redistribution program (MDAC_TYP.EXE). You can download MDAC_TYP.EXE from [http://go.microsoft.com/fwlink/?LinkId=164412](http://go.microsoft.com/fwlink/?linkid=164412).  
  
-   **Replicate the DSN.** You also need to replicate the data source name on the target computer. You can do this programmatically with functions such as [ConfigDSN](https://msdn.microsoft.com/en-us/library/ms709275.aspx).  
  
## Important Notes on Component Redistribution  
  
-   **Redistributing DAO components.** Microsoft recommends that you use Jet 4.0 SP3 (version 2927.04) or later. Jet 4.0 SP3 ships with Windows 2000 and Windows Me. Using this version of Jet reduces the number of Jet versions that must be tested with your application.  
  
     Windows XP ships with an upgraded service pack version of Jet not included in earlier versions of Windows. Testing your application on Windows XP automatically tests the version of Jet that ships with Windows XP. You need to test DAO applications on both versions of Jet 4.0 before releasing them.  
  
     The only difference in the Windows XP version is fixes for problems found since Windows 2000 was released. If users of your application do not encounter problems, there is no need to upgrade beyond Jet 4.0 SP3.  
  
-   **Known problems with ActiveX controls.** There is a known problem with dynamically creating instances of redistributable ActiveX controls on computers on which Visual C++ has not been installed, as described in the Knowledge Base article, "PRB: Dynamic Creation of Redistributable Control Fails" (Q151804). You can find Knowledge Base articles on the MSDN Library CD-ROM or at [http://support.microsoft.com](http://support.microsoft.com). There is also a known problem with placing some ActiveX controls on a dialog box; you get a message box stating that the control requires a design-time license, as described in the Knowledge Base article, "PRB: Need Design-Time License for Microsoft ActiveX Controls" (Q155059). You can find Knowledge Base articles on the MSDN Library CD-ROM or at [http://support.microsoft.com](http://support.microsoft.com).  
  
-   **Visual Studio licensed controls.** Visual Studio licensees can redistribute additional ActiveX controls specific to the other Visual Studio development tools. For example, the Chart control is distributed with Visual Basic, which also ships in Visual Studio. Thus, if you are using Visual C++ as a part of a Visual Studio license, you can redistribute the Chart control. However, if you purchased only Visual C++, you do not have a license to redistribute it.  
  
## See Also  
 [Using ActiveX Controls](../../data/ado-rdo/using-activex-controls.md)   
 [MFC ActiveX Controls: Distributing ActiveX Controls](../../mfc/mfc-activex-controls-distributing-activex-controls.md)