IMPLEMENT_DYNAMIC(CMyDynLinkLibrary, CDynLinkLibrary)

CMyDynLinkLibrary::CMyDynLinkLibrary(AFX_EXTENSION_MODULE& state, BOOL bSystem)
   : CDynLinkLibrary(state, bSystem)
{
#ifndef _AFX_NO_OLE_SUPPORT
    m_factoryList.Construct(offsetof(COleObjectFactory, m_pNextFactory));
#endif
    m_classList.Construct(offsetof(CRuntimeClass, m_pNextClass));

    // copy info from AFX_EXTENSION_MODULE struct
    ASSERT(state.hModule != NULL);
    m_hModule = state.hModule;
    m_hResource = state.hResource;
    m_classList.m_pHead = state.pFirstSharedClass;
#ifndef _AFX_NO_OLE_SUPPORT
    m_factoryList.m_pHead = state.pFirstSharedFactory;
#endif
    m_bSystem = bSystem;
}