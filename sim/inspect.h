#ifndef INSPECT_H
#define INSPECT_H

#include <iostream>
#include <vector>
#include <string>

namespace Inspect
{
	//MLDCOULDDO Make doxygen comments explaining the InterfaceTypes.
    enum InterfaceTypes
    {
    	/*
    	 * MLDNOTE This one is obvious
    	 */
        None = 0,


		/*
		 * MLDNOTE Not only for static info, may display dynamic values too. @see ActiveROM
		 */
        Info = 1,


    	/*
    	 * MLDNote Looking at ActiveROM, this seems to be used when the component actually stores data.
    	 *		   ActiveRom displays it's ranges in Cmd_Info
    	 */
        Read = 2,


		/*
		 * MLDNOTE Used to enable/disable trace of memory address.
		 * 		   Could be used more generically, possibly by design.
		 *  	   Only implemented in CMDA, ZLCDMA
		 */
        Trace = 4,

		/*
		 * MLDNOTE Displays status about a (memory) line. Only implemented in CMDA, ZLCDMA
		 */
        Line = 8,

        LastType = Line
    };

    template<unsigned V>
        class Interface_;

    template<unsigned V, unsigned Choose>
        class Parent_ : public Parent_<V, (Choose >> 1)>, public virtual Interface_<V & Choose>
    { };

    class ListCommands
    {
    public:
        void ListSupportedCommands(std::ostream&) const;
        virtual ~ListCommands() {};
    };

    template<unsigned V>
        class Parent_<V, 0> : public virtual ListCommands
    { };

    template<unsigned V>
        class Interface :
        public Parent_<V|Info, LastType>
    {
    public:
        virtual ~Interface() {}
    };

    template<>
        class Interface_<None>
    {
    public:
        virtual ~Interface_() {}
    };

    template<>
        class Interface_<Info>
    {
    public:
        virtual void Cmd_Info(std::ostream&, const std::vector<std::string>&) const = 0;
        virtual ~Interface_() {}
        void DoCommand(std::ostream& s, const std::vector<std::string>& v) const { return Cmd_Info(s, v); }
    };

    template<>
        class Interface_<Read>
    {
    public:
        virtual void Cmd_Read(std::ostream&, const std::vector<std::string>&) const = 0;
        virtual ~Interface_() {}
        void DoCommand(std::ostream& s, const std::vector<std::string>& v) const { return Cmd_Read(s, v); }
    };

    template<>
        class Interface_<Trace>
    {
    public:
        virtual void Cmd_Trace(std::ostream&, const std::vector<std::string>&) = 0;
        virtual ~Interface_() {}
        void DoCommand(std::ostream& s, const std::vector<std::string>& v) { return Cmd_Trace(s, v); }
    };

    template<>
        class Interface_<Line>
    {
    public:
        virtual void Cmd_Line(std::ostream&, const std::vector<std::string>&) const = 0;
        virtual ~Interface_() {}
        void DoCommand(std::ostream& s, const std::vector<std::string>& v) const { return Cmd_Line(s, v); }
    };
}

#endif
