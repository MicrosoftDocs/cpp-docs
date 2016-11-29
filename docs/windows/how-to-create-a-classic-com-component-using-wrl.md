---
title: "How to: Create a Classic COM Component Using WRL | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
ms.assetid: 5efe7690-90d5-4c3c-9e53-11a14cefcb19
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# How to: Create a Classic COM Component Using WRL
You can use the [!INCLUDE[cppwrl](../windows/includes/cppwrl_md.md)] ([!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)]) to create basic classic COM components for use in desktop apps, in addition to using it for [!INCLUDE[win8_appstore_long](../build/reference/includes/win8_appstore_long_md.md)] apps. For the creation of COM components, the [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] may require less code than the ATL. For information about the subset of COM that the [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] supports, see [Windows Runtime C++ Template Library (WRL)](../windows/windows-runtime-cpp-template-library-wrl.md).  
  
 This document shows how to use the [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] to create a basic COM component. Although you can use the deployment mechanism that best fits your needs, this document also shows a basic way to register and consume the COM component from a desktop app.  
  
### To use the [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] to create a basic classic COM component  
  
1.  In Visual Studio, create a **Blank Solution** project. Name the project, for example, `WRLClassicCOM`.  
  
2.  Add a **Win32 Project** to the solution. Name the project, for example, `CalculatorComponent`. On the **Application Settings** tab, select **DLL**.  
  
3.  Add a **Midl File (.idl)** file to the project. Name the file, for example, `CalculatorComponent.idl`.  
  
4.  Add this code to CalculatorComponent.idl:  
  
     [!code-cpp[wrl-classic-com-component#1](../windows/codesnippet/CPP/how-to-create-a-classic-com-component-using-wrl_1.idl)]  
  
5.  In CalculatorComponent.cpp, define the `CalculatorComponent` class. The `CalculatorComponent` class inherits from [Microsoft::WRL::RuntimeClass](../windows/runtimeclass-class.md). [Microsoft::WRL::RuntimeClassFlags\<ClassicCom>](../windows/runtimeclassflags-structure.md) specifies that the class derives from [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509\(v=vs.85\).aspx) and not [IInspectable](http://msdn.microsoft.com/library/br205821\(v=vs.85\).aspx). (`IInspectable` is available only to [!INCLUDE[win8_appstore_short](../windows/includes/win8_appstore_short_md.md)] app components.) `CoCreatableClass` creates a factory for the class that can be used with functions such as [CoCreateInstance](http://msdn.microsoft.com/library/windows/desktop/ms686615\(v=vs.85\).aspx).  
  
     [!code-cpp[wrl-classic-com-component#2](../windows/codesnippet/CPP/how-to-create-a-classic-com-component-using-wrl_2.cpp)]  
  
6.  Use the following code to replace the code in dllmain.cpp. This file defines the DLL export functions. These functions use the [Microsoft::WRL::Module](../windows/module-class.md) class to manage the class factories for the module.  
  
     [!code-cpp[wrl-classic-com-component#3](../windows/codesnippet/CPP/how-to-create-a-classic-com-component-using-wrl_3.cpp)]  
  
7.  Add a **Module-Definition File (.def)** file to the project. Name the file, for example, `CalculatorComponent.def`. This file gives the linker the names of the functions to be exported.  
  
8.  Add this code to CalculatorComponent.def:  
  
    ```
    LIBRARY

    EXPORTS
        DllGetActivationFactory PRIVATE
        DllGetClassObject       PRIVATE
        DllCanUnloadNow         PRIVATE  
    ```

9. Add runtimeobject.lib to the linker line. To learn how, see [.Lib Files as Linker Input](../build/reference/dot-lib-files-as-linker-input.md).  
  
### To consume the COM component from a desktop app  
  
1.  Register the COM component with the Windows Registry. To do so, create a registration entries file, name it `RegScript.reg`, and add the following text. Replace *\<dll-path>* with the path of your DLL—for example, `C:\\temp\\WRLClassicCOM\\Debug\\CalculatorComponent.dll`.  
  
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
  
2.  Run RegScript.reg or add it to your project’s **Post-Build Event**. For more information, see [Pre-build Event/Post-build Event Command Line Dialog Box](/visualstudio/ide/reference/pre-build-event-post-build-event-command-line-dialog-box).  
  
3.  Add a **Win32 Console Application** project to the solution. Name the project, for example, `Calculator`.  
  
4.  Use this code to replace the contents of Calculator.cpp:  
  
     [!code-cpp[wrl-classic-com-component#6](../windows/codesnippet/CPP/how-to-create-a-classic-com-component-using-wrl_6.cpp)]  
  
## Robust Programming  
 This document uses standard COM functions to demonstrate that you can use the [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] to author a COM component and make it available to any COM-enabled technology. You can also use [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] types such as [Microsoft::WRL::ComPtr](../windows/comptr-class.md) in your desktop app to manage the lifetime of COM and other objects. The following code uses the [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] to manage the lifetime of the `ICalculatorComponent` pointer. The `CoInitializeWrapper` class is an RAII wrapper that guarantees that the COM library is freed and also guarantees that the lifetime of the COM library outlives the `ComPtr` smart pointer object.  
  
 [!code-cpp[wrl-classic-com-component#7](../windows/codesnippet/CPP/how-to-create-a-classic-com-component-using-wrl_7.cpp)]  
  
## See Also  
 [Windows Runtime C++ Template Library (WRL)](../windows/windows-runtime-cpp-template-library-wrl.md)