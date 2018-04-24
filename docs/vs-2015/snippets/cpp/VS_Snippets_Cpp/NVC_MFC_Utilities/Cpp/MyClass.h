// <Snippet11>
//Definition of critical section class
class CMyCritSectClass
{
   static CString _strShared; //shared resource
   static CCriticalSection _critSect;
public:
   CMyCritSectClass(void) {}
   ~CMyCritSectClass(void) {}
   void SomeMethod(void); //locks, modifies, and unlocks shared resource
};

//Declaration of static members and SomeMethod
CString CMyCritSectClass::_strShared;
CCriticalSection CMyCritSectClass::_critSect;

void CMyCritSectClass::SomeMethod()
{
   _critSect.Lock();
   if (_strShared == "")
      _strShared = "<text>";
   _critSect.Unlock();
}
// </Snippet11>

class CLocking
{
   static CCriticalSection m_CritSection;
   static CMutex m_Mutex;
public:
   CLocking() {}
   ~CLocking() {}
   void UseCritSect();
   void IsLockedMutex();
   void LockMutex();
};

CCriticalSection CLocking::m_CritSection;
CMutex CLocking::m_Mutex;

void CLocking::UseCritSect()
{
// <Snippet19>
   // m_CritSection is a data member (of type CCriticalSection)
   // of an existing class that implements the resource being shared.

   // Relate the synchronization object (m_CritSection) with
   // our CSingleLock object. 
   CSingleLock singleLock(&m_CritSection);
   singleLock.Lock();  // Attempt to lock the shared resource
   if (singleLock.IsLocked())  // Resource has been locked
   {
      //...use the shared resource...

      // Now that we are finished, 
      // unlock the resource for others.
      singleLock.Unlock();
   }
// </Snippet19>
}

void CLocking::IsLockedMutex()
{
// <Snippet20>
   // m_Mutex is a data member (of type CMutex)
   // of an existing class that implements the resource being shared.

   // Relate the synchronization object (m_Mutex) with
   // our CSingleLock object. 
   CSingleLock singleLock(&m_Mutex);

   // Attempt to lock the shared resource
   singleLock.Lock(100);    // Wait 100 ms...
    
   // Has the resource been successfully locked?
   if (singleLock.IsLocked())
   {
       // We were able to lock the resource;
       // we may now work with the data associated with the mutex...

       // Now that we are finished, unlock the resource for others.
       singleLock.Unlock();
   }
// </Snippet20>
}

void CLocking::LockMutex()
{
// <Snippet21>
   // m_Mutex is a data member (of type CMutex)
   // of an existing class that implements the resource being shared.

   // Relate the synchronization object (m_Mutex) with
   // our CSingleLock object. 
   CSingleLock singleLock(&m_Mutex);

   // Attempt to lock the shared resource
   if (singleLock.Lock(100))    // Wait 100 ms...
   {
       // We were able to lock the resource;
       // we may now work with the data associated with the mutex...

       // Now that we are finished, unlock the resource for others.
       singleLock.Unlock();
   }
// </Snippet21>
}

// Simple CObject-derived class for CObList and other examples
class CAge : public CObject
{
public:
    DECLARE_DYNAMIC(CAge)

    // remainder of class declaration omitted

private:
    int   m_years;
public:
    CAge() { m_years = 0; }
    CAge( int age ) { m_years = age; }
};

class CPerson : public CObject 
{
   DECLARE_DYNAMIC( CPerson )

   // other declarations
};

class CMyObject : public CObject
{
public:
   CMyObject() {}

   void DoSomething() {}
};

class CMyClass : public CObject 
{
public:
   CMyClass() : m_CubeLen(10) {}
   CMyClass(LPSTR pstr) { UNREFERENCED_PARAMETER(pstr); }

   DECLARE_DYNCREATE( CMyClass )

   int m_CubeLen;

   void Open(CMyObject* pObj);
   void SomeMemberFunction() {}
};