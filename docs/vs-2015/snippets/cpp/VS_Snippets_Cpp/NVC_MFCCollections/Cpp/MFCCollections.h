#pragma once

class CPerson : public CObject
{
public:
   void operator=(const CPerson& objectSrc) { UNREFERENCED_PARAMETER(objectSrc); }
};

// <Snippet11>
class CPersonList : public CObList
{
public:
    void AddHeadPerson( CPerson* person )
        {AddHead( person );}

    const CPerson* GetHeadPerson()
        {return (CPerson*)GetHead();}
};
// </Snippet11>

// <Snippet20>
class CTray : public CObject { };

class CStack : public CTypedPtrList< CObList, CTray* >
{
public:
    // Add element to top of stack
    void Push( CTray* newTray )
        { AddHead( newTray ); }

    // Peek at top element of stack
    CTray* Peek()
        { return IsEmpty() ? NULL : GetHead(); }

    // Pop top element off stack
    CTray* Pop()
        { return RemoveHead(); }
};
// </Snippet20>

// <Snippet21>
class CQueue : public CTypedPtrList< CObList, CPerson* >
{ 
public:
    // Go to the end of the line
    void AddToEnd( CPerson* newPerson )
        { AddTail( newPerson ); }        // End of the queue

    // Get first element in line
    CPerson* GetFromFront()
        { return IsEmpty() ? NULL : RemoveHead(); }
}; 
// </Snippet21>

// <Snippet91>
// Simple CObject-derived class for CObList and other examples
class CAge : public CObject
{
    DECLARE_SERIAL( CAge )
private:
    int   m_years;
public:
    CAge() { m_years = 0; }
    CAge(int age) { m_years = age; }
    CAge(const CAge& a) { m_years = a.m_years; } // Copy constructor
    void Serialize(CArchive& ar);
    void AssertValid() const;
    const CAge& operator=(const CAge& a)
    {
        m_years = a.m_years; return *this;
    }
    BOOL operator==(CAge a)
    {
        return m_years == a.m_years;
    }
#ifdef _DEBUG
    void Dump(CDumpContext& dc) const
    {
        CObject::Dump(dc);
        dc << m_years; 
    }
#endif
};
// </Snippet91>