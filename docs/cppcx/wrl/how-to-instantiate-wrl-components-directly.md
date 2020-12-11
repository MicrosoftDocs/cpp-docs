---
description: "Learn more about: How to: Instantiate WRL Components Directly"
title: "How to: Instantiate WRL Components Directly"
ms.date: "11/04/2016"
ms.topic: "reference"
ms.assetid: 1a9fa011-0cee-4abf-bf83-49adf53ff906
---
# How to: Instantiate WRL Components Directly

Learn how to use the Windows Runtime C++ Template Library (WRL)[Microsoft::WRL::Make](make-function.md) and [Microsoft::WRL::Details::MakeAndInitialize](makeandinitialize-function.md) functions to instantiate a component from the module that defines it.

By instantiating components directly, you can reduce overhead when you don't need class factories or other mechanisms. You can instantiate a component directly in both Universal Windows Platform apps and in desktop apps.

To learn how to use Windows Runtime C++ Template Library to create a classic COM component and instantiate it from an external desktop app, see [How to: Create a Classic COM Component](how-to-create-a-classic-com-component-using-wrl.md).

This document shows two examples. The first example uses the `Make` function to instantiate a component. The second example uses the `MakeAndInitialize` function to instantiate a component that can fail during construction. (Because COM typically uses HRESULT values, instead of exceptions, to indicate errors, a COM type typically does not throw from its constructor. `MakeAndInitialize` enables a component to validate its construction arguments through the `RuntimeClassInitialize` method.) Both examples define a basic logger interface and implement that interface by defining a class that writes messages to the console.

> [!IMPORTANT]
> You can’t use the `new` operator to instantiate Windows Runtime C++ Template Library components. Therefore, we recommend that you always use `Make` or `MakeAndInitialize` to instantiate a component directly.

### To create and instantiate a basic logger component

1. In Visual Studio, create a **Win32 Console Application** project. Name the project, for example, *WRLLogger*.

2. Add a **Midl File (.idl)** file to the project, name the file `ILogger.idl`, and then add this code:

   [!code-cpp[wrl-logger-make#1](../codesnippet/CPP/how-to-instantiate-wrl-components-directly_1.idl)]

3. Use the following code to replace the contents of `WRLLogger.cpp`.

   [!code-cpp[wrl-logger-make#2](../codesnippet/CPP/how-to-instantiate-wrl-components-directly_2.cpp)]

### To handle construction failure for the basic logger component

1. Use the following code to replace the definition of the `CConsoleWriter` class. This version holds a private string member variable and overrides the `RuntimeClass::RuntimeClassInitialize` method. `RuntimeClassInitialize` fails if the call to `SHStrDup` fails.

   [!code-cpp[wrl-logger-makeandinitialize#1](../codesnippet/CPP/how-to-instantiate-wrl-components-directly_3.cpp)]

2. Use the following code to replace the definition of `wmain`. This version uses `MakeAndInitialize` to instantiate the `CConsoleWriter` object and checks the HRESULT result.

   [!code-cpp[wrl-logger-makeandinitialize#2](../codesnippet/CPP/how-to-instantiate-wrl-components-directly_4.cpp)]

## See also

[Windows Runtime C++ Template Library (WRL)](windows-runtime-cpp-template-library-wrl.md)<br/>
[Microsoft::WRL::Make](make-function.md)<br/>
[Microsoft::WRL::Details::MakeAndInitialize](makeandinitialize-function.md)
