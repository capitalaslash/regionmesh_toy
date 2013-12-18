#pragma once

#include "LifeV.hpp"
#include "MeshVertex.hpp"

template <typename GeoShape, typename PointType = MeshVertex>
class MeshElement: public MeshEntity, public GeoShape
{
public:
    PointType const* M_pointList[ GeoShape::S_numPoints ];
};
