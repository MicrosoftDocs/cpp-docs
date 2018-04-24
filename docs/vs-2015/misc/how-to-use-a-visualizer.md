---
title: "How to: Use a Visualizer | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.debug.dataviewer"
  - "vs.debug.stringviewer"
dev_langs: 
  - "FSharp"
  - "VB"
  - "CSharp"
  - "C++"
  - "JScript"
  - "VB"
  - "CSharp"
  - "C++"
helpviewer_keywords: 
  - "debugger, visualizers"
  - "visualizers, about visualizers"
ms.assetid: d2611385-0134-4387-8c5a-979fe625a462
caps.latest.revision: 37
ms.author: "susanno"
manager: "douge"
---
# How to: Use a Visualizer
You can use a visualizer to display the contents of a variable or object in a way that is meaningful for the data type. You can use visualizers from **DataTips**, a **Watch** window, the **Autos** window, or the **Locals** window.  
  
 Visualizers are not supported on the Compact Framework.  
  
> [!NOTE]
>  In **Store** apps, only the standard text, HTML, XML, and JSON visualizers are supported. Custom (user-created) visualizers are not supported.  
  
### To open a visualizer  
  
1.  Click the magnifying glass icon that appears next to a variable name in **DataTips**, a **Watch** window, or in the **Autos**, **Locals**, or **Quick Watch** window.  
  
     A list of visualizers is displayed.  
  
2.  Click the visualizer you want to use.  
  
### To use a visualizer for managed code during remote debugging  
  
-   Copy the visualizer DLL to the remote computer before you start the debugging session.  
  
     The path to the DLL must be the same on both the remote and the local computers. This path can be either of the following locations:  
  
     *Visual Studio install path* `\Common7\Packages\Debugger\Visualizers`  
  
     -or-  
  
     `My Documents\Visual Studio 2010\Visualizers` *Visual Studio Version* `\Visualizers`  
  
## See Also  
 [Create Custom Visualizers](http://msdn.microsoft.com/library/c24c006f-f2ac-429f-89db-677fc0c6e1ea)   
 [How to: Install a Visualizer](http://msdn.microsoft.com/library/3310ef43-515c-4d97-b0f9-51047247d3da)   
 [How to: Write a Visualizer](http://msdn.microsoft.com/library/625a0d4f-abcc-43f2-9f8c-31c131a4378e)   
 [View data values in Data Tips](http://msdn.microsoft.com/library/ffa7bd18-439b-4685-a9b3-c7884b5de41f)