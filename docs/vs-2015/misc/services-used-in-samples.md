---
title: "Services Used in Samples | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "services, appearing in samples"
  - "samples, services"
ms.assetid: 04864feb-9b8b-45c4-8233-fc2ed9273987
caps.latest.revision: 9
manager: "douge"
---
# Services Used in Samples
The samples included in the [!INCLUDE[vsipsdk](../includes/vsipsdk-md.md)] make use of many services. The following list shows several commonly used services and the samples that use them.  
  
> [!NOTE]
>  If both reference and unsupported samples are available, only the reference sample is listed.  
  
|Service|Sample|  
|-------------|------------|  
|<xref:Microsoft.VisualStudio.Shell.Interop.SLocalRegistry>|BscEdit, ProjectSubtype|  
|<xref:Microsoft.VisualStudio.Shell.Interop.SVsActivityLog>|[How to: Use the Activity Log](http://msdn.microsoft.com/library/bb3d3322-0e5e-4dd5-b93a-24d5fbcd2ffd)|  
|<xref:Microsoft.VisualStudio.Shell.Interop.SVsAddProjectItemDlg>|BscPrj, FigPkg|  
|<xref:Microsoft.VisualStudio.Shell.Interop.SVsCreateAggregateProject>|BscPrj|  
|<xref:Microsoft.VisualStudio.Shell.Interop.SVsFileChange>|Deprecated. Use <xref:Microsoft.VisualStudio.Shell.Interop.SVsFileChangeEx> instead.|  
|<xref:Microsoft.VisualStudio.Shell.Interop.SVsFileChangeEx>|BscEdit, FigPkg|  
|<xref:Microsoft.VisualStudio.Shell.Interop.SVsMonitorUserContext>|Reference.HelpIntegration sample.|  
|<xref:Microsoft.VisualStudio.Shell.Interop.SVsQueryEditQuerySave>|SingleViewEditor sample.|  
|<xref:Microsoft.VisualStudio.Shell.Interop.SVsRegisterEditors>|SingleViewEditor sample.|  
|<xref:Microsoft.VisualStudio.Shell.Interop.SVsRegisterProjectTypes>|BscPrj, FigPkg|  
|<xref:Microsoft.VisualStudio.Shell.Interop.SVsResourceManager>|Reference.Package, Reference.ToolWindow, and many other samples|  
|<xref:Microsoft.VisualStudio.Shell.Interop.SVsRunningDocumentTable>|SingleViewEditor sample.|  
|<xref:Microsoft.VisualStudio.Shell.Interop.SVsSccManager>|BscPrj, FigPkg|  
|<xref:Microsoft.VisualStudio.Shell.Interop.SVsShell>|Reference.Package, Reference.ToolWindow, and many other samples|  
|<xref:Microsoft.VisualStudio.Shell.Interop.SVsShellDebugger>|BscEdt, BscPrj, FigPkg|  
|<xref:Microsoft.VisualStudio.Shell.Interop.SVsShellMonitorSelection>|BscPrj, FigPkg|  
|<xref:Microsoft.VisualStudio.Shell.Interop.SVsSolution>|BscPrj, FigPkg|  
|<xref:Microsoft.VisualStudio.Shell.Interop.SVsTrackProjectDocuments>|BscPrj, FigPkg|  
|<xref:Microsoft.VisualStudio.Shell.Interop.SVsTrackSelectionEx>|SingleViewEditor, BscPrj, FigPkg|  
|<xref:Microsoft.VisualStudio.Shell.Interop.SVsUIShell>|Reference.ToolWindow, BscEdit, and many other samples|  
|<xref:Microsoft.VisualStudio.Shell.Interop.SVsUIShellOpenDocument>|BscEdit, FigPkg|  
|<xref:Microsoft.VisualStudio.Shell.Interop.SVsWindowFrame>|Reference.ToolWindow|  
  
## See Also  
 [List of Available Services](http://msdn.microsoft.com/library/724eb24b-b87c-4971-a2e7-adee7afc03b2)   
 [Service Essentials](http://msdn.microsoft.com/library/fbe84ad9-efe1-48b1-aba3-b50b90424d47)