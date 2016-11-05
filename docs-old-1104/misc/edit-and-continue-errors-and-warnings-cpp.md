---
title: "Edit and Continue Errors and Warnings (C++) | Microsoft Docs"
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
  - "ENC2001"
  - "ENC1006"
  - "ENC2008"
  - "ENC1009"
  - "ENC1002"
  - "ENC2002"
  - "ENC1011"
  - "ENC1003"
  - "ENC1004"
  - "ENC1008"
  - "ENC1013"
  - "ENC2005"
  - "ENC1010"
  - "ENC2004"
  - "ENC1007"
  - "ENC1005"
  - "ENC2006"
  - "ENC1001"
  - "ENC2007"
  - "ENC2003"
dev_langs: 
  - "FSharp"
  - "VB"
  - "CSharp"
  - "C++"
helpviewer_keywords: 
  - "errors [C++], Edit and Continue"
  - "Edit and Continue [C++], errors and warnings"
  - "errors [debugger], Edit and Continue"
ms.assetid: b5c5e25c-7ca4-4ca9-b91e-e8882de44dae
caps.latest.revision: 12
ms.author: "susanno"
manager: "douge"
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
# Edit and Continue Errors and Warnings (C++)
[!INCLUDE[cpp_current_short](../misc/includes/cpp_current_short_md.md)] Edit and Continue lets you stop program execution in Break mode, make changes to the executing code, and then resume program execution with the newly incorporated changes.  
  
 Declarative code edits that affect the public structure of a class are generally prohibited, and some edits that you might make to a method, property body, or private declarations within a class are not allowed. Whenever possible, Edit and Continue marks code that cannot be edited as light gray and displays an error message. For more information about unsupported edits in Edit and Continue for [!INCLUDE[cpp_current_short](../misc/includes/cpp_current_short_md.md)], see [Edit and Continue (Visual C++)](/visual-studio/debugger/edit-and-continue-visual-cpp).  
  
 Edit and Continue errors and warnings can be resolved in one of the following ways:  
  
|Resolution|Error and Warning Message Numbers|  
|----------------|---------------------------------------|  
|Stop debugging, reapply your changes, and then resume debugging.|1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1010, 1013, 2003, 2005 For a list of the error and warning messages in this category, see [Restart Debugging Messages](../misc/edit-and-continue-errors-and-warnings-cpp.md#BKMK_RestartDebuggingMessages).|  
|On the **Edit** menu, choose **Undo** and then continue debugging with the unchanged code.<br /><br /> -Or-<br /><br /> Stop debugging, reapply your changes, and then resume debugging.|1009, 1011 For a list of the error and warning messages in this category, see [Undo or Stop Messages](../misc/edit-and-continue-errors-and-warnings-cpp.md#BKMK_UndoOrStopMessages).|  
|Continue debugging. Your changes will be ignored the first time the code is hit, but will be applied in subsequent calls.|2001, 2002, 2004. For a list of the error and warning messages in this category, see [Apply at Next Call Messages](../misc/edit-and-continue-errors-and-warnings-cpp.md#BKMK_ApplyAtNextCallMessages).|  
|Perform some other action, such as resetting breakpoints or rebuilding modules with the current version of [!INCLUDE[cpp_current_short](../misc/includes/cpp_current_short_md.md)].|2007, 2008. For a list of the error and warning messages in this category, see [Other Action Required Messages](../misc/edit-and-continue-errors-and-warnings-cpp.md#BKMK_OtherActionRequiredMessages)|  
  
##  <a name="BKMK_RestartDebuggingMessages"></a> Restart Debugging Messages  
 The following error messages must be resolved by stopping the current debugging session, reapplying the edits you made, and then restarting the debugging session.  
  
|||  
|-|-|  
|1001|Cannot update thunk for symbol: *symbol* (loc: *location*, thunk: *address*)|  
|1002|Data symbol has changed: symbol (*symbol*)|  
|1003|Cannot map thunk for new function: *function*|  
|1004|Cannot open PDB for type packing: *pdb* (pdb)|  
|1005|Symbol was renamed, removed, or modified: *symbol*|  
|1006|A global or static variable was added, renamed, removed, or changed data type or initialization: *symbol* (referenced by: *module*)|  
|1007|Symbol not defined: *symbol* (referenced by: *module*)|  
|1008|Cannot perform runtime initialization required by object loaded during edit: *module*|  
|1010|A static or global variable was added: *variable referenced in file*|  
|1013|Debugger ran out of memory while applying code changes|  
|2003|Code position change may cause exception handling or variable destruction errors: *function*|  
|2005|New source contributes to code. The debugger's line number information may be affected: function (*function*)|  
  
##  <a name="BKMK_UndoOrStopMessages"></a> Undo or Stop Messages  
 The following error messages can be resolved by stopping the current debugging session, reapplying the edits you made, and then restarting the debugging session.  
  
-   On the Edit menu, click Undo. You can resume debugging, but your edits are not applied.  
  
     -Or-  
  
-   Stop debugging, reapply the edits, and then restart debugging.  
  
|||  
|-|-|  
|1009|A static or global variable was deleted: *variable referenced in file*|  
|1011|A static or global variable was changed: *variable referenced in file*|  
  
##  <a name="BKMK_ApplyAtNextCallMessages"></a> Apply at Next Call Messages  
 You can continue your debugging session when one of the following warning messages is displayed. Your edits will not be applied when the code is called the first time after the edit; the edits are applied in all subsequent calls to the code.  
  
|||  
|-|-|  
|2001|Cannot find local variable or variable data type changed: symbol (*symbol*)|  
|2002|Deleted variable or new local variable requires construction or destruction: symbol (*symbol*)|  
|2004|Cannot handle adding or removing a local variable with a name that is already defined more than once: symbol (*symbol*)|  
  
##  <a name="BKMK_OtherActionRequiredMessages"></a> Other Action Required Messages  
 The action required to resolve these messages are described after the message text.  
  
|||  
|-|-|  
|2007|Some breakpoints set in the disassembly window could not be moved.<br /><br /> To resolve this issue, reset the affected breakpoints.|  
|2008|Could not load debug symbols for file *file* in module *module*.<br /><br /> To resolve this issue, Rebuild the specified module with the current version of [!INCLUDE[vs_current_short](../misc/includes/vs_current_short_md.md)].|  
  
## See Also  
 [Edit and Continue (Visual C++)](/visual-studio/debugger/edit-and-continue-visual-cpp)   
 [Edit and Continue](/visual-studio/debugger/edit-and-continue)