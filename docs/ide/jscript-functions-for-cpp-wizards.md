---
title: "JScript Functions for C++ Wizards | Microsoft Docs"
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
  - "wizard JScript methods"
  - "wizard JScript methods, creating C++ wizards"
ms.assetid: f3046c56-cf67-4aaa-919e-8c066bfb6760
caps.latest.revision: 7
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
# JScript Functions for C++ Wizards
|||  
|-|-|  
|[AddATLSupportToProject](../ide/addatlsupporttoproject.md)|Adds ATL support to an MFC project.|  
|[AddCoclassFromFile](../ide/addcoclassfromfile.md)|Renders and inserts into the project's .idl file a template file that contains a coclass.|  
|[AddCommonConfig](../ide/addcommonconfig.md)|Adds the default configurations to the project.|  
|[AddFilesToProject](../ide/addfilestoproject.md)|Adds all the files to the project based on the list in the file Templates.inf.|  
|[AddInterfaceFromFile](../ide/addinterfacefromfile.md)|Renders and inserts into the project's IDL file a template file that contains an interface.|  
|[CanAddATLClass](../ide/canaddatlclass.md)|Called by the wizard to verify if the project is compatible with the code wizard that is about to be run (in other words, it can accept an ATL class).<br /><br /> The wizard calls this function when the parameter PREPROCESS_FUNCTION is in the [project control's .vsz file](../ide/dot-vsz-file-project-control.md) and checks if the [Visual C++ Code Model](http://msdn.microsoft.com/en-us/dd6452c2-1054-44a1-b0eb-639a94a1216b) is available. If the code model is not available, the function reports an error and returns **false**.|  
|[CanAddClass](../ide/canaddclass.md)|The wizard calls this function when the parameter PREPROCESS_FUNCTION is in the project control's .vsz file.<br /><br /> It verifies if the Visual C++ Code Model object is available. If the code model is not available, the function reports an error and returns **false**.|  
|[CanAddMFCClass](../ide/canaddmfcclass.md)|Called by the wizard to verify if the project is compatible with the Code Wizard that is about to be run (in other words, it can accept an MFC class).<br /><br /> The wizard calls this function when the parameter PREPROCESS_FUNCTION is in the project control's .vsz file and checks if the Visual C++ Code Model object is available. If the code model is not available, the function reports an error and returns **false**.|  
|[CanAddNonAttributed](../ide/canaddnonattributed.md)|Indicates whether the project supports both attributed and nonattributed ATL objects.|  
|[CanUseFileName](../ide/canusefilename.md)|Checks if a file exists. If so, the wizard prompts the user to merge the code to be added to the existing file.|  
|[ConvertProjectToAttributed](../ide/convertprojecttoattributed.md)|Converts an ATL project to attributed.|  
|[CreateInfFile](../ide/createinffile.md)|Creates the Templates.inf file.|  
|[CreateProject](../ide/createproject.md)|Creates a C++ project.|  
|[CreateSafeName](../ide/createsafename.md)|Generates a C++ friendly name.|  
|[DeleteFile](../ide/deletefile.md)|Deletes the specified file.|  
|[DoesIncludeExist](../ide/doesincludeexist.md)|Indicates whether a `#include` statement exists in a file.|  
|[GetCodeForDllCanUnloadNow](../ide/getcodefordllcanunloadnow.md)|Retrieves code needed to unload the DLL.|  
|[GetCodeForDllGetClassObject](../ide/getcodefordllgetclassobject.md)|Retrieves the code for the DLL class object.|  
|[GetCodeForDllRegisterServer](../ide/getcodefordllregisterserver.md)|Retrieves the code to register a server.|  
|[GetCodeForDllUnregisterServer](../ide/getcodefordllunregisterserver.md)|Retrieves the code to unregister a server.|  
|[GetCodeForExitInstance](../ide/getcodeforexitinstance.md)|Helper function to get the text for `ExitInstance`.|  
|[GetCodeForInitInstance](../ide/getcodeforinitinstance.md)|Helper function to get the text for [InitInstance](../mfc/reference/cwinapp-class.md#initinstance).|  
|[GetExportPragmas](../ide/getexportpragmas.md)|Retrieves the pragmas for exporting functions.|  
|[GetInterfaceClasses](../ide/getinterfaceclasses.md)|Returns the `VCCodeClass` object associated with an interface.|  
|[GetInterfaceType](../ide/getinterfacetype.md)|Returns the type of interface (for example, custom, dual, dispinterface, oleautomation).|  
|[GetMaxID](../ide/getmaxid.md)|Returns the highest `dispid` from members of this interface and all of its bases.|  
|[GetMemberfunction](../ide/getmemberfunction.md)|Returns a function object based on the given name.|  
|[GetProjectFile](../ide/getprojectfile.md)|Returns the file name of per-project type of files (.rc, .idl, and so on).|  
|[GetProjectPath](../ide/getprojectpath.md)|Returns the project's directory path.|  
|[GetRuntimeErrorDesc](../ide/getruntimeerrordesc.md)|Returns a description for the type of exception.|  
|[GetUniqueFileName](../ide/getuniquefilename.md)|Returns a unique file name.|  
|[IncludeCodeElementDeclaration](../ide/includecodeelementdeclaration.md)|Adds the include statement to `strInFile`, including the header where `strCodeElemName` is implemented, if such a header found is in the project.|  
|[InsertIntoFunction](../ide/insertintofunction.md)|Helper function called in `AddATLSupportToProject` to insert code into `InitInstance`.|  
|[IsATLProject](../ide/isatlproject.md)|Indicates whether project is ATL based.|  
|[IsAttributedProject](../ide/isattributedproject.md)|Indicates whether a project is attributed.|  
|[IsMFCProject](../ide/ismfcproject.md)|Checks if a project is MFC based.|  
|[LineBeginsWith](../ide/linebeginswith.md)|Helper function called in `InsertIntoFunction` to determine if a line begins with a particular string|  
|[OffsetToLineNumber](../ide/offsettolinenumber.md)|Finds the line number for a given position in a function body.|  
|[OnWizFinish](../ide/onwizfinish.md)|Called from the wizard HTML script when the user clicks **Finish**. Calls the wizard control's **Finish** method.|  
|[RenderAddTemplate](../ide/renderaddtemplate.md)|Renders a template file and optionally adds it to the project.|  
|[SetCommonPchSettings](../ide/setcommonpchsettings.md)|Sets up the precompiled header for the project.|  
|[SetErrorInfo](../ide/seterrorinfo.md)|Provides error information.|  
|[SetFilters](../ide/setfilters.md)|Adds source, include, and resource filters for project folders.|  
|[SetMergeProxySymbol](../ide/setmergeproxysymbol.md)|Called by the wizard to add the _MERGE_PROXYSTUB symbol if needed.|  
|[SetNoPchSettings](../ide/setnopchsettings.md)|Sets up the project configuration properties when no precompiled header is used.|  
  
## See Also  
 [Customizing C++ Wizards with Common JScript Functions](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)   
 [Creating a Custom Wizard](../ide/creating-a-custom-wizard.md)   
 [Designing a Wizard](../ide/designing-a-wizard.md)