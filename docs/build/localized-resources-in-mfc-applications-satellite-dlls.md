---
title: "Localized Resources in MFC Applications: Satellite DLLs | Microsoft Docs"
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
  - "multiple language support [C++]"
  - "localization [C++], MFC resources"
  - "localized resources [C++]"
  - "MFC DLLs [C++], localizing"
  - "DLLs [C++], localizing MFC"
  - "resources [MFC], localizing"
  - "resource-only DLLs [C++]"
  - "resource-only DLLs [C++], MFC applications"
  - "satellite DLLs [C++]"
ms.assetid: 3a1100ae-a9c8-47b5-adbd-cbedef5992ef
caps.latest.revision: 8
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
# Localized Resources in MFC Applications: Satellite DLLs
MFC version 7.0 and later provides enhanced support for satellite DLLs, a feature that helps in creating applications localized for multiple languages. A satellite DLL is a [resource-only DLL](../build/creating-a-resource-only-dll.md) that contains an application's resources localized for a particular language. When the application begins executing, MFC automatically loads the localized resource most appropriate for the environment. For example, you could have an application with English language resources with two satellite DLLs, one containing a French translation of your resources and the other containing a German translation. When the application is run on an English language system, it uses the English resources. If run on a French system, it uses the French resources; if run on a German system, it uses the German resources.  
  
 To support localized resources in an MFC application, MFC attempts to load a satellite DLL containing resources localized to a specific language. Satellite DLLs are named *ApplicationNameXXX*.dll, where *ApplicationName* is the name of the .exe or .dll using MFC, and *XXX* is the three-letter code for the language of the resources (for example, 'ENU' or 'DEU').  
  
 MFC attempts to load the resource DLL for each of the following languages in order, stopping when it finds one:  
  
1.  (Windows 2000 or later only) The current user's default UI language, as returned from the GetUserDefaultUILanguage() Win32 API.  
  
2.  (Windows 2000 or later only) The current user's default UI language, without any specific sublanguage (that is, ENC [Canadian English] becomes ENU [U.S. English]).  
  
3.  The system's default UI language. On Windows 2000 or later, this is returned from the GetSystemDefaultUILanguage() API. On other platforms, this is the language of the OS itself.  
  
4.  The system's default UI language, without any specific sublanguage.  
  
5.  A fake language with the 3-letter code LOC.  
  
 If MFC does not find any satellite DLLs, it uses whatever resources are contained in the application itself.  
  
 As an example, suppose that an application LangExample.exe uses MFC and is running on a Windows 2000 multiple user-interface system; the system UI language is ENU [U.S. English] and the current user's UI language is set to FRC [Canadian French]. MFC looks for the following DLLs in the following order:  
  
1.  LangExampleFRC.dll (user's UI language).  
  
2.  LangExampleFRA.dll (user's UI language without the sublanguage, in this example French (France).  
  
3.  LangExampleENU.dll (system's UI language).  
  
4.  LangExampleLOC.dll.  
  
 If none of these DLLs are found, MFC uses the resources in LangExample.exe.  
  
## See Also  
 [DLLs in Visual C++](../build/dlls-in-visual-cpp.md)   
 [TN057: Localization of MFC Components](../mfc/tn057-localization-of-mfc-components.md)