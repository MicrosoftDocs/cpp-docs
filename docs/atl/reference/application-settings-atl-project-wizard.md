---
description: "Learn more about: Application Settings, ATL Project Wizard"
title: "Application Settings, ATL Project Wizard"
ms.date: "11/04/2016"
f1_keywords: ["vc.appwiz.atl.com.appset"]
helpviewer_keywords: ["ATL Project Wizard, application settings"]
ms.assetid: d48c9fc5-f439-49fd-884c-8bcfa7d52991
---
# Application Settings, ATL Project Wizard

Use the **Application Settings** page of the ATL Project Wizard to design and add basic features to a new ATL project.

## Server type

Choose from one of three server types:

- **Dynamic-link library (DLL)**

   Select to create an in-process server.

- **Executable (EXE)**

   Select to create a local out-of-process server. This option does not allow support for MFC or COM+ 1.0. It does not allow for the merging of proxy/stub code.

- **Service (EXE)**

   Select to create a Windows application that runs in the background when Windows starts. This option does not allow support for MFC or COM+ 1.0 or does not allow for the merging of proxy/stub code.

## Additional options

> [!NOTE]
> All additional options are available for DLL projects only.

- **Allow merging of proxy/stub code**

   Select the **Allow merging of proxy/stub code** check box as a convenience when marshaling interfaces is required. This option puts the MIDL-generated proxy and stub code in the same executable as the server.

- **Support MFC**

   Select to specify that your object includes MFC support. This option links your project to the MFC libraries so that you can access any of the classes and functions they contain.

- **Support COM+ 1.0**

   Select to modify the project build settings to support COM+ 1.0 components. In addition to the standard list of libraries, the wizard adds the COM+ 1.0 component-specific library comsvcs.lib

   In addition, the mtxex.dll is delay loaded on the host system when your application is launched.

- **Support component registrar**

   If your ATL project contains support for COM+ 1.0 components, you can set this option. The component registrar allows your COM+ 1.0 object to obtain a list of components, register components, or unregister components (individually or all at once).

## See also

[ATL Project Wizard](../../atl/reference/atl-project-wizard.md)<br/>
[Creating an ATL Project](../../atl/reference/creating-an-atl-project.md)<br/>
[Default ATL Project Configurations](../../atl/reference/default-atl-project-configurations.md)
