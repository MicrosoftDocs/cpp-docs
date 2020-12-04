---
description: "Learn more about: ATL classes and structs"
title: "ATL classes and structs| Microsoft Docs"
ms.date: "05/03/2018"
helpviewer_keywords: ["classes [C++], ATL", "ATL, classes"]
ms.assetid: 7da42e2d-ac84-4506-92bd-502a86d68bdc
---
# ATL classes and structs

The Active Template Library (ATL) includes the following classes and structs. To find a particular class by category, see the [ATL Class Overview](../../atl/atl-class-overview.md).

|Class / struct|Description|Header file|
|-----------|-----------------|-----------------|
|[ATL_DRAWINFO](../../atl/reference/atl-drawinfo-structure.md)|Contains information used for rendering to various targets, such as a printer, metafile, or ActiveX control.|atlctl.h|
|[_AtlCreateWndData](../../atl/reference/atlcreatewnddata-structure.md)|Contains class instance data in windowing code in ATL.|atlbase.h|
|[_ATL_BASE_MODULE70](../../atl/reference/atl-base-module70-structure.md)|Used by any project that uses ATL.|atlbase.h|
|[_ATL_COM_MODULE70](../../atl/reference/atl-com-module70-structure.md)|Used by COM-related code in ATL.| atlbase.h|
|[_ATL_FUNC_INFO](../../atl/reference/atl-func-info-structure.md)|Contains type information used to describe a method or property on a dispinterface.|atlcom.h|
|[_ATL_MODULE70](../../atl/reference/atl-module70-structure.md)|Contains data used by every ATL module.|atlbase.h|
|[_ATL_WIN_MODULE70](../../atl/reference/atl-win-module70-structure.md)|Used by windowing code in ATL.|atlbase.h|
|[CA2AEX](../../atl/reference/ca2aex-class.md)|This class is used by the string conversion macros CA2TEX and CT2AEX, and the typedef CA2A.|atlconv.h|
|[CA2CAEX](../../atl/reference/ca2caex-class.md)|This class is used by string conversion macros CA2CTEX and CT2CAEX, and the typedef CA2CA.|atlconv.h|
|[CA2WEX](../../atl/reference/ca2wex-class.md)|This class is used by the string conversion macros CA2TEX, CA2CTEX, CT2WEX, and CT2CWEX, and the typedef CA2W.|atlconv.h|
|[CAccessToken](../../atl/reference/caccesstoken-class.md)|This class is a wrapper for an access token.|atlsecurity.h|
|[CAcl](../../atl/reference/cacl-class.md)|This class is a wrapper for an ACL (access-control list) structure.|atlsecurity.h|
|[CAdapt](../../atl/reference/cadapt-class.md)|This template is used to wrap classes that redefine the address-of operator to return something other than the address of the object.|atlcomcli.h|
|[CAtlArray](../../atl/reference/catlarray-class.md)|This class implements an array object.|atlcoll.h|
|[CAtlAutoThreadModule](../../atl/reference/catlautothreadmodule-class.md)|This class implements a thread-pooled, apartment-model COM server.|atlbase.h|
|[CAtlAutoThreadModuleT](../../atl/reference/catlautothreadmodulet-class.md)|This class provides methods for implementing a thread-pooled, apartment-model COM server.|atlbase.h|
|[CAtlBaseModule](../../atl/reference/catlbasemodule-class.md)|This class is instantiated in every ATL project.|atlcore.h|
|[CAtlComModule](../../atl/reference/catlcommodule-class.md)|This class implements a COM server module.|atlbase.h|
|[CAtlDebugInterfacesModule](../../atl/reference/catldebuginterfacesmodule-class.md)|This class provides support for debugging interfaces.|atlbase.h|
|[CAtlDllModuleT](../../atl/reference/catldllmodulet-class.md)|This class represents the module for a DLL.|atlbase.h|
|[CAtlException](../../atl/reference/catlexception-class.md)|This class defines an ATL exception.|atlexcept.h|
|[CAtlExeModuleT](../../atl/reference/catlexemodulet-class.md)|This class represents the module for an application.|atlbase.h|
|[CAtlFile](../../atl/reference/catlfile-class.md)|This class provides a thin wrapper around the Windows file-handling API.|atlfile.h|
|[CAtlFileMapping](../../atl/reference/catlfilemapping-class.md)|This class represents a memory-mapped file, adding a cast operator to the methods of [CAtlFileMappingBase](../../atl/reference/catlfilemappingbase-class.md).|atlfile.h|
|[CAtlFileMappingBase](../../atl/reference/catlfilemappingbase-class.md)|This class represents a memory-mapped file.|atlfile.h|
|[CAtlList](../../atl/reference/catllist-class.md)|This class provides methods for creating and managing a list object.|atlcoll.h|
|[CAtlMap](../../atl/reference/catlmap-class.md)|This class provides methods for creating and managing a map object.|atlcoll.h|
|[CAtlModule](../../atl/reference/catlmodule-class.md)|This class provides methods used by several ATL module classes.|atlbase.h|
|[CAtlModuleT](../../atl/reference/catlmodulet-class.md)|This class implements an ATL module.|atlbase.h|
|[CAtlPreviewCtrlImpl](../../atl/reference/catlpreviewctrlimpl-class.md)|This class is an ATL implementation of a window that is placed on a host window provided by the Shell for Rich Preview.|atlpreviewctrlimpl.h|
|[CAtlServiceModuleT](../../atl/reference/catlservicemodulet-class.md)|This class implements a service.|atlbase.h|
|[CAtlTemporaryFile](../../atl/reference/catltemporaryfile-class.md)|This class provides methods for the creation and use of a temporary file.|atlfile.h|
|[CAtlTransactionManager](../../atl/reference/catltransactionmanager-class.md)|This class provides a wrapper to Kernel Transaction Manager (KTM) functions.|atltransactionmanager.h|
|[CAtlWinModule](../../atl/reference/catlwinmodule-class.md)|This class provides support for ATL windowing components.|atlbase.h|
|[CAutoPtr](../../atl/reference/cautoptr-class.md)|This class represents a smart pointer object.|atlbase.h|
|[CAutoPtrArray](../../atl/reference/cautoptrarray-class.md)|This class provides methods useful when constructing an array of smart pointers.|atlbase.h|
|[CAutoPtrElementTraits](../../atl/reference/cautoptrelementtraits-class.md)|This class provides methods, static functions, and typedefs useful when creating collections of smart pointers.|atlcoll.h|
|[CAutoPtrList](../../atl/reference/cautoptrlist-class.md)|This class provides methods useful when constructing a list of smart pointers.|atlcoll.h|
|[CAutoVectorPtr](../../atl/reference/cautovectorptr-class.md)|This class represents a smart pointer object using vector new and delete operators.|atlbase.h|
|[CAutoVectorPtrElementTraits](../../atl/reference/cautovectorptrelementtraits-class.md)|This class provides methods, static functions, and typedefs useful when creating collections of smart pointers using vector new and delete operators.|atlcoll.h|
|[CAxDialogImpl](../../atl/reference/caxdialogimpl-class.md)|This class implements a dialog box (modal or modeless) that hosts ActiveX controls.|atlwin.h|
|[CAxWindow](../../atl/reference/caxwindow-class.md)|This class provides methods for manipulating a window hosting an ActiveX control.|atlwin.h|
|[CAxWindow2T](../../atl/reference/caxwindow2t-class.md)|This class provides methods for manipulating a window that hosts an ActiveX control and also has support for hosting licensed ActiveX controls.|atlwin.h|
|[CBindStatusCallback](../../atl/reference/cbindstatuscallback-class.md)|This class implements the `IBindStatusCallback` interface.|atlctl.h|
|[CComAggObject](../../atl/reference/ccomaggobject-class.md)|This class implements [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) for an aggregated object.|atlcom.h|
|[CComAllocator](../../atl/reference/ccomallocator-class.md)|This class provides methods for managing memory using COM memory routines.|atlbase.h|
|[CComApartment](../../atl/reference/ccomapartment-class.md)|This class provides support for managing an apartment in a thread-pooled EXE module.|atlbase.h|
|[CComAutoCriticalSection](../../atl/reference/ccomautocriticalsection-class.md)|This class provides methods for obtaining and releasing ownership of a critical section object.|atlcore.h|
|[CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md)|As of ATL 7.0, `CComAutoThreadModule` is obsolete: see [ATL Modules](../../atl/atl-module-classes.md) for more details.|atlbase.h|
|[CComBSTR](../../atl/reference/ccombstr-class.md)|This class is a wrapper for BSTRs.|atlbase.h|
|[CComCachedTearOffObject](../../atl/reference/ccomcachedtearoffobject-class.md)|This class implements [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) for a tear-off interface.|atlcom.h|
|[CComClassFactory](../../atl/reference/ccomclassfactory-class.md)|This class implements the [IClassFactory](/windows/win32/api/unknwnbase/nn-unknwnbase-iclassfactory) interface.|atlcom.h|
|[CComClassFactory2](../../atl/reference/ccomclassfactory2-class.md)|This class implements the [IClassFactory2](/windows/win32/api/ocidl/nn-ocidl-iclassfactory2) interface.|atlcom.h|
|[CComClassFactoryAutoThread](../../atl/reference/ccomclassfactoryautothread-class.md)|This class implements the [IClassFactory](/windows/win32/api/unknwnbase/nn-unknwnbase-iclassfactory) interface and allows objects to be created in multiple apartments.|atlcom.h|
|[CComClassFactorySingleton](../../atl/reference/ccomclassfactorysingleton-class.md)|This class derives from [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) and uses [CComObjectGlobal](../../atl/reference/ccomobjectglobal-class.md) to construct a single object.|atlcom.h|
|[CComCoClass](../../atl/reference/ccomcoclass-class.md)|This class provides methods for creating instances of a class and obtaining its properties.|atlcom.h|
|[CComCompositeControl](../../atl/reference/ccomcompositecontrol-class.md)|This class provides the methods required to implement a composite control.|atlctl.h|
|[CComContainedObject](../../atl/reference/ccomcontainedobject-class.md)|This class implements [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) by delegating to the owner object's `IUnknown`.|atlcom.h|
|[CComControl](../../atl/reference/ccomcontrol-class.md)|This class provides methods for creating and managing ATL controls.|atlctl.h|
|[CComControlBase](../../atl/reference/ccomcontrolbase-class.md)|This class provides methods for creating and managing ATL controls.|atlctl.h|
|[CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md)|This class provides methods for obtaining and releasing ownership of a critical section object.|atlcore.h|
|[CComCritSecLock](../../atl/reference/ccomcritseclock-class.md)|This class provides methods for locking and unlocking a critical section object.|atlbase.h|
|[CComCurrency](../../atl/reference/ccomcurrency-class.md)|This class has methods and operators for creating and managing a CURRENCY object.|atlcur.h|
|[CComDynamicUnkArray](../../atl/reference/ccomdynamicunkarray-class.md)|This class stores an array of `IUnknown` pointers.|atlcom.h|
|[CComEnum](../../atl/reference/ccomenum-class.md)|This class defines a COM enumerator object based on an array.|atlcom.h|
|[CComEnumImpl](../../atl/reference/ccomenumimpl-class.md)|This class provides the implementation for a COM enumerator interface where the items being enumerated are stored in an array.|atlcom.h|
|[CComEnumOnSTL](../../atl/reference/ccomenumonstl-class.md)|This class defines a COM enumerator object based on a C++ Standard Library collection.|atlcom.h|
|[CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md)|This class provides the same methods as [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md) but does not provide a critical section.|atlcore.h|
|[CComGITPtr](../../atl/reference/ccomgitptr-class.md)|This class provides methods for dealing with interface pointers and the global interface table (GIT).|atlbase.h|
|[CComHeap](../../atl/reference/ccomheap-class.md)|This class implements [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md) using the COM memory allocation functions.|ATLComMem.h|
|[CComHeapPtr](../../atl/reference/ccomheapptr-class.md)|A smart pointer class for managing heap pointers.|atlbase.h|
|[CComModule](../../atl/reference/ccommodule-class.md)|As of ATL 7.0, `CComModule` is obsolete: see [ATL Modules](../../atl/atl-module-classes.md) for more details.|atlbase.h|
|[CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md)|This class provides thread-safe methods for incrementing and decrementing the value of a variable.|atlbase.h|
|[CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md)|This class provides thread-safe methods for incrementing and decrementing the value of a variable, without critical section locking or unlocking functionality.|atlbase.h|
|[CComObject](../../atl/reference/ccomobject-class.md)|This class implements `IUnknown` for a nonaggregated object.|atlcom.h|
|[CComObjectGlobal](../../atl/reference/ccomobjectglobal-class.md)|This class manages a reference count on the module containing your `Base` object.|atlcom.h|
|[CComObjectNoLock](../../atl/reference/ccomobjectnolock-class.md)|This class implements `IUnknown` for a nonaggregated object, but does not increment the module lock count in the constructor.|atlcom.h|
|[CComObjectRoot](../../atl/reference/ccomobjectroot-class.md)|This typedef of [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md) is templatized on the default threading model of the server.|atlcom.h|
|[CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)|This class provides methods to handle object reference count management for both nonaggregated and aggregated objects.|atlcom.h|
|[CComObjectStack](../../atl/reference/ccomobjectstack-class.md)|This class creates a temporary COM object and provides it with a skeletal implementation of `IUnknown`.|atlcom.h|
|[CComPolyObject](../../atl/reference/ccompolyobject-class.md)|This class implements `IUnknown` for an aggregated or nonaggregated object.|atlcom.h|
|[CComPtr](../../atl/reference/ccomptr-class.md)|A smart pointer class for managing COM interface pointers.|atlcomcli.h|
|[CComPtrBase](../../atl/reference/ccomptrbase-class.md)|This class provides a basis for smart pointer classes using COM-based memory routines.|atlcomcli.h|
|[CComQIPtr](../../atl/reference/ccomqiptr-class.md)|A smart pointer class for managing COM interface pointers.|atlcomcli.h|
|[CComQIPtrElementTraits](../../atl/reference/ccomqiptrelementtraits-class.md)|This class provides methods, static functions, and typedefs useful when creating collections of COM interface pointers.|atlcoll.h|
|[CComSafeArray](../../atl/reference/ccomsafearray-class.md)|This class is a wrapper for the `SAFEARRAY Data Type` structure.|atlsafe.h|
|[CComSafeArrayBound](../../atl/reference/ccomsafearraybound-class.md)|This class is a wrapper for a `SAFEARRAYBOUND` structure.|atlsafe.h|
|[CComSimpleThreadAllocator](../../atl/reference/ccomsimplethreadallocator-class.md)|This class manages thread selection for the class [CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md).|atlbase.h|
|[CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md)|This class provides methods for incrementing and decrementing the value of a variable.|atlbase.h|
|[CComTearOffObject](../../atl/reference/ccomtearoffobject-class.md)|This class implements a tear-off interface.|atlcom.h|
|[CComUnkArray](../../atl/reference/ccomunkarray-class.md)|This class stores `IUnknown` pointers and is designed to be used as a parameter to the [IConnectionPointImpl](../../atl/reference/iconnectionpointimpl-class.md) template class.|atlcom.h|
|[CComVariant](../../atl/reference/ccomvariant-class.md)|This class wraps the VARIANT type, providing a member indicating the type of data stored.|atlcomcli.h|
|[CContainedWindowT](../../atl/reference/ccontainedwindowt-class.md)|This class implements a window contained within another object.|atlwin.h|
|[CCRTAllocator](../../atl/reference/ccrtallocator-class.md)|This class provides methods for managing memory using CRT memory routines.|atlcore.h|
|[CCRTHeap](../../atl/reference/ccrtheap-class.md)|This class implements [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md) using the CRT heap functions.|atlmem.h|
|[CDacl](../../atl/reference/cdacl-class.md)|This class is a wrapper for a DACL (discretionary access-control list) structure.|atlsecurity.h|
|[CDebugReportHook Class](../../atl/reference/cdebugreporthook-class.md)|Use this class to send debug reports to a named pipe.|atlutil.h|
|[CDefaultCharTraits](../../atl/reference/cdefaultchartraits-class.md)|This class provides two static functions for converting characters between uppercase and lowercase.|atlcoll.h|
|[CDefaultCompareTraits](../../atl/reference/cdefaultcomparetraits-class.md)|This class provides default element comparison functions.|atlcoll.h|
|[CDefaultElementTraits](../../atl/reference/cdefaultelementtraits-class.md)|This class provides default methods and functions for a collection class.|atlcoll.h|
|[CDefaultHashTraits](../../atl/reference/cdefaulthashtraits-class.md)|This class provides a static function for calculating hash values.|atlcoll.h|
|[CDialogImpl](../../atl/reference/cdialogimpl-class.md)|This class provides methods for creating a modal or modeless dialog box.|atlwin.h|
|[CDynamicChain](../../atl/reference/cdynamicchain-class.md)|This class provides methods supporting the dynamic chaining of message maps.|atlwin.h|
|[CElementTraits](../../atl/reference/celementtraits-class.md)|This class is used by collection classes to provide methods and functions for moving, copying, comparison, and hashing operations.|atlcoll.h|
|[CElementTraitsBase](../../atl/reference/celementtraitsbase-class.md)|This class provides default copy and move methods for a collection class.|atlcoll.h|
|[CFirePropNotifyEvent](../../atl/reference/cfirepropnotifyevent-class.md)|This class provides methods for notifying the container's sink regarding control property changes.|atlctl.h|
|[CGlobalHeap](../../atl/reference/cglobalheap-class.md)|This class implements [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md) using the Win32 global heap functions.|atlmem.h|
|[CHandle](../../atl/reference/chandle-class.md)|This class provides methods for creating and using a handle object.|atlbase.h|
|[CHeapPtr](../../atl/reference/cheapptr-class.md)|A smart pointer class for managing heap pointers.|atlcore.h|
|[CHeapPtrBase](../../atl/reference/cheapptrbase-class.md)|This class forms the basis for several smart heap pointer classes.|atlcore.h|
|[CHeapPtrElementTraits Class](../../atl/reference/cheapptrelementtraits-class.md)|This class provides methods, static functions, and typedefs useful when creating collections of heap pointers.|atlcoll.h|
|[CHeapPtrList](../../atl/reference/cheapptrlist-class.md)|This class provides methods useful when constructing a list of heap pointers.|atlcoll.h|
|[CImage](../../atl-mfc-shared/reference/cimage-class.md)|Provides enhanced bitmap support, including the ability to load and save images in JPEG, GIF, BMP, and Portable Network Graphics (PNG) formats.|atlimage.h|
|[CInterfaceArray](../../atl/reference/cinterfacearray-class.md)|This class provides methods useful when constructing an array of COM interface pointers.|atlcoll.h|
|[CInterfaceList](../../atl/reference/cinterfacelist-class.md)|This class provides methods useful when constructing a list of COM interface pointers.|atlcoll.h|
|[CLocalHeap](../../atl/reference/clocalheap-class.md)|This class implements [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md) using the Win32 local heap functions.|atlmem.h|
|[CMessageMap](../../atl/reference/cmessagemap-class.md)|This class allows an object's message maps to be accessed by another object.|atlwin.h|
|[CNonStatelessWorker Class](../../atl/reference/cnonstatelessworker-class.md)|Receives requests from a thread pool and passes them on to a worker object that is created and destroyed on each request.|atlutil.h|
|[CNoWorkerThread Class](../../atl/reference/cnoworkerthread-class.md)|Use this class as the argument for the `MonitorClass` template parameter cache classes if you want to disable dynamic cache maintenance.|atlutil.h|
|[CPathT Class](../../atl/reference/cpatht-class.md)|This class represents a path.|atlpath.h|
|[CPrimitiveElementTraits](../../atl/reference/cprimitiveelementtraits-class.md)|This class provides default methods and functions for a collection class composed of primitive data types.|atlcoll.h|
|[CPrivateObjectSecurityDesc](../../atl/reference/cprivateobjectsecuritydesc-class.md)|This class represents a private object security descriptor object.|atlsecurity.h|
|[CRBMap](../../atl/reference/crbmap-class.md)|This class represents a mapping structure, using a Red-Black binary tree.|atlcoll.h|
|[CRBMultiMap](../../atl/reference/crbmultimap-class.md)|This class represents a mapping structure that allows each key to be associated with more than one value, using a Red-Black binary tree.|atlcoll.h|
|[CRBTree](../../atl/reference/crbtree-class.md)|This class provides methods for creating and utilizing a Red-Black tree.|atlcoll.h|
|[CRegKey](../../atl/reference/cregkey-class.md)|This class provides methods for manipulating entries in the system registry.|atlbase.h|
|[CRTThreadTraits](../../atl/reference/crtthreadtraits-class.md)|This class provides the creation function for a CRT thread. Use this class if the thread will use CRT functions.|atlbase.h|
|[CSacl](../../atl/reference/csacl-class.md)|This class is a wrapper for a SACL (system access-control list) structure.|atlsecurity.h|
|[CSecurityAttributes](../../atl/reference/csecurityattributes-class.md)|This class is a thin wrapper for the `SECURITY_ATTRIBUTES` structure.|atlsecurity.h|
|[CSecurityDesc](../../atl/reference/csecuritydesc-class.md)|This class is a wrapper for the `SECURITY_DESCRIPTOR` structure.|atlsecurity.h|
|[CSid](../../atl/reference/csid-class.md)|This class is a wrapper for a `SID` (security identifier) structure.|atlsecurity.h|
|[CSimpleArray](../../atl/reference/csimplearray-class.md)|This class provides methods for managing a simple array.|atlsimpcoll.h|
|[CSimpleArrayEqualHelper](../../atl/reference/csimplearrayequalhelper-class.md)|This class is a helper for the [CSimpleArray](../../atl/reference/csimplearray-class.md) class.|atlsimpcoll.h|
|[CSimpleArrayEqualHelperFalse](../../atl/reference/csimplearrayequalhelperfalse-class.md)|This class is a helper for the [CSimpleArray](../../atl/reference/csimplearray-class.md) class.|atlsimpcoll.h|
|[CSimpleDialog](../../atl/reference/csimpledialog-class.md)|This class implements a basic modal dialog box.|atlwin.h|
|[CSimpleMap](../../atl/reference/csimplemap-class.md)|This class provides support for a simple mapping array.|atlsimpcoll.h|
|[CSimpleMapEqualHelper](../../atl/reference/csimplemapequalhelper-class.md)|This class is a helper for the [CSimpleMap](../../atl/reference/csimplemap-class.md) class.|atlsimpcoll.h|
|[CSimpleMapEqualHelperFalse](../../atl/reference/csimplemapequalhelperfalse-class.md)|This class is a helper for the [CSimpleMap](../../atl/reference/csimplemap-class.md) class.|atlsimpcoll.h|
|[CSnapInItemImpl](../../atl/reference/csnapinitemimpl-class.md)|This class provides methods for implementing a snap-in node object.|atlsnap.h|
|[CSnapInPropertyPageImpl](../../atl/reference/csnapinpropertypageimpl-class.md)|This class provides methods for implementing a snap-in property page object.|atlsnap.h|
|[CStockPropImpl](../../atl/reference/cstockpropimpl-class.md)|This class provides methods for supporting stock property values.|atlctl.h|
|[CStringElementTraits](../../atl/reference/cstringelementtraits-class.md)|This class provides static functions used by collection classes storing `CString` objects.|cstringt.h|
|[CStringElementTraitsI](../../atl/reference/cstringelementtraitsi-class.md)|This class provides static functions related to strings stored in collection class objects. It is similar to [CStringElementTraits](../../atl/reference/cstringelementtraits-class.md), but performs case-insensitive comparisons.|atlcoll.h|
|[CStringRefElementTraits](../../atl/reference/cstringrefelementtraits-class.md)|This class provides static functions related to strings stored in collection class objects. The string objects are dealt with as references.|atlcoll.h|
|[CThreadPool Class](../../atl/reference/cthreadpool-class.md)|This class provides a pool of worker threads that process a queue of work items.|atlutil.h|
|[CTokenGroups](../../atl/reference/ctokengroups-class.md)|This class is a wrapper for the `TOKEN_GROUPS` structure.|atlsecurity.h|
|[CTokenPrivileges](../../atl/reference/ctokenprivileges-class.md)|This class is a wrapper for the `TOKEN_PRIVILEGES` structure.|atlsecurity.h|
|[CUrl Class](../../atl/reference/curl-class.md)|This class represents a URL. It allows you to manipulate each element of the URL independently of the others whether parsing an existing URL string or building a string from scratch.|atlutil.h|
|[CW2AEX](../../atl/reference/cw2aex-class.md)|This class is used by the string conversion macros CT2AEX, CW2TEX, CW2CTEX, and CT2CAEX, and the typedef CW2A.|atlconv.h|
|[CW2CWEX](../../atl/reference/cw2cwex-class.md)|This class is used by the string conversion macros CW2CTEX and CT2CWEX, and the typedef CW2CW.|atlconv.h|
|[CW2WEX](../../atl/reference/cw2wex-class.md)|This class is used by the string conversion macros CW2TEX and CT2WEX, and the typedef CW2W.|atlconv.h|
|[CWin32Heap](../../atl/reference/cwin32heap-class.md)|This class implements [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md) using the Win32 heap allocation functions.|atlmem.h|
|[CWindow](../../atl/reference/cwindow-class.md)|This class provides methods for manipulating a window.|atlwin.h|
|[CWindowImpl](../../atl/reference/cwindowimpl-class.md)|This class provides methods for creating or subclassing a window.|atlwin.h|
|[CWinTraits](../../atl/reference/cwintraits-class.md)|This class provides a method for standardizing the styles used when creating a window object.|atlwin.h|
|[CWinTraitsOR](../../atl/reference/cwintraitsor-class.md)|This class provides a method for standardizing the styles used when creating a window object.|atlwin.h|
|[CWndClassInfo](../../atl/reference/cwndclassinfo-class.md)|This class provides methods for registering information for a window class.|atlwin.h|
|[CWorkerThread Class](../../atl/reference/cworkerthread-class.md)|This class creates a worker thread or uses an existing one, waits on one or more kernel object handles, and executes a specified client function when one of the handles is signaled.|atlutil.h|
|[IAtlAutoThreadModule](../../atl/reference/iatlautothreadmodule-class.md)|This class represents an interface to a `CreateInstance` method.|atlbase.h|
|[IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md)|This class represents the interface to a memory manager.|atlmem.h|
|[IAxWinAmbientDispatch](../../atl/reference/iaxwinambientdispatch-interface.md)|This interface provides methods for specifying characteristics of the hosted control or container.|atlbase.h, ATLIFace.h|
|[IAxWinAmbientDispatchEx](../../atl/reference/iaxwinambientdispatchex-interface.md)|This interface implements supplemental ambient properties for a hosted control.|atlbase.h, ATLIFace.h|
|[IAxWinHostWindow](../../atl/reference/iaxwinhostwindow-interface.md)|This interface provides methods for manipulating a control and its host object.|atlbase.h, ATLIFace.h|
|[IAxWinHostWindowLic](../../atl/reference/iaxwinhostwindowlic-interface.md)|This interface provides methods for manipulating a licensed control and its host object.|atlbase.h, ATLIFace.h|
|[ICollectionOnSTLImpl](../../atl/reference/icollectiononstlimpl-class.md)|This class provides methods used by a collection class.|atlcom.h|
|[IConnectionPointContainerImpl](../../atl/reference/iconnectionpointcontainerimpl-class.md)|This class implements a connection point container to manage a collection of [IConnectionPointImpl](../../atl/reference/iconnectionpointimpl-class.md) objects.|atlcom.h|
|[IConnectionPointImpl](../../atl/reference/iconnectionpointimpl-class.md)|This class implements a connection point.|atlcom.h|
|[IDataObjectImpl](../../atl/reference/idataobjectimpl-class.md)|This class provides methods for supporting Uniform Data Transfer and managing connections.|atlctl.h|
|[IDispatchImpl](../../atl/reference/idispatchimpl-class.md)|This class provides a default implementation for the `IDispatch` portion of a dual interface.|atlcom.h|
|[IDispEventImpl](../../atl/reference/idispeventimpl-class.md)|This class provides implementations of the `IDispatch` methods.|atlcom.h|
|[IDispEventSimpleImpl](../../atl/reference/idispeventsimpleimpl-class.md)|This class provides implementations of the `IDispatch` methods, without getting type information from a type library.|atlcom.h|
|[IDocHostUIHandlerDispatch](../../atl/reference/idochostuihandlerdispatch-interface.md)|An interface to the Microsoft HTML parsing and rendering engine.|atlbase.h, ATLIFace.h|
|[IEnumOnSTLImpl](../../atl/reference/ienumonstlimpl-class.md)|This class defines an enumerator interface based on a C++ Standard Library collection.|atlcom.h|
|[IObjectSafetyImpl](../../atl/reference/iobjectsafetyimpl-class.md)|This class provides a default implementation of the `IObjectSafety` interface to allow a client to retrieve and set an object's safety levels.|atlctl.h|
|[IObjectWithSiteImpl](../../atl/reference/iobjectwithsiteimpl-class.md)|This class provides methods allowing an object to communicate with its site.|atlcom.h|
|[IOleControlImpl](../../atl/reference/iolecontrolimpl-class.md)|This class provides a default implementation of the `IOleControl` interface and implements `IUnknown`.|atlctl.h|
|[IOleInPlaceActiveObjectImpl](../../atl/reference/ioleinplaceactiveobjectimpl-class.md)|This class provides methods for assisting communication between an in-place control and its container.|atlctl.h|
|[IOleInPlaceObjectWindowlessImpl](../../atl/reference/ioleinplaceobjectwindowlessimpl-class.md)|This class implements `IUnknown` and provides methods that enable a windowless control to receive window messages and to participate in drag-and-drop operations.|atlctl.h|
|[IOleObjectImpl](../../atl/reference/ioleobjectimpl-class.md)|This class implements `IUnknown` and is the principal interface through which a container communicates with a control.|atlctl.h|
|[IPerPropertyBrowsingImpl](../../atl/reference/iperpropertybrowsingimpl-class.md)|This class implements `IUnknown` and allows a client to access the information in an object's property pages.|atlctl.h|
|[IPersistPropertyBagImpl](../../atl/reference/ipersistpropertybagimpl-class.md)|This class implements `IUnknown` and allows an object to save its properties to a client-supplied property bag.|atlcom.h|
|[IPersistStorageImpl](../../atl/reference/ipersiststorageimpl-class.md)|This class implements the [IPersistStorage](/windows/win32/api/objidl/nn-objidl-ipersiststorage) interface.|atlcom.h|
|[IPersistStreamInitImpl](../../atl/reference/ipersiststreaminitimpl-class.md)|This class implements `IUnknown` and provides a default implementation of the [IPersistStreamInit](/windows/win32/api/ocidl/nn-ocidl-ipersiststreaminit) interface.|atlcom.h|
|[IPointerInactiveImpl](../../atl/reference/ipointerinactiveimpl-class.md)|This class implements `IUnknown` and the [IPointerInactive](/windows/win32/api/ocidl/nn-ocidl-ipointerinactive) interface methods.|atlctl.h|
|[IPropertyNotifySinkCP](../../atl/reference/ipropertynotifysinkcp-class.md)|This class exposes the [IPropertyNotifySink](/windows/win32/api/ocidl/nn-ocidl-ipropertynotifysink) interface as an outgoing interface on a connectable object.|atlctl.h|
|[IPropertyPage2Impl](../../atl/reference/ipropertypage2impl-class.md)|This class implements `IUnknown` and inherits the default implementation of [IPropertyPageImpl](../../atl/reference/ipropertypageimpl-class.md).|atlctl.h|
|[IPropertyPageImpl](../../atl/reference/ipropertypageimpl-class.md)|This class implements `IUnknown` and provides a default implementation of the [IPropertyPage](/windows/win32/api/ocidl/nn-ocidl-ipropertypage) interface.|atlctl.h|
|[IProvideClassInfo2Impl](../../atl/reference/iprovideclassinfo2impl-class.md)|This class provides a default implementation of the [IProvideClassInfo](/windows/win32/api/ocidl/nn-ocidl-iprovideclassinfo) and [IProvideClassInfo2](/windows/win32/api/ocidl/nn-ocidl-iprovideclassinfo2) methods.|atlcom.h|
|[IQuickActivateImpl](../../atl/reference/iquickactivateimpl-class.md)|This class combines containers' control initialization into a single call.|atlctl.h|
|[IRunnableObjectImpl](../../atl/reference/irunnableobjectimpl-class.md)|This class implements `IUnknown` and provides a default implementation of the [IRunnableObject](/windows/win32/api/objidl/nn-objidl-irunnableobject) interface.|atlctl.h|
|[IServiceProviderImpl](../../atl/reference/iserviceproviderimpl-class.md)|This class provides a default implementation of the `IServiceProvider` interface.|atlcom.h|
|[ISpecifyPropertyPagesImpl](../../atl/reference/ispecifypropertypagesimpl-class.md)|This class implements `IUnknown` and provides a default implementation of the [ISpecifyPropertyPages](/windows/win32/api/ocidl/nn-ocidl-ispecifypropertypages) interface.|atlcom.h|
|[ISupportErrorInfoImpl](../../atl/reference/isupporterrorinfoimpl-class.md)|This class provides a default implementation of the `ISupportErrorInfo Interface` interface and can be used when only a single interface generates errors on an object.|atlcom.h|
|[IThreadPoolConfig Interface](../../atl/reference/ithreadpoolconfig-interface.md)|This interface provides methods for configuring a thread pool.|atlutil.h|
|[IViewObjectExImpl](../../atl/reference/iviewobjecteximpl-class.md)|This class implements `IUnknown` and provides default implementations of the [IViewObject](/windows/win32/api/oleidl/nn-oleidl-iviewobject), [IViewObject2](/windows/win32/api/oleidl/nn-oleidl-iviewobject2), and [IViewObjectEx](/windows/win32/api/ocidl/nn-ocidl-iviewobjectex) interfaces.|atlctl.h|
|[IWorkerThreadClient Interface](../../atl/reference/iworkerthreadclient-interface.md)|`IWorkerThreadClient` is the interface implemented by clients of the [CWorkerThread](../../atl/reference/cworkerthread-class.md) class.|atlutil.h|
|[_U_MENUorID](../../atl/reference/u-menuorid-class.md)|This class provides wrappers for `CreateWindow` and `CreateWindowEx`.|atlwin.h|
|[_U_RECT](../../atl/reference/u-rect-class.md)|This argument adapter class allows either `RECT` pointers or references to be passed to a function that is implemented in terms of pointers.|atlwin.h|
|[_U_STRINGorID](../../atl/reference/u-stringorid-class.md)|This argument adapter class allows either resource names (LPCTSTRs) or resource IDs (UINTs) to be passed to a function without requiring the caller to convert the ID to a string using the MAKEINTRESOURCE macro.|atlwin.h|
|[Win32ThreadTraits](../../atl/reference/win32threadtraits-class.md)|This class provides the creation function for a Windows thread. Use this class if the thread will not use CRT functions.|atlbase.h|

## See also

[ATL COM Desktop Components](../../atl/atl-com-desktop-components.md)<br/>
[Functions](../../atl/reference/atl-functions.md)<br/>
[Global Variables](../../atl/reference/atl-global-variables.md)<br/>
[Typedefs](../../atl/reference/atl-typedefs.md)<br/>
[Class Overview](../../atl/atl-class-overview.md)
