---
description: "Learn more about: MFC ActiveX Controls: Painting an ActiveX Control"
title: "MFC ActiveX Controls: Painting an ActiveX Control"
ms.date: "09/12/2018"
helpviewer_keywords: ["MFC ActiveX controls [MFC], painting", "MFC ActiveX controls [MFC], optimizing"]
ms.assetid: 25fff9c0-4dab-4704-aaae-8dfb1065dee3
---
# MFC ActiveX Controls: Painting an ActiveX Control

This article describes the ActiveX control painting process and how you can alter paint code to optimize the process. (See [Optimizing Control Drawing](optimizing-control-drawing.md) for techniques on how to optimize drawing by not having controls individually restore previously selected GDI objects. After all of the controls have been drawn, the container can automatically restore the original objects.)

>[!IMPORTANT]
> ActiveX is a legacy technology that should not be used for new development. For more information about modern technologies that supersede ActiveX, see [ActiveX Controls](activex-controls.md).

Examples in this article are from a control created by the MFC ActiveX Control Wizard with default settings. For more information on creating a skeleton control application using the MFC ActiveX Control Wizard, see the article [MFC ActiveX Control Wizard](reference/mfc-activex-control-wizard.md).

The following topics are covered:

- [The overall process for painting a control and the code created by the ActiveX Control Wizard to support painting](#_core_the_painting_process_of_an_activex_control)

- [How to optimize the painting process](#_core_optimizing_your_paint_code)

- [How to paint your control using metafiles](#_core_painting_your_control_using_metafiles)

## <a name="_core_the_painting_process_of_an_activex_control"></a> The Painting Process of an ActiveX Control

When ActiveX controls are initially displayed or are redrawn, they follow a painting process similar to other applications developed using MFC, with one important distinction: ActiveX controls can be in an active or an inactive state.

An active control is represented in an ActiveX control container by a child window. Like other windows, it is responsible for painting itself when a WM_PAINT message is received. The control's base class, [COleControl](reference/colecontrol-class.md), handles this message in its `OnPaint` function. This default implementation calls the `OnDraw` function of your control.

An inactive control is painted differently. When the control is inactive, its window is either invisible or nonexistent, so it can not receive a paint message. Instead, the control container directly calls the `OnDraw` function of the control. This differs from an active control's painting process in that the `OnPaint` member function is never called.

As discussed in the preceding paragraphs, how an ActiveX control is updated depends on the state of the control. However, because the framework calls the `OnDraw` member function in both cases, you add the majority of your painting code in this member function.

The `OnDraw` member function handles control painting. When a control is inactive, the control container calls `OnDraw`, passing the device context of the control container and the coordinates of the rectangular area occupied by the control.

The rectangle passed by the framework to the `OnDraw` member function contains the area occupied by the control. If the control is active, the upper-left corner is (0, 0) and the device context passed is for the child window that contains the control. If the control is inactive, the upper-left coordinate is not necessarily (0, 0) and the device context passed is for the control container containing the control.

> [!NOTE]
> It is important that your modifications to `OnDraw` do not depend on the rectangle's upper left point being equal to (0, 0) and that you draw only inside the rectangle passed to `OnDraw`. Unexpected results can occur if you draw beyond the rectangle's area.

The default implementation provided by the MFC ActiveX Control Wizard in the control implementation file (.CPP), shown below, paints the rectangle with a white brush and fills the ellipse with the current background color.

[!code-cpp[NVC_MFC_AxUI#1](codesnippet/cpp/mfc-activex-controls-painting-an-activex-control_1.cpp)]

> [!NOTE]
> When painting a control, you should not make assumptions about the state of the device context that is passed as the *pdc* parameter to the `OnDraw` function. Occasionally the device context is supplied by the container application and will not necessarily be initialized to the default state. In particular, explicitly select the pens, brushes, colors, fonts, and other resources that your drawing code depends upon.

## <a name="_core_optimizing_your_paint_code"></a> Optimizing Your Paint Code

After the control is successfully painting itself, the next step is to optimize the `OnDraw` function.

The default implementation of ActiveX control painting paints the entire control area. This is sufficient for simple controls, but in many cases repainting the control would be faster if only the portion that needed updating was repainted, instead of the entire control.

The `OnDraw` function provides an easy method of optimization by passing *rcInvalid*, the rectangular area of the control that needs redrawing. Use this area, usually smaller than the entire control area, to speed up the painting process.

## <a name="_core_painting_your_control_using_metafiles"></a> Painting Your Control Using Metafiles

In most cases the *pdc* parameter to the `OnDraw` function points to a screen device context (DC). However, when printing images of the control or during a print preview session, the DC received for rendering is a special type called a "metafile DC". Unlike a screen DC, which immediately handles requests sent to it, a metafile DC stores requests to be played back at a later time. Some container applications may also choose to render the control image using a metafile DC when in design mode.

Metafile drawing requests can be made by the container through two interface functions: `IViewObject::Draw` (this function can also be called for non-metafile drawing) and `IDataObject::GetData`. When a metafile DC is passed as one of the parameters, the MFC framework makes a call to [COleControl::OnDrawMetafile](reference/colecontrol-class.md#ondrawmetafile). Because this is a virtual member function, override this function in the control class to do any special processing. The default behavior calls `COleControl::OnDraw`.

To make sure the control can be drawn in both screen and metafile device contexts, you must use only member functions that are supported in both a screen and a metafile DC. Be aware that the coordinate system may not be measured in pixels.

Because the default implementation of `OnDrawMetafile` calls the control's `OnDraw` function, use only member functions that are suitable for both a metafile and a screen device context, unless you override `OnDrawMetafile`. The following lists the subset of `CDC` member functions that can be used in both a metafile and a screen device context. For more information on these functions, see class [CDC](reference/cdc-class.md) in the *MFC Reference*.

|Arc|BibBlt|Chord|
|---------|------------|-----------|
|`Ellipse`|`Escape`|`ExcludeClipRect`|
|`ExtTextOut`|`FloodFill`|`IntersectClipRect`|
|`LineTo`|`MoveTo`|`OffsetClipRgn`|
|`OffsetViewportOrg`|`OffsetWindowOrg`|`PatBlt`|
|`Pie`|`Polygon`|`Polyline`|
|`PolyPolygon`|`RealizePalette`|`RestoreDC`|
|`RoundRect`|`SaveDC`|`ScaleViewportExt`|
|`ScaleWindowExt`|`SelectClipRgn`|`SelectObject`|
|`SelectPalette`|`SetBkColor`|`SetBkMode`|
|`SetMapMode`|`SetMapperFlags`|`SetPixel`|
|`SetPolyFillMode`|`SetROP2`|`SetStretchBltMode`|
|`SetTextColor`|`SetTextJustification`|`SetViewportExt`|
|`SetViewportOrg`|`SetWindowExt`|`SetWindowORg`|
|`StretchBlt`|`TextOut`||

In addition to `CDC` member functions, there are several other functions that are compatible in a metafile DC. These include [CPalette::AnimatePalette](reference/cpalette-class.md#animatepalette), [CFont::CreateFontIndirect](reference/cfont-class.md#createfontindirect), and three member functions of `CBrush`: [CreateBrushIndirect](reference/cbrush-class.md#createbrushindirect), [CreateDIBPatternBrush](reference/cbrush-class.md#createdibpatternbrush), and [CreatePatternBrush](reference/cbrush-class.md#createpatternbrush).

Functions that are not recorded in a metafile are: [DrawFocusRect](reference/cdc-class.md#drawfocusrect), [DrawIcon](reference/cdc-class.md#drawicon), [DrawText](reference/cdc-class.md#drawtext), [ExcludeUpdateRgn](reference/cdc-class.md#excludeupdatergn), [FillRect](reference/cdc-class.md#fillrect), [FrameRect](reference/cdc-class.md#framerect), [GrayString](reference/cdc-class.md#graystring), [InvertRect](reference/cdc-class.md#invertrect), [ScrollDC](reference/cdc-class.md#scrolldc), and [TabbedTextOut](reference/cdc-class.md#tabbedtextout). Because a metafile DC is not actually associated with a device, you cannot use SetDIBits, GetDIBits, and CreateDIBitmap with a metafile DC. You can use SetDIBitsToDevice and StretchDIBits with a metafile DC as the destination. [CreateCompatibleDC](reference/cdc-class.md#createcompatibledc), [CreateCompatibleBitmap](reference/cbitmap-class.md#createcompatiblebitmap), and [CreateDiscardableBitmap](reference/cbitmap-class.md#creatediscardablebitmap) are not meaningful with a metafile DC.

Another point to consider when using a metafile DC is that the coordinate system may not be measured in pixels. For this reason, all your drawing code should be adjusted to fit in the rectangle passed to `OnDraw` in the *rcBounds* parameter. This prevents accidental painting outside the control because *rcBounds* represents the size of the control's window.

After you have implemented metafile rendering for the control, use Test Container to test the metafile. See [Testing Properties and Events with Test Container](testing-properties-and-events-with-test-container.md) for information on how to access the test container.

#### To test the control's metafile using Test Container

1. On the Test Container's **Edit** menu, click **Insert New Control**.

1. In the **Insert New Control** box, select the control and click **OK**.

   The control will appear in Test container.

1. On the **Control** menu, click **Draw Metafile**.

   A separate window appears in which the metafile is displayed. You can change the size of this window to see how scaling affects the control's metafile. You can close this window at any time.

## See also

[MFC ActiveX Controls](mfc-activex-controls.md)
