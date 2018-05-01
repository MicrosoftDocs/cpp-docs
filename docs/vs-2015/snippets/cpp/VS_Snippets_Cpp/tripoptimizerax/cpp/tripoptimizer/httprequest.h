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
#include "stdafx.h"

namespace Utils
{

// Utility class for performing HTTP requests.
class HttpRequest
{
public:

    // Downloads the specified URI.
    static ATL::CComPtr<IStream> Download(const std::wstring& uri);
};

};