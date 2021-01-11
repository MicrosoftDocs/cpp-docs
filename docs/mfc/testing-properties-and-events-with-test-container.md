---
description: "Learn more about: Testing Properties and Events with Test Container"
title: "Testing Properties and Events with Test Container"
ms.date: "11/04/2016"
helpviewer_keywords: ["testing, test containers", "tstcon32.exe", "debugging ActiveX controls", "test container", "ActiveX Control Test Container", "ActiveX controls [MFC], testing", "properties [MFC], testing"]
ms.assetid: 626867cf-fe53-4c30-8973-55bb93ef3917
---
# Testing Properties and Events with Test Container

The Test Container application, shipped in Visual C++, is an ActiveX control container for testing and debugging ActiveX controls. Test Container allows the control developer to test the control's functionality by changing its properties, invoking its methods, and firing its events. Test Container can display logs of data-binding notifications and also provides facilities for testing an ActiveX control's persistence functionality: you can save properties to a stream or to substorage, reload them, and examine the stored stream data. This section describes how to use the basic features of Test Container. For additional information, select the **Help** menu while running Test Container.

### To access the ActiveX Control Test Container

1. Build the [TSTCON Sample: ActiveX Control Test Container](../overview/visual-cpp-samples.md).

### To test your ActiveX control

1. On the **Edit** menu of Test Container, click **Insert New Control**.

1. In the **Insert Control** box, select the desired control and click **OK**. The control will appear in the control container.

    > [!NOTE]
    >  If your control is not listed in the **Insert Control** dialog box, make sure you have registered it with the **Register Controls** command from the **File** menu of Test Container.

At this point you can test your control's properties or events.

#### To test properties

1. On the **Control** menu, click **Invoke Methods**.

1. In the **Method Name** drop-down list, select the PropPut method for the property you want to test.

1. Modify the **Parameter Value** or **Parameter Type** and click on the **Set Value** button.

1. Click **Invoke** to apply the new value to the object.

   The property now contains the new value.

#### To test events and specify the destination of event information.

1. On the **Options** menu, click **Logging**.

1. Specify the destination of event information.

## See also

[MFC ActiveX Controls](../mfc/mfc-activex-controls.md)<br/>
[How to: Debug an ActiveX Control](/visualstudio/debugger/how-to-debug-an-activex-control)
