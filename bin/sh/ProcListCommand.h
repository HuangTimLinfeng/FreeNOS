/*
 * Copyright (C) 2009 Niek Linnenbank
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __SH_PROCLISTCOMMAND
#define __SH_PROCLISTCOMMAND

#include <Factory.h>
#include <Types.h>
#include "ShellCommand.h"

/**
 * Output a list of processes.
 */
class ProcListCommand : public ShellCommand, public Factory<ProcListCommand>
{
    public:

	/**
	 * Constructor function.
	 */
	ProcListCommand() : ShellCommand("ps", 0)
	{
	}

	/**
	 * Get the help string for this command.
	 * @return Pointer to character string describing what the command does.
	 */
	const char * help()
	{
	    return "Output a list of processes";
	}

	/**
	 * Executes the command.
	 * @param nparams Number of parameters given.
	 * @param params Array of parameters.
	 * @return Error code or zero on success.
	 */
	int execute(Size nparams, char **params);

    private:
    
	/**
	 * Invoke CatCommand, using a formatted string as argument.
	 * @param fmt Formatted string.
	 * @param ... Argument list.
	 * @see CatCommand
	 */
	void catFmt(char *fmt, ...);
};

#endif /* __SH_PROCLISTCOMMAND */
