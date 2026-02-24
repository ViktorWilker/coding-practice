#include "iostream"
#include "Aviao.h"

using namespace std;


int main()
{

    AirPlane* Jato  = new AirPlane(E_AirPlaneTypes::Jato);
    AirPlane* Monomotor  = new AirPlane(E_AirPlaneTypes::Monomotor);
    AirPlane* Planador  = new AirPlane(E_AirPlaneTypes::Planador);

    Jato->GetAirPlaneInfos();
    Monomotor->GetAirPlaneInfos();
    Planador->GetAirPlaneInfos();
    
    return 0;
}