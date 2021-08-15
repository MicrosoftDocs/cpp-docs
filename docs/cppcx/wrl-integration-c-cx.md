---
description: "Learn more about: WRL integration (C++/CX)"
title: "WRL integration (C++/CX)"
ms.date: "01/22/2017"
ms.assetid: 3ad43894-c574-477c-ad3e-240301f381d4
---
# WRL integration (C++/CX)

You freely can mix WRL code with Windows Runtime C++ Template Library (WRL) code. In the same translation unit, you can use objects declared with WRL handle-to-object (`^`) notation and WRL smart pointer (`ComPtr<T>`) notation. However, you must manually handle return values, and WRL HRESULT error codes and WRL exceptions.

## WRL development

For more information about authoring and consuming WRL components, see [Windows Runtime C++ Template Library (WRL)](./wrl/windows-runtime-cpp-template-library-wrl.md).

### Example

The following code snippet demonstrates using WRL and WRL to consume Windows Runtime classes and examine a metadata file.

The example is taken from a code snippet in the Building Microsoft Store apps forum. The author of this code snippet offers the following disclaimers and stipulations:

1. C++ doesn't provide specific APIs to reflect on Windows Runtime types, but Windows metadata files (.winmd) for a type are fully compliant with CLR metadata files. Windows provides the new metadata discovery APIs (RoGetMetaDataFile) to get to the .winmd file for a given type. However, these APIs are of limited use to C++ developers because you can't instantiate a class.

1. After the code is compiled, you'll also need to pass Runtimeobject.lib and Rometadata.lib to the Linker.

1. This snippet is presented as-is. While it is expected to work correctly, it possibly can contain errors.

```cpp
#include <hstring.h>
#include <cor.h>
#include <rometadata.h>
#include <rometadataresolution.h>
#include <collection.h>

namespace ABI_Isolation_Workaround {
    #include <inspectable.h>
    #include <WeakReference.h>
}
using namespace ABI_Isolation_Workaround;
#include <wrl/client.h>

using namespace Microsoft::WRL;
using namespace Windows::Foundation::Collections;

IVector<String^>^ GetTypeMethods(Object^);

MainPage::MainPage()
{
    InitializeComponent();

    Windows::Foundation::Uri^ uri = ref new Windows::Foundation::Uri("http://buildwindows.com/");
    auto methods = GetTypeMethods(uri);

    std::wstring strMethods;
    std::for_each(begin(methods), end(methods), [&strMethods](String^ methodName) {
        strMethods += methodName->Data();
        strMethods += L"\n";
    });

    wprintf_s(L"%s\n", strMethods.c_str());
}

IVector<String^>^ GetTypeMethods(Object^ instance)
{
    HRESULT hr;
    HSTRING hStringClassName;
    hr = instance->__cli_GetRuntimeClassName(reinterpret_cast<__cli_HSTRING__**>(&hStringClassName)); // internal method name subject to change post BUILD
    if (FAILED(hr))
        __cli_WinRTThrowError(hr); // internal method name subject to change post BUILD
    String^ className = reinterpret_cast<String^>(hStringClassName);

    ComPtr<IMetaDataDispenserEx> metadataDispenser; ComPtr<IMetaDataImport2> metadataImport; hr = MetaDataGetDispenser(CLSID_CorMetaDataDispenser, IID_IMetaDataDispenser, (LPVOID*)metadataDispenser.GetAddressOf());
    if (FAILED(hr))
        __cli_WinRTThrowError(hr); // internal method name subject to change post BUILD

    HSTRING hStringFileName;
    mdTypeDef typeDefToken;
    hr = RoGetMetaDataFile(hStringClassName, metadataDispenser.Get(), &hStringFileName, &metadataImport, &typeDefToken);
    if (FAILED(hr))
        __cli_WinRTThrowError(hr); // internal method name subject to change post BUILD
    String^ fileName = reinterpret_cast<String^>(hStringFileName);

    HCORENUM hCorEnum = 0;
    mdMethodDef methodDefs[2048];
    ULONG countMethodDefs = sizeof(methodDefs);
    hr = metadataImport->EnumMethods(&hCorEnum, typeDefToken, methodDefs, countMethodDefs,  &countMethodDefs);
    if (FAILED(hr))
        __cli_WinRTThrowError(hr); // internal method name subject to change post BUILD

    wchar_t methodName[1024];
    ULONG countMethodName;
    std::wstring strMethods;
    Vector<String^>^ retVal = ref new Vector<String^>();

    for (int i = 0; i < countMethodDefs; ++i)
    {
        countMethodName = sizeof(methodName);
        hr = metadataImport->GetMethodProps(methodDefs[i], nullptr, methodName, countMethodName, &countMethodName, nullptr, nullptr, nullptr, nullptr, nullptr);
        if (SUCCEEDED(hr))
        {
            methodName[ countMethodName ] = 0;
            retVal->Append(ref new String(methodName));
        }
    }
    return retVal;
}
```

## See also

[Interoperating with Other Languages](interoperating-with-other-languages-c-cx.md)
