#pragma once

template<class T>
class CProxy_IMyComponentEvents :
   public IConnectionPointImpl<T, &__uuidof(_IMyComponentEvents)>
{
public:
   HRESULT Fire_ShowMyMsg( BSTR bstrMsg)
   {
      HRESULT hr = S_OK;
      T * pThis = static_cast<T *>(this);
      int cConnections = m_vec.GetSize();

      for (int iConnection = 0; iConnection < cConnections; iConnection++)
      {
         pThis->Lock();
         CComPtr<IUnknown> punkConnection = m_vec.GetAt(iConnection);
         pThis->Unlock();

         _IMyComponentEvents * pConnection = static_cast<_IMyComponentEvents *>(punkConnection.p);

         if (pConnection)
         {
            hr = pConnection->ShowMyMsg(bstrMsg);
         }
      }
      return hr;
   }
};

