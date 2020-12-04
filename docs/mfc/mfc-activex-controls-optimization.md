---
description: "Learn more about: MFC ActiveX Controls: Optimization"
title: "MFC ActiveX Controls: Optimization"
ms.date: "09/12/2018"
helpviewer_keywords: ["MFC ActiveX controls [MFC], windowless", "flicker-free ActiveX controls", "MFC ActiveX controls [MFC], mouse interaction", "device contexts, unclipped for MFC ActiveX controls", "MFC ActiveX controls [MFC], optimizing", "performance, ActiveX controls", "optimization, ActiveX controls", "MFC ActiveX controls [MFC], flicker-free", "windowless MFC ActiveX controls", "MFC ActiveX controls [MFC], active/inactive state", "optimizing performance, ActiveX controls"]
ms.assetid: 8b11f26a-190d-469b-b594-5336094a0109
---
# MFC ActiveX Controls: Optimization

This article explains techniques you can use to optimize your ActiveX controls for better performance.

>[!IMPORTANT]
> ActiveX is a legacy technology that should not be used for new development. For more information about modern technologies that supersede ActiveX, see [ActiveX Controls](activex-controls.md).

The topics [Turning Off the Activate When Visible Option](turning-off-the-activate-when-visible-option.md) and [Providing Mouse Interaction While Inactive](providing-mouse-interaction-while-inactive.md) discuss controls that don't create a window until activated. The topic [Providing Windowless Activation](providing-windowless-activation.md) discusses controls that never create a window, even when they are activated.

Windows have two major drawbacks for OLE objects: they prevent objects from being transparent or nonrectangular when active, and they add a large overhead to the instantiation and display of controls. Typically, creating a window takes 60 percent of a control's creation time. With a single shared window (usually the container's) and some dispatching code, a control receives the same window services, generally without a loss of performance. Having a window is mostly unnecessary overhead for the object.

Some optimizations do not necessarily improve performance when your control is used in certain containers. For example, containers released prior to 1996 did not support windowless activation, so implementing this feature will not provide a benefit in older containers. However, nearly every container supports persistence, so optimizing your control's persistence code will likely improve its performance in any container. If your control is specifically intended to be used with one particular type of container, you may want to research which of these optimizations is supported by that container. In general, however, you should try to implement as many of these techniques as are applicable to your particular control to ensure your control performs as well as it possibly can in a wide array of containers.

You can implement many of these optimizations through the [MFC ActiveX Control Wizard](reference/mfc-activex-control-wizard.md), on the [Control Settings](reference/control-settings-mfc-activex-control-wizard.md) page.

### MFC ActiveX Control Wizard OLE Optimization Options

|Control setting in the MFC ActiveX Control Wizard|Action|More information|
|-------------------------------------------------------|------------|----------------------|
|**Activate when visible** check box|Clear|[Turning Off the Activate When Visible Option](turning-off-the-activate-when-visible-option.md)|
|**Windowless activation** check box|Select|[Providing Windowless Activation](providing-windowless-activation.md)|
|**Unclipped device context** check box|Select|[Using an Unclipped Device Context](using-an-unclipped-device-context.md)|
|**Flicker-free activation** check box|Select|[Providing Flicker-Free Activation](providing-flicker-free-activation.md)|
|**Mouse pointer notifications when inactive** check box|Select|[Providing Mouse Interaction While Inactive](providing-mouse-interaction-while-inactive.md)|
|**Optimized drawing code** check box|Select|[Optimizing Control Drawing](optimizing-control-drawing.md)|

For detailed information about the member functions that implement these optimizations, see [COleControl](reference/colecontrol-class.md).

For more information, see:

- [Optimizing Persistence and Initialization](optimizing-persistence-and-initialization.md)

- [Providing Windowless Activation](providing-windowless-activation.md)

- [Turning Off the Activate When Visible Option](turning-off-the-activate-when-visible-option.md)

- [Providing Mouse Interaction While Inactive](providing-mouse-interaction-while-inactive.md)

- [Providing Flicker-Free Activation](providing-flicker-free-activation.md)

- [Using an Unclipped Device Context](using-an-unclipped-device-context.md)

- [Optimizing Control Drawing](optimizing-control-drawing.md)

## See also

[MFC ActiveX Controls](mfc-activex-controls.md)
