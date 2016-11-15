---
title: "Wizard Support for Other Languages | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.appwiz.EastAsianLanguages"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "wizards [C++], language support"
  - "language support for MFC projects"
  - "projects [C++], language support"
ms.assetid: b653c673-0687-455c-885f-15d7e2f4149d
caps.latest.revision: 10
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
# Wizard Support for Other Languages
When you install Visual Studio, the setup application detects the locale listed in your system and installs the appropriate language template or templates for that locale. For example, for Western European locales, setup installs English, French, Italian, Spanish, and German. These languages appear in the **Resource language** list on the [Application Type](../mfc/reference/application-type-mfc-application-wizard.md) page of the MFC Application Wizard.  
  
## Language Templates  
 Not all templates are installed on all systems, because the templates are ANSI encoding based, and not all resources can be edited on all systems. For example, by default, you cannot edit Japanese resources on a French system.  
  
 If you are using Windows 2000 or later and you want to create an MFC application in another language, then you must copy the template directory for the appropriate language from the Visual Studio installer media (Disk 1) to your system.  
  
> [!NOTE]
>  To edit the created project, you must set your system locale to the appropriate locale for the selected language.  
  
 The templates are each assigned a folder in the \Microsoft Visual Studio .NET 2003\Vc7\VCWizards\mfcappwiz\templates\ directory, as listed in the following table . To access the desired language template, copy the appropriate folder to the \mfcappwiz\templates\ directory on your computer. Once you have copied the folder, the language will appear in the **Resource language** list on the **Application Type** page of the MFC Application Wizard.  
  
### Language Templates Provided in Visual Studio .NET  
  
|Language|Template|  
|--------------|--------------|  
|Chinese (Traditional)|1028|  
|Chinese (Simplified)|2052|  
|English|1033|  
|French|1036|  
|German|1031|  
|Italian|1040|  
|Japanese|1041|  
|Korean|1042|  
|Spanish|3082|  
  
## Format of Visual C++ Wizard-generated Files  
 The Visual C++ wizards will generate projects in Unicode when the installed language version of Visual Studio does not match the system locale. For example, when the Japanese version of Visual Studio is installed on a computer that has regional settings set to any language other than Japanese, then the Visual C++ wizards will generate projects comprised of Unicode files. This is common on machines set up with Windows multi-language (MUI) packs.  
  
 This behavior differs from systems set up such that the system locale is the same as the language version of Visual Studio. In this case, project files will be created in ANSI in the system code page.  
  
## See Also  
 [File Types Created for Visual C++ Projects](../ide/file-types-created-for-visual-cpp-projects.md)   
 [Creating and Managing Visual C++ Projects](../ide/creating-and-managing-visual-cpp-projects.md)