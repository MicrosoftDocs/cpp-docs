---
title: "Graphics Diagnostics Capture Methods | Microsoft Docs"
ms.custom: ""
ms.date: "11/02/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: ea21995d-0241-412e-8f62-600c3794247f
caps.latest.revision: 2
ms.author: "mithom"
manager: "douge"
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
# Graphics Diagnostics Capture Methods
Insert introduction here.  
  
## Capture methods  
 In[!INCLUDE[win81](../misc/includes/win81_md.md)], the DirectX 11.2 runtime can capture graphics information internally on behalf of debugging tools like graphics diagnostics—this is known as *robust capture*. Before this support was added to the DirectX runtime, graphics information was captured by intercepting certain DirectX function calls to record arguments and other information before forwarding the calls to DirectX to be completed—this is called *legacy capture*.  
  
 Because the DirectX runtime takes exclusive responsibility for capturing graphics information in [!INCLUDE[win81](../misc/includes/win81_md.md)], there is no need to update legacy capture to support DirectX 11.2, and therefore, legacy capture is deprecated. However, because the DirectX 11.2 runtime doesn't support versions of Windows prior to [!INCLUDE[win81](../misc/includes/win81_md.md)], [!INCLUDE[vs_dev12](../atl-mfc-shared/includes/vs_dev12_md.md)] still supports legacy capture for apps that target [!INCLUDE[win8](../build/reference/includes/win8_md.md)] and [!INCLUDE[win7](../build/includes/win7_md.md)].  
  
 Both methods record similar information and don't change how you capture graphics information or use the Graphics Diagnostics tools.  
  
### Robust capture  
 Robust capture supports [!INCLUDE[vs_dev12](../atl-mfc-shared/includes/vs_dev12_md.md)] graphics diagnostics on [!INCLUDE[win81](../misc/includes/win81_md.md)], [!INCLUDE[winblue_winrt_2](../misc/includes/winblue_winrt_2_md.md)], and Windows Phone 8.1. It supports DirectX 10.0 through DirectX 11.2 and can capture graphics information about new Direct3D 11.2 features—for example, tiled resources. However, it doesn't fully support all Direct3D 11.2 features—for example, you can't debug an HLSL shader that was created by using the HLSL shader linking feature. Robust capture uses a new capture API to support its programmatic capture scenarios.  
  
### Legacy capture  
 Legacy capture supports [!INCLUDE[vs_dev12](../atl-mfc-shared/includes/vs_dev12_md.md)] and [!INCLUDE[vs_dev11_long](../build/includes/vs_dev11_long_md.md)] graphics diagnostics on [!INCLUDE[win8](../build/reference/includes/win8_md.md)], Windows RT 8, and [!INCLUDE[win7](../build/includes/win7_md.md)]. It supports DirectX 10.0 through DirectX 11.1. Legacy capture doesn't support any Direct3D 11.2 features and is deprecated except for scenarios in which robust capture is not available. Legacy capture uses the capture API defined in the `vsgcapture.h` header file to support its programmatic capture scenarios. This kind of programmatic capture is also deprecated except for scenarios in which robust capture is not available.  
  
## See Also  
 [Capturing Graphics Information](/visual-studio/debugger/capturing-graphics-information)   
 [Walkthrough: Capturing Graphics Information](../Topic/Walkthrough:%20Capturing%20Graphics%20Information.md)