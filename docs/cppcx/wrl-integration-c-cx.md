---
title: "WRL integration (C++-CX) | Microsoft Docs"
ms.custom: ""
ms.date: "01/22/2017"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 3ad43894-c574-477c-ad3e-240301f381d4
caps.latest.revision: 9
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# WRL integration (C++-CX)
You freely can mix [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)] code with [!INCLUDE[cppwrl](../cppcx/includes/cppwrl-md.md)] ([!INCLUDE[cppwrl_short](../cppcx/includes/cppwrl-short-md.md)]) code. In the same translation unit, you can use objects declared with [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)] handle-to-object (`^`) notation and [!INCLUDE[cppwrl_short](../cppcx/includes/cppwrl-short-md.md)] smart pointer (`ComPtr<T>`) notation. However, you must manually handle return values, and [!INCLUDE[cppwrl_short](../cppcx/includes/cppwrl-short-md.md)] HRESULT error codes and [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)] exceptions.  
  
## [!INCLUDE[cppwrl_short](../cppcx/includes/cppwrl-short-md.md)] development  
 For more information about authoring and consuming [!INCLUDE[cppwrl_short](../cppcx/includes/cppwrl-short-md.md)] components, see [Windows Runtime C++ Template Library (WRL)](../Topic/Windows%20Runtime%20C++%20Template%20Library%20\(WRL\).md).  
  
## Example  
 The following code snippet demonstrates using [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)] and [!INCLUDE[cppwrl_short](../cppcx/includes/cppwrl-short-md.md)] to consume [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] classes and examine a metadata file.  
  
 The example taken from a code snippet in the [Building Windows Store apps forum](http://social.msdn.microsoft.com/Forums/winappswithnativecode/thread/211ef583-db11-4e55-926b-6d9ab53dbdb4). The author of this code snippet offers the following disclaimers and stipulations:  
  
1.  C++ doesn't provide specific APIs to reflect on [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] types, but Windows metadata files (.winmd) for a type are fully compliant with CLR metadata files. Windows provides the new metadata discovery APIs (RoGetMetaDataFile) to get to the .winmd file for a given type. However, these APIs are of limited use to C++ developers because you can't instantiate a class.  
  
2.  After the code is compiled, you'll also need to pass Runtimeobject.lib and Rometadata.lib to the Linker.  
  
3.  This snippet is presented as-is. While it is expected to work correctly, it possibly can contain errors.  
  
```  
  
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
  
    for(int i = 0; i < countMethodDefs; ++i)  
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
  
## See Also  
 [Interoperating with Other Languages](../cppcx/interoperating-with-other-languages-c-cx.md)