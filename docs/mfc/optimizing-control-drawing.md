---
description: "Learn more about: Optimizing Control Drawing"
title: "Optimizing Control Drawing"
ms.date: "11/04/2016"
helpviewer_keywords: ["MFC ActiveX controls [MFC], optimizing"]
ms.assetid: 29ff985d-9bf5-4678-b62d-aad12def75fb
---
# Optimizing Control Drawing

When a control is instructed to draw itself into a container-supplied device context, it typically selects GDI objects (such as pens, brushes, and fonts) into the device context, performs its drawing operations, and restores the previous GDI objects. If the container has multiple controls that are to be drawn into the same device context, and each control selects the GDI objects it requires, time can be saved if the controls do not individually restore previously selected objects. After all the controls have been drawn, the container can automatically restore the original objects.

To detect whether a container supports this technique, a control can call the [COleControl::IsOptimizedDraw](reference/colecontrol-class.md#isoptimizeddraw) member function. If this function returns **TRUE**, the control can skip the normal step of restoring the previously selected objects.

Consider a control that has the following (unoptimized) `OnDraw` function:

[!code-cpp[NVC_MFC_AxOpt#15](codesnippet/cpp/optimizing-control-drawing_1.cpp)]

The pen and brush in this example are local variables, meaning their destructors will be called when they go out of scope (when the `OnDraw` function ends). The destructors will attempt to delete the corresponding GDI objects. But they should not be deleted if you plan to leave them selected into the device context upon returning from `OnDraw`.

To prevent the [CPen](reference/cpen-class.md) and [CBrush](reference/cbrush-class.md) objects from being destroyed when `OnDraw` finishes, store them in member variables instead of local variables. In the control's class declaration, add declarations for two new member variables:

[!code-cpp[NVC_MFC_AxOpt#16](codesnippet/cpp/optimizing-control-drawing_2.h)]
[!code-cpp[NVC_MFC_AxOpt#17](codesnippet/cpp/optimizing-control-drawing_3.h)]

Then, the `OnDraw` function can be rewritten as follows:

[!code-cpp[NVC_MFC_AxOpt#18](codesnippet/cpp/optimizing-control-drawing_4.cpp)]

This approach avoids creation of the pen and brush every time `OnDraw` is called. The speed improvement comes at the cost of maintaining additional instance data.

If the ForeColor or BackColor property changes, the pen or brush needs to be created again. To do this, override the [OnForeColorChanged](reference/colecontrol-class.md#onforecolorchanged) and [OnBackColorChanged](reference/colecontrol-class.md#onbackcolorchanged) member functions:

[!code-cpp[NVC_MFC_AxOpt#19](codesnippet/cpp/optimizing-control-drawing_5.cpp)]

Finally, to eliminate unnecessary `SelectObject` calls, modify `OnDraw` as follows:

[!code-cpp[NVC_MFC_AxOpt#20](codesnippet/cpp/optimizing-control-drawing_6.cpp)]

## See also

[MFC ActiveX Controls: Optimization](mfc-activex-controls-optimization.md)<br/>
[COleControl Class](reference/colecontrol-class.md)<br/>
[MFC ActiveX Controls](mfc-activex-controls.md)<br/>
[MFC ActiveX Control Wizard](reference/mfc-activex-control-wizard.md)<br/>
[MFC ActiveX Controls: Painting an ActiveX Control](mfc-activex-controls-painting-an-activex-control.md)
