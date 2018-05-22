#pragma once

// CMyCachedDataPathProperty command target

class CMyCachedDataPathProperty : public CCachedDataPathProperty
{
public:
   CMyCachedDataPathProperty();
   virtual ~CMyCachedDataPathProperty();
protected:
   virtual void OnDataAvailable(DWORD dwSize, DWORD bscfFlag);

   DWORD m_lReadyState;
};


