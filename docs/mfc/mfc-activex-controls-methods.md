---
description: "Learn more about: MFC ActiveX Controls: Methods"
title: "MFC ActiveX Controls: Methods"
ms.date: "11/04/2016"
helpviewer_keywords: ["MFC ActiveX controls [MFC], methods"]
ms.assetid: e20271de-6ffa-4ba0-848b-bafe6c9e510c
---
# MFC ActiveX Controls: Methods

An ActiveX control fires events to communicate between itself and its control container. A container can also communicate with a control by means of methods and properties. Methods are also called functions.

Methods and properties provide an exported interface for use by other applications, such as Automation clients and ActiveX control containers. For more information on ActiveX control properties, see the article [MFC ActiveX Controls: Properties](mfc-activex-controls-properties.md).

Methods are similar in use and purpose to the member functions of a C++ class. There are two types of methods your control can implement: stock and custom. Similar to stock events, stock methods are those methods for which [COleControl](reference/colecontrol-class.md) provides an implementation. For more information on stock methods, see the article [MFC ActiveX Controls: Adding Stock Methods](mfc-activex-controls-adding-stock-methods.md). Custom methods, defined by the developer, allow additional customization of the control. For more information, see the article [MFC ActiveX Controls: Adding Custom Methods](mfc-activex-controls-adding-custom-methods.md).

The Microsoft Foundation Class Library (MFC) implements a mechanism that allows your control to support stock and custom methods. The first part is class `COleControl`. Derived from `CWnd`, `COleControl` member functions support stock methods that are common to all ActiveX controls. The second part of this mechanism is the dispatch map. A dispatch map is similar to a message map; however, instead of mapping a function to a Windows message ID, a dispatch map maps virtual member functions to IDispatch IDS.

For a control to support various methods properly, its class must declare a dispatch map. This is accomplished by the following line of code located in control class header (.H) file:

[!code-cpp[NVC_MFC_AxUI#13](codesnippet/cpp/mfc-activex-controls-methods_1.h)]

The main purpose of the dispatch map is to establish the relationship between the method names used by an external caller (such as the container) and the member functions of the control's class that implement the methods. After the dispatch map has been declared, it needs to be defined in the control's implementation (.CPP) file. The following lines of code define the dispatch map:

[!code-cpp[NVC_MFC_AxUI#14](codesnippet/cpp/mfc-activex-controls-methods_2.cpp)]
[!code-cpp[NVC_MFC_AxUI#15](codesnippet/cpp/mfc-activex-controls-methods_3.cpp)]

If you used the [MFC ActiveX Control Wizard](reference/mfc-activex-control-wizard.md) to create the project, these lines were added automatically. If the MFC ActiveX Control Wizard was not used, you must add these lines manually.

The following articles discuss methods in detail:

- [MFC ActiveX Controls: Adding Stock Methods](mfc-activex-controls-adding-stock-methods.md)

- [MFC ActiveX Controls: Adding Custom Methods](mfc-activex-controls-adding-custom-methods.md)

- [MFC ActiveX Controls: Returning Error Codes From a Method](mfc-activex-controls-returning-error-codes-from-a-method.md)

## See also

[MFC ActiveX Controls](mfc-activex-controls.md)
