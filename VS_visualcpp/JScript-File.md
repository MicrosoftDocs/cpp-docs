---
title: "JScript File"
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
ms.assetid: 7841a09e-2dd2-4f1a-a13a-39ac53f24315
caps.latest.revision: 8
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
# JScript File
The [Custom Wizard](../VS_visualcpp/Custom-Wizard.md) accesses the script engine and creates a JScript file called Default.js for each project. It also includes [Common.js](../VS_visualcpp/Customizing-C---Wizards-with-Common-JScript-Functions.md). These files contain JScript functions that give you access to the Visual Studio and Visual C++ object models to customize a wizard. (See [Designing a Wizard](../VS_visualcpp/Designing-a-Wizard.md) for a list of these models.) You can add your own functions to the wizard project's Default.js file. To access properties and methods in the wizard object model or the environment model from a JScript file, prepend the object model item with "wizard." and "dte.", respectively.  
  
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
  
 When you click **Finish** in the [Custom Wizard](../VS_visualcpp/Custom-Wizard.md), the wizard loads the file Default.js in the Script Files folder in Solution Explorer. This JScript file creates projects and renders templates and then adds them to the solution when a user clicks **Finish** in your wizard.  
  
 By default, the project's Default.js file includes the following functions:  
  
|Function name|Description|  
|-------------------|-----------------|  
|**AddConfig**|Adds the project's configurations. You can supply compiler and linker settings.|  
|**AddFilesToCustomProj**|When the user clicks **Finish**, adds the specified files to the project.|  
|**AddFilters**|When the user clicks **Finish**, adds the specified source filters to the project.|  
|**CreateCustomProject**|When the user clicks **Finish**, creates the project at the specified location.|  
|**CreateCustomInfFile**|Creates the project's [Templates.inf file](../VS_visualcpp/Templates.inf-File.md).|  
|**DelFile**|Deletes the specified file.|  
|**GetTargetName**|Get the name of the specified file.|  
|**OnFinish**|Called by the wizard when the user clicks **Finish** to create the project, add files and filters, render templates, and set the configuration.|  
|**PchSettings**|Sets the precompiled header settings. See [SetCommonPchSettings](../VS_visualcpp/SetCommonPchSettings.md) in the Common.js reference for more information.|  
  
 Each wizard has a unique Default.js file, which includes TODO comments to help you identify where you must customize the file.  
  
 Visual C++ also includes [Common.js](../VS_visualcpp/Customizing-C---Wizards-with-Common-JScript-Functions.md), a file shared among all wizards and included in your wizard project. You can use the functions in Common.js.  
  
> [!NOTE]
>  Common.js contains descriptions of each function and its parameters. See the comments in Common.js for more information.  
  
 If you have functions that you want to share between your wizard projects, you can add them to Common.js. Create your own version of Common.js and save it in a common path, and then set the SCRIPT_COMMON_PATH to this path in your [.vsz file](../VS_visualcpp/.Vsz-File--Project-Control-.md).  
  
> [!NOTE]
>  The wizards included with Visual C++ use the JScript functions in Common.js. If you change these functions, the Visual C++ wizards can behave unexpectedly.  
  
 For more information about JScript, see [Writing, Compiling, and Debugging JScript Code](assetId:///13e57e7d-4867-4555-b9e4-fc24aa75e628).  
  
## Debugging Script  
 To debug script in wizard html files, you must enable script debugging.  
  
#### To enable script debugging  
  
1.  In Internet Explorer, click the **Tools** menu and choose **Internet Options**.  
  
2.  Click the **Advanced** tab.  
  
3.  Under the **Browsing** category, clear the **Disable Script Debugging** checkbox.  
  
 This will also allow common.js and default.js to show up in the **Running Documents** window when you click the Finish button on the wizard.  
  
## See Also  
 [Files Created for Your Wizard](../VS_visualcpp/Files-Created-for-Your-Wizard.md)   
 [Custom Wizard](../VS_visualcpp/Custom-Wizard.md)   
 [Creating a Custom Wizard](../VS_visualcpp/Creating-a-Custom-Wizard.md)   
 [Designing a Wizard](../VS_visualcpp/Designing-a-Wizard.md)