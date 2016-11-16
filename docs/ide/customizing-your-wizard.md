---
title: "Customizing Your Wizard | Microsoft Docs"
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
  - "custom wizards, creating in Visual C++ projects"
  - "custom wizards"
ms.assetid: a3ff1c81-3eef-41e7-a6bc-2f98e4bf423f
caps.latest.revision: 8
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
# Customizing Your Wizard
You must consider the following common tasks as you customize the wizard you created with the [Custom Wizard](../ide/application-settings-custom-wizard.md).  
  
-   In the .vsz file, specify any custom parameters necessary for your wizard to work. See [The .vsz File (Project Control)](../ide/dot-vsz-file-project-control.md) and [Predefined Custom Wizard Symbols](../ide/custom-parameters-in-the-wizard-dot-vsz-file.md) for more information.  
  
     If you localize your wizard to several different languages, add those language parameters to the .vsz file. See [Localizing a Wizard to Multiple Languages](../ide/localizing-a-wizard-to-multiple-languages.md) for more information.  
  
-   Customize the [template files](../ide/template-files.md) (and [Templates.inf](../ide/templates-inf-file.md)) to specify the directives for user selections.  
  
-   Customize the [Default.js file](../ide/jscript-file.md) to specify additional special handling for your wizard. You can write your own functions, and you can use functions provided in [Common.js](../ide/customizing-cpp-wizards-with-common-jscript-functions.md).  
  
-   Design icons and other images that your HTML user interface will use.  
  
-   Design the HTML user interface.  
  
-   Add symbols to the HTML symbol table to match the buttons, controls, text boxes, and other elements that your wizard uses.  
  
     The following shows an excerpt of HTML provided by the Custom Wizard:  
  
    ```  
    <SYMBOL NAME="WIZARD_DIALOG_TITLE" TYPE=text VALUE="MyCustomWiz">  
          </SYMBOL>  
    <SYMBOL NAME="SAMPLE_CHECKBOX" TYPE=checkbox VALUE=true>  
          </SYMBOL>  
    ```  
  
     This wizard, titled MyCustomWiz, displays a check box that is selected by default.  
  
-   In the section marked `<SCRIPT LANGUAGE="JSCRIPT">` in the HTML files, add JScript function calls and access the Visual Studio Object Model to customize the behavior of your wizard. You must call these functions using `window.external`, as follows:  
  
    ```  
    window.external.AddSymbol("MAIN_FRAME_DEFAULT_STYLES", true);  
    window.external.AddSymbol("MAIN_FRAME_STYLE_FLAGS", "");  
    ```  
  
    > [!NOTE]
    >  The methods, properties, and events exposed through [Automation and Extensibility for Visual Studio](http://msdn.microsoft.com/Library/f71a2253-3e68-4e5e-9a18-edbba816caf6), [Visual C++ Code Model](http://msdn.microsoft.com/en-us/dd6452c2-1054-44a1-b0eb-639a94a1216b), [Project Model](http://msdn.microsoft.com/en-us/06c1bbd9-4c79-4f97-ad6d-2b1dea8ecd1f), and [Wizard Model](http://msdn.microsoft.com/en-us/159395ac-33c7-47bf-ad42-4e1435ddc758) allow you to programmatically manage all aspects of the wizard project, from creation through build, in both the JScript files and .htm files.  
  
-   If necessary, customize the [.vsdir file](http://msdn.microsoft.com/Library/e0a20da0-3680-4084-997e-dbe02db51da9), allowing information about the .vsz file and all other templates to be understood by the shell. For example, indicate the icon resource ID, flags, localized names, and so on.  
  
-   Create .htm files and template files in all languages for which your wizard needs to be localized. Add them to the appropriate project directories.  
  
-   [Provide context-sensitive Help](../ide/providing-context-sensitive-help.md) for your wizard.  
  
## See Also  
 [Custom Wizard](../ide/custom-wizard.md)   
 [Creating a Custom Wizard](../ide/creating-a-custom-wizard.md)   
 [Steps to Designing a Wizard](../ide/steps-to-designing-a-wizard.md)   
 [Files Created for Your Wizard](../ide/files-created-for-your-wizard.md)   
 [Providing Context-Sensitive Help](../ide/providing-context-sensitive-help.md)   
 [Handling Errors in Wizards](../ide/handling-errors-in-wizards.md)