---
title: "ATL Control Containment FAQ"
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
ms.assetid: d4bdfbe0-82ca-4f2f-bb95-cb89bdcc9b53
caps.latest.revision: 14
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
# ATL Control Containment FAQ
This section covers questions related to hosting controls with ATL.  
  
> [!NOTE]
>  In Visual C++ .NET, the window class **"AtlAxWin"** is renamed to **"AtlAxWin80"**. You can still use **"AtlAxWin"** if you use the hosting code in atl.dll (shipped with Visual C++ 6.0 and now a system .dll).  
  
## Classes and APIs  
  
-   [Which ATL Classes Facilitate ActiveX Control Containment?](../VS_visualcpp/Which-ATL-Classes-Facilitate-ActiveX-Control-Containment-.md)  
  
-   [What Is the ATL Control-Hosting API?](../VS_visualcpp/What-Is-the-ATL-Control-Hosting-API-.md)  
  
-   [What Is "AtlAxWin80"?](../VS_visualcpp/What-Is-AtlAxWin100-.md)  
  
## Creating and Loading Controls  
  
-   [When Do I Need to Call AtlAxWinInit?](../VS_visualcpp/When-Do-I-Need-to-Call-AtlAxWinInit-.md)  
  
## Working with Controls  
  
-   [What Is a Host Object?](../VS_visualcpp/What-Is-a-Host-Object-.md)  
  
-   [Can I Host More Than One Control in a Single Window?](../VS_visualcpp/Can-I-Host-More-Than-One-Control-in-a-Single-Window-.md)  
  
-   [Hosting ActiveX Controls Using ATL AXHost](../VS_visualcpp/Hosting-ActiveX-Controls-Using-ATL-AXHost.md)  
  
## Destroying Controls  
  
-   [When Do I Need to Call AtlAxWinTerm?](../VS_visualcpp/When-Do-I-Need-to-Call-AtlAxWinTerm-.md)  
  
## See Also  
 [Concepts](../VS_visualcpp/Active-Template-Library--ATL--Concepts.md)