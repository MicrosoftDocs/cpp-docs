---
description: "Learn more about: ActiveX Controls on the Internet"
title: "ActiveX Controls on the Internet"
ms.date: "09/12/2018"
helpviewer_keywords: ["ActiveX controls [MFC], creating", "ActiveX controls [MFC], Internet", "downloading data with ActiveX controls", "OLE controls [MFC], upgrading to ActiveX", "Internet applications [MFC], ActiveX controls", "networks [MFC], downloading with ActiveX controls"]
ms.assetid: 7ab943c8-2022-41df-9065-d629b616eeec
---
# ActiveX Controls on the Internet

ActiveX controls are the updated version of the OLE control specification.

>[!IMPORTANT]
> ActiveX is a legacy technology that should not be used for new development. For more information, see [ActiveX Controls](activex-controls.md).

Controls are a primary architecture for developing programmable software components that can be used in a variety of different containers, including COM-aware Web browsers on the Internet. Any ActiveX control can be an Internet control and can add its functionality to an Active document or be part of a Web page. Controls on a Web page can communicate with each other using scripting.

ActiveX controls are not limited to the Internet. An ActiveX control can also be used in any container, as long as the control supports the interfaces required by that container.

**ActiveX controls have several advantages, including:**

- Fewer required interfaces than previous OLE controls.

- The ability to be windowless and always in-place active.

**In order to be an ActiveX control, a control must:**

- Support the `IUnknown` interface.

- Be a COM object.

- Export **DLLRegisterServer** and **DLLUnRegisterServer**.

- Support additional interfaces as needed for functionality.

## Making Your Existing Controls Internet-Friendly

Designing a control that will work well in an Internet environment requires consideration for the relatively low transmission rates on the Internet. You can use your existing controls; however, there are steps you should take to make your code size smaller and to make your control properties download asynchronously.

To improve performance of your controls, follow these tips on efficiency considerations:

- Implement the techniques described in the article [ActiveX Controls: Optimization](mfc-activex-controls-optimization.md).

- Consider how a control is instantiated.

- Be asynchronous; don't hold up other programs.

- Download data in small blocks.

   When downloading large streams such as bitmaps or video data, access a control's data asynchronously in cooperation with the container. Retrieve the data in an incremental or progressive fashion, working cooperatively with other controls that may also be retrieving data. Code can also be downloading asynchronously.

- Download code and properties in the background.

- Become user-interface active as quickly as possible.

- Consider how persistent data is stored, both properties and large data BLOBs (such as a bitmap image or video data).

   Controls with significant amounts of persistent data, such as large bitmaps or AVI files, require careful attention to downloading method. A document or page can become visible as soon as possible, and allow the user to interact with the page while controls retrieve data in the background.

- Write efficient routines to keep code size and run time down.

   Small button and label controls, with only a few bytes of persistent data, are suitable for use in the Internet environment and work well inside browsers.

- Consider progress is communicated to the container.

   Notify the container of progress in the asynchronous download, including when the user can start to interact with a page, and when the download is complete. The container can display progress (such as percent complete) to the user.

- Consider how controls are registered on the client computer.

## Creating a New ActiveX Control

When creating a new control using the Application Wizard, you can choose to enable support for asynchronous monikers as well as other optimizations. To add support to download control properties asynchronously, follow these steps:

#### To create your project using the MFC ActiveX Control Wizard

1. Click **New** on the **File** menu.

1. Select **MFC ActiveX Control Wizard** from the Visual Studio C++ projects and name your project.

1. On the **Control Settings** page, select **Loads properties asynchronously**. Selecting this option sets up the ready state property and the ready state changed event for you.

   You can also select other optimizations, such as **Windowless activation**, which is described in [ActiveX Controls: Optimization](mfc-activex-controls-optimization.md).

1. Choose **Finish** to create the project.

#### To create a class derived from CDataPathProperty

1. Create a class derived from `CDataPathProperty`.

1. In each of your source files that includes the header file for your control, add the header file for this class before it.

1. In this class, override `OnDataAvailable`. This function is called whenever data is available for display. As data becomes available, you can handle it any way you choose, for example by progressively rendering it.

   The code excerpt below is a simple example of progressively displaying data in an edit control. Note the use of flag **BSCF_FIRSTDATANOTIFICATION** to clear the edit control.

   [!code-cpp[NVC_MFCActiveXControl#1](codesnippet/cpp/activex-controls-on-the-internet_1.cpp)]

   Note that you must include AFXCMN.H to use the `CListCtrl` class.

1. When your control's overall state changes (for example, from loading to initialized or user interactive), call `COleControl::InternalSetReadyState`. If your control has only one data path property, you can add code on **BSCF_LASTDATANOTIFICATION** to notify the container that your download is complete. For example:

   [!code-cpp[NVC_MFCActiveXControl#2](codesnippet/cpp/activex-controls-on-the-internet_2.cpp)]

1. Override `OnProgress`. In `OnProgress`, you are passed a number showing the maximum range and a number showing how far along the current download is. You can use these numbers to display status such as percent complete to the user.

The next procedure adds a property to the control to use the class just derived.

#### To add a property

1. In **Class View**, right-click the interface underneath the library node and select **Add**, then **Add Property**. This will start the **Add Property Wizard**.

1. In the **Add Property Wizard**, select the **Set/Get Methods** radio button, type the **Property Name**, for example, EditControlText, and select BSTR as the **Property type**.

1. Click **Finish**.

1. Declare a member variable of your `CDataPathProperty`-derived class to your ActiveX control class.

   [!code-cpp[NVC_MFCActiveXControl#3](codesnippet/cpp/activex-controls-on-the-internet_3.h)]

1. Implement the `Get/Set` methods. For `Get`, return the string. For `Set`, load the property and call `SetModifiedFlag`.

   [!code-cpp[NVC_MFCActiveXControl#4](codesnippet/cpp/activex-controls-on-the-internet_4.cpp)]

1. In [DoPropExchange](reference/colecontrol-class.md#dopropexchange), add the following line:

   [!code-cpp[NVC_MFCActiveXControl#5](codesnippet/cpp/activex-controls-on-the-internet_5.cpp)]

1. Override [ResetData](reference/cdatapathproperty-class.md#resetdata) to notify the property to reset its control by adding this line:

   [!code-cpp[NVC_MFCActiveXControl#6](codesnippet/cpp/activex-controls-on-the-internet_6.cpp)]

## Deciding Whether to Derive from CDataPathProperty or CCachedDataPathProperty

The previous example describes steps for deriving your control's property from `CDataPathProperty`. This is a good choice if you are downloading real-time data that frequently changes, and for which you do not need to keep all the data, but only the current value. An example is a stock ticker control.

You can also derive from `CCachedDataPathProperty`. In this case, the downloaded data is cached in a memory file. This is a good choice if you need to keep all the downloaded data — for example, a control that progressively renders a bitmap. In this case, the class has a member variable containing your data:

`CMemFile m_Cache;`

In your ActiveX control class, you can use this memory mapped file in `OnDraw` to display the data. In your ActiveX control `CCachedDataPathProperty`-derived class, override the member function `OnDataAvailable` and invalidate the control, after calling the base class implementation.

[!code-cpp[NVC_MFCActiveXControl#7](codesnippet/cpp/activex-controls-on-the-internet_7.cpp)]

## Downloading Data Asynchronously Using ActiveX Controls

Downloading data over a network should be done asynchronously. The advantage of doing so is that if a large amount of data is transferred or if the connection is slow, the download process will not block other processes on the client.

Asynchronous monikers provide a way to download data asynchronously over a network. A Read operation on an Asynchronous moniker returns immediately, even if the operation has not been completed.

For example, if only 10 bytes are available and Read is called asynchronously on a 1K file, Read does not block, but returns with the currently available 10 bytes.

You implement [asynchronous monikers](asynchronous-monikers-on-the-internet.md) using the `CAsyncMonikerFile` class. However, ActiveX controls can use the `CDataPathProperty` class, which is derived from `CAsyncMonikerFile`, to help implement asynchronous control properties.

## Displaying a Control on a Web Page

Here is an example of an object tag and attributes for inserting a control on a Web page.

```xml
<OBJECT
  CLASSID="clsid:FC25B780-75BE-11CF-8B01-444553540000"
  CODEBASE="/ie/download/activex/iechart.ocx"
  ID=chart1
  WIDTH=400
  HEIGHT=200
  ALIGN=center
  HSPACE=0
  VSPACE=0>
  <PARAM NAME="BackColor" value="#ffffff"/>
  <PARAM NAME="ForeColor" value="#0000ff"/>
  <PARAM NAME="url" VALUE="/ie/controls/chart/mychart.txt"/>
</OBJECT>
```

## Updating an Existing OLE Control to Use New ActiveX Control Features

If your OLE control was created with a version of Visual C++ prior to 4.2, there are steps you can take to improve its performance and enhance its functionality. For a detailed discussion of these changes, see [ActiveX Controls: Optimization](mfc-activex-controls-optimization.md).

If you are adding asynchronous property support to an existing control, you will need to add the ready state property and the `ReadyStateChange` event yourself. In the constructor for your control, add:

[!code-cpp[NVC_MFCActiveXControl#8](codesnippet/cpp/activex-controls-on-the-internet_8.cpp)]

You will update the ready state as your code is downloaded by calling [COleControl::InternalSetReadyState](reference/colecontrol-class.md#internalsetreadystate). One place you could call `InternalSetReadyState` is from the `OnProgress` override of `CDataPathProperty`-derived class.

## See also

[MFC Internet Programming Tasks](mfc-internet-programming-tasks.md)<br/>
[MFC Internet Programming Basics](mfc-internet-programming-basics.md)
