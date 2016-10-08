---
title: "JScript Functions for C++ Wizards"
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
ms.assetid: f3046c56-cf67-4aaa-919e-8c066bfb6760
caps.latest.revision: 7
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
# JScript Functions for C++ Wizards
|||  
|-|-|  
|[AddATLSupportToProject](../VS_visualcpp/AddATLSupportToProject.md)|Adds ATL support to an MFC project.|  
|[AddCoclassFromFile](../VS_visualcpp/AddCoclassFromFile.md)|Renders and inserts into the project's .idl file a template file that contains a coclass.|  
|[AddCommonConfig](../VS_visualcpp/AddCommonConfig.md)|Adds the default configurations to the project.|  
|[AddFilesToProject](../VS_visualcpp/AddFilesToProject.md)|Adds all the files to the project based on the list in the file Templates.inf.|  
|[AddInterfaceFromFile](../VS_visualcpp/AddInterfaceFromFile.md)|Renders and inserts into the project's IDL file a template file that contains an interface.|  
|[CanAddATLClass](../VS_visualcpp/CanAddATLClass.md)|Called by the wizard to verify if the project is compatible with the code wizard that is about to be run (in other words, it can accept an ATL class).<br /><br /> The wizard calls this function when the parameter PREPROCESS_FUNCTION is in the [project control's .vsz file](../VS_visualcpp/.Vsz-File--Project-Control-.md) and checks if the [Visual C++ Code Model](assetId:///dd6452c2-1054-44a1-b0eb-639a94a1216b) is available. If the code model is not available, the function reports an error and returns **false**.|  
|[CanAddClass](../VS_visualcpp/CanAddClass.md)|The wizard calls this function when the parameter PREPROCESS_FUNCTION is in the project control's .vsz file.<br /><br /> It verifies if the Visual C++ Code Model object is available. If the code model is not available, the function reports an error and returns **false**.|  
|[CanAddMFCClass](../VS_visualcpp/CanAddMFCClass.md)|Called by the wizard to verify if the project is compatible with the Code Wizard that is about to be run (in other words, it can accept an MFC class).<br /><br /> The wizard calls this function when the parameter PREPROCESS_FUNCTION is in the project control's .vsz file and checks if the Visual C++ Code Model object is available. If the code model is not available, the function reports an error and returns **false**.|  
|[CanAddNonAttributed](../VS_visualcpp/CanAddNonAttributed.md)|Indicates whether the project supports both attributed and nonattributed ATL objects.|  
|[CanUseFileName](../VS_visualcpp/CanUseFileName.md)|Checks if a file exists. If so, the wizard prompts the user to merge the code to be added to the existing file.|  
|[ConvertProjectToAttributed](../VS_visualcpp/ConvertProjectToAttributed.md)|Converts an ATL project to attributed.|  
|[CreateInfFile](../VS_visualcpp/CreateInfFile.md)|Creates the Templates.inf file.|  
|[CreateProject](../VS_visualcpp/CreateProject.md)|Creates a C++ project.|  
|[CreateSafeName](../VS_visualcpp/CreateSafeName.md)|Generates a C++ friendly name.|  
|[DeleteFile](../VS_visualcpp/DeleteFile.md)|Deletes the specified file.|  
|[DoesIncludeExist](../VS_visualcpp/DoesIncludeExist.md)|Indicates whether a `#include` statement exists in a file.|  
|[GetCodeForDllCanUnloadNow](../VS_visualcpp/GetCodeForDllCanUnloadNow.md)|Retrieves code needed to unload the DLL.|  
|[GetCodeForDllGetClassObject](../VS_visualcpp/GetCodeForDllGetClassObject.md)|Retrieves the code for the DLL class object.|  
|[GetCodeForDllRegisterServer](../VS_visualcpp/GetCodeForDllRegisterServer.md)|Retrieves the code to register a server.|  
|[GetCodeForDllUnregisterServer](../VS_visualcpp/GetCodeForDllUnregisterServer.md)|Retrieves the code to unregister a server.|  
|[GetCodeForExitInstance](../VS_visualcpp/GetCodeForExitInstance.md)|Helper function to get the text for `ExitInstance`.|  
|[GetCodeForInitInstance](../VS_visualcpp/GetCodeForInitInstance.md)|Helper function to get the text for [InitInstance](../Topic/CWinApp::InitInstance.md).|  
|[GetExportPragmas](../VS_visualcpp/GetExportPragmas.md)|Retrieves the pragmas for exporting functions.|  
|[GetInterfaceClasses](../VS_visualcpp/GetInterfaceClasses.md)|Returns the `VCCodeClass` object associated with an interface.|  
|[GetInterfaceType](../VS_visualcpp/GetInterfaceType.md)|Returns the type of interface (for example, custom, dual, dispinterface, oleautomation).|  
|[GetMaxID](../VS_visualcpp/GetMaxID.md)|Returns the highest `dispid` from members of this interface and all of its bases.|  
|[GetMemberfunction](../VS_visualcpp/GetMemberfunction.md)|Returns a function object based on the given name.|  
|[GetProjectFile](../VS_visualcpp/GetProjectFile.md)|Returns the file name of per-project type of files (.rc, .idl, and so on).|  
|[GetProjectPath](../VS_visualcpp/GetProjectPath.md)|Returns the project's directory path.|  
|[GetRuntimeErrorDesc](../VS_visualcpp/GetRuntimeErrorDesc.md)|Returns a description for the type of exception.|  
|[GetUniqueFileName](../VS_visualcpp/GetUniqueFileName.md)|Returns a unique file name.|  
|[IncludeCodeElementDeclaration](../VS_visualcpp/IncludeCodeElementDeclaration.md)|Adds the include statement to `strInFile`, including the header where `strCodeElemName` is implemented, if such a header found is in the project.|  
|[InsertIntoFunction](../VS_visualcpp/InsertIntoFunction.md)|Helper function called in `AddATLSupportToProject` to insert code into `InitInstance`.|  
|[IsATLProject](../VS_visualcpp/IsATLProject.md)|Indicates whether project is ATL based.|  
|[IsAttributedProject](../VS_visualcpp/IsAttributedProject.md)|Indicates whether a project is attributed.|  
|[IsMFCProject](../VS_visualcpp/IsMFCProject.md)|Checks if a project is MFC based.|  
|[LineBeginsWith](../VS_visualcpp/LineBeginsWith.md)|Helper function called in `InsertIntoFunction` to determine if a line begins with a particular string|  
|[OffsetToLineNumber](../VS_visualcpp/OffsetToLineNumber.md)|Finds the line number for a given position in a function body.|  
|[OnWizFinish](../VS_visualcpp/OnWizFinish.md)|Called from the wizard HTML script when the user clicks **Finish**. Calls the wizard control's **Finish** method.|  
|[RenderAddTemplate](../VS_visualcpp/RenderAddTemplate.md)|Renders a template file and optionally adds it to the project.|  
|[SetCommonPchSettings](../VS_visualcpp/SetCommonPchSettings.md)|Sets up the precompiled header for the project.|  
|[SetErrorInfo](../VS_visualcpp/SetErrorInfo.md)|Provides error information.|  
|[SetFilters](../VS_visualcpp/SetFilters.md)|Adds source, include, and resource filters for project folders.|  
|[SetMergeProxySymbol](../VS_visualcpp/SetMergeProxySymbol.md)|Called by the wizard to add the _MERGE_PROXYSTUB symbol if needed.|  
|[SetNoPchSettings](../VS_visualcpp/SetNoPchSettings.md)|Sets up the project configuration properties when no precompiled header is used.|  
  
## See Also  
 [Customizing C++ Wizards with Common JScript Functions](../VS_visualcpp/Customizing-C---Wizards-with-Common-JScript-Functions.md)   
 [Creating a Custom Wizard](../VS_visualcpp/Creating-a-Custom-Wizard.md)   
 [Designing a Wizard](../VS_visualcpp/Designing-a-Wizard.md)