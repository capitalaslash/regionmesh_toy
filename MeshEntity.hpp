#pragma once

#include "LifeV.hpp"

typedef UInt meshEntityFlag_Type;

class MeshEntity
{
    ID M_id;
    ID M_localId;
    meshEntityFlag_Type M_flag;
};
