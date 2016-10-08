---
title: "EDITBIN Options"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 2da9f88e-cbab-4d64-bb66-ef700535230f
caps.latest.revision: 11
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# EDITBIN Options
You can use EDITBIN to modify object files, executable files, and dynamic-link libraries (DLLs). Options specify the changes that EDITBIN makes.  
  
 An option consists of an option specifier, which is either a dash ( – ) or a forward slash ( / ), followed by the name of the option. Option names cannot be abbreviated. Some options take arguments that are specified after a colon ( : ). No spaces or tabs are allowed within an option specification. Use one or more spaces or tabs to separate option specifications on the command line. Option names and their keyword arguments or file name arguments are not case-sensitive. For example, -bind and /BIND mean the same thing.  
  
 EDITBIN has the following options:  
  
|Option|Purpose|  
|------------|-------------|  
|[/ALLOWBIND](../VS_visualcpp/-ALLOWBIND.md)|Specifies whether a DLL can be bound.|  
|[/ALLOWISOLATION](../VS_visualcpp/-ALLOWISOLATION.md)|Specifies DLL or executable file manifest lookup behavior.|  
|[/APPCONTAINER](../VS_visualcpp/-APPCONTAINER.md)|Specifies whether the app must run within an AppContainer—for example, a Windows 8.x Store app.|  
|[/BIND](../VS_visualcpp/-BIND.md)|Sets the addresses for the entry points in the specified objects to speed load time.|  
|[/DYNAMICBASE](../VS_visualcpp/-DYNAMICBASE.md)|Specifies whether the DLL or executable image can be randomly rebased at load-time by using address space layout randomization (ASLR).|  
|[/ERRORREPORT](../VS_visualcpp/-ERRORREPORT--editbin.exe-.md)|Reports internal errors to Microsoft.|  
|[/HEAP](../VS_visualcpp/-HEAP.md)|Sets the size of the executable image’s heap in bytes.|  
|[/HIGHENTROPYVA](../VS_visualcpp/-HIGHENTROPYVA.md)|Specifies whether the DLL or executable image supports high entropy (64-bit) address space layout randomization (ASLR).|  
|[/INTEGRITYCHECK](../VS_visualcpp/-INTEGRITYCHECK.md)|Specifies whether to check the digital signature at load time.|  
|[/LARGEADDRESSAWARE](../VS_visualcpp/-LARGEADDRESSAWARE.md)|Specifies whether the object supports addresses that are larger than two gigabytes.|  
|[/NOLOGO](../VS_visualcpp/-NOLOGO--EDITBIN-.md)|Suppresses the EDITBIN startup banner.|  
|[/NXCOMPAT](../VS_visualcpp/-NXCOMPAT.md)|Specifies whether the executable image is compatible with Windows Data Execution Prevention.|  
|[/REBASE](../VS_visualcpp/-REBASE.md)|Sets the base addresses for the specified objects.|  
|[/RELEASE](../VS_visualcpp/-RELEASE.md)|Sets the checksum in the header.|  
|[/SECTION](../VS_visualcpp/-SECTION--EDITBIN-.md)|Overrides the attributes of a section.|  
|[/STACK](../VS_visualcpp/-STACK.md)|Sets the size of the executable image’s stack in bytes.|  
|[/SUBSYSTEM](../VS_visualcpp/-SUBSYSTEM.md)|Specifies the execution environment.|  
|[/SWAPRUN](../VS_visualcpp/-SWAPRUN.md)|Specifies that the executable image must be copied to the swap file, and then run from there.|  
|[/TSAWARE](../VS_visualcpp/-TSAWARE.md)|Specifies that the app is designed to run in a multi-user environment.|  
|[/VERSION](../VS_visualcpp/-VERSION.md)|Sets the version number in the header.|  
  
## See Also  
 [C/C++ Build Tools](../VS_visualcpp/C-C---Build-Tools.md)   
 [EDITBIN Reference](../VS_visualcpp/EDITBIN-Reference.md)