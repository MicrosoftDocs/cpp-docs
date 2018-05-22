#pragma once

// CPerson command target

// <Snippet1>
// <Snippet3>
class CPerson : public CObject
{
public:
    DECLARE_SERIAL( CPerson )
// </Snippet3>
    // empty constructor is necessary
    CPerson();
   virtual ~CPerson();

    CString m_name;
    WORD   m_number;

    void Serialize( CArchive& archive );
};
// </Snippet1>

