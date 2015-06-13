/*
 * MMIOComponent.cpp
 *
 *  Created on: 10 Jun 2015
 *      Author: nijntje
 */


#include "MMIOComponent.h"

namespace Simulator
{
namespace drisc
{

void MMIOComponent::Connect(IOMatchUnit& mmio, IOMatchUnit::AccessMode mode, Config& config)
{
    // we allow the base address to be set to zero to indicate it should not be mapped.
    MemAddr base = config.getValueOrDefault<MemAddr>(*this, "MMIO_BaseAddr", 0);
    if (base == 0)
    {
        std::cerr << "warning: " << GetFQN() << " not mapped to the I/O address space." << std::endl;
    }
    else
    {
        mmio.RegisterComponent(base, mode, *this);
    }
}

MMIOComponent::MMIOComponent(const std::string& name, Object& parent, Clock& clock)
    : Object(name, parent, clock)
{ }

}
}
