---
title: "Error Handling in Wizard JScript Files | Microsoft Docs"
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
  - "JScript, handling errors"
  - "Wizard JScript error handling"
  - "error handling, JScript"
ms.assetid: 6df3ba46-7ab6-484c-ac45-b08f4b6a5900
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
# Error Handling in Wizard JScript Files
When you create a wizard, your project includes the Default.js and Common.js files. Use these files to customize your project. See [The JScript File](../ide/jscript-file.md) for more information.  
  
 Your project should include error handling. The following code provides you with an example of such code.  
  
### To handle errors in JScript  
  
1.  To catch errors when the user clicks **Finish**, enter the following code:  
  
    ```  
    function OnFinish(selProj, Class)  
    {  
       try  
       {  
          .....  
       }  
       catch(e)  
       {  
          if (e.description.length != 0)  
             SetErrorInfo(e.description, e.number);  
          return e.number  
       }  
    }  
    ```  
  
2.  Throw `e` from any helper script functions called in the script:  
  
    ```  
    function ExtenderFromType(strVariableType)  
    {  
       try  
       {  
          ....  
       }  
       catch(e)  
       {  
          throw e;  
       }  
    }  
    ```  
  
3.  If the parameter **PREPROCESS_FUNCTION** is in [the .vsz file](../ide/dot-vsz-file-project-control.md), the wizard calls [CanAddATLClass](../ide/jscript-functions-for-cpp-wizards.md). Use [SetErrorInfo](../ide/seterrorinfo.md) in case of failure and return **false**:  
  
    ```  
    function CanAddATLClass(oProj, oObject)  
    {  
       try  
       {  
          if (!IsATLProject(oProj))  
          {  
             if (!IsMFCProject(oProj, true))  
             {     
                var L_CanAddATLClass_Text = "ATL classes can only be added  
     to ATL, MFC EXE and MFC regular DLL projects.";  
                wizard.ReportError(L_CanAddATLClass_Text);  
                return false;  
             }  
             else  
             {  
                .....  
                var bRet = AddATLSupportToProject(oProj);  
                .....  
                return bRet;  
             }  
          }  
          return true;  
       }  
       catch(e)  
       {  
          throw e;  
       }  
    }  
    ```  
  
4.  If you must go back to the **New Project** or **Add New Item** dialog box, return **VS_E_WIZBACKBUTTONPRESS**:  
  
    ```  
    function OnFinish(selProj, Class)  
    {  
       ....  
       if (!CheckAddtoProject(selProj))  
       {  
          return VS_E_WIZARDBACKBUTTONPRESS;  
       }  
    }  
    ```  
  
## See Also  
 [Files Created for Your Wizard](../ide/files-created-for-your-wizard.md)   
 [Customizing Your Wizard](../ide/customizing-your-wizard.md)