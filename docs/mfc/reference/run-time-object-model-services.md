---
title: "Run-Time Object Model Services | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.mfc.macros"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "run-time object model services macros"
ms.assetid: 4a3e79df-2ee3-43a4-8193-20298828de85
caps.latest.revision: 15
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
# Run-Time Object Model Services
The classes [CObject](../../mfc/reference/cobject-class.md) and [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) encapsulate several object services, including access to run-time class information, serialization, and dynamic object creation. All classes derived from `CObject` inherit this functionality.  
  
 Access to run-time class information enables you to determine information about an object's class at run time. The ability to determine the class of an object at run time is useful when you need extra type-checking of function arguments and when you must write special-purpose code based on the class of an object. Run-time class information is not supported directly by the C++ language.  
  
 Serialization is the process of writing or reading an object's contents to or from a file. You can use serialization to store an object's contents even after the application exits. The object can then be read from the file when the application is restarted. Such data objects are said to be "persistent."  
  
 Dynamic object creation enables you to create an object of a specified class at run time. For example, document, view, and frame objects must support dynamic creation because the framework needs to create them dynamically.  
  
 The following table lists the MFC macros that support run-time class information, serialization, and dynamic creation.  
  
 For more information on these run-time object services and serialization, see the article [CObject Class: Accessing Run-Time Class Information](../../mfc/accessing-run-time-class-information.md).  
  
### Run-Time Object Model Services Macros  
  
|||  
|-|-|  
|[DECLARE_DYNAMIC](#declare_dynamic)|Enables access to run-time class information (must be used in the class declaration).|  
|[DECLARE_DYNCREATE](#declare_dyncreate)|Enables dynamic creation and access to run-time class information (must be used in the class declaration).|  
|[DECLARE_SERIAL](#declare_serial)|Enables serialization and access to run-time class information (must be used in the class declaration).|  
|[IMPLEMENT_DYNAMIC](#implement_dynamic)|Enables access to run-time class information (must be used in the class implementation).|  
|[IMPLEMENT_DYNCREATE](#implement_dyncreate)|Enables dynamic creation and access to run-time information (must be used in the class implementation).|  
|[IMPLEMENT_SERIAL](#implement_serial)|Permits serialization and access to run-time class information (must be used in the class implementation).|  
|[RUNTIME_CLASS](#runtime_class)|Returns the `CRuntimeClass` structure that corresponds to the named class.|  
  
 OLE frequently requires the dynamic creation of objects at run time. For example, an OLE server application must be able to create OLE items dynamically in response to a request from a client. Similarly, an automation server must be able to create items in response to requests from automation clients.  
  
 The Microsoft Foundation Class Library provides two macros specific to OLE.  
  
### Dynamic Creation of OLE Objects  
  
|||  
|-|-|  
|[DECLARE_OLECREATE](#declare_olecreate)|Enables objects to be created through OLE automation.|  
|[IMPLEMENT_OLECREATE](#implement_olecreate)|Enables objects to be created by the OLE system.|  
  
##  <a name="declare_dynamic"></a>  DECLARE_DYNAMIC  
 Adds the ability to access run-time information about an object's class when deriving a class from `CObject`.  
  
```
DECLARE_DYNAMIC(class_name) 
```  
  
### Parameters  
 *class_name*  
 The actual name of the class.  
  
### Remarks  
 Add the `DECLARE_DYNAMIC` macro to the header (.h) module for the class, then include that module in all .cpp modules that need access to objects of this class.  
  
 If you use the **DECLARE**_ **DYNAMIC** and `IMPLEMENT_DYNAMIC` macros as described, you can then use the `RUNTIME_CLASS` macro and the `CObject::IsKindOf` function to determine the class of your objects at run time.  
  
 If `DECLARE_DYNAMIC` is included in the class declaration, then `IMPLEMENT_DYNAMIC` must be included in the class implementation.  
  
 For more information on the `DECLARE_DYNAMIC` macro, see [CObject Class Topics](../../mfc/using-cobject.md).  
  
### Example  
 See the example for [IMPLEMENT_DYNAMIC](#implement_dynamic).  
  
##  <a name="declare_dyncreate"></a>  DECLARE_DYNCREATE  
 Enables objects of `CObject`-derived classes to be created dynamically at run time.  
  
```
DECLARE_DYNCREATE(class_name)   
```  
  
### Parameters  
 *class_name*  
 The actual name of the class.  
  
### Remarks  
 The framework uses this ability to create new objects dynamically. For example, the new view created when you open a new document. Document, view, and frame classes should support dynamic creation because the framework needs to create them dynamically.  
  
 Add the `DECLARE_DYNCREATE` macro in the .h module for the class, then include that module in all .cpp modules that need access to objects of this class.  
  
 If `DECLARE_DYNCREATE` is included in the class declaration, then `IMPLEMENT_DYNCREATE` must be included in the class implementation.  
  
 For more information on the `DECLARE_DYNCREATE` macro, see [CObject Class Topics](../../mfc/using-cobject.md).  
  
> [!NOTE]
>  The `DECLARE_DYNCREATE` macro includes all the functionality of `DECLARE_DYNAMIC`.  
  
### Example  
 See the example for [IMPLEMENT_DYNCREATE](#implement_dyncreate).  
  
##  <a name="declare_serial"></a>  DECLARE_SERIAL  
 Generates the C++ header code necessary for a `CObject`-derived class that can be serialized.  
  
```
DECLARE_SERIAL(class_name)   
```  
  
### Parameters  
 *class_name*  
 The actual name of the class.  
  
### Remarks  
 Serialization is the process of writing or reading the contents of an object to and from a file.  
  
 Use the `DECLARE_SERIAL` macro in an .h module, and then include that module in all .cpp modules that need access to objects of this class.  
  
 If `DECLARE_SERIAL` is included in the class declaration, then `IMPLEMENT_SERIAL` must be included in the class implementation.  
  
 The `DECLARE_SERIAL` macro includes all the functionality of `DECLARE_DYNAMIC` and `DECLARE_DYNCREATE`.  
  
 You can use the **AFX_API** macro to automatically export the `CArchive` extraction operator for classes that use the `DECLARE_SERIAL` and `IMPLEMENT_SERIAL` macros. Bracket the class declarations (located in the .h file) with the following code:  
  
 [!code-cpp[NVC_MFCCObjectSample#20](../../mfc/codesnippet/cpp/run-time-object-model-services_1.h)]  
  
 For more information on the `DECLARE_SERIAL` macro, see [CObject Class Topics](../../mfc/using-cobject.md).  
  
### Example  
 [!code-cpp[NVC_MFCCObjectSample#21](../../mfc/codesnippet/cpp/run-time-object-model-services_2.h)]  
  
##  <a name="implement_dynamic"></a>  IMPLEMENT_DYNAMIC  
 Generates the C++ code necessary for a dynamic `CObject`-derived class with run-time access to the class name and position within the hierarchy.  
  
```
IMPLEMENT_DYNAMIC(class_name, base_class_name)  
```  
  
### Parameters  
 *class_name*  
 The actual name of the class.  
  
 `base_class_name`  
 The name of the base class.  
  
### Remarks  
 Use the `IMPLEMENT_DYNAMIC` macro in a .cpp module, and then link the resulting object code only once.  
  
 For more information, see [CObject Class Topics](../../mfc/using-cobject.md).  
  
### Example  
 [!code-cpp[NVC_MFCCObjectSample#2](../../mfc/codesnippet/cpp/run-time-object-model-services_3.h)]  
  
 [!code-cpp[NVC_MFCCObjectSample#3](../../mfc/codesnippet/cpp/run-time-object-model-services_4.cpp)]  
  
##  <a name="implement_dyncreate"></a>  IMPLEMENT_DYNCREATE  
 Enables objects of `CObject`-derived classes to be created dynamically at run time when used with the `DECLARE_DYNCREATE` macro.  
  
```
IMPLEMENT_DYNCREATE(class_name, base_class_name)   
```  
  
### Parameters  
 *class_name*  
 The actual name of the class.  
  
 `base_class_name`  
 The actual name of the base class.  
  
### Remarks  
 The framework uses this ability to create new objects dynamically, for example, when it reads an object from disk during serialization. Add the `IMPLEMENT_DYNCREATE` macro in the class implementation file. For more information, see [CObject Class Topics](../../mfc/using-cobject.md).  
  
 If you use the `DECLARE_DYNCREATE` and `IMPLEMENT_DYNCREATE` macros, you can then use the `RUNTIME_CLASS` macro and the `CObject::IsKindOf` member function to determine the class of your objects at run time.  
  
 If `DECLARE_DYNCREATE` is included in the class declaration, then `IMPLEMENT_DYNCREATE` must be included in the class implementation.  
  
 Note that this macro definition will invoke the default constructor for your class. If a non-trivial constructor is explicitly implemented by the class, it must also explicitly implement the default constructor as well. The default constructor can be added to the class's **private** or **protected** member sections to prevent it from being called from outside the class implementation.  
  
### Example  
 [!code-cpp[NVC_MFCCObjectSample#22](../../mfc/codesnippet/cpp/run-time-object-model-services_5.h)]  
  
 [!code-cpp[NVC_MFCCObjectSample#23](../../mfc/codesnippet/cpp/run-time-object-model-services_6.cpp)]  
  
##  <a name="implement_serial"></a>  IMPLEMENT_SERIAL  
 Generates the C++ code necessary for a dynamic `CObject`-derived class with run-time access to the class name and position within the hierarchy.  
  
```
IMPLEMENT_SERIAL(class_name, base_class_name, wSchema)  
```  
  
### Parameters  
 *class_name*  
 The actual name of the class.  
  
 `base_class_name`  
 The name of the base class.  
  
 *wSchema*  
 A **UINT** "version number" that will be encoded in the archive to enable a deserializing program to identify and handle data created by earlier program versions. The class schema number must not be â€“1.  
  
### Remarks  
 Use the `IMPLEMENT_SERIAL` macro in a .cpp module; then link the resulting object code only once.  
  
 You can use the **AFX_API** macro to automatically export the `CArchive` extraction operator for classes that use the `DECLARE_SERIAL` and `IMPLEMENT_SERIAL` macros. Bracket the class declarations (located in the .h file) with the following code:  
  
 [!code-cpp[NVC_MFCCObjectSample#20](../../mfc/codesnippet/cpp/run-time-object-model-services_1.h)]  
  
 For more information, see the [CObject Class Topics](../../mfc/using-cobject.md).  
  
### Example  
 [!code-cpp[NVC_MFCCObjectSample#24](../../mfc/codesnippet/cpp/run-time-object-model-services_7.cpp)]  
  
##  <a name="runtime_class"></a>  RUNTIME_CLASS  
 Gets the run-time class structure from the name of a C++ class.  
  
```
RUNTIME_CLASS(class_name)  
```  
  
### Parameters  
 *class_name*  
 The actual name of the class (not enclosed in quotation marks).  
  
### Remarks  
 `RUNTIME_CLASS` returns a pointer to a [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) structure for the class specified by *class_name*. Only `CObject`-derived classes declared with `DECLARE_DYNAMIC`, `DECLARE_DYNCREATE`, or `DECLARE_SERIAL` will return pointers to a `CRuntimeClass` structure.  
  
 For more information, see [CObject Class Topics](../../mfc/using-cobject.md).  
  
### Example  
 [!code-cpp[NVC_MFCCObjectSample#25](../../mfc/codesnippet/cpp/run-time-object-model-services_8.cpp)]  
  
##  <a name="declare_olecreate"></a>  DECLARE_OLECREATE  
 Enables objects of `CCmdTarget`-derived classes to be created through OLE automation.  
  
```
DECLARE_OLECREATE(class_name) 
```  
  
### Parameters  
 *class_name*  
 The actual name of the class.  
  
### Remarks  
 This macro enables other OLE-enabled applications to create objects of this type.  
  
 Add the `DECLARE_OLECREATE` macro in the .h module for the class, and then include that module in all .cpp modules that need access to objects of this class.  
  
 If `DECLARE_OLECREATE` is included in the class declaration, then `IMPLEMENT_OLECREATE` must be included in the class implementation. A class declaration using `DECLARE_OLECREATE` must also use `DECLARE_DYNCREATE` or `DECLARE_SERIAL`.  
  
##  <a name="implement_olecreate"></a>  IMPLEMENT_OLECREATE  
 Either this macro or [IMPLEMENT_OLECREATE_FLAGS](http://msdn.microsoft.com/library/d1589f6a-5a69-4742-b07c-4c621cfd040d) must appear in the implementation file for any class that uses `DECLARE_OLECREATE`.  
  
```
IMPLEMENT_OLECREATE(class_name, external_name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8)  
```  
  
### Parameters  
 *class_name*  
 The actual name of the class.  
  
 *external_name*  
 The object name exposed to other applications (enclosed in quotation marks).  
  
 *l*, *w1*, *w2*, *b1*, *b2*, *b3*, *b4*, *b5*, *b6*, *b7*, *b8*  
 Components of the class's **CLSID**.  
  
### Remarks  
  
> [!NOTE]
>  If you use `IMPLEMENT_OLECREATE`, by default, you support only the single threading model. If you use `IMPLEMENT_OLECREATE_FLAGS`, you can specify which threading model your object supports by using the `nFlags` parameter.  
  
 The external name is the identifier exposed to other applications. Client applications use the external name to request an object of this class from an automation server.  
  
 The OLE class ID is a unique 128-bit identifier for the object. It consists of one **long**, two **WORD**s, and eight **BYTE**s, as represented by *l*, *w1*, *w2*, and *b1* through *b8* in the syntax description. The Application Wizard and code wizards create unique OLE class IDs for you as required.  
  
## See Also  
 [Macros and Globals](../../mfc/reference/mfc-macros-and-globals.md)
