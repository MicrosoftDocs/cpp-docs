---
title: "JScript File | Microsoft Docs"
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
  - "debugging script"
  - "debugging script, enabling script debugging"
  - "GetTargetName method"
  - "custom wizards, accessing wizard object model"
  - "AddFilters method"
  - "DelFile method"
  - "AddConfig method"
  - "OnFinish method"
  - "debugging [JScript], enabling script debugging"
  - "debugging [JScript], JScript files"
  - "CreateCustomInfFile method"
  - "Default.js file"
  - "Common.js file"
  - "custom wizards, JScript file"
  - "CreateCustomProject method"
  - "files [C++], created by Custom Wizard"
  - "PchSettings method"
  - "JScript files"
  - "AddFilesToCustomProj method"
ms.assetid: 7841a09e-2dd2-4f1a-a13a-39ac53f24315
caps.latest.revision: 8
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
# JScript File
The [Custom Wizard](../ide/custom-wizard.md) accesses the script engine and creates a JScript file called Default.js for each project. It also includes [Common.js](../ide/customizing-cpp-wizards-with-common-jscript-functions.md). These files contain JScript functions that give you access to the Visual Studio and Visual C++ object models to customize a wizard. (See [Designing a Wizard](../ide/designing-a-wizard.md) for a list of these models.) You can add your own functions to the wizard project's Default.js file. To access properties and methods in the wizard object model or the environment model from a JScript file, prepend the object model item with "wizard." and "dte.", respectively.  
  
 For example:  
  
```  
function CreateCustomProject(strProjectName, strProjectPath)  
{  
   try  
   {  
      var strProjTemplatePath = wizard.FindSymbol('PROJECT_TEMPLATE_PATH');  
var strProjTemplate = '';  
      strProjTemplate = strProjTemplatePath + '\\default.vcproj';  
  
      var Solution = dte.Solution;  
      var strSolutionName = "";  
      if (wizard.FindSymbol("CLOSE_SOLUTION"))  
...  
```  
  
 When you click **Finish** in the [Custom Wizard](../ide/custom-wizard.md), the wizard loads the file Default.js in the Script Files folder in Solution Explorer. This JScript file creates projects and renders templates and then adds them to the solution when a user clicks **Finish** in your wizard.  
  
 By default, the project's Default.js file includes the following functions:  
  
|Function name|Description|  
|-------------------|-----------------|  
|**AddConfig**|Adds the project's configurations. You can supply compiler and linker settings.|  
|**AddFilesToCustomProj**|When the user clicks **Finish**, adds the specified files to the project.|  
|**AddFilters**|When the user clicks **Finish**, adds the specified source filters to the project.|  
|**CreateCustomProject**|When the user clicks **Finish**, creates the project at the specified location.|  
|**CreateCustomInfFile**|Creates the project's [Templates.inf file](../ide/templates-inf-file.md).|  
|**DelFile**|Deletes the specified file.|  
|**GetTargetName**|Get the name of the specified file.|  
|**OnFinish**|Called by the wizard when the user clicks **Finish** to create the project, add files and filters, render templates, and set the configuration.|  
|**PchSettings**|Sets the precompiled header settings. See [SetCommonPchSettings](../ide/setcommonpchsettings.md) in the Common.js reference for more information.|  
  
 Each wizard has a unique Default.js file, which includes TODO comments to help you identify where you must customize the file.  
  
 Visual C++ also includes [Common.js](../ide/customizing-cpp-wizards-with-common-jscript-functions.md), a file shared among all wizards and included in your wizard project. You can use the functions in Common.js.  
  
> [!NOTE]
>  Common.js contains descriptions of each function and its parameters. See the comments in Common.js for more information.  
  
 If you have functions that you want to share between your wizard projects, you can add them to Common.js. Create your own version of Common.js and save it in a common path, and then set the SCRIPT_COMMON_PATH to this path in your [.vsz file](../ide/dot-vsz-file-project-control.md).  
  
> [!NOTE]
>  The wizards included with Visual C++ use the JScript functions in Common.js. If you change these functions, the Visual C++ wizards can behave unexpectedly.  
  
 For more information about JScript, see [Writing, Compiling, and Debugging JScript Code](http://msdn.microsoft.com/en-us/13e57e7d-4867-4555-b9e4-fc24aa75e628).  
  
## Debugging Script  
 To debug script in wizard html files, you must enable script debugging.  
  
#### To enable script debugging  
  
1.  In Internet Explorer, click the **Tools** menu and choose **Internet Options**.  
  
2.  Click the **Advanced** tab.  
  
3.  Under the **Browsing** category, clear the **Disable Script Debugging** checkbox.  
  
 This will also allow common.js and default.js to show up in the **Running Documents** window when you click the Finish button on the wizard.  
  
## See Also  
 [Files Created for Your Wizard](../ide/files-created-for-your-wizard.md)   
 [Custom Wizard](../ide/custom-wizard.md)   
 [Creating a Custom Wizard](../ide/creating-a-custom-wizard.md)   
 [Designing a Wizard](../ide/designing-a-wizard.md)