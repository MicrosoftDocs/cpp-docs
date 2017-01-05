---
title: "Isolation of the MFC Common Controls Library | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MFC, Common Controls library"
ms.assetid: 7471e6f0-49b0-47f7-86e7-8d6bc3541694
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
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
# Isolation of the MFC Common Controls Library
The Common Controls library is now isolated within MFC, allowing different modules (such as user DLLs) to use different versions of the Common Controls library by specifying the version in their manifests.  
  
 An MFC application (or user code called by MFC) makes calls to Common Controls library APIs through wrapper functions named `Afx`*FunctionName*, where *FunctionName* is the name of a Common Controls API. Those wrapper functions are defined in afxcomctl32.h and afxcomctl32.inl.  
  
 You can use the [AFX_COMCTL32_IF_EXISTS](http://msdn.microsoft.com/library/60b3af72-7113-43d7-9db5-012f40971d0d) and [AFX_COMCTL32_IF_EXISTS2](http://msdn.microsoft.com/library/ed7dab14-fcce-4ca6-983d-196062104c60) macros (defined in afxcomctl32.h) to determine whether the Common Controls library implements a certain API instead of calling [GetProcAddress](../build/getprocaddress.md).  
  
 Technically, you make calls to Common Controls Library APIs through a wrapper class, `CComCtlWrapper` (defined in afxcomctl32.h). `CComCtlWrapper` is also responsible for the loading and unloading of comctl32.dll. The MFC Module State contains a pointer to an instance of `CComCtlWrapper`. You can access the wrapper class using the `afxComCtlWrapper` macro.  
  
 Note that calling Common Controls API directly (not using the MFC wrapper functions) from an MFC application or user DLL will work in most cases, because the MFC application or user DLL is bound to the Common Controls library it requested in its manifest). However, the MFC code itself has to use the wrappers, because MFC code might be called from user DLLs with different Common Controls library versions.

