#pragma once

// <Snippet1>
class CSimple : public CObject
{
   // add CSimple-specific members and functions...
};
// </Snippet1>

// <Snippet2>
class CPerson : public CObject 
{
   DECLARE_DYNAMIC( CPerson )

   // other declarations
};
// </Snippet2>

// <Snippet20>
#undef AFX_API
#define AFX_API AFX_EXT_CLASS

// <your class declarations here>

#undef AFX_API
#define AFX_API
// </Snippet20>

// Simple CObject-derived class for CObList and other examples
// <Snippet21>
class CAge : public CObject
{
public:
    void Serialize(CArchive& ar);
    DECLARE_SERIAL(CAge)

    // remainder of class declaration omitted
// </Snippet21>

private:
    int   m_years;
public:
    CAge() { m_years = 0; }
    CAge( int age ) { m_years = age; }
    CAge( const CAge& a ) { m_years = a.m_years; } // Copy constructor
    void AssertValid() const;
    const CAge& operator=( const CAge& a )
    {
        m_years = a.m_years; return *this;
    }
    BOOL operator==(CAge a)
    {
        return m_years == a.m_years;
    }
   void* operator new(size_t nSize);
   void* operator new(size_t nSize, LPCSTR lpszFileName, int nLine);
   void operator delete(void* p);
   void operator delete(void *p, LPCSTR lpszFileName, int nLine);
#ifdef _DEBUG
    void Dump(CDumpContext& dc) const;
#endif
};

// <Snippet16>
void* CAge::operator new(size_t nSize)
{
   return malloc(nSize);
}

void* CAge::operator new(size_t nSize, LPCSTR lpszFileName, int nLine)
{
   UNREFERENCED_PARAMETER(lpszFileName);
   UNREFERENCED_PARAMETER(nLine);
   return malloc(nSize);
}
// </Snippet16>

class Age
{
public:
   Age(DWORD dw) : m_dw(dw) {};
   DWORD m_dw;
};

class CMyWnd : public CWnd
{
   DECLARE_DYNCREATE(CMyWnd)

public:
   CMyWnd() {}
};

// <Snippet22>
class CMyDynCreateObj : public CObject
{
     int m_Num;
public:
     DECLARE_DYNCREATE(CMyDynCreateObj)
     CMyDynCreateObj(int Num) { m_Num = Num; }
private:
     CMyDynCreateObj() { m_Num = 0; }  // provide default constructor only for 
                                       // dynamic creation 
};
// </Snippet22>

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