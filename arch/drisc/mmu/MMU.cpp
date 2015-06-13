/*
 * MMU.cpp
 *
 *  Created on: 10 Jun 2015
 *      Author: nijntje
 */

#include "MMU.h"

namespace Simulator
{
namespace drisc
{

void MMU::Initiate(){
	// Get config
	// Parse config
	// Initiate MMU
	// InitiateITLB
	// InitiateDTLB
}

void ParseConfig(Config& config)
{
	/* MLDTODO Test config
	 *  - VirtualAddressBits set   [<= architecture address bits, ...]
	 *  - PhysicalAddressBits set  [<= architecture address bits, ...]
	 *  - ProcessIdBits set
	 *
	 *  - DTLB
	 *  	- NumberOfTables set [0+] //MLDTODO Figure out if it will be possible to disable TLB
	 *
	 *  - ITLB
	 *  	- NumberOfTables set [0+] //MLDTODO Figure out if it will be possible to disable TLB
	 *
	 * 	- For each table
	 * 		- EvictionStrategy set [PSEUDO_RANDOM, ACCESSED, LRU]
	 * 		- NumberOfEntries set [1+]
	 * 		- OffsetBits set [0+, ...]
	 */

	//MLDTODO Load config to member variables
}

void InitiateITLB() {}
void InitiateDTLB() {}

/**
 * Construct the MMU object
 * @param parent the parent object.
 * @param name the name of this object.
 */
MMU::MMU(const std::string& name, Object& parent) //Lets try this without a clock
	: Object(name, parent)
{
	this->Initiate();
}

}
}


