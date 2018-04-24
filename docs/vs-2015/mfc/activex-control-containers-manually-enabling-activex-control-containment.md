---
title: "ActiveX Control Containers: Manually Enabling ActiveX Control Containment | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "AfxEnableControlContainer method"
  - "ActiveX control containers [C++], enabling"
  - "ActiveX controls [C++], enabling containers"
ms.assetid: 833bcde9-c9ad-4709-ad12-2fc2150fb6a5
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# ActiveX Control Containers: Manually Enabling ActiveX Control Containment
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [ActiveX Control Containers: Manually Enabling ActiveX Control Containment](https://docs.microsoft.com/cpp/mfc/activex-control-containers-manually-enabling-activex-control-containment).  
  
  
If you did not enable ActiveX control support when you used the MFC Application Wizard to generate your application, you will have to add this support manually. This article describes the process for manually adding ActiveX control containment to an existing OLE container application. If you know in advance that you want ActiveX control support in your OLE container, see the article [Creating an MFC ActiveX Control Container](../mfc/reference/creating-an-mfc-activex-control-container.md).  
  
> [!NOTE]
>  This article uses a dialog-based ActiveX control container project named Container and an embedded control named Circ as examples in the procedures and code.  
  
 To support ActiveX controls, you must add one line of code to two of your project's files.  
  
-   Modify your main dialog's `InitInstance` function (found in CONTAINER.CPP) by the MFC Application Wizard making a call to [AfxEnableControlContainer](http://msdn.microsoft.com/library/7aa0b9d2-5329-4bc3-9d41-856e30fe2c2b), as in the following example:  
  
     [!code-cpp[NVC_MFCOleContainer#34](../snippets/cpp/VS_Snippets_Cpp/NVC_MFCOleContainer/Cpp/NVC_MFCOleContainer.cpp#34)]  
    [!code-cpp[NVC_MFCOleContainer#35](../snippets/cpp/VS_Snippets_Cpp/NVC_MFCOleContainer/Cpp/NVC_MFCOleContainer.cpp#35)]  
  
-   Add the following to your project's STDAFX.H header file:  
  
     [!code-cpp[NVC_MFCOleContainer#36](../snippets/cpp/VS_Snippets_Cpp/NVC_MFCOleContainer/Cpp/stdafx.h#36)]  
  
 After you have completed these steps, rebuild your project by clicking **Build** on the **Build** menu.  
  
## See Also  
 [ActiveX Control Containers](../mfc/activex-control-containers.md)





