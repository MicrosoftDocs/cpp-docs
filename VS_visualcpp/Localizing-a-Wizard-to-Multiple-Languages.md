---
title: "Localizing a Wizard to Multiple Languages"
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
ms.assetid: 879885c2-fafd-44fd-8032-bf0c301f4f45
caps.latest.revision: 6
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
# Localizing a Wizard to Multiple Languages
You can create a wizard in any language for which Visual Studio provides support. By default, when you install Visual Studio, it identifies the locale from the registry and provides the appropriate templates for that locale.  
  
 Visual Studio uses language IDs to identify the language support a wizard requires. By default, the language ID is set to the decimal value of the registry entry HKEY_CURRENT_USER\Software\Microsoft\VisualStudio\7.0\General\UILanguage. If the wizard can find no language entry, it defaults to English (1033).  
  
> [!NOTE]
>  For a list of decimal language values, see [Wizard Support for Other Languages](../VS_visualcpp/Wizard-Support-for-Other-Languages.md).  
  
 The language ID is specified as a custom parameter in the .[vsz file](../Topic/Configuring%20.Vsz%20Files%20to%20Start%20Wizards.md) in the paths where the [HTML files](../VS_visualcpp/HTML-Files.md) and the [Template files](../VS_visualcpp/Template-Files.md) reside.  
  
 You should specify paths for each language for which you provide an .htm file.  
  
## Example  
 Setting the following custom parameters in the .vsz file indicate that you are providing HTML in English (1033), Japanese (1041), and German (1031):  
  
```  
Param="START_PATH\HTML\1033"  
Param="START_PATH\HTML\1041"  
Param="START_PATH\HTML\1031"  
Param="START_PATH\Templates\1033"  
Param="START_PATH\Templates\1041"  
Param="START_PATH\Templates\1031"  
```  
  
 Setting the above custom parameters sets up your wizard directory structure as follows:  
  
```  
MyWizard1  
   HTML  
      1033  
         default.htm  
         myEnglishHTML.htm  
      1041  
         default.htm  
         myJapaneseHTML.htm  
      1031  
         default.htm  
         myGermanHTML.htm  
   Templates  
      1033  
         stdafx.h  
         stdafx.cpp  
      1041  
         stdafx.h  
         stdafx.cpp  
      1031  
         stdafx.h  
         stdafx.cpp  
   Images  
      HtmlPage1.bmp  
      HtmlPage2.jpg  
   Scripts  
      Default.js  
```  
  
## See Also  
 [Files Created for Your Wizard](../VS_visualcpp/Files-Created-for-Your-Wizard.md)   
 [Custom Wizard](../VS_visualcpp/Custom-Wizard.md)   
 [Creating a Custom Wizard](../VS_visualcpp/Creating-a-Custom-Wizard.md)   
 [Designing a Wizard](../VS_visualcpp/Designing-a-Wizard.md)   
 [Custom Parameters in the Wizard .Vsz File](../VS_visualcpp/Custom-Parameters-in-the-Wizard-.Vsz-File.md)