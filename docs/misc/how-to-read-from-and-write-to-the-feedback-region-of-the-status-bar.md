---
title: "How to: Read from and Write to the Feedback Region of the Status Bar | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "feedback region, Status Bar"
  - "Status Bar, feedback region"
  - "Status Bar, overview"
ms.assetid: e639561c-e1e7-4660-b2a2-8bca80f34a29
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
# How to: Read from and Write to the Feedback Region of the Status Bar
The Feedback region of the [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] status bar displays text. You can set and retrieve text, display static text, and highlight the displayed text.  
  
### To use the Feedback region of the Visual Studio Status bar  
  
1.  Obtain an instance of the <xref:Microsoft.VisualStudio.Shell.Interop.IVsStatusbar> interface, which is made available through the <xref:Microsoft.VisualStudio.Shell.Interop.SVsStatusbar> service.  
  
2.  Determine whether the status bar is frozen by calling the <xref:Microsoft.VisualStudio.Shell.Interop.IVsStatusbar.IsFrozen%2A> method of the <xref:Microsoft.VisualStudio.Shell.Interop.IVsStatusbar> instance.  
  
3.  Set the text of the Feedback region by calling the <xref:Microsoft.VisualStudio.Shell.Interop.IVsStatusbar.SetText%2A> method and passing in a text string.  
  
4.  Read the text of the Feedback region by calling the <xref:Microsoft.VisualStudio.Shell.Interop.IVsStatusbar.GetText%2A> method.  
  
## Example  
 This example demonstrates how to write text to and read text from the Feedback region.  
  
 [!code-cs[VSSDKFeedbackStatusBar#1](../misc/codesnippet/CSharp/how-to-read-from-and-write-to-the-feedback-region-of-the-status-bar_1.cs)]
 [!code-vb[VSSDKFeedbackStatusBar#1](../misc/codesnippet/VisualBasic/how-to-read-from-and-write-to-the-feedback-region-of-the-status-bar_1.vb)]  
  
 In the above example, the code does the following things:  
  
-   Obtains an instance of the <xref:Microsoft.VisualStudio.Shell.Interop.IVsStatusbar> interface from the <xref:Microsoft.VisualStudio.Shell.Interop.SVsStatusbar> service.  
  
-   Checks to see if the status bar is frozen by calling the <xref:Microsoft.VisualStudio.Shell.Interop.IVsStatusbar.IsFrozen%2A> method.  
  
-   Inhibits further updates to the status bar by calling the <xref:Microsoft.VisualStudio.Shell.Interop.IVsStatusbar.FreezeOutput%2A> method.  
  
-   Reads the text from the status bar by calling the <xref:Microsoft.VisualStudio.Shell.Interop.IVsStatusbar.GetText%2A> method and displays it in a message box.  
  
-   Allows updates to the status bar by calling <xref:Microsoft.VisualStudio.Shell.Interop.IVsStatusbar.FreezeOutput%2A> and passing 0 in the parameter.  
  
-   Clears the contents of the status bar by calling the <xref:Microsoft.VisualStudio.Shell.Interop.IVsStatusbar.Clear%2A> method.  
  
## See Also  
 [Extending the Status Bar](/visualstudio/extensibility/extending-the-status-bar)   
 [How to: Program the Progress Bar Region of the Status Bar](../misc/how-to-program-the-progress-bar-region-of-the-status-bar.md)   
 [How to: Use the Animation Region of the Status Bar](../misc/how-to-use-the-animation-region-of-the-status-bar.md)   
 [How to: Program the Designer Region of the Status Bar](../misc/how-to-program-the-designer-region-of-the-status-bar.md)