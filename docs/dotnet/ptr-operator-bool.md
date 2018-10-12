---
title: "ptr::operator bool | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-cli"]
ms.topic: "reference"
f1_keywords: ["ptr::operator bool", "ptr.operator bool", "operator bool", "msclr::com::ptr::operator bool", "msclr.com.ptr.operator bool"]
dev_langs: ["C++"]
helpviewer_keywords: ["ptr::operator bool"]
ms.assetid: 31123377-6ecd-4cef-9b75-3db3996fbcd1
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "dotnet"]
---
# ptr::operator bool

Operator for using `com::ptr` in a conditional expression.

## Syntax

```
operator bool();
```

## Return Value

**true** if the owned COM object is valid; **false** otherwise.

## Remarks

The owned COM object is valid if it is not `nullptr`.

This operator actually converts to `_detail_class::_safe_bool` which is safer than `bool` because it cannot be converted to an integral type.

## Example

This example implements a CLR class that uses a `com::ptr` to wrap its private member `IXMLDOMDocument` object. The `CreateInstance` member function uses `operator bool` after creating the new document object to determine if it is valid and writes to the console if it is.

```
// comptr_op_bool.cpp
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
         if (m_ptrDoc) { // uses operator bool
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

```Output
DOM Document created.
```

## Requirements

**Header file** \<msclr\com\ptr.h>

**Namespace** msclr::com

## See Also

[ptr Members](../dotnet/ptr-members.md)<br/>
[ptr::operator!](../dotnet/ptr-operator-logical-not.md)