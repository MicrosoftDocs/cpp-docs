---
title: "Walkthroughs for Customizing Visual Studio By Using VSPackages | Microsoft Docs"
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
  - "VSPackage"
  - "tutorials"
  - "customize visual studio"
  - "VS IDE"
  - "visual studio IDE"
ms.assetid: 7d10e376-74de-4402-9c10-ee9c9aa33c98
caps.latest.revision: 17
manager: "douge"
---
# Walkthroughs for Customizing Visual Studio By Using VSPackages
You can extend Visual Studio by creating VSPackages. These are the software modules that Visual Studio itself is made of. Tool windows, editors, services, and project types all are VSPackages. The Visual Studio SDK lets you create your own VSPackages.  
  
 The walkthroughs in this section teach how to create VSPackages, give them functionality, integrate them into Visual Studio, and distribute them to other users. For more information about VSPackages and what they can do, see the [Inside the Visual Studio SDK](http://msdn.microsoft.com/library/9118eaa4-0453-4dc5-9e16-c7062d254869).  
  
## In This Section  
 [Creating an Extension with a Menu Command](http://msdn.microsoft.com/library/f97104c8-2bcb-45c7-a3c9-85abeda8df98)  
 Shows how to create a VSPackage that adds a command to a menu in Visual Studio and how to add a keyboard shortcut to the command. Also shows how to add information about the package to the **About** dialog box and splash screen in Visual Studio.  
  
 [Adding a Tool Window](http://msdn.microsoft.com/library/8e16c381-03c8-404e-92ef-3614cdf3150a)  
 Demonstrates how to create a tool window in Visual Studio, and then how to embed a control in it and how to add a command bar to it. Also shows how to register the tool window for placement in Visual Studio.  
  
 [Extending the Properties, Task List, Output, and Options Windows](http://msdn.microsoft.com/library/06990510-5424-44b8-9fd9-6481acec5c76)  
 Shows how to build a basic task manager that lets users add tasks to the Visual Studio **Task List** and **Output** window. The added tasks can be edited in the Visual Studio **Properties** window. Also shows how to add a page to the **Options** dialog box.  
  
## Related Sections  
 [Introducing the Visual Studio SDK](http://msdn.microsoft.com/library/a308a6ce-d2da-47be-81ef-5b44169f2882)  
 Provides an overview of the features and tools that are included in the Visual Studio SDK and how you can use them to extend Visual Studio.  
  
 [Inside the Visual Studio SDK](http://msdn.microsoft.com/library/9118eaa4-0453-4dc5-9e16-c7062d254869)  
 Describes how you can customize the different elements of the Visual Studio IDE.