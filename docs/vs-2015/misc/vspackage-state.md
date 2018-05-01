---
title: "VSPackage State | Microsoft Docs"
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
  - "state, VSPackages"
  - "VSPackages, managing application state"
  - "state persistence"
ms.assetid: 6056a9ea-e7a8-481c-9fc8-340229fa12d9
caps.latest.revision: 25
manager: "douge"
---
# VSPackage State
Many factors determine the set of persisted values, or state, of a [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] application.  
  
-   Projects have project and configuration properties.  
  
-   Solutions have properties.  
  
-   User settings determine the size and position of document windows, tool windows, docking state, and keyboard shortcuts.  
  
-   Applications can have options that a user sets.  
  
-   Objects that an application creates can have properties of their own.  
  
 Here are some of the ways that a [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] application state can be managed:  
  
-   Through the project and solution property pages.  
  
-   Through the **Import and Export Settings Wizard**, which enables a user to move settings from one computer to another.  
  
-   Through the **Options** dialog box, which includes options related to applications.  
  
-   Through the **Properties** window, which exposes properties of objects.  
  
-   Through Automation. An application can access VSPackage and object properties that have been exposed to Automation.  
  
 Underlying the application state are various persistence mechanisms that enable the application state to be saved and restored.  
  
## In This Section  
 [Support for State Persistence](../misc/support-for-state-persistence.md)  
 Lists common strategies for saving, restoring, and resetting the state of a VSPackage.  
  
 [Options and Options Pages](http://msdn.microsoft.com/library/e6c0e636-5ec3-450e-b395-fc4bb9d75918)  
 Introduces general and custom Options pages and explains how to implement them.  
  
 [Creating an Options Page](http://msdn.microsoft.com/library/9f4e210c-4b47-4daa-91fa-1c301c4587f9)  
 Explains how to create two Options pages, a simple page and a custom page.  
  
 [Support for Settings Categories](../misc/support-for-settings-categories.md)  
 Discusses user settings and how they are created and persisted.  
  
 [Creating a Settings Category](http://msdn.microsoft.com/library/97c88693-05ff-499e-8c43-352ee073dcb7)  
 Explains how to create a [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] settings category and use it to save values to and restore values from a settings file.  
  
 [Extending Properties and the Property Window](http://msdn.microsoft.com/library/1e925025-3d21-4cdb-a917-78db7bb78fe9)  
 Explains how to display and change the value of an object in the **Properties** window.  
  
 [Exposing Properties to the Properties Window](http://msdn.microsoft.com/library/47f295b5-1ca5-4e7b-bb52-7b926b136622)  
 Explains how to expose the public properties of an object to the **Properties** window.  
  
 [Support for Project and Configuration Properties](http://msdn.microsoft.com/library/9fcfaa0f-7b41-4b68-82ec-7a151dca5d7e)  
 Explains how to display and change project and configuration properties.  
  
 [Getting Project Properties](http://msdn.microsoft.com/library/96ba07ca-0811-4013-8602-12550ac4ba79)  
 Guides you through the steps of creating a managed VSPackage that displays project properties in a tool window.  
  
 [Using the Settings Store](http://msdn.microsoft.com/library/447ec08a-eca5-40b8-89b0-f98fdf3d39a4)  
 Explains the Settings Store persistence mechanism and how to use it.  
  
## Related Sections  
 [VSPackages](http://msdn.microsoft.com/library/cad0893a-9c5f-45b7-952a-e2294f83e324)  
 Provides a general orientation to topics that explain how to create and use VSPackages.