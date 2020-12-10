---
description: "Learn more about: Testing the Modified ATL DHTML Control"
title: "Testing the Modified ATL DHTML Control"
ms.date: "11/06/2018"
helpviewer_keywords: ["HTML controls, testing", "testing controls", "DHTML controls, testing"]
ms.assetid: 42316118-9433-410f-9d8a-0efcc1eff824
---
# Testing the Modified ATL DHTML Control

Try out your new control to see how it works now.

## To build and test the modified control

1. Rebuild the project and open it in **Test Container**. See [Testing Properties and Events with Test Container](../mfc/testing-properties-and-events-with-test-container.md) for information on how to access **Test Container**.

   Resize the control to show all of the buttons you added.

1. Examine the two buttons that you inserted by altering the HTML. Each button bears the label you identified in [Modifying the ATL DHTML Control](../atl/modifying-the-atl-dhtml-control.md): **Refresh** and **HelloHTML**.

1. Test the two new buttons to see how they work.

Now test the methods that are not part of the UI.

1. Highlight the control, so the border is activated.

1. On the **Control** menu, choose **Invoke Methods**.

   The methods in the list labeled **Method Name** are the methods that the container can call: `MethodInvoked` and `GoToURL`. All other methods are controlled by the UI.

1. Select a method to invoke and choose **Invoke** to display the method's message box or to navigate to `www.microsoft.com`.

1. In the **Invoke Methods** dialog box, choose **Close**.

To learn more about the various elements and files that make up an ATL DHTML control, see [Identifying the Elements of the DHTML Control Project](../atl/identifying-the-elements-of-the-dhtml-control-project.md).

## See also

[Support for DHTML Control](../atl/atl-support-for-dhtml-controls.md)
