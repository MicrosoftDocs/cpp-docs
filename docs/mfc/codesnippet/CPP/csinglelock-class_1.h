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