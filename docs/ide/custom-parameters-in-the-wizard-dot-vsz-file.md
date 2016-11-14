---
title: "Custom Parameters in the Wizard .Vsz File | Microsoft Docs"
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
  - "PRODUCT_INSTALLATION_DIR macro"
  - "HTML_FILTER macro"
  - "SCRIPT_FILTER macro"
  - "IMAGES_PATH macro"
  - "custom wizards, .vsz file"
  - "WIZARD_NAME macro"
  - "PROJECT_TEMPLATE_PATH macro"
  - "PROJECT_TEMPLATE_NAME macro"
  - "SCRIPT_PATH macro"
  - "START_PATH macro"
  - "RELATIVE_PATH macro"
  - "ABSOLUTE_PATH macro"
  - "SCRIPT_COMMON_PATH macro"
  - "HTML_PATH macro"
  - "WIZARD_UI macro"
  - "PRODUCT macro"
  - "TEMPLATES_PATH macro"
  - "IMAGE_FILTER macro"
  - "MISC_FILTER macro"
  - "TEMPLATE_FILTER macro"
ms.assetid: 560dd5c0-7cff-4974-b856-5ca25b0669b8
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
# Custom Parameters in the Wizard .Vsz File
In its first two lines, the .vsz file identifies the wizard version and the ProgID or CLSID of the wizard to be cocreated. The .vsz file can also include optional context parameters and custom parameters that are added to the symbol table (along with the symbols supplied in the HTML symbol section).  
  
 The <xref:Microsoft.VisualStudio.VsWizard.VsWizardClass.Execute%2A> method displays the wizard, which takes an array of the context and custom parameters defined in the .vsz file as its parameters.  
  
 The following commonly used symbols are specified as custom parameters in either the [.vsz file](../ide/dot-vsz-file-project-control.md) or the .htm files and can be used in wizard HTML, script, or template files.  
  
## Example  
 As the following .vsz file entries indicate, the wizard named MyProjWiz contains a user interface.  
  
```  
VSWIZARD 7.0  
Wizard=VsWizard.VsWizardEngine  
Param="WIZARD_NAME = MyProjWiz"  
Param="WIZARD_UI = TRUE"  
```  
  
### Symbols for Custom Parameters in the Wizard .vsz File  
  
|Symbol|Definition|  
|------------|----------------|  
|ABSOLUTE_PATH|The location of the wizard files.|  
|HTML_FILTER|Specified in the .vsz file. File types that are placed in the HTML Files folder in **Solution Explorer**. Usually specified as "htm".|  
|HTML_PATH|Specified in the .vsz file. The location of the wizard's [HTML files](../ide/html-files.md). By default, it is START_PATH\HTML\\*LANGUAGE* (where *LANGUAGE* is the locale specified by your system registry). **Note:**  You can specify a different language by setting the \<LangID> to the decimal value of HKEY_CURRENT_USER\Software\Microsoft\VisualStudio\7.0\General\UILanguage. See [Localizing a Wizard to Multiple Languages](../ide/localizing-a-wizard-to-multiple-languages.md) for more information. For a list of decimal language values, see [Wizard Support for Other Languages](../ide/wizard-support-for-other-languages.md).|  
|IMAGE_FILTER|Specified in the .vsz file. File types that are placed in the Image Files folder in Solution Explorer. Usually specified as "bmp;gif".|  
|IMAGES_PATH|Specified in the .vsz file. The location of the image files used in the html files. By default, it is START_PATH\Images.|  
|MISC_FILTER|Specified in the .vsz file. File types that are placed in the Misc folder in Solution Explorer. Usually specified as "vsz;vsdir;ico;vcproj;csproj;css;inf".|  
|PRODUCT|By default, set to Visual C++; however, you can set this value to Visual Basic to create Visual Basic wizards, and so on.|  
|PRODUCT_INSTALLATION_DIR|The directory listed in the registry at HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\VisualStudio\7.0\Setup\\<Product\>\ ProductDir.|  
|PROJECT_TEMPLATE_NAME|Specified in the .vsz file. The project template file that your wizard uses to create projects. Usually specified as "txt".|  
|PROJECT_TEMPLATE_PATH|The directory containing the project's [template files](../ide/template-files.md). For Visual C++, it is PRODUCT_INSTALLATION_DIR\VCWizards, by default.|  
|RELATIVE_PATH|If ABSOLUTE_PATH is not found, then RELATIVE_PATH is considered. This is the path relative to PRODUCT_INSTALLATION_DIR. For Visual C++, the RELATIVE_PATH is PRODUCT_INSTALLATION_DIR\VCWizards.|  
|SCRIPT_COMMON_PATH|The directory name relative to PRODUCT_INSTALLATION_DIR, where the common script file can be found. For example, for Visual C++, this is VCWizards.|  
|SCRIPT_FILTER|Specified in the .vsz file. File types that are be placed in the Script Files folder in Solution Explorer. Usually specified as either "js" (JScript) or "vbs" (VBScript).|  
|SCRIPT_PATH|The location of the wizard's [JScript file](../ide/jscript-file.md). By default, it is START_PATH\Scripts|  
|START_PATH|Specified in the .vsz file. This is not set by the user, but used internally to identify either RELATIVE_PATH or ABSOLUTE_PATH. The wizard name (WIZARD_NAME) is appended to this value.|  
|TEMPLATE_FILTER|Specified in the .vsz file. File types that are placed in the Template Files folder in Solution Explorer. Usually specified as "txt".|  
|TEMPLATES_PATH|Specified in the .vsz file. The location of the wizard's template files. By default, it is START_PATH\Templates\\<LangID\>. **Note:**  See HTML_PATH for more information on LangID.|  
|WIZARD_NAME|Specifies the wizard name. Located in the .vsz and used by the rest of the symbols.|  
|WIZARD_UI|Specified in the .vsz file. A Boolean value indicating whether the wizard contains a user interface. Specify **TRUE** for a user interface or **FALSE** for no user interface.|  
  
## See Also  
 <xref:EnvDTE.IDTWizard.Execute%2A>   
 [Files Created for Your Wizard](../ide/files-created-for-your-wizard.md)   
 [Custom Wizard](../ide/custom-wizard.md)   
 [Creating a Custom Wizard](../ide/creating-a-custom-wizard.md)   
 [Designing a Wizard](../ide/designing-a-wizard.md)