---
title: "ptr::operator!"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: 7f4101dc-2045-42e7-abb1-6a30e17147f2
caps.latest.revision: 7
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# ptr::operator!
Operator to determine if the owned COM object is invalid.  
  
## Syntax  
  
```  
bool operator!();  
```  
  
## Return Value  
 `true` if the owned COM object is invalid; `false` otherwise.  
  
## Remarks  
 The owned COM object is valid if it is not `nullptr`.  
  
## Example  
 This example implements a CLR class that uses a `com::ptr` to wrap its private member `IXMLDOMDocument` object.  The `CreateInstance` member function uses `operator!` to determine if a document object is already owned, and only creates a new instance if the object is invalid.  
  
```  
// comptr_op_not.cpp  
// compile with: /clr /link msxml2.lib  
#include <msxml2.h>  
#include <msclr\com\ptr.h>  
  
#import <msxml3.dll> raw_interfaces_only  
  
using namespace System;  
using namespace System::Runtime::InteropServices;  
using namespace msclr;  
  
// a ref class that uses a com::ptr to contain an   
// IXMLDOMDocument object  
ref class XmlDocument {  
public:  
   void CreateInstance(String^ progid) {  
      if (!m_ptrDoc) {  
         m_ptrDoc.CreateInstance(progid);     
         if (m_ptrDoc) {  
            Console::WriteLine("DOM Document created.");  
         }  
      }  
   }  
  
   // note that the destructor will call the com::ptr destructor  
   // and automatically release the reference to the COM object  
  
private:  
   com::ptr<IXMLDOMDocument> m_ptrDoc;  
};  
  
// use the ref class to handle an XML DOM Document object  
int main() {  
   try {  
      XmlDocument doc;  
      // create the instance from a progid string  
      doc.CreateInstance("Msxml2.DOMDocument.3.0");  
   }  
   catch (Exception^ e) {  
      Console::WriteLine(e);     
   }  
}  
```  
  
 **DOM Document created.**   
## Requirements  
 **Header file** <msclr\com\ptr.h>  
  
 **Namespace** msclr::com  
  
## See Also  
 [ptr Members](../VS_visualcpp/ptr-Members.md)   
 [ptr::operator bool](../VS_visualcpp/ptr--operator-bool.md)