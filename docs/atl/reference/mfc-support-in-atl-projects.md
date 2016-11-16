---
title: "MFC Support in ATL Projects | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "vc.atl.addmfc"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ATL projects, MFC support"
ms.assetid: f90b4276-cb98-4c11-902c-9ebcfe6f954b
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
# MFC Support in ATL Projects
If you select **Support MFC** in the ATL Project Wizard, your project declares the application as an MFC application object (class). The project initializes the MFC library and instantiates a class (class *ProjName*) that is derived from [CWinApp](../../mfc/reference/cwinapp-class.md).  
  
 This option is available for nonattributed ATL DLL projects only.  
  
```  
class CProjNameApp : public CWinApp  
{  
public:  
 
// Overrides  
    virtual BOOL InitInstance();
virtual int ExitInstance();
DECLARE_MESSAGE_MAP() 
};  
 
BEGIN_MESSAGE_MAP(CProjNameApp, CWinApp)  
END_MESSAGE_MAP()  
 
CProjNameApp theApp;  
 
BOOL CProjNameApp::InitInstance()  
{  
    return CWinApp::InitInstance();

}  
 
int CProjNameApp::ExitInstance()  
{  
    return CWinApp::ExitInstance();

}  
```  
  
 You can view the application object class and its `InitInstance` and `ExitInstance` functions in Class View.  
  
## See Also  
 [Adding a Class](../../ide/adding-a-class-visual-cpp.md)   
 [Creating an ATL Project](../../atl/reference/creating-an-atl-project.md)   
 [Default ATL Project Configurations](../../atl/reference/default-atl-project-configurations.md)

