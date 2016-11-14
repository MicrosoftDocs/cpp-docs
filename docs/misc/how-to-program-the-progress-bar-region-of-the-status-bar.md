---
title: "How to: Program the Progress Bar Region of the Status Bar | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "Status Bar, progress bar region"
  - "progress bar, Status Bar"
  - "Status Bar, programming"
ms.assetid: 4b54616a-8c20-436d-b764-f2380e5760f2
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
# How to: Program the Progress Bar Region of the Status Bar
The Progress Bar region of the [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] status bar displays the incremental progress of quick operations, for example, saving a file to disk.  
  
### To use the Progress Bar region of the Visual Studio status bar  
  
1.  Obtain an instance of the <xref:Microsoft.VisualStudio.Shell.Interop.IVsStatusbar> interface, which is made available through the <xref:Microsoft.VisualStudio.Shell.Interop.SVsStatusbar> service.  
  
2.  Initialize the progress bar to starting values by calling the <xref:Microsoft.VisualStudio.Shell.Interop.IVsStatusbar.Progress%2A> method.  
  
3.  Update the progress bar as your operation proceeds by using the <xref:Microsoft.VisualStudio.Shell.Interop.IVsStatusbar.Progress%2A> method to set new values.  
  
## Example  
 This example demonstrates how to initialize and update the progress bar.  
  
 [!code-cs[VSSDKProgressStatusBar#1](../misc/codesnippet/CSharp/how-to-program-the-progress-bar-region-of-the-status-bar_1.cs)]
 [!code-vb[VSSDKProgressStatusBar#1](../misc/codesnippet/VisualBasic/how-to-program-the-progress-bar-region-of-the-status-bar_1.vb)]  
  
 In the example, the code:  
  
-   Obtains an instance of the <xref:Microsoft.VisualStudio.Shell.Interop.IVsStatusbar> interface from the <xref:Microsoft.VisualStudio.Shell.Interop.SVsStatusbar> service.  
  
-   Initializes the progress bar to given starting values by calling the <xref:Microsoft.VisualStudio.Shell.Interop.IVsStatusbar.Progress%2A> method.  
  
-   Simulates an operation by iterating through a `for` loop and updating the progress bar values by using the <xref:Microsoft.VisualStudio.Shell.Interop.IVsStatusbar.Progress%2A> method.  
  
-   Clears the progress bar by using the <xref:Microsoft.VisualStudio.Shell.Interop.IVsStatusbar.Clear%2A> method.  
  
## See Also  
 [Extending the Status Bar](/visual-studio/extensibility/extending-the-status-bar)   
 [How to: Read from and Write to the Feedback Region of the Status Bar](../misc/how-to-read-from-and-write-to-the-feedback-region-of-the-status-bar.md)   
 [How to: Use the Animation Region of the Status Bar](../misc/how-to-use-the-animation-region-of-the-status-bar.md)   
 [How to: Program the Designer Region of the Status Bar](../misc/how-to-program-the-designer-region-of-the-status-bar.md)