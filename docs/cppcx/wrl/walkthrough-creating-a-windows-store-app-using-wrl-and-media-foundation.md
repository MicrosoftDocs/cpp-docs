---
description: "Learn more about: Creating a UWP app using WRL and Media Foundation"
title: "Walkthrough: Creating a UWP app using WRL and Media Foundation"
ms.date: 04/15/2021
ms.topic: "reference"
---
# Walkthrough: Creating a UWP app using WRL and Media Foundation

> [!NOTE]
> For new UWP apps and components, we recommend that you use [C++/WinRT](/windows/uwp/cpp-and-winrt-apis/), a new standard C++17 language projection for Windows Runtime APIs. C++/WinRT is available in the Windows SDK from version 1803 (10.0.17134.0) onward. C++/WinRT is implemented entirely in header files, and is designed to provide you with first-class access to the modern Windows API.

In this tutorial, you'll learn how to use the Windows Runtime C++ Template Library (WRL) to create a Universal Windows Platform (UWP) app that uses [Microsoft Media Foundation](/windows/win32/medfound/microsoft-media-foundation-sdk).

This example creates a custom Media Foundation transform. It applies a grayscale effect to images that are captured from a webcam. The app uses C++ to define the custom transform and C# to use the component to transform the captured images.

> [!NOTE]
> Instead of C#, you can also use JavaScript, Visual Basic, or C++ to consume the custom transform component.

You can usually use C++/CX to create Windows Runtime components. However, sometimes you have to use the WRL. For example, when you create a media extension for Microsoft Media Foundation, you must create a component that implements both COM and Windows Runtime interfaces. Because C++/CX can only create Windows Runtime objects, to create a media extension you must use the WRL. That's because it enables the implementation of both COM and Windows Runtime interfaces.

> [!NOTE]
> Although this code example is long, it demonstrates the minimum that's required to create a useful Media Foundation transform. You can use it as a starting point for your own custom transform. This example is adapted from the [Media extensions sample](https://github.com/Microsoft/VCSamples/tree/master/VC2012Samples/Windows%208%20samples/C%2B%2B/Windows%208%20app%20samples), which uses media extensions to apply effects to video, decode video, and create scheme handlers that produce media streams.

## Prerequisites

- In Visual Studio 2017 and later, UWP support is an optional component. To install it, open the Visual Studio Installer from the Windows Start menu and find your version of Visual Studio. Choose **Modify** and then make sure the **Universal Windows Platform Development** tile is checked. Under **Optional Components** check **C++ Tools for UWP (v141)** for Visual Studio 2017, or **C++ Tools for UWP (v142)** for Visual Studio 2019. Then check the version of the Windows SDK that you want to use.

- Experience with the [Windows Runtime](/uwp/api/).

- Experience with COM.

- A webcam.

## Key points

- To create a custom Media Foundation component, use a Microsoft Interface Definition Language (MIDL) definition file to define an interface, implement that interface, and then make it activatable from other components.

- The `namespace` and `runtimeclass` attributes, and the `NTDDI_WIN8` [version](/windows/win32/Midl/version) attribute value are important parts of the MIDL definition for a Media Foundation component that uses WRL.

- [`Microsoft::WRL::RuntimeClass`](runtimeclass-class.md) is the base class for the custom Media Foundation component. The [`Microsoft::WRL::RuntimeClassType::WinRtClassicComMix]`(runtimeclasstype-enumeration.md) enum value, which is provided as a template argument, marks the class for use both as a Windows Runtime class and as a classic COM runtime class.

- The [`InspectableClass`](inspectableclass-macro.md) macro implements basic COM functionality such as reference counting and the `QueryInterface` method, and sets the runtime class name and trust level.

- Use the [`Microsoft::WRL::Module`](module-class.md) class to implement DLL entry-point functions such as [`DllGetActivationFactory`](/windows/win32/winrt/functions), [`DllCanUnloadNow`](/windows/win32/api/combaseapi/nf-combaseapi-dllcanunloadnow), and [`DllGetClassObject`](/windows/win32/api/combaseapi/nf-combaseapi-dllgetclassobject).

- Link your component DLL to *`runtimeobject.lib`*. Also specify [`/WINMD`](../../cppcx/compiler-and-linker-options-c-cx.md) on the linker line to generate Windows metadata.

- Use project references to make WRL components accessible to UWP apps.

### To use the WRL to create the Media Foundation grayscale transform component

1. In Visual Studio, create a **Blank Solution** project. Name the project, for example, *MediaCapture*.

1. Add a **DLL (Universal Windows)** project to the solution. Name the project, for example, *GrayscaleTransform*.

1. Add a **MIDL File (.idl)** file to the project. Name the file, for example, *`GrayscaleTransform.idl`*.

1. Add this code to GrayscaleTransform.idl:

   [!code-cpp[wrl-media-capture#1](../codesnippet/CPP/walkthrough-creating-a-windows-store-app-using-wrl-and-media-foundation_1.idl)]

1. Use the following code to replace the contents of *`pch.h`*:

   [!code-cpp[wrl-media-capture#2](../codesnippet/CPP/walkthrough-creating-a-windows-store-app-using-wrl-and-media-foundation_2.h)]

1. Add a new header file to the project, name it *`BufferLock.h`*, and then replace the contents with this code:

   [!code-cpp[wrl-media-capture#3](../codesnippet/CPP/walkthrough-creating-a-windows-store-app-using-wrl-and-media-foundation_3.h)]

1. *`GrayscaleTransform.h`* isn't used in this example. You can remove it from the project if you want to.

1. Use the following code to replace the contents of *`GrayscaleTransform.cpp`*:

   [!code-cpp[wrl-media-capture#4](../codesnippet/CPP/walkthrough-creating-a-windows-store-app-using-wrl-and-media-foundation_4.cpp)]

1. Add a new module-definition file to the project, name it *`GrayscaleTransform.def`*, and then add this code:

   ```idl
   EXPORTS
       DllCanUnloadNow                     PRIVATE
       DllGetActivationFactory             PRIVATE
       DllGetClassObject                   PRIVATE
   ```

1. Use the following code to replace the contents of `dllmain.cpp`:

   [!code-cpp[wrl-media-capture#6](../codesnippet/CPP/walkthrough-creating-a-windows-store-app-using-wrl-and-media-foundation_6.cpp)]

1. In the project's **Property Pages** dialog box, set the following **Linker** properties.

   1. Under **Input**, for the **Module Definition File**, specify `GrayScaleTransform.def`.

   1. Also under **Input**, add `runtimeobject.lib`, `mfuuid.lib`, and `mfplat.lib` to the **Additional Dependencies** property.

   1. Under **Windows Metadata**, set **Generate Windows Metadata** to **Yes (/WINMD)**.

### To use the WRL the custom Media Foundation component from a C# app

1. Add a new **C# Blank App (Universal Windows)** project to the `MediaCapture` solution. Name the project, for example, *MediaCapture*.

1. In the **MediaCapture** project, add a reference to the `GrayscaleTransform` project. To learn how, see [How to: Add or remove references by using the reference manager](/visualstudio/ide/how-to-add-or-remove-references-by-using-the-reference-manager).

1. In *`Package.appxmanifest`*, on the **Capabilities** tab, select **Microphone** and **Webcam**. Both capabilities are required to capture photos from the webcam.

1. In *`MainPage.xaml`*, add this code to the root [`Grid`](/uwp/api/windows.ui.xaml.controls.grid) element:

   [!code-xml[wrl-media-capture#7](../codesnippet/Xaml/walkthrough-creating-a-windows-store-app-using-wrl-and-media-foundation_7.xaml)]

1. Use the following code to replace the contents of `MainPage.xaml.cs`:

   [!code-cs[wrl-media-capture#8](../codesnippet/CSharp/walkthrough-creating-a-windows-store-app-using-wrl-and-media-foundation_8.cs)]

The following illustration shows the `MediaCapture app`.

![Screenshot of the MediaCapture app capturing a photo.](../media/wrl_media_capture.png "WRL_Media_Capture")

## Next Steps

The example shows how to capture photos from the default webcam one at a time. The [Media extensions sample](https://github.com/Microsoft/VCSamples/tree/master/VC2012Samples/Windows%208%20samples/C%2B%2B/Windows%208%20app%20samples) does more. It demonstrates how to enumerate webcam devices and work with local scheme handlers. The sample also demonstrates other media effects that work on both individual photos and streams of video.

## See also

[Windows Runtime C++ Template Library (WRL)](windows-runtime-cpp-template-library-wrl.md)\
[Microsoft Media Foundation](/windows/win32/medfound/microsoft-media-foundation-sdk)
