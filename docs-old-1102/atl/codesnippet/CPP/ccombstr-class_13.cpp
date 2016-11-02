CComBSTR GuidToBSTR(REFGUID guid) 
{
    // 39 - length of string representation of GUID + 1
    CComBSTR b(39); 

    // Convert GUID to BSTR
    // m_str member of CComBSTR is of type BSTR. When BSTR param 
    // is required, pass the m_str member explicitly or use implicit 
    // BSTR cast operator.
    int nRet = StringFromGUID2(guid, b.m_str, 39); 

    // Above equivalent to:
    // int nRet = StringFromGUID2(guid, b, 39); 
    // implicit BSTR cast operator used for 2nd param

    // Both lines are equivalent to:
    // CComBSTR b(guid);
    // CComBSTR constructor can convert GUIDs

    ATLASSERT(nRet); 
    return b; 
}