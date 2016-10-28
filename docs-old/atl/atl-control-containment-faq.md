---
title: "ATL Control Containment FAQ"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "hosting controls using ATL"
  - "ActiveX control containers [C++], ATL control hosting"
  - "ATL, hosting ActiveX controls"
  - "ActiveX controls [C++], hosting"
  - "controls [ATL]"
ms.assetid: d4bdfbe0-82ca-4f2f-bb95-cb89bdcc9b53
caps.latest.revision: 14
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
# ATL Control Containment FAQ
This section covers questions related to hosting controls with ATL.  
  
> [!NOTE]
>  In Visual C++ .NET, the window class **"AtlAxWin"** is renamed to **"AtlAxWin80"**. You can still use **"AtlAxWin"** if you use the hosting code in atl.dll (shipped with Visual C++ 6.0 and now a system .dll).  
  
## Classes and APIs  
  
-   [Which ATL Classes Facilitate ActiveX Control Containment?](../atl/which-atl-classes-facilitate-activex-control-containment-.md)  
  
-   [What Is the ATL Control-Hosting API?](../atl/what-is-the-atl-control-hosting-api-.md)  
  
-   [What Is "AtlAxWin80"?](../atl/what-is-atlaxwin100-.md)  
  
## Creating and Loading Controls  
  
-   [When Do I Need to Call AtlAxWinInit?](../atl/when-do-i-need-to-call-atlaxwininit-.md)  
  
## Working with Controls  
  
-   [What Is a Host Object?](../atl/what-is-a-host-object-.md)  
  
-   [Can I Host More Than One Control in a Single Window?](../atl/can-i-host-more-than-one-control-in-a-single-window-.md)  
  
-   [Hosting ActiveX Controls Using ATL AXHost](../atl/hosting-activex-controls-using-atl-axhost.md)  
  
## Destroying Controls  
  
-   [When Do I Need to Call AtlAxWinTerm?](../atl/when-do-i-need-to-call-atlaxwinterm-.md)  
  
## See Also  
 [Concepts](../atl/active-template-library--atl--concepts.md)