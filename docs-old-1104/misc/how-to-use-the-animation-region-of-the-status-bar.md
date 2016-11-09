---
title: "How to: Use the Animation Region of the Status Bar | Microsoft Docs"
ms.custom: ""
ms.date: "11/02/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "Status Bar, programming"
  - "Status Bar, animation region"
  - "animation region, Status Bar"
ms.assetid: ec6fb915-7bc8-4a90-8156-70c1a243caff
caps.latest.revision: 14
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
# How to: Use the Animation Region of the Status Bar
The Animation region of the [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] status bar displays a looping animation that indicates either a lengthy operation or an operation of indeterminate length (for example, building multiple projects in a solution).  
  
### To use the Animation region of the Visual Studio status bar  
  
1.  Obtain an instance of the <xref:Microsoft.VisualStudio.Shell.Interop.IVsStatusbar> interface, which is made available through the <xref:Microsoft.VisualStudio.Shell.Interop.SVsStatusbar> service.  
  
2.  Start the animation by calling the <xref:Microsoft.VisualStudio.Shell.Interop.IVsStatusbar.Animation*> method of the status bar. Pass in 1 as the value of the first parameter, and a reference to an animated icon as the value of the second parameter.  
  
3.  Stop the animation by calling the <xref:Microsoft.VisualStudio.Shell.Interop.IVsStatusbar.Animation*> method of the status bar. Pass in 0 as the value of the first parameter, and a reference to the animated icon as the value of the second parameter.  
  
## Example  
 This example demonstrates how to run a built-in animation in the Animation region.  
  
 [!code-cs[VSSDKAnimationStatusBar#1](../misc/codesnippet/CSharp/how-to-use-the-animation-region-of-the-status-bar_1.cs)]
 [!code-vb[VSSDKAnimationStatusBar#1](../misc/codesnippet/VisualBasic/how-to-use-the-animation-region-of-the-status-bar_1.vb)]  
  
## See Also  
 [Extending the Status Bar](/visual-studio/extensibility/extending-the-status-bar)   
 [How to: Read from and Write to the Feedback Region of the Status Bar](../misc/how-to-read-from-and-write-to-the-feedback-region-of-the-status-bar.md)   
 [How to: Program the Progress Bar Region of the Status Bar](../misc/how-to-program-the-progress-bar-region-of-the-status-bar.md)   
 [How to: Program the Designer Region of the Status Bar](../misc/how-to-program-the-designer-region-of-the-status-bar.md)