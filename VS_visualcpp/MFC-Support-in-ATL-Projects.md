---
title: "MFC Support in ATL Projects"
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
ms.topic: reference
ms.assetid: f90b4276-cb98-4c11-902c-9ebcfe6f954b
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
# MFC Support in ATL Projects
If you select **Support MFC** in the ATL Project Wizard, your project declares the application as an MFC application object (class). The project initializes the MFC library and instantiates a class (class *ProjName*) that is derived from [CWinApp](../VS_visualcpp/CWinApp-Class.md).  
  
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
 [Adding a Class](../VS_visualcpp/Adding-a-Class--Visual-C---.md)   
 [Creating an ATL Project](../VS_visualcpp/Creating-an-ATL-Project.md)   
 [Default ATL Project Configurations](../VS_visualcpp/Default-ATL-Project-Configurations.md)