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
  
 [Options and Options Pages](../Topic/Options%20and%20Options%20Pages.md)  
 Introduces general and custom Options pages and explains how to implement them.  
  
 [Creating an Options Page](../Topic/Creating%20an%20Options%20Page.md)  
 Explains how to create two Options pages, a simple page and a custom page.  
  
 [Support for Settings Categories](../misc/support-for-settings-categories.md)  
 Discusses user settings and how they are created and persisted.  
  
 [Creating a Settings Category](../Topic/Creating%20a%20Settings%20Category.md)  
 Explains how to create a [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] settings category and use it to save values to and restore values from a settings file.  
  
 [Extending Properties and the Property Window](../Topic/Extending%20Properties%20and%20the%20Property%20Window.md)  
 Explains how to display and change the value of an object in the **Properties** window.  
  
 [Exposing Properties to the Properties Window](../Topic/Exposing%20Properties%20to%20the%20Properties%20Window.md)  
 Explains how to expose the public properties of an object to the **Properties** window.  
  
 [Support for Project and Configuration Properties](../Topic/Support%20for%20Project%20and%20Configuration%20Properties.md)  
 Explains how to display and change project and configuration properties.  
  
 [Getting Project Properties](../Topic/Getting%20Project%20Properties.md)  
 Guides you through the steps of creating a managed VSPackage that displays project properties in a tool window.  
  
 [Using the Settings Store](../Topic/Using%20the%20Settings%20Store.md)  
 Explains the Settings Store persistence mechanism and how to use it.  
  
## Related Sections  
 [VSPackages](../Topic/VSPackages.md)  
 Provides a general orientation to topics that explain how to create and use VSPackages.