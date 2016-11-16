---
title: "How to: Integrate Custom Tools into the Project Properties | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "msbuild.cpp.howto.integratecustomtools"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "msbuild (c++), howto: integrate custom tools"
ms.assetid: f32d91a4-44e9-4de3-aa9a-1c7f709ad2ee
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# How to: Integrate Custom Tools into the Project Properties
You can add custom tool options to the Visual Studio **Property Pages** window by creating an underlying XML schema file.  
  
 The **Configuration Properties** section of the **Property Pages** window displays setting groups that are known as *rules*. Every rule contains the settings for a tool or a group of features. For example, the **Linker** rule contains the settings for the linker tool. The settings in a rule can be subdivided into *categories*.  
  
 This document explains how to create a file in a set directory that contains properties for your custom tool so that the properties are loaded when Visual Studio starts. For information about how to modify the file, see [Platform Extensibilty Part 2](http://go.microsoft.com/fwlink/?LinkID=191489) on the Visual Studio Project Team blog.  
  
### To add or change project properties  
  
1.  In the XML editor, create an XML file.  
  
2.  Save the file in the %ProgramFiles%\MSBuild\Microsoft.Cpp\v4.0\ folder. Every rule in the **Property Pages** window is represented by an XML file in this folder. Make sure that the file is uniquely named in the folder.  
  
3.  Copy the content of %ProgramFiles%\MSBuild\Microsoft.Cpp\v4.0\cl.xml, close it without saving changes, and then paste the content in your new XML file. You can use any XML schema file – this is just one that can be used so you start with a template.  
  
4.  In the new XML file, modify the content according to your requirements. Make sure to change the **Rule Name** and **Rule.DisplayName** at the top of the file.  
  
5.  Save the changes and close the file.  
  
6.  The XML files in %ProgramFiles%\MSBuild\Microsoft.Cpp\v4.0\ are loaded when Visual Studio starts. Therefore, to test the new file, restart Visual Studio.  
  
7.  In **Solution Explorer**, right-click a project and then click **Properties**. In the **Property Pages** window, in the left pane, verify that there is a new node with the name of your Rule.  
  
## See Also  
 [MSBuild (Visual C++)](../build/msbuild-visual-cpp.md)