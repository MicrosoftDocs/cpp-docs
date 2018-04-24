#pragma once

template<class T>
class CProxy_IPolyCtlEvents :
   public IConnectionPointImpl<T, &__uuidof(_IPolyCtlEvents)>
{
public:
   HRESULT Fire_ClickIn( LONG x,  LONG y)
   {
      HRESULT hr = S_OK;
      T * pThis = static_cast<T *>(this);
      int cConnections = m_vec.GetSize();

      for (int iConnection = 0; iConnection < cConnections; iConnection++)
      {
         pThis->Lock();
         CComPtr<IUnknown> punkConnection = m_vec.GetAt(iConnection);
         pThis->Unlock();

         IDispatch * pConnection = static_cast<IDispatch *>(punkConnection.p);

         if (pConnection)
         {
            CComVariant avarParams[2];
            avarParams[1] = x;
            avarParams[1].vt = VT_I4;
            avarParams[0] = y;
            avarParams[0].vt = VT_I4;
            DISPPARAMS params = { avarParams, NULL, 2, 0 };
            hr = pConnection->Invoke(1, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_METHOD, &params, NULL, NULL, NULL);
         }
      }
      return hr;
   }
   HRESULT Fire_ClickOut( LONG x,  LONG y)
   {
      HRESULT hr = S_OK;
      T * pThis = static_cast<T *>(this);
      int cConnections = m_vec.GetSize();

      for (int iConnection = 0; iConnection < cConnections; iConnection++)
      {
         pThis->Lock();
         CComPtr<IUnknown> punkConnection = m_vec.GetAt(iConnection);
         pThis->Unlock();

         IDispatch * pConnection = static_cast<IDispatch *>(punkConnection.p);

         if (pConnection)
         {
            CComVariant avarParams[2];
            avarParams[1] = x;
            avarParams[1].vt = VT_I4;
            avarParams[0] = y;
            avarParams[0].vt = VT_I4;
            DISPPARAMS params = { avarParams, NULL, 2, 0 };
            hr = pConnection->Invoke(2, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_METHOD, &params, NULL, NULL, NULL);
         }
      }
      return hr;
   }
};

