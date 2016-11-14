---
title: "-ENTRY (Entry-Point Symbol) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/entry"
  - "VC.Project.VCLinkerTool.EntryPointSymbol"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "starting address"
  - "-ENTRY linker option"
  - "/ENTRY linker option"
  - "ENTRY linker option"
ms.assetid: 26c62ba2-4f52-4882-a7bd-7046a0abf445
caps.latest.revision: 10
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
# /ENTRY (Entry-Point Symbol)
```  
/ENTRY:function  
```  
  
## Remarks  
 where:  
  
 *function*  
 A function that specifies a user-defined starting address for an .exe file or DLL.  
  
## Remarks  
 The /ENTRY option specifies an entry point function as the starting address for an .exe file or DLL.  
  
 The function must be defined with the `__stdcall` calling convention. The parameters and return value depend on if the program is a console application, a windows application or a DLL. It is recommended that you let the linker set the entry point so that the C run-time library is initialized correctly, and C++ constructors for static objects are executed.  
  
 By default, the starting address is a function name from the C run-time library. The linker selects it according to the attributes of the program, as shown in the following table.  
  
|Function name|Default for|  
|-------------------|-----------------|  
|**mainCRTStartup** (or **wmainCRTStartup**)|An application using /SUBSYSTEM:**CONSOLE**; calls **main** (or **wmain**)|  
|**WinMainCRTStartup** (or **wWinMainCRTStartup**)|An application using /SUBSYSTEM:**WINDOWS**; calls `WinMain` (or **wWinMain**), which must be defined with `__stdcall`|  
|**_DllMainCRTStartup**|A DLL; calls `DllMain`, which must be defined with `__stdcall`, if it exists|  
  
 If the [/DLL](../../build/reference/dll-build-a-dll.md) or [/SUBSYSTEM](../../build/reference/subsystem-specify-subsystem.md) option is not specified, the linker selects a subsystem and entry point depending on whether **main** or `WinMain` is defined.  
  
 The functions **main**, `WinMain`, and `DllMain` are the three forms of the user-defined entry point.  
  
 When creating a managed image, the function specified with /ENTRY must have a signature of (LPVOID *var1*, DWORD *var2*, LPVOID *var3*).  
  
 For information on how to define your own DllMain entry point, see [Run-Time Library Behavior](../../build/run-time-library-behavior.md) .  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Click the **Linker** folder.  
  
3.  Click the **Advanced** property page.  
  
4.  Modify the **Entry Point** property.  
  
### To set this linker option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.EntryPointSymbol%2A>.  
  
## See Also  
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)