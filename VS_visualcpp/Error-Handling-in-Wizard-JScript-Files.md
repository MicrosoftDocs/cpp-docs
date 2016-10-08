---
title: "Error Handling in Wizard JScript Files"
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
ms.assetid: 6df3ba46-7ab6-484c-ac45-b08f4b6a5900
caps.latest.revision: 8
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
# Error Handling in Wizard JScript Files
When you create a wizard, your project includes the Default.js and Common.js files. Use these files to customize your project. See [The JScript File](../VS_visualcpp/JScript-File.md) for more information.  
  
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
  
3.  If the parameter **PREPROCESS_FUNCTION** is in [the .vsz file](../VS_visualcpp/.Vsz-File--Project-Control-.md), the wizard calls [CanAddATLClass](../VS_visualcpp/JScript-Functions-for-C---Wizards.md). Use [SetErrorInfo](../VS_visualcpp/SetErrorInfo.md) in case of failure and return **false**:  
  
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
 [Files Created for Your Wizard](../VS_visualcpp/Files-Created-for-Your-Wizard.md)   
 [Customizing Your Wizard](../VS_visualcpp/Customizing-Your-Wizard.md)