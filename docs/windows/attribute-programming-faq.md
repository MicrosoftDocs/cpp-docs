---
title: "Attribute Programming FAQ | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "attributed programming"
  - "attributes [C++], frequently asked questions"
  - "FAQs (frequently asked questions), attributed programming [C++]"
ms.assetid: a1b8349f-7f51-43c4-95ea-4edb6e5f243f
caps.latest.revision: 8
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
# Attribute Programming FAQ
This topic answers the following frequently asked questions:  
  
-   [What is an HRESULT?](#vcconattributeprogrammmingfaqanchor1)  
  
-   [When do I have to specify the parameter name for an attribute?](#vcconattributeprogrammmingfaqanchor2)  
  
-   [Can I use comments in an attribute block?](#vcconattributeprogrammmingfaqanchor3)  
  
-   [How do attributes interact with inheritance?](#vcconattributeprogrammmingfaqanchor4)  
  
-   [How can I use attributes in a nonattributed ATL project?](#vcconattributeprogrammmingfaqanchor5)  
  
-   [How can I use an .idl file in an attributed project?](#vcconattributeprogrammmingfaqanchor6)  
  
-   [Can I modify code that is injected by an attribute?](#vcconattributeprogrammmingfaqanchor7)  
  
-   [How can I forward declare an attributed interface?](#vcconattributeprogrammmingfaqhowcaniforwarddeclareanattributedinterface)  
  
-   [Can I use attributes on a class derived from a class that also uses attributes?](#vcconcaniuseattributesonclassderivedfromclassthatalsousesattributesanchor)  
  
##  <a name="vcconattributeprogrammmingfaqanchor1"></a> What is an HRESULT?  
 An `HRESULT` is a simple data type that is often used as a return value by attributes and ATL in general. The following table describes the various values. More values are contained in the header file winerror.h.  
  
|Name|Description|Value|  
|----------|-----------------|-----------|  
|S_OK|Operation successful|0x00000000|  
|E_UNEXPECTED|Unexpected failure|0x8000FFFF|  
|E_NOTIMPL|Not implemented|0x80004001|  
|E_OUTOFMEMORY|Failed to allocate necessary memory|0x8007000E|  
|E_INVALIDARG|One or more arguments are invalid|0x80070057|  
|E_NOINTERFACE|No such interface supported|0x80004002|  
|E_POINTER|Invalid pointer|0x80004003|  
|E_HANDLE|Invalid handle|0x80070006|  
|E_ABORT|Operation aborted|0x80004004|  
|E_FAIL|Unspecified failure|0x80004005|  
|E_ACCESSDENIED|General access denied error|0x80070005|  
  
##  <a name="vcconattributeprogrammmingfaqanchor2"></a> When do I have to specify the parameter name for an attribute?  
 In most cases, if the attribute has a single parameter, that parameter is named. This name is not required when inserting the attribute in your code. For example, the following usage of the [aggregatable](../windows/aggregatable.md) attribute:  
  
```  
[coclass, aggregatable(value=allowed)]  
class CMyClass  
{  
// The class declaration  
};  
```  
  
 is exactly the same as:  
  
```  
[coclass, aggregatable(allowed)]  
class CMyClass  
{  
// The class declaration  
};  
```  
  
 However, the following attributes have single, unnamed parameters:  
  
||||  
|-|-|-|  
|[call_as](../windows/call-as.md)|[case](../windows/case-cpp.md)|[cpp_quote](../windows/cpp-quote.md)|  
|[default](../windows/default-cpp.md)|[defaultvalue](../windows/defaultvalue.md)|[defaultvtable](../windows/defaultvtable.md)|  
|[emitidl](../windows/emitidl.md)|[entry](../windows/entry.md)|[first_is](../windows/first-is.md)|  
|[helpcontext](../windows/helpcontext.md)|[helpfile](../windows/helpfile.md)|[helpstring](../windows/helpstring.md)|  
|[helpstringcontext](../windows/helpstringcontext.md)|[helpstringdll](../windows/helpstringdll.md)|[id](../windows/id.md)|  
|[iid_is](../windows/iid-is.md)|[import](../windows/import.md)|[importlib](../windows/importlib.md)|  
|[include](../windows/include-cpp.md)|[includelib](../windows/includelib-cpp.md)|[last_is](../windows/last-is.md)|  
|[length_is](../windows/length-is.md)|[max_is](../windows/max-is.md)|[no_injected_text](../windows/no-injected-text.md)|  
|[pointer_default](../windows/pointer-default.md)|[pragma](../windows/pragma.md)|[restricted](../windows/restricted.md)|  
|[size_is](../windows/size-is.md)|[source](../windows/source-cpp.md)|[switch_is](../windows/switch-is.md)|  
|[switch_type](../windows/switch-type.md)|[transmit_as](../windows/transmit-as.md)|[wire_marshal](../windows/wire-marshal.md)|  
  
##  <a name="vcconattributeprogrammmingfaqanchor3"></a> Can I use comments in an attribute block?  
 You can use both single-line and multiple-line comments within an attribute block. However, you cannot use either style of comment within the parentheses holding the parameters to an attribute.  
  
 The following is allowed:  
  
```  
[ coclass,  
   progid("MyClass.CMyClass.1"), /* Multiple-line  
                                       comment */  
   threading("both") // Single-line comment  
]  
```  
  
 The following is disallowed:  
  
```  
[ coclass,  
   progid("MyClass.CMyClass.1" /* Multiple-line comment */ ),  
   threading("both" // Single-line comment)  
]  
```  
  
##  <a name="vcconattributeprogrammmingfaqanchor4"></a> How do attributes interact with inheritance?  
 You can inherit both attributed and unattributed classes from other classes, which may themselves be attributed or not. The result of deriving from an attributed class is the same as deriving from that class after the attribute provider has transformed its code. Attributes are not transmitted to derived classes through C++ inheritance. An attribute provider only transforms code in the vicinity of its attributes.  
  
##  <a name="vcconattributeprogrammmingfaqanchor5"></a> How can I use attributes in a nonattributed ATL project?  
 You may have a nonattributed ATL project, which has an .idl file, and you may want to start adding attributed objects. In this case, use the Add Class Wizard to provide the code.  
  
##  <a name="vcconattributeprogrammmingfaqanchor6"></a> How can I use an .idl file in an attributed project?  
 You may have a .idl file that you want to use in your ATL attributed project. In this case, you would use the [importidl](../windows/importidl.md) attribute, compile the .idl file to a .h file (see the [MIDL Property Pages](../ide/midl-property-pages.md) in the project's Property Pages dialog box), and then include the .h file in your project.  
  
##  <a name="vcconattributeprogrammmingfaqanchor7"></a> Can I modify code that is injected by an attribute?  
 Some attributes inject code into your project. You can see the injected code by using the [/Fx](../build/reference/fx-merge-injected-code.md) compiler option. It is also possible to copy code from the injected file and paste it into your source code. This allows you to modify the behavior of the attribute. However, you may have to modify other parts of your code as well.  
  
 The following sample is the result of copying injected code into a source code file:  
  
```  
// attr_injected.cpp  
// compile with: comsupp.lib  
#define _ATL_ATTRIBUTES 1  
#include <atlbase.h>  
#include <atlcom.h>  
  
[ module(name="MyLibrary") ];  
  
// ITestTest  
[   
   object,  
   uuid("DADECE00-0FD2-46F1-BFD3-6A0579CA1BC4"),  
   dual,  
   helpstring("ITestTest Interface"),  
   pointer_default(unique)  
]  
  
__interface ITestTest : IDispatch {  
   [id(1), helpstring("method DoTest")]   
   HRESULT DoTest([in] BSTR str);  
};  
  
// _ITestTestEvents  
[  
   uuid("12753B9F-DEF4-49b0-9D52-A79C371F2909"),  
   dispinterface,  
   helpstring("_ITestTestEvents Interface")  
]  
  
__interface _ITestTestEvents {  
   [id(1), helpstring("method BeforeChange")] HRESULT BeforeChange([in] BSTR str, [in,out] VARIANT_BOOL* bCancel);  
};  
  
// CTestTest  
[  
   coclass,  
   threading(apartment),  
   vi_progid("TestATL1.TestTest"),  
   progid("TestATL1.TestTest.1"),  
   version(1.0),  
   uuid("D9632007-14FA-4679-9E1C-28C9A949E784"),  
   // this line would be commented out from original file  
   // event_source("com"),  
   // this line would be added to support injected code  
   source(_ITestTestEvents),  
   helpstring("TestTest Class")  
]  
  
class ATL_NO_VTABLE CTestTest : public ITestTest,  
// the following base classes support added injected code  
public IConnectionPointContainerImpl<CTestTest>,  
public IConnectionPointImpl<CTestTest, &__uuidof(::_ITestTestEvents), CComDynamicUnkArray>  
{  
public:  
   CTestTest() {  
   }  
   // this line would be commented out from original file  
   // __event __interface _ITestTestEvents;  
   DECLARE_PROTECT_FINAL_CONSTRUCT()  
   HRESULT FinalConstruct() {  
      return S_OK;  
   }  
  
void FinalRelease() {}  
  
public:  
   CComBSTR m_value;  
   STDMETHOD(DoTest)(BSTR str) {  
      VARIANT_BOOL bCancel = FALSE;  
      BeforeChange(str,&bCancel);  
      if (bCancel) {  
          return Error("Error : Someone don't want us to change the value");  
      }  
  
     m_value =str;  
     return S_OK;  
    }  
// the following was copied in from the injected code.  
HRESULT BeforeChange(::BSTR i1,::VARIANT_BOOL* i2) {  
   HRESULT hr = S_OK;  
   IConnectionPointImpl<CTestTest, &__uuidof(_ITestTestEvents), CComDynamicUnkArray>* p = this;  
   VARIANT rgvars[2];  
   Lock();  
   IUnknown** pp = p->m_vec.begin();  
   Unlock();  
   while (pp < p->m_vec.end()) {  
      if (*pp != NULL) {  
         IDispatch* pDispatch = (IDispatch*) *pp;  
         ::VariantInit(&rgvars[1]);  
         rgvars[1].vt = VT_BSTR;  
         V_BSTR(&rgvars[1])= (BSTR) i1;  
         ::VariantInit(&rgvars[0]);  
         rgvars[0].vt = (VT_BOOL | VT_BYREF);  
         V_BOOLREF(&rgvars[0])= (VARIANT_BOOL*) i2;  
         DISPPARAMS disp = { rgvars, NULL, 2, 0 };  
         VARIANT ret_val;  
         hr = __ComInvokeEventHandler(pDispatch, 1, 1, &disp, &ret_val);  
         if (FAILED(hr))  
            break;  
      }  
      pp++;  
   }  
   return hr;  
}  
  
BEGIN_CONNECTION_POINT_MAP(CTestTest)  
CONNECTION_POINT_ENTRY(__uuidof(::_ITestTestEvents))  
END_CONNECTION_POINT_MAP()  
// end added code section  
  
// _ITestCtrlEvents Methods  
public:  
};  
  
int main() {}  
```  
  
##  <a name="vcconattributeprogrammmingfaqhowcaniforwarddeclareanattributedinterface"></a> How can I forward declare an attributed interface?  
 If you are going to make a forward declaration of an attributed interface, you must apply the same attributes to the forward declaration that you apply to the actual interface declaration. You must also apply the [export](../windows/export.md) attribute to your forward declaration.  
  
##  <a name="vcconcaniuseattributesonclassderivedfromclassthatalsousesattributesanchor"></a> Can I use attributes on a class derived from a class that also uses attributes?  
 No, using attributes on a class derived from a class that also uses attributes is not supported.  
  
## See Also  
 [Concepts](../windows/attributed-programming-concepts.md)