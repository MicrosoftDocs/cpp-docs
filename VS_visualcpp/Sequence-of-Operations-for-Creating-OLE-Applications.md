---
title: "Sequence of Operations for Creating OLE Applications"
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
ms.assetid: 84b0f606-36c1-4253-9cea-44427f0074b9
caps.latest.revision: 7
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
# Sequence of Operations for Creating OLE Applications
The following table shows your role and the framework's role in creating OLE linking and embedding applications. These represent options available rather than a sequence of steps to perform.  
  
### Creating OLE Applications  
  
|Task|You do|The framework does|  
|----------|------------|------------------------|  
|Create a COM component.|Run the MFC Application Wizard. Choose **Full-server** or **Mini-server** in the **Compound Document Support** tab.|The framework generates a skeleton application with COM component capability enabled. All of the COM capability can be transferred to your existing application with only slight modification.|  
|Create a container application from scratch.|Run the MFC Application Wizard. Choose **Container** in the **Compound Document Support** tab. Using Class View, go to the source code editor. Fill in code for your COM handler functions.|The framework generates a skeleton application that can insert COM objects created by COM component (server) applications.|  
|Create an application that supports Automation from scratch.|Run the MFC Application Wizard. Choose **Automation** from the **Advanced Features** tab. Use Class View to expose methods and properties in your application for automation.|The framework generates a skeleton application that can be activated and automated by other applications.|  
  
## See Also  
 [Building on the Framework](../VS_visualcpp/Building-on-the-Framework.md)   
 [Sequence of Operations for Building MFC Applications](../VS_visualcpp/Sequence-of-Operations-for-Building-MFC-Applications.md)   
 [Sequence of Operations for Creating ActiveX Controls](../VS_visualcpp/Sequence-of-Operations-for-Creating-ActiveX-Controls.md)   
 [Sequence of Operations for Creating Database Applications](../VS_visualcpp/Sequence-of-Operations-for-Creating-Database-Applications.md)