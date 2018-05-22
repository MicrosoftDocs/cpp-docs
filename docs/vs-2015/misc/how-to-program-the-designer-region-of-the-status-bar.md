---
title: "How to: Program the Designer Region of the Status Bar | Microsoft Docs"
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
  - "designer region, status bar"
  - "status bars, programming"
  - "status bars, designer region"
ms.assetid: 735a86bb-80b2-4557-9677-00799856017f
caps.latest.revision: 11
manager: "douge"
---
# How to: Program the Designer Region of the Status Bar
The Designer region of the [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] status bar displays information that pertains to editing, for example, the line number or column number of the cursor location.  
  
### To program the Designer region of the Visual Studio status bar  
  
1.  Obtain an instance of the <xref:Microsoft.VisualStudio.Shell.Interop.IVsStatusbar> interface, which is made available through the <xref:Microsoft.VisualStudio.Shell.Interop.SVsStatusbar> service.  
  
2.  Update the Designer region of the status bar by calling the <xref:Microsoft.VisualStudio.Shell.Interop.IVsStatusbar.SetInsMode%2A> method and <xref:Microsoft.VisualStudio.Shell.Interop.IVsStatusbar.SetLineColChar%2A> method of the <xref:Microsoft.VisualStudio.Shell.Interop.IVsStatusbar> instance.  
  
## Example  
 This example demonstrates how to program the Designer region of the status bar.  
  
 [!code-csharp[VSSDKDesignerStatusBar#1](../snippets/csharp/VS_Snippets_VSSDK/vssdkdesignerstatusbar/cs/vssdkdesignerstatusbarpackage.cs#1)]
 [!code-vb[VSSDKDesignerStatusBar#1](../snippets/visualbasic/VS_Snippets_VSSDK/vssdkdesignerstatusbar/vb/vssdkdesignerstatusbarpackage.vb#1)]  
  
## See Also  
 [Extending the Status Bar](http://msdn.microsoft.com/library/f955115c-4c5f-45ec-b41b-365868c5ec0c)   
 [How to: Read from and Write to the Feedback Region of the Status Bar](../misc/how-to-read-from-and-write-to-the-feedback-region-of-the-status-bar.md)   
 [How to: Program the Progress Bar Region of the Status Bar](../misc/how-to-program-the-progress-bar-region-of-the-status-bar.md)   
 [How to: Use the Animation Region of the Status Bar](../misc/how-to-use-the-animation-region-of-the-status-bar.md)