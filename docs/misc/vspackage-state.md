---
title: "VSPackage State | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
# VSPackage State
Many factors determine the set of persisted values, or state, of a [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] application.  
  
-   Projects have project and configuration properties.  
  
-   Solutions have properties.  
  
-   User settings determine the size and position of document windows, tool windows, docking state, and keyboard shortcuts.  
  
-   Applications can have options that a user sets.  
  
-   Objects that an application creates can have properties of their own.  
  
 Here are some of the ways that a [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] application state can be managed:  
  
-   Through the project and solution property pages.  
  
-   Through the **Import and Export Settings Wizard**, which enables a user to move settings from one computer to another.  
  
-   Through the **Options** dialog box, which includes options related to applications.  
  
-   Through the **Properties** window, which exposes properties of objects.  
  
-   Through Automation. An application can access VSPackage and object properties that have been exposed to Automation.  
  
 Underlying the application state are various persistence mechanisms that enable the application state to be saved and restored.  
  
## In This Section  
 [Support for State Persistence](../misc/support-for-state-persistence.md)  
 Lists common strategies for saving, restoring, and resetting the state of a VSPackage.  
  
 [Options and Options Pages](/visual-studio/extensibility/internals/options-and-options-pages)  
 Introduces general and custom Options pages and explains how to implement them.  
  
 [Creating an Options Page](/visual-studio/extensibility/creating-an-options-page)  
 Explains how to create two Options pages, a simple page and a custom page.  
  
 [Support for Settings Categories](../misc/support-for-settings-categories.md)  
 Discusses user settings and how they are created and persisted.  
  
 [Creating a Settings Category](/visual-studio/extensibility/creating-a-settings-category)  
 Explains how to create a [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] settings category and use it to save values to and restore values from a settings file.  
  
 [Extending Properties and the Property Window](/visual-studio/extensibility/extending-properties-and-the-property-window)  
 Explains how to display and change the value of an object in the **Properties** window.  
  
 [Exposing Properties to the Properties Window](/visual-studio/extensibility/exposing-properties-to-the-properties-window)  
 Explains how to expose the public properties of an object to the **Properties** window.  
  
 [Support for Project and Configuration Properties](/visual-studio/extensibility/internals/support-for-project-and-configuration-properties)  
 Explains how to display and change project and configuration properties.  
  
 [Getting Project Properties](/visual-studio/extensibility/getting-project-properties)  
 Guides you through the steps of creating a managed VSPackage that displays project properties in a tool window.  
  
 [Using the Settings Store](/visual-studio/extensibility/using-the-settings-store)  
 Explains the Settings Store persistence mechanism and how to use it.  
  
## Related Sections  
 [VSPackages](/visual-studio/extensibility/internals/vspackages)  
 Provides a general orientation to topics that explain how to create and use VSPackages.