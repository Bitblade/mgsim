/*
 * MMU.h
 *
 *  Created on: 10 Jun 2015
 *      Author: nijntje
 */

#ifndef ARCH_DRISC_MMU_MMU_H_
#define ARCH_DRISC_MMU_MMU_H_

#include <string>

#include "../../../sim/inspect.h"
#include "../../../sim/kernel.h"

class Config;

namespace Simulator
{
namespace drisc
{


/*
 *	MLDTODO Toevoegen aan scriptie: Multiple TLB misses, stall, reschedule
 *	MLDTODO Optie om TLB uit te schakelen (bootcode heeft pagetables nog niet geinitialiseerd!)
 *			via configuratieberichten
 */
class MMU :
		public Object, // MGSim base object class
		//MLDNOTE ICache.cpp has a nice example: ICache::Cmd_Read and ICache::Cmd_Info
		//MLDTODO Figure out if MMU should implement Cmd_Read. Do it here or leave it to TLB?
		public Inspect::Interface<Inspect::Info> //MLDTODO: Figure out what this is & what options to choose
		//MLDNOTE Not extending MMIOComponent. MMU is not a memory component itself. TLB probably is.
{

public:
	//MLDTODO Should probably include IIOBus& iobus and other network stuff later on
    MMU(const std::string& name, Object& parent); //Lets try this without a clock

private:
    void ParseConfig(Config& config);
    void Initiate();
    void InitiateDTLB();
    void InitiateITLB();

/*
 *  MLDTODO Figure out if I want to create separate MMU's for I (FetchStage) & D (MemoryStage),
 *     		or just separate TLB's
 *
 *  MLDTODO Figure out how to interface with FetchStage and MemoryStage
 *
 *  		Registercomponent is legacy code, vervang ik.
 *
 *  		IOMatchUnit mappings vervallen.
 *
 *
 *
 *  MLDTODO Figure out what I need to do to provide access from the console
 *
 *  MLDTODO Figure out what debug / log messages I should send
 *    		- RegisterSampleVariableInObject like in DCache.cpp
 *
 *  MLDTODO Figure out what statistics I should keep
 *  		- TLB statistics
 *
 *  MLDTODO Figure out how I can get access to the config object.
 *  		- ActiveRom.cpp seems to have some nice examples
 *
 *  !MLDNOTE Config entries can be added in programs/config.ini
 *
 *  MLDTODO Figure out if I need to do something with mtconf.cpp/h
 *  		--> Config interface voor software
 *
 *  MLDTODO Figure out what config entries I need anyway
 *  		- Address lengths P/V
 *     		- pagesize_1 + other details
 *     		- pagesize_2 + other details (or disabled)
 *     		- pagesize_3 + other details (or disabled)
 *
 *  MLDTODO Where do we get the address of the Memory Manager?
 *  		- Probably on initiation of the group of cores
 *  		--> Bij initialiseren is MMU niet geactiveerd, dus gewoon via config message.
 *
 *  MLDTODO Figure out what to do with existing config entries for MMIO
 *  		- MMU:MMIO_BaseAddr = 0x300
 *  		- # *:MMIO_BaseAddr = 0 # if specified and not zero, connects the component to the MMIO match unit on the core
 *
 *  MLDTODO Need to deal with "Memory ranges configuration" section in config.ini.
 *  		# Since on-chip memory protection is not yet implemented, programs
 *  		# would have read/write/execute permission to the entire address
 *  		# space. This is undesirable because it makes it difficult to
 *  		# troubleshoot software access bugs. So we implement in simulation an
 *  		# extra layer of protection that checks all memory accesses by cores
 *  		# and DCA against an internal permission database. (This is not part
 *  		# of the simulated hardware.)  Most of this database is derived
 *  		# automatically from the loaded program, based on the ELF section
 *  		# permissions. However it is also possible to configure extra ranges
 *  		# here.
 *
 *  MLDQUESTION Eeeh, ELF section permissions? Eng!
 */

 /*
  * Configuration staging area
  *
  * [CPU*.MMU]
  * :VirtualAddressBits  = 48
  * :PhysicalAddressBits = 52
  * :ProcessIdBits		 = 9  //MLDTODO Must be able to get this from somewhere
  *
  * [CPU*.MMU.DTLB]
  * :NumberOfTables = 3
  *
  * [CPU*.MMU.DTLB.TABLE*]
  * :EvictionStrategy = LRU
  *
  * [CPU*.MMU.DTLB.TABLE0]
  * :NumberOfEntries = 32
  * :OffsetBits = 12
  *
  * [CPU*.MMU.DTLB.TABLE1]
  * :NumberOfEntries = 16
  * :OffsetBits = 21
  *
  * [CPU*.MMU.DTLB.TABLE1]
  * :NumberOfEntries = 8
  * :OffsetBits = 30
  *
  */


}; /* class MMU */
} /* namespace Drisc */
} /* namespace Simulator */



#endif /* ARCH_DRISC_MMU_MMU_H_ */
