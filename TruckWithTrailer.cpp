#include "TruckWithTrailer.hpp"

TruckWithTrailer::TruckWithTrailer(float twt_c, float twt_cg, float twt_tr) : Truck(twt_c, twt_cg)
{
    this->twt_trailerWeight = twt_tr;
}

TruckWithTrailer::~TruckWithTrailer()
{
}

float TruckWithTrailer::ComputeWeight()
{
    return (this->t_carWeight + this->t_cargoWeight + this->twt_trailerWeight);
}