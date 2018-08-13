---
title: "MIDL Property Pages: Advanced | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-ide"]
ms.topic: "conceptual"
f1_keywords: ["VC.Project.VCMidlTool.ErrorCheckBounds", "VC.Project.VCMidlTool.ErrorCheckStubData", "VC.Project.VCMidlTool.ErrorCheckAllocations", "VC.Project.VCMidlTool.CPreprocessOptions", "VC.Project.VCMidlTool.UndefinePreprocessorDefinitions", "VC.Project.VCMidlTool.EnableErrorChecks", "VC.Project.VCMidlTool.RedirectOutputAndErrors", "VC.Project.VCMidlTool.ErrorCheckEnumRange", "VC.Project.VCMidlTool.StructMemberAlignment", "VC.Project.VCMidlTool.ErrorCheckRefPointers", "VC.Project.VCMidlTool.ValidateParameters"]
dev_langs: ["C++"]
helpviewer_keywords: ["MIDL, property pages"]
ms.assetid: d1c92e01-f403-4ed6-ab45-4043a3c9c6bb
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# MIDL Property Pages: Advanced
The **Advanced** property page in the **MIDL** folder specifies the following MIDL compiler options:  
  
-   Enable Error Checking ([/error](http://msdn.microsoft.com/library/windows/desktop/aa367324))  
  
-   Check Allocations ([/error](http://msdn.microsoft.com/library/windows/desktop/aa367324))  
  
-   Check Bounds ([/error](http://msdn.microsoft.com/library/windows/desktop/aa367324))  
  
-   Check Enum Range ([/error](http://msdn.microsoft.com/library/windows/desktop/aa367324))  
  
-   Check Reference Pointers ([/error](http://msdn.microsoft.com/library/windows/desktop/aa367324))  
  
-   Check Stub Data ([/error](http://msdn.microsoft.com/library/windows/desktop/aa367324))  
  
-   Validate Parameters ([/robust](http://msdn.microsoft.com/library/windows/desktop/aa367363)) \*  
  
-   Struct Member Alignment ([/Zp](http://msdn.microsoft.com/library/windows/desktop/aa367388))  
  
-   Redirect Output ([/o](http://msdn.microsoft.com/library/windows/desktop/aa367351))  
  
-   C Preprocess Options ([/cpp_opt](http://msdn.microsoft.com/library/windows/desktop/aa367318))  
  
-   Undefine Preprocessor Definitions ([/U](http://msdn.microsoft.com/library/windows/desktop/aa367373))  
  
 \* /robust is only for use when building for a Windows 2000 or later machine. If you build an ATL project and want to use /robust, change this line in the dlldatax.c file:  
  
```  
#define _WIN32_WINNT 0x0400   //for Windows NT 4.0 or Windows 95 with DCOM  
to   
#define _WIN32_WINNT 0x0500   //for Windows NT 4.0 or Windows 95 with DCOM  
```  
  
 For information on how to access the **Advanced** property page in the **MIDL** folder, see [Working with Project Properties](../ide/working-with-project-properties.md).  
  
 For information on how to programmatically access MIDL options for C++ projects, see <xref:Microsoft.VisualStudio.VCProjectEngine.VCMidlTool>.  
  
## See Also  
 [MIDL Property Pages](../ide/midl-property-pages.md)