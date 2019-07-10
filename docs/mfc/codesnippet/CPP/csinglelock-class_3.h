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