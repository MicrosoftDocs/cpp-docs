template <UINT nID, class T>
class CEasySink : public IDispEventImpl<nID, T>
{
public:
   HRESULT EasyAdvise(IUnknown* pUnk) 
   { 
      AtlGetObjectSourceInterface(pUnk,
         &m_libid, &m_iid, &m_wMajorVerNum, &m_wMinorVerNum);
      return DispEventAdvise(pUnk, &m_iid);
   }
   HRESULT EasyUnadvise(IUnknown* pUnk) 
   {
      AtlGetObjectSourceInterface(pUnk,
         &m_libid, &m_iid, &m_wMajorVerNum, &m_wMinorVerNum);
      return DispEventUnadvise(pUnk, &m_iid);
   }
};