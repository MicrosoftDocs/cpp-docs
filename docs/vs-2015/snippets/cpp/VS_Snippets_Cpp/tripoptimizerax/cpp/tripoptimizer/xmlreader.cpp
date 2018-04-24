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
#include "stdafx.h"
#include "XmlReader.h"

using namespace std;

// Creates an XML reader from the provided data stream.
HRESULT XmlReader::Create(IStream* pXmlStream, IXmlReader** ppReader)
{
   // Validate pointers.
   if (pXmlStream == nullptr) { 
      return E_POINTER;
   }
   if (ppReader == nullptr) {
      return E_POINTER;
   }

   HRESULT hr;
   IXmlReader* pReader = nullptr;

   // Create the reader.
   if (FAILED(hr = ::CreateXmlReader(__uuidof(IXmlReader), (void**) &pReader, NULL))) {
      return hr;
   }

   // Set the input stream.
   if (FAILED(hr = pReader->SetInput(pXmlStream))) {
      pReader->Release();
      return hr;
   }

   *ppReader = pReader;
   return S_OK;
}

// Moves the provided XML reader to the given element name.
HRESULT XmlReader::MoveToElement(IXmlReader* pReader, const _bstr_t& element_)
{
   HRESULT hr;
   if (element_.length() == 0) {
      return E_INVALIDARG;
   }

   // Work with wstring locally because wstring supports construction
   // from a pointer and a string length.
   const wstring element = element_;
   
   LPCWSTR name = nullptr;
   UINT length = 0;
   
   XmlNodeType nodeType;
   bool found = false;
   while (S_OK == (hr = pReader->Read(&nodeType))) {
      if (nodeType == XmlNodeType_Element)
      {
         if (FAILED(hr = pReader->GetLocalName(&name, &length))) {
            return hr;
         }
         if (element == wstring(name, length)) {
            found = true;
            break;
         }
      }
   }
   
   if (FAILED(hr)) {
      return hr;
   }
   return found ? S_OK : E_FAIL;
}

// Reads the value of the current node if the type of the current node
// matches the provided type.
HRESULT XmlReader::ReadValue(IXmlReader* pReader, _bstr_t& value, XmlNodeType requiredNodeType)
{
   HRESULT hr;

   // Validate pointer.
   if (pReader == nullptr) {
      return E_POINTER;
   }

   // Read the value of the current token, if the current token type
   // matches the required type.
   LPCWSTR pwszValue = nullptr;
   XmlNodeType nodeType;
   if (S_OK == (hr = pReader->Read(&nodeType))) {
      if (nodeType == requiredNodeType) {
         if (SUCCEEDED(hr = pReader->GetValue(&pwszValue, NULL))) {
            value = _bstr_t(pwszValue);
         }
      }
      else {
         return E_FAIL;
      }
   }
   return hr;
}