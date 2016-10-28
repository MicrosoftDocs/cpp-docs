---
title: "How to: Program the Designer Region of the Status Bar"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
helpviewer_keywords: 
  - "designer region, status bar"
  - "status bars, programming"
  - "status bars, designer region"
ms.assetid: 735a86bb-80b2-4557-9677-00799856017f
caps.latest.revision: 11
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
# How to: Program the Designer Region of the Status Bar
The Designer region of the [!INCLUDE[vsprvs](../build/includes/vsprvs_md.md)] status bar displays information that pertains to editing, for example, the line number or column number of the cursor location.  
  
### To program the Designer region of the Visual Studio status bar  
  
1.  Obtain an instance of the \<xref:Microsoft.VisualStudio.Shell.Interop.IVsStatusbar> interface, which is made available through the \<xref:Microsoft.VisualStudio.Shell.Interop.SVsStatusbar> service.  
  
2.  Update the Designer region of the status bar by calling the \<xref:Microsoft.VisualStudio.Shell.Interop.IVsStatusbar.SetInsMode*> method and \<xref:Microsoft.VisualStudio.Shell.Interop.IVsStatusbar.SetLineColChar*> method of the \<xref:Microsoft.VisualStudio.Shell.Interop.IVsStatusbar> instance.  
  
## Example  
 This example demonstrates how to program the Designer region of the status bar.  
  
 [!code[VSSDKDesignerStatusBar#1](../notintoc/codesnippet/VisualBasic/how-to--program-the-designer-region-of-the-status-bar_1.vb)]
[!code[VSSDKDesignerStatusBar#1](../notintoc/codesnippet/CSharp/how-to--program-the-designer-region-of-the-status-bar_1.cs)]  
  
## See Also  
 [Extending the Status Bar](../Topic/Extending%20the%20Status%20Bar.md)   
 [How to: Read from and Write to the Feedback Region of the Status Bar](../notintoc/how-to--read-from-and-write-to-the-feedback-region-of-the-status-bar.md)   
 [How to: Program the Progress Bar Region of the Status Bar](../notintoc/how-to--program-the-progress-bar-region-of-the-status-bar.md)   
 [How to: Use the Animation Region of the Status Bar](../notintoc/how-to--use-the-animation-region-of-the-status-bar.md)