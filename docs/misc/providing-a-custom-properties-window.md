---
title: "Providing a Custom Properties Window | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "property browsers, providing"
  - "Properties window, providing your own"
ms.assetid: 408dcdef-8ef9-4644-97d2-f311cd35824f
caps.latest.revision: 12
manager: "douge"
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
# Providing a Custom Properties Window
It is possible to provide your own **Properties** window for a given project system, instead of extending the **Properties** window provided by the [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] integrated development environment (IDE). The most-often encountered scenario is when you yourself implement the object sited in the window frame.  
  
 In the event you do not implement the object sited in the window frame, but do still have access to it by some other means, there are a number of ways to access the <xref:Microsoft.VisualStudio.Shell.Interop.IVsWindowFrame> interface as listed in the last procedure on this page.  
  
### To provide your Properties window  
  
1.  Define a GUID that represents your **Properties** window implementation.  
  
2.  In your <xref:Microsoft.VisualStudio.Shell.Interop.IVsPackage.SetSite%2A> implementation, use the <xref:Microsoft.VisualStudio.Shell.Interop.IProfferService> service to proffer your **Properties** window as a service to the Visual Studio Environment.  
  
### To call your properties window  
  
1.  Call the <xref:Microsoft.VisualStudio.Shell.Interop.IVsWindowPane.SetSite%2A> method.  
  
2.  `QueryService` for <xref:Microsoft.VisualStudio.Shell.Interop.SVsTrackSelectionEx> from the <xref:Microsoft.VisualStudio.OLE.Interop.IServiceProvider> passed into the <xref:Microsoft.VisualStudio.Shell.Interop.IVsWindowPane.SetSite%2A> method.  
  
3.  Obtain <xref:Microsoft.VisualStudio.Shell.Interop.IVsTrackSelectionEx> from <xref:Microsoft.VisualStudio.Shell.Interop.SVsTrackSelectionEx> service.  
  
4.  Call <xref:Microsoft.VisualStudio.Shell.Interop.IVsTrackSelectionEx.OnElementValueChange%2A> with first parameter set to `SEID_PropertyBrowserSID` (taken from the <xref:Microsoft.VisualStudio.VSConstants.VSSELELEMID> enumeration), and the third parameter, `varValue`, representing a string form of the GUID that represents your **Properties** window. Make this call only once at the first creation of your **Properties** window document window. After the call this **Properties** window is associated with your window frame.  
  
### To obtain the Window Frame object when you are not the implementer  
  
-   You can `QueryService` for <xref:Microsoft.VisualStudio.Shell.Interop.SVsTrackSelectionEx> service from <xref:Microsoft.VisualStudio.Shell.Interop.IVsWindowFrame.GetProperty%2A> with the parameter `propid` set to <xref:Microsoft.VisualStudio.Shell.Interop.__VSFPROPID>.  
  
-   You can obtain the active document window by calling <xref:Microsoft.VisualStudio.Shell.Interop.IVsMonitorSelection.GetCurrentSelection%2A> through SVsMonitorSelection service. Set the parameter `elementid` to `SEID_WindowFrame`, taken from the <xref:Microsoft.VisualStudio.VSConstants.VSSELELEMID> enumeration.  
  
## See Also  
 [Extending Properties](/visualstudio/extensibility/internals/extending-properties)   
 [Properties Window Fields and Interfaces](/visualstudio/extensibility/internals/properties-window-fields-and-interfaces)