---
title: "Walkthroughs for Customizing Visual Studio By Using VSPackages | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "VSPackage"
  - "tutorials"
  - "customize visual studio"
  - "VS IDE"
  - "visual studio IDE"
ms.assetid: 7d10e376-74de-4402-9c10-ee9c9aa33c98
caps.latest.revision: 17
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
# Walkthroughs for Customizing Visual Studio By Using VSPackages
You can extend Visual Studio by creating VSPackages. These are the software modules that Visual Studio itself is made of. Tool windows, editors, services, and project types all are VSPackages. The Visual Studio SDK lets you create your own VSPackages.  
  
 The walkthroughs in this section teach how to create VSPackages, give them functionality, integrate them into Visual Studio, and distribute them to other users. For more information about VSPackages and what they can do, see the [Inside the Visual Studio SDK](/visual-studio/extensibility/internals/inside-the-visual-studio-sdk).  
  
## In This Section  
 [Creating an Extension with a Menu Command](/visual-studio/extensibility/creating-an-extension-with-a-menu-command)  
 Shows how to create a VSPackage that adds a command to a menu in Visual Studio and how to add a keyboard shortcut to the command. Also shows how to add information about the package to the **About** dialog box and splash screen in Visual Studio.  
  
 [Adding a Tool Window](/visual-studio/extensibility/adding-a-tool-window)  
 Demonstrates how to create a tool window in Visual Studio, and then how to embed a control in it and how to add a command bar to it. Also shows how to register the tool window for placement in Visual Studio.  
  
 [Extending the Properties, Task List, Output, and Options Windows](/visual-studio/extensibility/extending-the-properties-task-list-output-and-options-windows)  
 Shows how to build a basic task manager that lets users add tasks to the Visual Studio **Task List** and **Output** window. The added tasks can be edited in the Visual Studio **Properties** window. Also shows how to add a page to the **Options** dialog box.  
  
## Related Sections  
 [Introducing the Visual Studio SDK](../Topic/Introducing%20the%20Visual%20Studio%20SDK.md)  
 Provides an overview of the features and tools that are included in the Visual Studio SDK and how you can use them to extend Visual Studio.  
  
 [Inside the Visual Studio SDK](/visual-studio/extensibility/internals/inside-the-visual-studio-sdk)  
 Describes how you can customize the different elements of the Visual Studio IDE.