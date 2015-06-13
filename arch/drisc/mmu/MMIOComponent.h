/*
 * MMIOComponent.h
 *
 * Stolen from IOMatchUnit.h
 */

#ifndef ARCH_DRISC_MMU_MMIOCOMPONENT_H_
#define ARCH_DRISC_MMU_MMIOCOMPONENT_H_

#include <stddef.h>
#include <string>

#include "../../../sim/delegate.h"
#include "../../../sim/kernel.h"
#include "../../simtypes.h"
#include "old/IOMatchUnit.h"

namespace Simulator{
namespace drisc{

/**
 * Seems to be a base class for all memory objects.
 */
class MMIOComponent : public Object
{
public:
    MMIOComponent(const std::string& name, Object& parent, Clock& clock);

    void Connect(IOMatchUnit& mmio, IOMatchUnit::AccessMode mode, Config& config);


    virtual size_t GetSize() const = 0;


    virtual Result Read (MemAddr address, void* data, MemSize size, LFID fid, TID tid, const RegAddr& writeback) = 0;
    virtual Result Write(MemAddr address, const void* data, MemSize size, LFID fid, TID tid) = 0;

    virtual ~MMIOComponent() {};
};

}
}

#endif /* ARCH_DRISC_MMU_MMIOCOMPONENT_H_ */
