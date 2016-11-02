---
title: "How to: Get a Service from a Background Thread (C++)"
ms.custom: ""
ms.date: "10/19/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "multithreading, services"
ms.assetid: 97a56709-66d4-431a-ae63-392ee5898511
caps.latest.revision: 8
manager: "douge"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# How to: Get a Service from a Background Thread (C++)
Services cannot be obtained by means of `IServiceProvider.QueryService` from a background thread. If you use `QueryService` to get a service on the main thread, and then try to use the service on a background thread, it also will fail.  
  
 To get a service from a background thread, use `CoMarshalInterThreadInterfaceInStream` in the `IVsPackage.SetSite` method to marshal the service provider into a stream on the main thread. You then can unmarshal the service provider on a background thread and use it to get the service. You can unmarshal only once, so cache the interface that you get back.  
  
> [!NOTE]
>  Managed code automatically marshals interfaces between threads, so getting a service from a background thread does not require special code.  
  
## Example  
 The following code marshals a service provider in the main thread and provides a `QueryServiceFromBackgroundThread` method to unmarshal the service provider to get a service from a background thread.  
  
```  
class CMyPackage : public IVsPackage  
{  
private:  
    // Used to marshal IServiceProvider between threads  
    CComPtr< IStream > m_pSPStream;  
    // IServiceProvider proxy for the background thread  
    CComPtr< IServiceProvider > m_pBackgroundSP;  
  
public:  
    HRESULT SetSite( IServiceProvider* pSP )  
    {  
        // Marshal the service provider into a stream so that  
        // the background thread can retrieve it later  
        CoMarshalInterThreadInterfaceInStream(  
            IID_IServiceProvider, pSP, &m_pSPStream);  
  
        //... do the rest of your initialization  
    }  
  
    // Call this when your background thread needs to call QueryService  
    // The first time through, it unmarshals the interface stored   
    HRESULT QueryServiceFromBackgroundThread(  
        REFGUID rsid,        // [in] Service ID  
        REFIID riid,         // [in] Interface ID  
        // [out] Interface pointer of requested service (NULL on error)  
        void **ppvObj  
    {  
        if( !m_pBackgroundSP )  
        {  
            if( !m_pSPStream )  
            {  
                return E_UNEXPECTED;  
            }  
  
            HRESULT hr = CoGetInterfaceAndReleaseStream(   
                m_pSPStream, IID_IServiceProvider,   
                (void **)&m_pBackgroundSP );  
            if( FAILED(hr) )  
            {  
                return hr;  
            }  
  
            // The CoGetInterfaceAndReleaseStream has already   
            // destroyed the stream.  To avoid double-freeing,   
            // the smart wrapper needs to be detached.  
            m_pSPStream.Detach();  
        }  
  
        return m_pBackgroundSP->QueryService( rsid, riid, ppvObj );  
    }  
};  
```  
  
## See Also  
 [Using and Providing Services](../Topic/Using%20and%20Providing%20Services.md)   
 [Service Essentials](../Topic/Service%20Essentials.md)