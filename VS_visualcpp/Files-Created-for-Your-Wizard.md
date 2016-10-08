---
title: "Files Created for Your Wizard"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 7f0e393c-395e-491b-add2-904cf8838e81
caps.latest.revision: 10
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Files Created for Your Wizard
Your wizard uses the name that you specify in the **Name** box in the **New Project** dialog box to derive names for some files and classes.  
  
 The [Custom Wizard](../VS_visualcpp/Custom-Wizard.md) adds comments to the files it creates for your wizard. The Custom Wizard also creates a text file, readme.txt, in your new application directory. This file explains the contents and uses of the other new files created by the Custom Wizard.  
  
 The following table describes the files created by the Custom Wizard. For more information about how the key elements interact to create a wizard, see [Designing a Wizard](../VS_visualcpp/Designing-a-Wizard.md).  
  
|File|Description|  
|----------|-----------------|  
|[Project.vsz](../VS_visualcpp/.Vsz-File--Project-Control-.md)|A text file that resembles the old .ini format. It identifies the wizard engine and provides context and optional [custom parameters](../VS_visualcpp/Custom-Parameters-in-the-Wizard-.Vsz-File.md).|  
|[Project.vsdir](../Topic/Adding%20Wizards%20to%20the%20Add%20Item%20and%20New%20Project%20Dialog%20Boxes%20by%20Using%20.Vsdir%20Files.md)|A text file that enables the Visual Studio shell to find the wizard and display it in the **New Project** dialog box.|  
|[HTML files (optional)](../VS_visualcpp/HTML-Files.md)|A wizard can contain a user interface (UI), which is an HTML interface. A wizard without a UI contains no HTML files.<br /><br /> If a wizard has a UI, each individual screen in the wizard is known as a *page*, and each page specifies UI features.<br /><br /> The default.htm file defines the first page in the wizard. Use the **Number of pages** list box of [Application Settings, Custom Wizard](../VS_visualcpp/Application-Settings--Custom-Wizard.md) to specify additional pages. Each additional page is defined by a Page_*page-number*.htm file, where *page-number* ranges from 2 through the number of pages that you specify.|  
|[Script files](../VS_visualcpp/JScript-File.md)|The Custom Wizard creates a JScript file, default.js, for each wizard created. This file contains JScript functions that access the Visual C++ Wizard, Code, and Environment Object Models to customize a wizard. You can customize and add functions in your wizard's default.js file.<br /><br /> Additionally, your wizard includes the [common.js](../VS_visualcpp/Customizing-C---Wizards-with-Common-JScript-Functions.md) file, which contains commonly used JScript functions and is shared among all wizards, including the wizards used by Visual C++ to create other project types. For more information, see [Customizing C++ Wizards with Common JScript Functions](../VS_visualcpp/Customizing-C---Wizards-with-Common-JScript-Functions.md).|  
|[Templates](../VS_visualcpp/Template-Files.md)|A wizard's templates are a collection of text files that contain directives, which are parsed and inserted into the symbol table, depending on the wizard user's selections. The template text files are rendered according to the user input and added to the project created by the wizard. The appropriate information is obtained by directly accessing the wizard control's symbol table.|  
|[Templates.inf](../VS_visualcpp/Templates.inf-File.md)|A text file that lists all templates associated with the project.|  
|Default.vcxproj|An .xml file that contains the information about the project type.|  
|Sample.txt|A template file that shows how your wizard directives are used.|  
|ReadMe.txt|A template file that contains a summary of each file created by the Custom Wizard.|  
|Images (optional)|You can provide any images, such as icons, GIFs, BMPs, and other HTML-supported image formats, to enhance the UI for your wizard. A wizard that has no UI does not require images.|  
|Styles.css (optional)|A file that defines the styles for the UI. If your wizard does not have a user interface, the Custom Wizard does not create a .css file.|  
  
 If you delete your wizard files and directories, you must also delete the following files from the \vc7\vcprojects\ directory. Until you delete these files, icons for your wizard will continue to appear in the **New Project** dialog box.  
  
-   *projectname*.vsz  
  
-   *projectname*.ico  
  
-   *projectname*.vsdir  
  
## See Also  
 [Custom Wizard](../VS_visualcpp/Custom-Wizard.md)   
 [Creating a Custom Wizard](../VS_visualcpp/Creating-a-Custom-Wizard.md)   
 [Designing a Wizard](../VS_visualcpp/Designing-a-Wizard.md)   
 [Customizing C++ Wizards with Common JScript Functions](../VS_visualcpp/Customizing-C---Wizards-with-Common-JScript-Functions.md)