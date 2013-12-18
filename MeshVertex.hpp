#pragma once

#include <array>

#include "LifeV.hpp"
#include "MeshEntity.hpp"

typedef std::array<Real, 3> Vector3D;

class MeshVertex: public MeshEntity
{
public:
    Vector3D M_coordinates;
};

