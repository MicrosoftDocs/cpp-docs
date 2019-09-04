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