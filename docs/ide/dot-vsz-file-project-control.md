---
title: ".Vsz File (Project Control) | Microsoft Docs"
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
  - "custom wizards, project control files"
  - ".vsz files"
  - "vsz files"
  - "custom wizards, .vsz file"
  - "files [C++], created by Custom Wizard"
ms.assetid: b8678fee-6795-46d1-9338-48b22d5e9207
caps.latest.revision: 12
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
# .Vsz File (Project Control)
The starting point of each wizard is the .vsz file. The .vsz file is a text file that determines the wizard to be called and the information to pass to the wizard. The file contains a two-line header, followed by various optional parameters to be passed to the wizard. For a list of optional parameters, see [Predefined Custom Wizard Symbols](../ide/custom-parameters-in-the-wizard-dot-vsz-file.md).  
  
 The following sample shows the header in a .vsz file:  
  
```  
VSWIZARD 7.0  
Wizard=VsWizard.VsWizardEngine.10.0  
Param="WIZARD_NAME = My AppWizard"  
```  
  
-   The first line of the header specifies the version number of the template file format. You may specify this number as `6.0`, `7.0`, or `7.1`. No other numbers are valid, and using other numbers results in an "Invalid Format" error.  
  
-   The second line sets the **Wizard** variable to the ProgID of the wizard that is cocreated by Visual Studio. A ProgID is a string representation of a CLSID, such as `VsWizard.VsWizardEngine.10.0`.  
  
     If your wizard has a user interface, the ProgID automatically specifies your wizard to implement <xref:Microsoft.VisualStudio.VsWizard.IVCWizCtlUI>. By default, the methods of this interface are used in the [.htm files](../ide/html-files.md) of your project. You can change the behavior of your wizard by using the methods for this interface in the .htm files. See <xref:Microsoft.VisualStudio.VsWizard.VCWizCtl> for more information, which is the coclass for <xref:Microsoft.VisualStudio.VsWizard.IVCWizCtlUI>.  
  
-   Following these two lines is an optional list of parameters that allow the .vsz file to pass additional custom parameters to the wizard. Each value is passed as a string element in an array of variants in the wizard control's <xref:Microsoft.VisualStudio.VsWizard.VsWizardClass.Execute%2A> method. By default, a wizard with a user interface produces the following default parameters:  
  
    ```  
    Param="START_PATH = <path to the wizard>"  
    Param="HTML_PATH = <path to the wizard's HTML file>"  
    Param="TEMPLATES_PATH = <path to the wizard's template file>"  
    Param="SCRIPT_PATH = <path to the wizard's script files>"  
    Param="IMAGES_PATH = <path to the wizard's images>"  
    ```  
  
     If your wizard does not have a user interface, it does not have an `IMAGES_PATH` parameter and instead contains the following parameters:  
  
    ```  
    Param="WIZARD_UI = FALSE"  
    Param="SOURCE_FILTER = txt"  
    ```  
  
-   The .vsz file can contain the following parameters, which specify functions found in the [Common.js](../ide/customizing-cpp-wizards-with-common-jscript-functions.md) file:  
  
    ```  
    Param="PREPROCESS_FUNCTION = CanAddATLClass"  
    Param="PREPROCESS_FUNCTION = CanAddMFCClass"  
    Param="PREPROCESS_FUNCTION = CanAddClass"  
    ```  
  
 The functions [CanAddATLClass](../ide/canaddatlclass.md), [CanAddMFCClass](../ide/canaddmfcclass.md), and [CanAddClass](../ide/canaddclass.md) are called by the wizard to confirm that the [Visual C++ Code Model](http://msdn.microsoft.com/en-us/dd6452c2-1054-44a1-b0eb-639a94a1216b) is available. If one function returns **false**, the wizard is not launched.  
  
 You can add your wizard to the Templates pane in the **New Project** dialog box in Visual Studio by placing the .vsz file in the vcprojects directory. By default, the Custom Wizard writes the .vsz file to this directory.  
  
> [!NOTE]
>  If you delete your wizard files and directories, you must also delete the project's .vsz file, .vsdir file, and .ico file from the vcprojects directory.  
  
## See Also  
 [Files Created for Your Wizard](../ide/files-created-for-your-wizard.md)   
 [Custom Wizard](../ide/custom-wizard.md)   
 [Creating a Custom Wizard](../ide/creating-a-custom-wizard.md)   
 [Visual C++ Wizard Model](http://msdn.microsoft.com/en-us/159395ac-33c7-47bf-ad42-4e1435ddc758)   
 [Adding Wizards to the Add Item and New Project Dialog Boxes by Using .Vsdir Files](http://msdn.microsoft.com/Library/e0a20da0-3680-4084-997e-dbe02db51da9)   
 [Designing a Wizard](../ide/designing-a-wizard.md)