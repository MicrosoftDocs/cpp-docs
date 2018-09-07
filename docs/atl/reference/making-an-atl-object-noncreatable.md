---
title: "Making an ATL Object Noncreatable | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-atl"]
ms.topic: "reference"
f1_keywords: ["vc.appwiz.ATL.objects"]
dev_langs: ["C++"]
helpviewer_keywords: ["noncreatable ATL objects", "ATL projects, noncreatable objects"]
ms.assetid: 80d0bca2-dea0-4801-9a85-6243124437f6
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Making an ATL Object Noncreatable

You can change the attributes of an ATL-based COM object so that a client cannot directly create the object. In this case, the object would be returned through a method call on another object rather than created directly.

### To make an object noncreatable

1. Remove the [OBJECT_ENTRY_AUTO](object-map-macros.md#object_entry_auto) for the object. If you want the object to be noncreatable but the control to be registered, replace OBJECT_ENTRY_AUTO with [OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO](object-map-macros.md#object_entry_non_createable_ex_auto).

2. Add the [noncreatable](../../windows/noncreatable.md) attribute to the coclass in the .idl file. For example:

    ```  
    [uuid(A1992E3D-3CF0-11D0-826F-00A0C90F2851), 
    helpstring("MyObject"), 
    noncreatable]  
    coclass MyObject  
    {  
        [default] interface IMyInterface;  
    }  
    ```

## See Also

[ATL Project Wizard](../../atl/reference/atl-project-wizard.md)   
[Visual C++ Project Types](../../ide/visual-cpp-project-types.md)   
[Creating Desktop Projects By Using Application Wizards](../../ide/creating-desktop-projects-by-using-application-wizards.md)   
[Programming with ATL and C Run-Time Code](../../atl/programming-with-atl-and-c-run-time-code.md)   
[Fundamentals of ATL COM Objects](../../atl/fundamentals-of-atl-com-objects.md)   
[Default ATL Project Configurations](../../atl/reference/default-atl-project-configurations.md)

