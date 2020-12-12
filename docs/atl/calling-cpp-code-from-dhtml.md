---
description: "Learn more about: Calling C++ Code from DHTML"
title: "Calling C++ Code from DHTML"
ms.date: "11/04/2016"
helpviewer_keywords: ["DHTML, calling C++ code from"]
ms.assetid: 37329acd-4c22-40ca-a85a-b7480748f75f
---
# Calling C++ Code from DHTML

A DHTML control can be hosted in a container, such as Test Container or Internet Explorer. See [Testing Properties and Events with Test Container](../mfc/testing-properties-and-events-with-test-container.md) for information on how to access Test Container.

The container hosting the control communicates with the control using the normal control interfaces. DHTML uses the dispatch interface that ends with "UI" to communicate with your C++ code and your HTML resource. In [Modifying the ATL DHTML Control](../atl/modifying-the-atl-dhtml-control.md), you can practice adding the methods to be called by these different interfaces.

To see an example of calling C++ code from DHTML, [create a DHTML control](../atl/creating-an-atl-dhtml-control.md) using the ATL Control Wizard and examine the code in the header file and in the HTML file.

## Declaring WebBrowser Methods in the Header File

To invoke C++ methods from the DHTML UI, you must add methods to your control's UI interface. For example, the header file created by the ATL Control Wizard contains the C++ method `OnClick`, which is a member of the UI interface of the wizard-generated control.

Examine `OnClick` in the control's .h file:

[!code-cpp[NVC_ATL_COM#4](../atl/codesnippet/cpp/calling-cpp-code-from-dhtml_1.h)]

The first parameter, *pdispBody*, is a pointer to the body object's dispatch interface. The second parameter, *varColor*, identifies the color to apply to the control.

## Calling C++ Code in the HTML File

Once you have declared the WebBrowser methods in the header file, you can invoke the methods from the HTML file. Notice in the HTML file that the ATL Control Wizard inserts three Windows dispatch methods: three `OnClick` methods that dispatch messages to change the background color of the control.

Examine one of the methods in the HTML file:

`<BUTTON onclick='window.external.OnClick(theBody, "red");'>Red</BUTTON>`

In the HTML code above, the window external method, `OnClick`, is called as part of the button tag. The method has two parameters: `theBody`, which references the body of the HTML document, and `"red"`, which indicates that the control's background color will be changed to red when the button is clicked. The `Red` following the tag is the button's label.

See [Modifying the ATL DHTML Control](../atl/modifying-the-atl-dhtml-control.md) for more information about providing your own methods. See [Identifying the Elements of the DHTML Control Project](../atl/identifying-the-elements-of-the-dhtml-control-project.md) for more information about the HTML file.

## See also

[Support for DHTML Control](../atl/atl-support-for-dhtml-controls.md)
