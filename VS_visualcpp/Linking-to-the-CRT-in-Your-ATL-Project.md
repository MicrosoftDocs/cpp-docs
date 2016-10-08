---
title: "Linking to the CRT in Your ATL Project"
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
ms.assetid: 650957ae-362c-4ecf-8b03-5d49138e8b5b
caps.latest.revision: 10
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Linking to the CRT in Your ATL Project
The [C Run-Time Libraries](../VS_visualcpp/CRT-Library-Features.md) (CRT) provide many useful functions that can make programming much easier during ATL development. All ATL projects link to the CRT library. You can see the advantages and disadvantages of linking method in [Benefits and Tradeoffs of the Method Used to Link to the CRT](../VS_visualcpp/Benefits-and-Tradeoffs-of-the-Method-Used-to-Link-to-the-CRT.md).  
  
## Effects of Linking to the CRT on Your Program Image  
 If you statically link to the CRT, code from the CRT is placed in your executable image and you do not need to have the CRT DLL present on a system to run your image. If you dynamically link to the CRT, references to the code in the CRT DLL are placed in your image, but not the code itself. In order for your image to run on a given system, the CRT DLL must be present on that system. Even when you dynamically link to the CRT, you may find that some code can be statically linked (for example, **DllMainCRTStartup**).  
  
 When you link your image, you either explicitly or implicitly specify an entry point that the operating system will call into after loading the image. For a DLL, the default entry point is **DllMainCRTStartup**. For an EXE, it is **WinMainCRTStartup**. You can override the default with the /ENTRY linker option. The CRT provides an implementation for **DllMainCRTStartup**, **WinMainCRTStartup**, and **wWinMainCRTStartup** (the Unicode entry point for an EXE). These CRT-provided entry points call constructors on global objects and initialize other data structures that are used by some CRT functions. This startup code adds about 25K to your image if it is linked statically. If it is linked dynamically, most of the code is in the DLL, so your image size stays small.  
  
 For more information, see the linker topic [/ENTRY (Entry-Point Symbol)](../VS_visualcpp/-ENTRY--Entry-Point-Symbol-.md).  
  
## Optimization Options  
 Using the linker option /OPT:NOWIN98 can further reduce a default ATL control by 10K, at the expense of increased loading time on Windows 98 systems. For more information on linking options, see [/OPT (Optimizations)](../VS_visualcpp/-OPT--Optimizations-.md).  
  
## See Also  
 [Programming with ATL and C Run-Time Code](../VS_visualcpp/Programming-with-ATL-and-C-Run-Time-Code.md)   
 [Run-Time Library Behavior](../VS_visualcpp/Run-Time-Library-Behavior.md)