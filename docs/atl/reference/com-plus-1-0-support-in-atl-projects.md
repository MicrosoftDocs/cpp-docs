---
title: "COM+ 1.0 Support in ATL Projects | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "vc.appwiz.ATL.MTS"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ATL projects, COM+ 1.0 support"
ms.assetid: 51fb08ac-d632-4657-a4e0-d3f989f0b6f8
caps.latest.revision: 10
author: "mikeblome"
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
# COM+ 1.0 Support in ATL Projects
You can use the [ATL Project Wizard](../../atl/reference/creating-an-atl-project.md) to create a project with basic support for COM+ 1.0 components.  
  
 COM+ 1.0 is designed for developing distributed component-based applications. It also provides a run-time infrastructure for deploying and managing these applications.  
  
 If you select the **Support COM+ 1.0** check box, the wizard modifies the build script in the link step. Specifically, the COM+ 1.0 project links to the following libraries:  
  
-   comsvcs.lib  
  
-   Mtxguid.lib  
  
 If you select the **Support COM+ 1.0** check box, you can also select **Support component registrar**. The component registrar allows your COM+ 1.0 object to get a list of components, register components, or unregister components (individually or all at once).  
  
## See Also  
 [Fundamentals of ATL COM Objects](../../atl/fundamentals-of-atl-com-objects.md)   
 [Programming with ATL and C Run-Time Code](../../atl/programming-with-atl-and-c-run-time-code.md)   
 [Default ATL Project Configurations](../../atl/reference/default-atl-project-configurations.md)

