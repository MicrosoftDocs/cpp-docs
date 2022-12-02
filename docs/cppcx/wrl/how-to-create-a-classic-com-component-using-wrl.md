---
title: "How to: Create a Classic COM Component Using WRL"
description: "Use the Windows Runtime C++ Template Library (WRL) to create basic classic COM components for use in desktop apps."
ms.date: 10/23/2020
ms.topic: "reference"
---
# How to: Create a Classic COM Component Using WRL

You can use the Windows Runtime C++ Template Library (WRL) to create basic classic COM components for use in desktop apps, in addition to using it for Universal Windows Platform (UWP) apps. For the creation of COM components, the Windows Runtime C++ Template Library may require less code than the ATL. For information about the subset of COM that the Windows Runtime C++ Template Library supports, see [Windows Runtime C++ Template Library (WRL)](windows-runtime-cpp-template-library-wrl.md).

This document shows how to use the Windows Runtime C++ Template Library to create a basic COM component. Although you can use the deployment mechanism that best fits your needs, this document also shows a basic way to register and consume the COM component from a desktop app.

### To use the Windows Runtime C++ Template Library to create a basic classic COM component

1. In Visual Studio, create a **Blank Solution** project. Name the project, for example, `WRLClassicCOM`.

2. Add a **Win32 Project** to the solution. Name the project, for example, `CalculatorComponent`. On the **Application Settings** tab, select **DLL**.

3. Add a **Midl File (.idl)** file to the project. Name the file, for example, `CalculatorComponent.idl`.

4. Add this code to CalculatorComponent.idl:

   [!code-cpp[wrl-classic-com-component#1](../codesnippet/CPP/how-to-create-a-classic-com-component-using-wrl_1.idl)]

5. In CalculatorComponent.cpp, define the `CalculatorComponent` class. The `CalculatorComponent` class inherits from [Microsoft::WRL::RuntimeClass](runtimeclass-class.md). [Microsoft::WRL::RuntimeClassFlags\<ClassicCom>](runtimeclassflags-structure.md) specifies that the class derives from [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) and not [IInspectable](/windows/win32/api/inspectable/nn-inspectable-iinspectable). (`IInspectable` is available only to Windows Runtime app components.) `CoCreatableClass` creates a factory for the class that can be used with functions such as [CoCreateInstance](/windows/win32/api/combaseapi/nf-combaseapi-cocreateinstance).

   [!code-cpp[wrl-classic-com-component#2](../codesnippet/CPP/how-to-create-a-classic-com-component-using-wrl_2.cpp)]

6. Use the following code to replace the code in `dllmain.cpp`. This file defines the DLL export functions. These functions use the [Microsoft::WRL::Module](module-class.md) class to manage the class factories for the module.

   [!code-cpp[wrl-classic-com-component#3](../codesnippet/CPP/how-to-create-a-classic-com-component-using-wrl_3.cpp)]

7. Add a **Module-Definition File (.def)** file to the project. Name the file, for example, `CalculatorComponent.def`. This file gives the linker the names of the functions to be exported. Open the **Property Pages** dialog for your project, then under **Configuration Properties** > **Linker** > **Input**, set the **Module Definition File** property to your DEF file.

8. Add this code to CalculatorComponent.def:

    ```
    LIBRARY

    EXPORTS
        DllGetActivationFactory PRIVATE
        DllGetClassObject       PRIVATE
        DllCanUnloadNow         PRIVATE
    ```

9. Add runtimeobject.lib to the linker line. To learn how, see [`.Lib` Files as Linker Input](../../build/reference/dot-lib-files-as-linker-input.md).

### To consume the COM component from a desktop app

1. Register the COM component with the Windows Registry. To do so, create a registration entries file, name it `RegScript.reg`, and add the following text. Replace *\<dll-path>* with the path of your DLL—for example, `C:\temp\WRLClassicCOM\Debug\CalculatorComponent.dll`.

    ```
    Windows Registry Editor Version 5.00

    [HKEY_CLASSES_ROOT\Wow6432Node\CLSID\{E68F5EDD-6257-4E72-A10B-4067ED8E85F2}]
    @="CalculatorComponent Class"

    [HKEY_CLASSES_ROOT\Wow6432Node\CLSID\{E68F5EDD-6257-4E72-A10B-4067ED8E85F2}\InprocServer32]
    @="<dll-path>"
    "ThreadingModel"="Apartment"

    [HKEY_CLASSES_ROOT\Wow6432Node\CLSID\{E68F5EDD-6257-4E72-A10B-4067ED8E85F2}\Programmable]

    [HKEY_CLASSES_ROOT\Wow6432Node\CLSID\{E68F5EDD-6257-4E72-A10B-4067ED8E85F2}\TypeLib]
    @="{9D3E6826-CB8E-4D86-8B14-89F0D7EFCD01}"

    [HKEY_CLASSES_ROOT\Wow6432Node\CLSID\{E68F5EDD-6257-4E72-A10B-4067ED8E85F2}\Version]
    @="1.0"
    ```

2. Run RegScript.reg or add it to your project's **Post-Build Event**. For more information, see [Pre-build Event/Post-build Event Command Line Dialog Box](/visualstudio/ide/reference/pre-build-event-post-build-event-command-line-dialog-box).

3. Add a **Win32 Console Application** project to the solution. Name the project, for example, `Calculator`.

4. Use this code to replace the contents of `Calculator.cpp`:

   [!code-cpp[wrl-classic-com-component#6](../codesnippet/CPP/how-to-create-a-classic-com-component-using-wrl_6.cpp)]

## Robust Programming

This document uses standard COM functions to demonstrate that you can use the Windows Runtime C++ Template Library to author a COM component and make it available to any COM-enabled technology. You can also use Windows Runtime C++ Template Library types such as [Microsoft::WRL::ComPtr](comptr-class.md) in your desktop app to manage the lifetime of COM and other objects. The following code uses the Windows Runtime C++ Template Library to manage the lifetime of the `ICalculatorComponent` pointer. The `CoInitializeWrapper` class is an RAII wrapper that guarantees that the COM library is freed and also guarantees that the lifetime of the COM library outlives the `ComPtr` smart pointer object.

[!code-cpp[wrl-classic-com-component#7](../codesnippet/CPP/how-to-create-a-classic-com-component-using-wrl_7.cpp)]

## See also

[Windows Runtime C++ Template Library (WRL)](windows-runtime-cpp-template-library-wrl.md)
