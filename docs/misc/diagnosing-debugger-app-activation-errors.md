---
title: "Diagnosing Debugger App Activation Errors | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.debug.error.app_activation_failure"
dev_langs: 
  - "FSharp"
  - "VB"
  - "CSharp"
  - "C++"
ms.assetid: 558ddc6d-0952-4617-84b8-0838717febcc
caps.latest.revision: 11
ms.author: "susanno"
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
# Diagnosing Debugger App Activation Errors
You might receive one of the following errors when you try to start a Windows Store app in the Visual Studio debugger:  
  
 **8061**  
  
```  
Unable to activate Windows Store app 'AppName'. The ProcessName process started, but the activation request failed with error 'ErrorNumber'  
```  
  
 **8062**  
  
```  
Unable to activate Windows Store app 'AppName'. The activation request failed with error 'ErrorNumber'  
```  
  
## To diagnose these errors  
 There are no sure ways to fix these errors. Use these techniques to diagnose the problem.  
  
### Use Event Viewer  
  
1.  Open Event Viewer (on the Windows Start menu, search for **Event Viewer**.)  In Event Viewer, navigate in the tree to the **Application and Services Log\Microsoft\Windows\Apps**  folder.  
  
2.  Filter the view to event Ids: 5900-6000  
  
3.  Examine the log and see what occurred.  
  
### Use the native debugger  
 Configure the project to run under a native debugger.  
  
 In Visual Studio, set the **Debugger Type** to **Native Only** on the **Debug** (**Debugging** in C++ and JavaScript) page of the property pages of the start-up project.  
  
 Look at the exceptions being thrown by looking at the output window. You might want to configure the debugger to stop when these exceptions are thrown.  
  
## Fixing app license errors  
 You might see an activatation error that contains “This app failed to launch because of an issue with its license.” You can try these workarounds:  
  
-   On the **Build** menu, choose **Clean Solution**, Open the solution folder in File Explorer and delete the **bin** and **obj** folders. Then choose **Build**, **Rebuild Solution**. Rebuilding the solution recreates the necessary folders.  
  
-   Select the app on the Start screen, then choose Uninstall on the app bar. Clean and rebuild your solution.  
  
-   From a command prompt running with Admin privileges, use Powershell commands to remove and reinstall your dev license. Clean and rebuild your solution. See [Getting a developer license at a command prompt](http://msdn.microsoft.com/library/windows/apps/Hh974578.aspx#getting_a_developer_license_at_a_command_prompt).