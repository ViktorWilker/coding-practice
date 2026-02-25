#ifndef AVIAO_H_INCLUDED
#define AVIAO_H_INCLUDED

#include "iostream"
#include <string>   

enum E_AirPlaneTypes
{
    Jato,
    Monomotor,
    Planador
};

class AirPlane
{
public:
    //functions
    AirPlane(E_AirPlaneTypes type);
    void GetAirPlaneInfos();

    std::string GetAirPlaneType();

private:
    //Variables
    int MaxSpeed;
    E_AirPlaneTypes APTypes;
};

AirPlane::AirPlane(E_AirPlaneTypes Type) : APTypes(Type)
{
    if (Type == E_AirPlaneTypes::Jato)
    {
        MaxSpeed = 800;
    }
    else if (Type == E_AirPlaneTypes::Monomotor)
    {
        MaxSpeed = 350;
    }
    else
    {
        MaxSpeed = 180;
    }
}

void AirPlane::GetAirPlaneInfos()
{
    std::cout<< "Type: " << GetAirPlaneType() << std::endl;
    std::cout<< "MaxSpeed: " << MaxSpeed << std::endl;
}

 std::string AirPlane::GetAirPlaneType()
{
    switch (APTypes)
    {
    case E_AirPlaneTypes::Jato:
        return "Jato";
    case E_AirPlaneTypes::Monomotor:
        return "Monomotor";
    case E_AirPlaneTypes::Planador:
        return "Planador";
    default:
        break;
    }
}

#endif
