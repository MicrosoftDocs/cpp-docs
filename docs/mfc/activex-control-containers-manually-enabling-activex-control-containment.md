---
description: "Learn more about: ActiveX Control Containers: Manually Enabling ActiveX Control Containment"
title: "ActiveX Control Containers: Manually Enabling ActiveX Control Containment"
ms.date: "09/12/2018"
helpviewer_keywords: ["AfxEnableControlContainer method [MFC]", "ActiveX control containers [MFC], enabling", "ActiveX controls [MFC], enabling containers"]
ms.assetid: 833bcde9-c9ad-4709-ad12-2fc2150fb6a5
---
# ActiveX Control Containers: Manually Enabling ActiveX Control Containment

If you did not enable ActiveX control support when you used the MFC Application Wizard to generate your application, you will have to add this support manually. This article describes the process for manually adding ActiveX control containment to an existing OLE container application. If you know in advance that you want ActiveX control support in your OLE container, see the article [Creating an MFC ActiveX Control Container](reference/creating-an-mfc-activex-control-container.md).

>[!IMPORTANT]
> ActiveX is a legacy technology that should not be used for new development. For more information about modern technologies that supersede ActiveX, see [ActiveX Controls](activex-controls.md).

> [!NOTE]
> This article uses a dialog-based ActiveX control container project named Container and an embedded control named Circ as examples in the procedures and code.

To support ActiveX controls, you must add one line of code to two of your project's files.

- Modify your main dialog's `InitInstance` function (found in CONTAINER.CPP) by the MFC Application Wizard making a call to [AfxEnableControlContainer](reference/ole-initialization.md#afxenablecontrolcontainer), as in the following example:

   [!code-cpp[NVC_MFCOleContainer#34](codesnippet/cpp/activex-control-containers-manually-enabling-activex-control-containment_1.cpp)]
    [!code-cpp[NVC_MFCOleContainer#35](codesnippet/cpp/activex-control-containers-manually-enabling-activex-control-containment_2.cpp)]

- Add the following to your project's STDAFX.H header file:

   [!code-cpp[NVC_MFCOleContainer#36](codesnippet/cpp/activex-control-containers-manually-enabling-activex-control-containment_3.h)]

After you have completed these steps, rebuild your project by clicking **Build** on the **Build** menu.

## See also

[ActiveX Control Containers](activex-control-containers.md)
