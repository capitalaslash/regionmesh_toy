#pragma once

#include "LifeV.hpp"
#include "Marker.hpp"

template <class MT>
class MarkerCommon
{
public:
    typedef Marker<MT>  pointMarker_Type;
    typedef Marker<MT>   edgeMarker_Type;
    typedef Marker<MT>   faceMarker_Type;
    typedef Marker<MT> volumeMarker_Type;
    typedef Marker<MT> regionMarker_Type;
};

typedef MarkerCommon<MarkerIDStandardPolicy> defaultMarkerCommon_Type;

