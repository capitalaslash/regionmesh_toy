#pragma once

#include "LifeV.hpp"
#include "MeshVertex.hpp"
#include "MeshElement.hpp"

template <UInt elemDim, UInt geoDim, typename GeoShape, typename MC>
class MeshElementMarked: public MeshElement<GeoShape, MeshVertex>
{};
