---
title: "MFC ActiveX Controls: Optimization"
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
ms.assetid: 8b11f26a-190d-469b-b594-5336094a0109
caps.latest.revision: 6
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
# MFC ActiveX Controls: Optimization
This article explains techniques you can use to optimize your ActiveX controls for better performance.  
  
 The topics [Turning Off the Activate When Visible Option](../VS_visualcpp/Turning-off-the-Activate-When-Visible-Option.md) and [Providing Mouse Interaction While Inactive](../VS_visualcpp/Providing-Mouse-Interaction-While-Inactive.md) discuss controls that don't create a window until activated. The topic [Providing Windowless Activation](../VS_visualcpp/Providing-Windowless-Activation.md) discusses controls that never create a window, even when they are activated.  
  
 Windows have two major drawbacks for OLE objects: they prevent objects from being transparent or nonrectangular when active, and they add a large overhead to the instantiation and display of controls. Typically, creating a window takes 60 percent of a control's creation time. With a single shared window (usually the container's) and some dispatching code, a control receives the same window services, generally without a loss of performance. Having a window is mostly unnecessary overhead for the object.  
  
 Some optimizations do not necessarily improve performance when your control is used in certain containers. For example, containers released prior to 1996 did not support windowless activation, so implementing this feature will not provide a benefit in older containers. However, nearly every container supports persistence, so optimizing your control's persistence code will likely improve its performance in any container. If your control is specifically intended to be used with one particular type of container, you may want to research which of these optimizations is supported by that container. In general, however, you should try to implement as many of these techniques as are applicable to your particular control to ensure your control performs as well as it possibly can in a wide array of containers.  
  
 You can implement many of these optimizations through the [MFC ActiveX Control Wizard](../VS_visualcpp/MFC-ActiveX-Control-Wizard.md), on the [Control Settings](../VS_visualcpp/Control-Settings--MFC-ActiveX-Control-Wizard.md) page.  
  
### MFC ActiveX Control Wizard OLE Optimization Options  
  
|Control setting in the MFC ActiveX Control Wizard|Action|More information|  
|-------------------------------------------------------|------------|----------------------|  
|**Activate when visible** check box|Clear|[Turning Off the Activate When Visible Option](../VS_visualcpp/Turning-off-the-Activate-When-Visible-Option.md)|  
|**Windowless activation** check box|Select|[Providing Windowless Activation](../VS_visualcpp/Providing-Windowless-Activation.md)|  
|**Unclipped device context** check box|Select|[Using an Unclipped Device Context](../VS_visualcpp/Using-an-Unclipped-Device-Context.md)|  
|**Flicker-free activation** check box|Select|[Providing Flicker-Free Activation](../VS_visualcpp/Providing-Flicker-Free-Activation.md)|  
|**Mouse pointer notifications when inactive** check box|Select|[Providing Mouse Interaction While Inactive](../VS_visualcpp/Providing-Mouse-Interaction-While-Inactive.md)|  
|**Optimized drawing code** check box|Select|[Optimizing Control Drawing](../VS_visualcpp/Optimizing-Control-Drawing.md)|  
  
 For detailed information about the member functions that implement these optimizations, see [COleControl](../VS_visualcpp/COleControl-Class.md). The member functions are listed by use, such as [Windowless Operations](assetId:///e9e28f79-9a70-4ae4-a5aa-b3e92f1904df) and [Inactive Pointer Handling Functions](assetId:///e9e28f79-9a70-4ae4-a5aa-b3e92f1904df).  
  
 For more information, see:  
  
-   [Optimizing Persistence and Initialization](../VS_visualcpp/Optimizing-Persistence-and-Initialization.md)  
  
-   [Providing Windowless Activation](../VS_visualcpp/Providing-Windowless-Activation.md)  
  
-   [Turning Off the Activate When Visible Option](../VS_visualcpp/Turning-off-the-Activate-When-Visible-Option.md)  
  
-   [Providing Mouse Interaction While Inactive](../VS_visualcpp/Providing-Mouse-Interaction-While-Inactive.md)  
  
-   [Providing Flicker-Free Activation](../VS_visualcpp/Providing-Flicker-Free-Activation.md)  
  
-   [Using an Unclipped Device Context](../VS_visualcpp/Using-an-Unclipped-Device-Context.md)  
  
-   [Optimizing Control Drawing](../VS_visualcpp/Optimizing-Control-Drawing.md)  
  
## See Also  
 [MFC ActiveX Controls](../VS_visualcpp/MFC-ActiveX-Controls.md)