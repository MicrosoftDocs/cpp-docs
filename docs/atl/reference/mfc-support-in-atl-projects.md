---
title: "MFC Support in ATL Projects | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-atl"]
ms.topic: "reference"
f1_keywords: ["vc.atl.addmfc"]
dev_langs: ["C++"]
helpviewer_keywords: ["ATL projects, MFC support"]
ms.assetid: f90b4276-cb98-4c11-902c-9ebcfe6f954b
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
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

[Adding a Class](../../ide/adding-a-class-visual-cpp.md)<br/>
[Creating an ATL Project](../../atl/reference/creating-an-atl-project.md)<br/>
[Default ATL Project Configurations](../../atl/reference/default-atl-project-configurations.md)

