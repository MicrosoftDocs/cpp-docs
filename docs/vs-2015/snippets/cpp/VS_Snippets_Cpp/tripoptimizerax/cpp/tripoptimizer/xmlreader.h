//-----------------------------------------------------------------------
// 
//  Copyright (C) Microsoft Corporation.  All rights reserved.
// 
// 
// THIS CODE AND INFORMATION ARE PROVIDED AS-IS WITHOUT WARRANTY OF ANY
// KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
// PARTICULAR PURPOSE.
//-----------------------------------------------------------------------
#pragma once

// Utility class for reading XML data streams.
class XmlReader
{
public:
   // Creates an XML reader from the provided data stream.
   static HRESULT Create(IStream* pXmlStream, IXmlReader** ppReader);

   // Moves the provided XML reader to the given element name.
   static HRESULT MoveToElement(IXmlReader* pReader, const _bstr_t& path);

   // Reads the value of the current node if the type of the current node
   // matches the provided type.
   static HRESULT ReadValue(IXmlReader* pReader, _bstr_t& value, 
      XmlNodeType nodeType = XmlNodeType_Text);
};