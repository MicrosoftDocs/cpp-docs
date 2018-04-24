// Person.cpp : implementation file
//

#include "stdafx.h"
#include "MFCSerialization.h"
#include "Person.h"


// CPerson

// <Snippet4>
IMPLEMENT_SERIAL( CPerson, CObject, 1 )
// </Snippet4>

CPerson::CPerson() : m_name("Flummox"), m_number(5)
{
}

CPerson::~CPerson()
{
}


// CPerson member functions

// <Snippet2>
void CPerson::Serialize( CArchive& archive )
{
    // call base class function first
    // base class is CObject in this case
    CObject::Serialize( archive );

    // now do the stuff for our specific class
    if( archive.IsStoring() )
        archive << m_name << m_number;
    else
        archive >> m_name >> m_number;
}
// </Snippet2>