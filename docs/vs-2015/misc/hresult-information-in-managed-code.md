---
title: "HRESULT Information in Managed Code | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "VSPackages, HRESULT information"
  - "HRESULT, managed VSPackages"
ms.assetid: 0795ee94-17a8-4327-bf57-27cd5e312a4c
caps.latest.revision: 29
manager: "douge"
---
# HRESULT Information in Managed Code
The interaction between managed code and COM can cause problems when HRESULT return values are encountered.  
  
 In a COM interface, an HRESULT return value can play these roles:  
  
-   Deliver error information (for example, <xref:Microsoft.VisualStudio.VSConstants.E_INVALIDARG>).  
  
-   Deliver status information about normal program behavior.  
  
 When COM calls into managed code, HRESULTs can cause these problems:  
  
-   COM functions that return HRESULT values less than zero (failure codes) generate exceptions.  
  
-   COM methods that regularly return two or more different success codes, for example, <xref:Microsoft.VisualStudio.VSConstants.S_OK> or <xref:Microsoft.VisualStudio.VSConstants.S_FALSE>, cannot be distinguished.  
  
 Because many of the [!INCLUDE[vsipsdk](../includes/vsipsdk-md.md)] COM functions either return HRESULT values less than zero or return different success codes, the [!INCLUDE[vsipsdk](../includes/vsipsdk-md.md)] interop assemblies have been written so that the method signatures are preserved. All [!INCLUDE[vsipsdk](../includes/vsipsdk-md.md)] interop methods are of `int` type. HRESULT values are passed through the interop layer without alteration and without generating exceptions.  
  
 Because a COM function returns an HRESULT to the managed method that calls it, the calling method must check the HRESULT and throw exceptions as necessary.  
  
## Handling HRESULTs Returned to Managed Code from COM  
 When you call a COM interface from managed code, examine the HRESULT value and throw an exception if required. The <xref:Microsoft.VisualStudio.ErrorHandler> class contains the <xref:Microsoft.VisualStudio.ErrorHandler.ThrowOnFailure%2A> method, which throws a COM exception, depending on the value of the HRESULT passed to it.  
  
 By default, <xref:Microsoft.VisualStudio.ErrorHandler.ThrowOnFailure%2A> throws an exception whenever it is passed an HRESULT that has a value less than zero. In cases where such HRESULTs are acceptable values and no exception should be thrown, the values of additional HRESULTS should be passed to <xref:Microsoft.VisualStudio.ErrorHandler.ThrowOnFailure%2A> after the values are tested. If the HRESULT being tested matches any HRESULT values explicitly passed to <xref:Microsoft.VisualStudio.ErrorHandler.ThrowOnFailure%2A>, no exception is thrown.  
  
> [!NOTE]
>  The <xref:Microsoft.VisualStudio.VSConstants> class contains constants for common HRESULTS, for example, <xref:Microsoft.VisualStudio.VSConstants.S_OK> and <xref:Microsoft.VisualStudio.VSConstants.E_NOTIMPL>, and [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] HRESULTS, for example, <xref:Microsoft.VisualStudio.VSConstants.VS_E_INCOMPATIBLEDOCDATA> and <xref:Microsoft.VisualStudio.VSConstants.VS_E_UNSUPPORTEDFORMAT>. <xref:Microsoft.VisualStudio.VSConstants> also provides the <xref:Microsoft.VisualStudio.ErrorHandler.Succeeded%2A> and <xref:Microsoft.VisualStudio.ErrorHandler.Failed%2A> methods, which correspond to the SUCCEEDED and FAILED macros in COM.  
  
 For example, consider the following function call, in which <xref:Microsoft.VisualStudio.VSConstants.E_NOTIMPL> is an acceptable return value but any other HRESULT less than zero represents an error.  
  
 [!code-csharp[VSSDKHRESULTInformation#1](../snippets/csharp/VS_Snippets_VSSDK/vssdkhresultinformation/cs/vssdkhresultinformationpackage.cs#1)]
 [!code-vb[VSSDKHRESULTInformation#1](../snippets/visualbasic/VS_Snippets_VSSDK/vssdkhresultinformation/vb/vssdkhresultinformationpackage.vb#1)]  
  
 If there are more than one acceptable return values, additional HRESULT values can just be appended to the list in the call to <xref:Microsoft.VisualStudio.ErrorHandler.ThrowOnFailure%2A>.  
  
 [!code-csharp[VSSDKHRESULTInformation#2](../snippets/csharp/VS_Snippets_VSSDK/vssdkhresultinformation/cs/vssdkhresultinformationpackage.cs#2)]
 [!code-vb[VSSDKHRESULTInformation#2](../snippets/visualbasic/VS_Snippets_VSSDK/vssdkhresultinformation/vb/vssdkhresultinformationpackage.vb#2)]  
  
## Returning HRESULTS to COM from Managed Code  
 If no exception occurs, managed code returns <xref:Microsoft.VisualStudio.VSConstants.S_OK> to the COM function that called it. COM interop supports common exceptions that are strongly typed in managed code. For example, a method that receives an unacceptable `null` argument throws an <xref:System.ArgumentNullException>.  
  
 If you are not certain which exception to throw, but you know the HRESULT you want to return to COM, you can use the <xref:System.Runtime.InteropServices.Marshal.ThrowExceptionForHR%2A> method to throw an appropriate exception. This works even with a nonstandard error, for example, <xref:Microsoft.VisualStudio.VSConstants.VS_E_INCOMPATIBLEDOCDATA>. <xref:System.Runtime.InteropServices.Marshal.ThrowExceptionForHR%2A> attempts to map the HRESULT passed to it to a strongly typed exception. If it cannot, it throws a generic COM exception instead. The ultimate result is that the HRESULT you pass to <xref:System.Runtime.InteropServices.Marshal.ThrowExceptionForHR%2A> from managed code is returned to the COM function that called it.  
  
> [!NOTE]
>  Exceptions compromise performance and are intended to indicate abnormal program conditions. Conditions that occur often should be handled inline, instead of a thrown exception.  
  
## See Also  
 [Managed VSPackages](../misc/managed-vspackages.md)   
 [Interoperating with Unmanaged Code](http://msdn.microsoft.com/library/ccb68ce7-b0e9-4ffb-839d-03b1cd2c1258)   
 [How to: Map HRESULTs and Exceptions](http://msdn.microsoft.com/library/610b364b-2761-429d-9c4a-afbc3e66f1b9)   
 [Building COM Components for Interoperation](http://msdn.microsoft.com/en-us/7a2c657a-cfef-40f0-bed3-7c2c0ac4abdf)   
 [Managed VSPackages](../misc/managed-vspackages.md)