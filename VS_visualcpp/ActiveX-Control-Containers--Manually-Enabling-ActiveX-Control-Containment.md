---
title: "ActiveX Control Containers: Manually Enabling ActiveX Control Containment"
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
ms.assetid: 833bcde9-c9ad-4709-ad12-2fc2150fb6a5
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
# ActiveX Control Containers: Manually Enabling ActiveX Control Containment
If you did not enable ActiveX control support when you used the MFC Application Wizard to generate your application, you will have to add this support manually. This article describes the process for manually adding ActiveX control containment to an existing OLE container application. If you know in advance that you want ActiveX control support in your OLE container, see the article [Creating an MFC ActiveX Control Container](../VS_visualcpp/Creating-an-MFC-ActiveX-Control-Container.md).  
  
> [!NOTE]
>  This article uses a dialog-based ActiveX control container project named Container and an embedded control named Circ as examples in the procedures and code.  
  
 To support ActiveX controls, you must add one line of code to two of your project's files.  
  
-   Modify your main dialog's `InitInstance` function (found in CONTAINER.CPP) by the MFC Application Wizard making a call to [AfxEnableControlContainer](../Topic/AfxEnableControlContainer.md), as in the following example:  
  
     [!CODE [NVC_MFCOleContainer#34](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCOleContainer#34)]  
    [!CODE [NVC_MFCOleContainer#35](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCOleContainer#35)]  
  
-   Add the following to your project's STDAFX.H header file:  
  
     [!CODE [NVC_MFCOleContainer#36](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCOleContainer#36)]  
  
 After you have completed these steps, rebuild your project by clicking **Build** on the **Build** menu.  
  
## See Also  
 [ActiveX Control Containers](../VS_visualcpp/ActiveX-Control-Containers.md)